#include "rhino/InterpreterData.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/UintMap.h"
#include "java/lang/String.h"
#include "rhino/InterpreterData.h"
#include "java/util/Arrays.h"
#include "rhino/debug/DebuggableScript.h"
#include "rhino/Interpreter.h"

extern "C" {

jint SF_rhino_InterpreterData_INITIAL_MAX_ICODE_LENGTH;
jint SF_rhino_InterpreterData_INITIAL_STRINGTABLE_SIZE;
jint SF_rhino_InterpreterData_INITIAL_NUMBERTABLE_SIZE;

void mark_rhino_InterpreterData(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_InterpreterData *) object;
	if (self->F_itsName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsName)->clazz)->markFunction)((jobject) self->F_itsName, mark, depth + 1);
	if (self->F_itsSourceFile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsSourceFile)->clazz)->markFunction)((jobject) self->F_itsSourceFile, mark, depth + 1);
	if (self->F_itsStringTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsStringTable)->clazz)->markFunction)((jobject) self->F_itsStringTable, mark, depth + 1);
	if (self->F_itsDoubleTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsDoubleTable)->clazz)->markFunction)((jobject) self->F_itsDoubleTable, mark, depth + 1);
	if (self->F_itsNestedFunctions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsNestedFunctions)->clazz)->markFunction)((jobject) self->F_itsNestedFunctions, mark, depth + 1);
	if (self->F_itsRegExpLiterals)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsRegExpLiterals)->clazz)->markFunction)((jobject) self->F_itsRegExpLiterals, mark, depth + 1);
	if (self->F_itsICode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsICode)->clazz)->markFunction)((jobject) self->F_itsICode, mark, depth + 1);
	if (self->F_itsExceptionTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsExceptionTable)->clazz)->markFunction)((jobject) self->F_itsExceptionTable, mark, depth + 1);
	if (self->F_argNames)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_argNames)->clazz)->markFunction)((jobject) self->F_argNames, mark, depth + 1);
	if (self->F_argIsConst)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_argIsConst)->clazz)->markFunction)((jobject) self->F_argIsConst, mark, depth + 1);
	if (self->F_encodedSource)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_encodedSource)->clazz)->markFunction)((jobject) self->F_encodedSource, mark, depth + 1);
	if (self->F_literalIds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_literalIds)->clazz)->markFunction)((jobject) self->F_literalIds, mark, depth + 1);
	if (self->F_longJumps)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_longJumps)->clazz)->markFunction)((jobject) self->F_longJumps, mark, depth + 1);
	if (self->F_parentData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parentData)->clazz)->markFunction)((jobject) self->F_parentData, mark, depth + 1);
}

void clinit_rhino_InterpreterData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_InterpreterData_INITIAL_MAX_ICODE_LENGTH = jint(1024);
	SF_rhino_InterpreterData_INITIAL_STRINGTABLE_SIZE = jint(64);
	SF_rhino_InterpreterData_INITIAL_NUMBERTABLE_SIZE = jint(64);
}

void init_rhino_InterpreterData_int_java_lang_String_java_lang_String_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_InterpreterData(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(75);
	((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_firstLinePC = (jint(-1));
	LINE_NUMBER(81);
	((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_icodeHashCode = (jint(0));
	LINE_NUMBER(14);
	((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_languageVersion = (frame[1].i);
	LINE_NUMBER(15);
	((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_itsSourceFile = (jref) (frame[2].o);
	LINE_NUMBER(16);
	((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_encodedSource = (jref) (frame[3].o);
	LINE_NUMBER(17);
	((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_isStrict = (frame[4].i);
	LINE_NUMBER(18);
	M_rhino_InterpreterData_init(ctx, (frame[0].o));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_InterpreterData_rhino_InterpreterData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_InterpreterData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(75);
	((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_firstLinePC = (jint(-1));
	LINE_NUMBER(81);
	((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_icodeHashCode = (jint(0));
	LINE_NUMBER(22);
	((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_parentData = (jref) (frame[1].o);
	LINE_NUMBER(23);
	((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_languageVersion = ((jint)((rhino_InterpreterData *) NULL_CHECK((frame[1].o)))->F_languageVersion);
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[1].o)))->F_itsSourceFile;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsSourceFile = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[1].o)))->F_encodedSource;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_encodedSource = (jref) sp[1].o;
	LINE_NUMBER(26);
	((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_isStrict = ((jint)((rhino_InterpreterData *) NULL_CHECK((frame[1].o)))->F_isStrict);
	LINE_NUMBER(27);
	M_rhino_InterpreterData_init(ctx, (frame[0].o));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_InterpreterData_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:init", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (1024));
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsICode = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (64));
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsStringTable = (jref) sp[1].o;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_InterpreterData_isTopLevel_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:isTopLevel", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return ((jint)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_topLevel);
	}

	popStackFrame(ctx);
}

jbool M_rhino_InterpreterData_isFunction_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:isFunction", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	if (((jint)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_itsFunctionType) == 0) goto label_1;
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

jobject M_rhino_InterpreterData_getFunctionName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:getFunctionName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_itsName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_InterpreterData_getParamCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:getParamCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return ((jint)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_argCount);
	}

	popStackFrame(ctx);
}

jint M_rhino_InterpreterData_getParamAndVarCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:getParamAndVarCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_argNames;
	popStackFrame(ctx);
	return (((jarray) nullCheck(ctx, sp[0].o))->length);
	}

	popStackFrame(ctx);
}

jobject M_rhino_InterpreterData_getParamOrVarName_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:getParamOrVarName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_argNames;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jbool M_rhino_InterpreterData_getParamOrVarConst_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:getParamOrVarConst", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_argIsConst;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_InterpreterData_getSourceName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:getSourceName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_itsSourceFile;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_InterpreterData_isGeneratedScript_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:isGeneratedScript", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_itsSourceFile;
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isGeneratedScript_java_lang_String_R_boolean(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_InterpreterData_getLineNumbers_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:getLineNumbers", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)SM_rhino_Interpreter_getLineNumbers_rhino_InterpreterData_R_Array1_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_InterpreterData_getFunctionCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:getFunctionCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_itsNestedFunctions;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_itsNestedFunctions;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_rhino_InterpreterData_getFunction_int_R_rhino_debug_DebuggableScript(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:getFunction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_itsNestedFunctions;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_InterpreterData_getParent_R_rhino_debug_DebuggableScript(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:getParent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_parentData;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_InterpreterData_icodeHashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpreterData:icodeHashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	frame[1].i = ((jint)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_icodeHashCode);
	LINE_NUMBER(155);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_itsICode;
	jint temp0 = (jint)SM_java_util_Arrays_hashCode_Array1_byte_R_int(ctx, sp[1].o);
	frame[1].i = temp0;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_icodeHashCode = temp0;
	}
label_2:;
	{
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_InterpreterData[] {
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
	(void *) M_rhino_InterpreterData_isTopLevel_R_boolean,
	(void *) M_rhino_InterpreterData_isFunction_R_boolean,
	(void *) M_rhino_InterpreterData_getFunctionName_R_java_lang_String,
	(void *) M_rhino_InterpreterData_getParamCount_R_int,
	(void *) M_rhino_InterpreterData_getParamAndVarCount_R_int,
	(void *) M_rhino_InterpreterData_getParamOrVarName_int_R_java_lang_String,
	(void *) M_rhino_InterpreterData_getSourceName_R_java_lang_String,
	(void *) M_rhino_InterpreterData_isGeneratedScript_R_boolean,
	(void *) M_rhino_InterpreterData_getLineNumbers_R_Array1_int,
	(void *) M_rhino_InterpreterData_getFunctionCount_R_int,
	(void *) M_rhino_InterpreterData_getFunction_int_R_rhino_debug_DebuggableScript,
	(void *) M_rhino_InterpreterData_getParent_R_rhino_debug_DebuggableScript,
	(void *) M_rhino_InterpreterData_init,
	(void *) M_rhino_InterpreterData_getParamOrVarConst_int_R_boolean,
	(void *) M_rhino_InterpreterData_icodeHashCode_R_int,
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
	{ "isTopLevel", "()Z" },
	{ "isFunction", "()Z" },
	{ "getFunctionName", "()Ljava/lang/String;" },
	{ "getParamCount", "()I" },
	{ "getParamAndVarCount", "()I" },
	{ "getParamOrVarName", "(I)Ljava/lang/String;" },
	{ "getSourceName", "()Ljava/lang/String;" },
	{ "isGeneratedScript", "()Z" },
	{ "getLineNumbers", "()[I" },
	{ "getFunctionCount", "()I" },
	{ "getFunction", "(I)Lrhino/debug/DebuggableScript;" },
	{ "getParent", "()Lrhino/debug/DebuggableScript;" },
	{ "init", "()V" },
	{ "getParamOrVarConst", "(I)Z" },
	{ "icodeHashCode", "()I" },
};

static jclass interfaces[] { &class_rhino_debug_DebuggableScript, };

static FieldMetadata fields[] {
	{ "INITIAL_MAX_ICODE_LENGTH", &class_int, (intptr_t) &SF_rhino_InterpreterData_INITIAL_MAX_ICODE_LENGTH, "I", 24 },
	{ "INITIAL_STRINGTABLE_SIZE", &class_int, (intptr_t) &SF_rhino_InterpreterData_INITIAL_STRINGTABLE_SIZE, "I", 24 },
	{ "INITIAL_NUMBERTABLE_SIZE", &class_int, (intptr_t) &SF_rhino_InterpreterData_INITIAL_NUMBERTABLE_SIZE, "I", 24 },
	{ "itsName", &class_java_lang_String, offsetof(rhino_InterpreterData, F_itsName), "Ljava/lang/String;", 0 },
	{ "itsSourceFile", &class_java_lang_String, offsetof(rhino_InterpreterData, F_itsSourceFile), "Ljava/lang/String;", 0 },
	{ "itsNeedsActivation", &class_boolean, offsetof(rhino_InterpreterData, F_itsNeedsActivation), "Z", 0 },
	{ "itsFunctionType", &class_int, offsetof(rhino_InterpreterData, F_itsFunctionType), "I", 0 },
	{ "itsStringTable", getArrayClass(&class_java_lang_String, 1), offsetof(rhino_InterpreterData, F_itsStringTable), "[Ljava/lang/String;", 0 },
	{ "itsDoubleTable", getArrayClass(&class_double, 1), offsetof(rhino_InterpreterData, F_itsDoubleTable), "[D", 0 },
	{ "itsNestedFunctions", getArrayClass(&class_rhino_InterpreterData, 1), offsetof(rhino_InterpreterData, F_itsNestedFunctions), "[Lrhino/InterpreterData;", 0 },
	{ "itsRegExpLiterals", getArrayClass(&class_java_lang_Object, 1), offsetof(rhino_InterpreterData, F_itsRegExpLiterals), "[Ljava/lang/Object;", 0 },
	{ "itsICode", getArrayClass(&class_byte, 1), offsetof(rhino_InterpreterData, F_itsICode), "[B", 0 },
	{ "itsExceptionTable", getArrayClass(&class_int, 1), offsetof(rhino_InterpreterData, F_itsExceptionTable), "[I", 0 },
	{ "itsMaxVars", &class_int, offsetof(rhino_InterpreterData, F_itsMaxVars), "I", 0 },
	{ "itsMaxLocals", &class_int, offsetof(rhino_InterpreterData, F_itsMaxLocals), "I", 0 },
	{ "itsMaxStack", &class_int, offsetof(rhino_InterpreterData, F_itsMaxStack), "I", 0 },
	{ "itsMaxFrameArray", &class_int, offsetof(rhino_InterpreterData, F_itsMaxFrameArray), "I", 0 },
	{ "argNames", getArrayClass(&class_java_lang_String, 1), offsetof(rhino_InterpreterData, F_argNames), "[Ljava/lang/String;", 0 },
	{ "argIsConst", getArrayClass(&class_boolean, 1), offsetof(rhino_InterpreterData, F_argIsConst), "[Z", 0 },
	{ "argCount", &class_int, offsetof(rhino_InterpreterData, F_argCount), "I", 0 },
	{ "itsMaxCalleeArgs", &class_int, offsetof(rhino_InterpreterData, F_itsMaxCalleeArgs), "I", 0 },
	{ "encodedSource", &class_java_lang_String, offsetof(rhino_InterpreterData, F_encodedSource), "Ljava/lang/String;", 0 },
	{ "encodedSourceStart", &class_int, offsetof(rhino_InterpreterData, F_encodedSourceStart), "I", 0 },
	{ "encodedSourceEnd", &class_int, offsetof(rhino_InterpreterData, F_encodedSourceEnd), "I", 0 },
	{ "languageVersion", &class_int, offsetof(rhino_InterpreterData, F_languageVersion), "I", 0 },
	{ "isStrict", &class_boolean, offsetof(rhino_InterpreterData, F_isStrict), "Z", 0 },
	{ "topLevel", &class_boolean, offsetof(rhino_InterpreterData, F_topLevel), "Z", 0 },
	{ "isES6Generator", &class_boolean, offsetof(rhino_InterpreterData, F_isES6Generator), "Z", 0 },
	{ "literalIds", getArrayClass(&class_java_lang_Object, 1), offsetof(rhino_InterpreterData, F_literalIds), "[Ljava/lang/Object;", 0 },
	{ "longJumps", &class_rhino_UintMap, offsetof(rhino_InterpreterData, F_longJumps), "Lrhino/UintMap;", 0 },
	{ "firstLinePC", &class_int, offsetof(rhino_InterpreterData, F_firstLinePC), "I", 0 },
	{ "parentData", &class_rhino_InterpreterData, offsetof(rhino_InterpreterData, F_parentData), "Lrhino/InterpreterData;", 0 },
	{ "evalScriptFlag", &class_boolean, offsetof(rhino_InterpreterData, F_evalScriptFlag), "Z", 0 },
	{ "icodeHashCode", &class_int, offsetof(rhino_InterpreterData, F_icodeHashCode), "I", 2 },
	{ "declaredAsVar", &class_boolean, offsetof(rhino_InterpreterData, F_declaredAsVar), "Z", 0 },
	{ "declaredAsFunctionExpression", &class_boolean, offsetof(rhino_InterpreterData, F_declaredAsFunctionExpression), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_InterpreterData_int_java_lang_String_java_lang_String_boolean, 0, "(ILjava/lang/String;Ljava/lang/String;Z)V", 0 },
	{ "<init>", (intptr_t) init_rhino_InterpreterData_rhino_InterpreterData, 0, "(Lrhino/InterpreterData;)V", 0 },
	{ "init", (intptr_t) M_rhino_InterpreterData_init, VTABLE_rhino_InterpreterData_init, "()V", 2 },
	{ "isTopLevel", (intptr_t) M_rhino_InterpreterData_isTopLevel_R_boolean, VTABLE_rhino_InterpreterData_isTopLevel_R_boolean, "()Z", 1 },
	{ "isFunction", (intptr_t) M_rhino_InterpreterData_isFunction_R_boolean, VTABLE_rhino_InterpreterData_isFunction_R_boolean, "()Z", 1 },
	{ "getFunctionName", (intptr_t) M_rhino_InterpreterData_getFunctionName_R_java_lang_String, VTABLE_rhino_InterpreterData_getFunctionName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getParamCount", (intptr_t) M_rhino_InterpreterData_getParamCount_R_int, VTABLE_rhino_InterpreterData_getParamCount_R_int, "()I", 1 },
	{ "getParamAndVarCount", (intptr_t) M_rhino_InterpreterData_getParamAndVarCount_R_int, VTABLE_rhino_InterpreterData_getParamAndVarCount_R_int, "()I", 1 },
	{ "getParamOrVarName", (intptr_t) M_rhino_InterpreterData_getParamOrVarName_int_R_java_lang_String, VTABLE_rhino_InterpreterData_getParamOrVarName_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "getParamOrVarConst", (intptr_t) M_rhino_InterpreterData_getParamOrVarConst_int_R_boolean, VTABLE_rhino_InterpreterData_getParamOrVarConst_int_R_boolean, "(I)Z", 1 },
	{ "getSourceName", (intptr_t) M_rhino_InterpreterData_getSourceName_R_java_lang_String, VTABLE_rhino_InterpreterData_getSourceName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isGeneratedScript", (intptr_t) M_rhino_InterpreterData_isGeneratedScript_R_boolean, VTABLE_rhino_InterpreterData_isGeneratedScript_R_boolean, "()Z", 1 },
	{ "getLineNumbers", (intptr_t) M_rhino_InterpreterData_getLineNumbers_R_Array1_int, VTABLE_rhino_InterpreterData_getLineNumbers_R_Array1_int, "()[I", 1 },
	{ "getFunctionCount", (intptr_t) M_rhino_InterpreterData_getFunctionCount_R_int, VTABLE_rhino_InterpreterData_getFunctionCount_R_int, "()I", 1 },
	{ "getFunction", (intptr_t) M_rhino_InterpreterData_getFunction_int_R_rhino_debug_DebuggableScript, VTABLE_rhino_InterpreterData_getFunction_int_R_rhino_debug_DebuggableScript, "(I)Lrhino/debug/DebuggableScript;", 1 },
	{ "getParent", (intptr_t) M_rhino_InterpreterData_getParent_R_rhino_debug_DebuggableScript, VTABLE_rhino_InterpreterData_getParent_R_rhino_debug_DebuggableScript, "()Lrhino/debug/DebuggableScript;", 1 },
	{ "icodeHashCode", (intptr_t) M_rhino_InterpreterData_icodeHashCode_R_int, VTABLE_rhino_InterpreterData_icodeHashCode_R_int, "()I", 1 },
};

Class class_rhino_InterpreterData{
		.nativeName = (intptr_t) "rhino/InterpreterData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_InterpreterData),
		.classVtable = (intptr_t) vtable_rhino_InterpreterData,
		.staticInitializer = (intptr_t) clinit_rhino_InterpreterData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_InterpreterData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 36,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_InterpreterData = registerClass(&class_rhino_InterpreterData);

}
