#include "rhino/regexp/REGlobalData.h"
#include "java/lang/Object.h"
#include "rhino/regexp/RECompiled.h"
#include "rhino/regexp/REGlobalData.h"
#include "rhino/regexp/REBackTrackData.h"
#include "rhino/regexp/REProgState.h"

extern "C" {


void mark_rhino_regexp_REGlobalData(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_regexp_REGlobalData *) object;
	if (self->F_regexp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regexp)->clazz)->markFunction)((jobject) self->F_regexp, mark, depth + 1);
	if (self->F_parens)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parens)->clazz)->markFunction)((jobject) self->F_parens, mark, depth + 1);
	if (self->F_stateStackTop)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stateStackTop)->clazz)->markFunction)((jobject) self->F_stateStackTop, mark, depth + 1);
	if (self->F_backTrackStackTop)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_backTrackStackTop)->clazz)->markFunction)((jobject) self->F_backTrackStackTop, mark, depth + 1);
}

void clinit_rhino_regexp_REGlobalData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_regexp_REGlobalData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/REGlobalData:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_REGlobalData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2847);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_regexp_REGlobalData_parensIndex_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/REGlobalData:parensIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2864);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_parens;
	popStackFrame(ctx);
	return (jint(((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[1].i)))));
	}

	popStackFrame(ctx);
}

jint M_rhino_regexp_REGlobalData_parensLength_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/REGlobalData:parensLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2871);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_parens;
	popStackFrame(ctx);
	return (jint((bit_cast<jlong>(bit_cast<uint64_t>(((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[1].i)))) >> (32)))));
	}

	popStackFrame(ctx);
}

void M_rhino_regexp_REGlobalData_setParens_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/REGlobalData:setParens", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(2876);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_backTrackStackTop;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_backTrackStackTop;
	sp[0].o = (jobject)((rhino_regexp_REBackTrackData *) NULL_CHECK(sp[0].o))->F_parens;
	sp[1].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_parens;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(2877);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_parens;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_parens = (jref) (checkCast(ctx, getArrayClass(&class_long, 1), sp[1].o));
	}
label_1:;
	{
	LINE_NUMBER(2879);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_parens;
	ARRAY_ACCESS(jlong, sp[0].o, (frame[1].i)) = (((jlong((frame[2].i))) & (jlong(4294967295ll))) | ((jlong((frame[3].i))) << (32)));
	LINE_NUMBER(2880);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_regexp_REGlobalData[] {
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
	(void *) M_rhino_regexp_REGlobalData_parensIndex_int_R_int,
	(void *) M_rhino_regexp_REGlobalData_parensLength_int_R_int,
	(void *) M_rhino_regexp_REGlobalData_setParens_int_int_int,
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
	{ "parensIndex", "(I)I" },
	{ "parensLength", "(I)I" },
	{ "setParens", "(III)V" },
};

static FieldMetadata fields[] {
	{ "multiline", &class_boolean, offsetof(rhino_regexp_REGlobalData, F_multiline), "Z", 0 },
	{ "regexp", &class_rhino_regexp_RECompiled, offsetof(rhino_regexp_REGlobalData, F_regexp), "Lrhino/regexp/RECompiled;", 0 },
	{ "skipped", &class_int, offsetof(rhino_regexp_REGlobalData, F_skipped), "I", 0 },
	{ "cp", &class_int, offsetof(rhino_regexp_REGlobalData, F_cp), "I", 0 },
	{ "parens", getArrayClass(&class_long, 1), offsetof(rhino_regexp_REGlobalData, F_parens), "[J", 0 },
	{ "stateStackTop", &class_rhino_regexp_REProgState, offsetof(rhino_regexp_REGlobalData, F_stateStackTop), "Lrhino/regexp/REProgState;", 0 },
	{ "backTrackStackTop", &class_rhino_regexp_REBackTrackData, offsetof(rhino_regexp_REGlobalData, F_backTrackStackTop), "Lrhino/regexp/REBackTrackData;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_regexp_REGlobalData, 0, "()V", 0 },
	{ "parensIndex", (intptr_t) M_rhino_regexp_REGlobalData_parensIndex_int_R_int, VTABLE_rhino_regexp_REGlobalData_parensIndex_int_R_int, "(I)I", 0 },
	{ "parensLength", (intptr_t) M_rhino_regexp_REGlobalData_parensLength_int_R_int, VTABLE_rhino_regexp_REGlobalData_parensLength_int_R_int, "(I)I", 0 },
	{ "setParens", (intptr_t) M_rhino_regexp_REGlobalData_setParens_int_int_int, VTABLE_rhino_regexp_REGlobalData_setParens_int_int_int, "(III)V", 0 },
};

Class class_rhino_regexp_REGlobalData{
		.nativeName = (intptr_t) "rhino/regexp/REGlobalData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_regexp_REGlobalData),
		.classVtable = (intptr_t) vtable_rhino_regexp_REGlobalData,
		.staticInitializer = (intptr_t) clinit_rhino_regexp_REGlobalData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_regexp_REGlobalData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_regexp_REGlobalData = registerClass(&class_rhino_regexp_REGlobalData);

}
