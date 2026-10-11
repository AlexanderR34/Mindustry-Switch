#include "rhino/CompilerEnvirons.h"
#include "rhino/DefaultErrorReporter.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "rhino/CompilerEnvirons.h"
#include "rhino/Context.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/ast/ErrorCollector.h"
#include "rhino/ErrorReporter.h"

extern "C" {


void mark_rhino_CompilerEnvirons(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_CompilerEnvirons *) object;
	if (self->F_errorReporter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_errorReporter)->clazz)->markFunction)((jobject) self->F_errorReporter, mark, depth + 1);
	if (self->F_activationNames)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_activationNames)->clazz)->markFunction)((jobject) self->F_activationNames, mark, depth + 1);
}

void clinit_rhino_CompilerEnvirons(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_CompilerEnvirons(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_CompilerEnvirons(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	clinit_rhino_DefaultErrorReporter(ctx);
	sp[1].o = (jobject)SF_rhino_DefaultErrorReporter_instance;
	((rhino_CompilerEnvirons *) NULL_CHECK(sp[0].o))->F_errorReporter = (jref) sp[1].o;
	LINE_NUMBER(10);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_languageVersion = (200);
	LINE_NUMBER(11);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_generateDebugInfo = (jint(1));
	LINE_NUMBER(12);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_reservedKeywordAsIdentifier = (jint(1));
	LINE_NUMBER(13);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_allowMemberExprAsFunctionName = (jint(0));
	LINE_NUMBER(14);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_xmlAvailable = (jint(1));
	LINE_NUMBER(15);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_optimizationLevel = (jint(0));
	LINE_NUMBER(16);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_generatingSource = (jint(1));
	LINE_NUMBER(17);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_strictMode = (jint(0));
	LINE_NUMBER(18);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_warningAsError = (jint(0));
	LINE_NUMBER(19);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_generateObserverCount = (jint(0));
	LINE_NUMBER(20);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_allowSharpComments = (jint(0));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_initFromContext_rhino_Context(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:initFromContext", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_Context_getErrorReporter_R_rhino_ErrorReporter) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getErrorReporter_R_rhino_ErrorReporter])(ctx, (frame[1].o));
	((func_rhino_CompilerEnvirons_setErrorReporter_rhino_ErrorReporter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_setErrorReporter_rhino_ErrorReporter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[1].o));
	((rhino_CompilerEnvirons *) NULL_CHECK(sp[0].o))->F_languageVersion = temp0;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_rhino_Context_isGeneratingDebugChanged_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_isGeneratingDebugChanged_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp1 == 0) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_rhino_Context_isGeneratingDebug_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_isGeneratingDebug_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
label_3:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	((rhino_CompilerEnvirons *) NULL_CHECK(sp[0].o))->F_generateDebugInfo = sp[1].i;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(3);
	LINE_NUMBER(29);
	jint temp1 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, sp[1].o, temp0);
	((rhino_CompilerEnvirons *) NULL_CHECK(sp[0].o))->F_reservedKeywordAsIdentifier = temp1;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp2 = jint(2);
	LINE_NUMBER(31);
	jint temp3 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, sp[1].o, temp2);
	((rhino_CompilerEnvirons *) NULL_CHECK(sp[0].o))->F_allowMemberExprAsFunctionName = temp3;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp4 = 11;
	LINE_NUMBER(33);
	jint temp5 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, sp[1].o, temp4);
	((rhino_CompilerEnvirons *) NULL_CHECK(sp[0].o))->F_strictMode = temp5;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	jint temp6 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[1].o), (12));
	((rhino_CompilerEnvirons *) NULL_CHECK(sp[0].o))->F_warningAsError = temp6;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp7 = 6;
	LINE_NUMBER(36);
	jint temp8 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, sp[1].o, temp7);
	((rhino_CompilerEnvirons *) NULL_CHECK(sp[0].o))->F_xmlAvailable = temp8;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	jint temp9 = (jint)((func_rhino_Context_getOptimizationLevel_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getOptimizationLevel_R_int])(ctx, (frame[1].o));
	((rhino_CompilerEnvirons *) NULL_CHECK(sp[0].o))->F_optimizationLevel = temp9;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	jint temp10 = (jint)((func_rhino_Context_isGeneratingSource_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_isGeneratingSource_R_boolean])(ctx, (frame[1].o));
	((rhino_CompilerEnvirons *) NULL_CHECK(sp[0].o))->F_generatingSource = temp10;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Context *) NULL_CHECK((frame[1].o)))->F_activationNames;
	((rhino_CompilerEnvirons *) NULL_CHECK(sp[0].o))->F_activationNames = (jref) sp[1].o;
	LINE_NUMBER(44);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_generateObserverCount = ((jint)((rhino_Context *) NULL_CHECK((frame[1].o)))->F_generateObserverCount);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_CompilerEnvirons_getErrorReporter_R_rhino_ErrorReporter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:getErrorReporter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_errorReporter;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setErrorReporter_rhino_ErrorReporter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setErrorReporter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(53);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_errorReporter = (jref) (frame[1].o);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_CompilerEnvirons_getLanguageVersion_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:getLanguageVersion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return ((jint)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_languageVersion);
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setLanguageVersion_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setLanguageVersion", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(61);
	SM_rhino_Context_checkLanguageVersion_int(ctx, (frame[1].i));
	LINE_NUMBER(62);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_languageVersion = (frame[1].i);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_CompilerEnvirons_isGenerateDebugInfo_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:isGenerateDebugInfo", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return ((jint)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_generateDebugInfo);
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setGenerateDebugInfo_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setGenerateDebugInfo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(70);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_generateDebugInfo = (frame[1].i);
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_CompilerEnvirons_isReservedKeywordAsIdentifier_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:isReservedKeywordAsIdentifier", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return ((jint)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_reservedKeywordAsIdentifier);
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setReservedKeywordAsIdentifier_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setReservedKeywordAsIdentifier", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(78);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_reservedKeywordAsIdentifier = (frame[1].i);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_CompilerEnvirons_isAllowMemberExprAsFunctionName_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:isAllowMemberExprAsFunctionName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return ((jint)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_allowMemberExprAsFunctionName);
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setAllowMemberExprAsFunctionName_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setAllowMemberExprAsFunctionName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(90);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_allowMemberExprAsFunctionName = (frame[1].i);
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_CompilerEnvirons_isXmlAvailable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:isXmlAvailable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return ((jint)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_xmlAvailable);
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setXmlAvailable_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setXmlAvailable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(98);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_xmlAvailable = (frame[1].i);
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_CompilerEnvirons_getOptimizationLevel_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:getOptimizationLevel", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return ((jint)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_optimizationLevel);
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setOptimizationLevel_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setOptimizationLevel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(106);
	SM_rhino_Context_checkOptimizationLevel_int(ctx, (frame[1].i));
	LINE_NUMBER(107);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_optimizationLevel = (frame[1].i);
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_CompilerEnvirons_isGeneratingSource_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:isGeneratingSource", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return ((jint)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_generatingSource);
	}

	popStackFrame(ctx);
}

jbool M_rhino_CompilerEnvirons_getWarnTrailingComma_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:getWarnTrailingComma", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return ((jint)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_warnTrailingComma);
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setWarnTrailingComma_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setWarnTrailingComma", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(119);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_warnTrailingComma = (frame[1].i);
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_CompilerEnvirons_isStrictMode_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:isStrictMode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return ((jint)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_strictMode);
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setStrictMode_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setStrictMode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(127);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_strictMode = (frame[1].i);
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_CompilerEnvirons_reportWarningAsError_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:reportWarningAsError", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return ((jint)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_warningAsError);
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setGeneratingSource_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setGeneratingSource", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(144);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_generatingSource = (frame[1].i);
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_CompilerEnvirons_isGenerateObserverCount_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:isGenerateObserverCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return ((jint)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_generateObserverCount);
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setGenerateObserverCount_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setGenerateObserverCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(167);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_generateObserverCount = (frame[1].i);
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_CompilerEnvirons_isRecordingComments_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:isRecordingComments", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return ((jint)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_recordingComments);
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setRecordingComments_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setRecordingComments", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(175);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_recordingComments = (frame[1].i);
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_CompilerEnvirons_isRecordingLocalJsDocComments_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:isRecordingLocalJsDocComments", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return ((jint)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_recordingLocalJsDocComments);
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setRecordingLocalJsDocComments_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setRecordingLocalJsDocComments", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(183);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_recordingLocalJsDocComments = (frame[1].i);
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setRecoverFromErrors_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setRecoverFromErrors", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(192);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_recoverFromErrors = (frame[1].i);
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_CompilerEnvirons_recoverFromErrors_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:recoverFromErrors", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return ((jint)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_recoverFromErrors);
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setIdeMode_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setIdeMode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(204);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_ideMode = (frame[1].i);
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_CompilerEnvirons_isIdeMode_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:isIdeMode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return ((jint)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_ideMode);
	}

	popStackFrame(ctx);
}

jobject M_rhino_CompilerEnvirons_getActivationNames_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:getActivationNames", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_activationNames;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setActivationNames_java_util_Set(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setActivationNames", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(216);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_activationNames = (jref) (frame[1].o);
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CompilerEnvirons_setAllowSharpComments_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:setAllowSharpComments", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(223);
	((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_allowSharpComments = (frame[1].i);
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_CompilerEnvirons_getAllowSharpComments_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:getAllowSharpComments", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return ((jint)((rhino_CompilerEnvirons *) NULL_CHECK((frame[0].o)))->F_allowSharpComments);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_CompilerEnvirons_ideEnvirons_R_rhino_CompilerEnvirons(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CompilerEnvirons:ideEnvirons", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_CompilerEnvirons(ctx);
	{
	LINE_NUMBER(236);
	clinit_rhino_CompilerEnvirons(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_CompilerEnvirons);
	init_rhino_CompilerEnvirons(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(237);
	((func_rhino_CompilerEnvirons_setRecoverFromErrors_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_CompilerEnvirons_setRecoverFromErrors_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(238);
	((func_rhino_CompilerEnvirons_setRecordingComments_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_CompilerEnvirons_setRecordingComments_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(239);
	((func_rhino_CompilerEnvirons_setStrictMode_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_CompilerEnvirons_setStrictMode_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(240);
	((func_rhino_CompilerEnvirons_setWarnTrailingComma_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_CompilerEnvirons_setWarnTrailingComma_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(241);
	((func_rhino_CompilerEnvirons_setLanguageVersion_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_CompilerEnvirons_setLanguageVersion_int])(ctx, (frame[0].o), (170));
	LINE_NUMBER(242);
	((func_rhino_CompilerEnvirons_setReservedKeywordAsIdentifier_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_CompilerEnvirons_setReservedKeywordAsIdentifier_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(243);
	((func_rhino_CompilerEnvirons_setIdeMode_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_CompilerEnvirons_setIdeMode_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	clinit_rhino_ast_ErrorCollector(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ast_ErrorCollector);
	init_rhino_ast_ErrorCollector(ctx, sp[1].o);
	((func_rhino_CompilerEnvirons_setErrorReporter_rhino_ErrorReporter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_setErrorReporter_rhino_ErrorReporter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_CompilerEnvirons[] {
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
	(void *) M_rhino_CompilerEnvirons_initFromContext_rhino_Context,
	(void *) M_rhino_CompilerEnvirons_getErrorReporter_R_rhino_ErrorReporter,
	(void *) M_rhino_CompilerEnvirons_setErrorReporter_rhino_ErrorReporter,
	(void *) M_rhino_CompilerEnvirons_getLanguageVersion_R_int,
	(void *) M_rhino_CompilerEnvirons_setLanguageVersion_int,
	(void *) M_rhino_CompilerEnvirons_isGenerateDebugInfo_R_boolean,
	(void *) M_rhino_CompilerEnvirons_setGenerateDebugInfo_boolean,
	(void *) M_rhino_CompilerEnvirons_isReservedKeywordAsIdentifier_R_boolean,
	(void *) M_rhino_CompilerEnvirons_setReservedKeywordAsIdentifier_boolean,
	(void *) M_rhino_CompilerEnvirons_isAllowMemberExprAsFunctionName_R_boolean,
	(void *) M_rhino_CompilerEnvirons_setAllowMemberExprAsFunctionName_boolean,
	(void *) M_rhino_CompilerEnvirons_isXmlAvailable_R_boolean,
	(void *) M_rhino_CompilerEnvirons_setXmlAvailable_boolean,
	(void *) M_rhino_CompilerEnvirons_getOptimizationLevel_R_int,
	(void *) M_rhino_CompilerEnvirons_setOptimizationLevel_int,
	(void *) M_rhino_CompilerEnvirons_isGeneratingSource_R_boolean,
	(void *) M_rhino_CompilerEnvirons_getWarnTrailingComma_R_boolean,
	(void *) M_rhino_CompilerEnvirons_setWarnTrailingComma_boolean,
	(void *) M_rhino_CompilerEnvirons_isStrictMode_R_boolean,
	(void *) M_rhino_CompilerEnvirons_setStrictMode_boolean,
	(void *) M_rhino_CompilerEnvirons_reportWarningAsError_R_boolean,
	(void *) M_rhino_CompilerEnvirons_setGeneratingSource_boolean,
	(void *) M_rhino_CompilerEnvirons_isGenerateObserverCount_R_boolean,
	(void *) M_rhino_CompilerEnvirons_setGenerateObserverCount_boolean,
	(void *) M_rhino_CompilerEnvirons_isRecordingComments_R_boolean,
	(void *) M_rhino_CompilerEnvirons_setRecordingComments_boolean,
	(void *) M_rhino_CompilerEnvirons_isRecordingLocalJsDocComments_R_boolean,
	(void *) M_rhino_CompilerEnvirons_setRecordingLocalJsDocComments_boolean,
	(void *) M_rhino_CompilerEnvirons_setRecoverFromErrors_boolean,
	(void *) M_rhino_CompilerEnvirons_recoverFromErrors_R_boolean,
	(void *) M_rhino_CompilerEnvirons_setIdeMode_boolean,
	(void *) M_rhino_CompilerEnvirons_isIdeMode_R_boolean,
	(void *) M_rhino_CompilerEnvirons_getActivationNames_R_java_util_Set,
	(void *) M_rhino_CompilerEnvirons_setActivationNames_java_util_Set,
	(void *) M_rhino_CompilerEnvirons_setAllowSharpComments_boolean,
	(void *) M_rhino_CompilerEnvirons_getAllowSharpComments_R_boolean,
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
	{ "initFromContext", "(Lrhino/Context;)V" },
	{ "getErrorReporter", "()Lrhino/ErrorReporter;" },
	{ "setErrorReporter", "(Lrhino/ErrorReporter;)V" },
	{ "getLanguageVersion", "()I" },
	{ "setLanguageVersion", "(I)V" },
	{ "isGenerateDebugInfo", "()Z" },
	{ "setGenerateDebugInfo", "(Z)V" },
	{ "isReservedKeywordAsIdentifier", "()Z" },
	{ "setReservedKeywordAsIdentifier", "(Z)V" },
	{ "isAllowMemberExprAsFunctionName", "()Z" },
	{ "setAllowMemberExprAsFunctionName", "(Z)V" },
	{ "isXmlAvailable", "()Z" },
	{ "setXmlAvailable", "(Z)V" },
	{ "getOptimizationLevel", "()I" },
	{ "setOptimizationLevel", "(I)V" },
	{ "isGeneratingSource", "()Z" },
	{ "getWarnTrailingComma", "()Z" },
	{ "setWarnTrailingComma", "(Z)V" },
	{ "isStrictMode", "()Z" },
	{ "setStrictMode", "(Z)V" },
	{ "reportWarningAsError", "()Z" },
	{ "setGeneratingSource", "(Z)V" },
	{ "isGenerateObserverCount", "()Z" },
	{ "setGenerateObserverCount", "(Z)V" },
	{ "isRecordingComments", "()Z" },
	{ "setRecordingComments", "(Z)V" },
	{ "isRecordingLocalJsDocComments", "()Z" },
	{ "setRecordingLocalJsDocComments", "(Z)V" },
	{ "setRecoverFromErrors", "(Z)V" },
	{ "recoverFromErrors", "()Z" },
	{ "setIdeMode", "(Z)V" },
	{ "isIdeMode", "()Z" },
	{ "getActivationNames", "()Ljava/util/Set;" },
	{ "setActivationNames", "(Ljava/util/Set;)V" },
	{ "setAllowSharpComments", "(Z)V" },
	{ "getAllowSharpComments", "()Z" },
};

static FieldMetadata fields[] {
	{ "errorReporter", &class_rhino_ErrorReporter, offsetof(rhino_CompilerEnvirons, F_errorReporter), "Lrhino/ErrorReporter;", 2 },
	{ "languageVersion", &class_int, offsetof(rhino_CompilerEnvirons, F_languageVersion), "I", 2 },
	{ "generateDebugInfo", &class_boolean, offsetof(rhino_CompilerEnvirons, F_generateDebugInfo), "Z", 2 },
	{ "reservedKeywordAsIdentifier", &class_boolean, offsetof(rhino_CompilerEnvirons, F_reservedKeywordAsIdentifier), "Z", 2 },
	{ "allowMemberExprAsFunctionName", &class_boolean, offsetof(rhino_CompilerEnvirons, F_allowMemberExprAsFunctionName), "Z", 2 },
	{ "xmlAvailable", &class_boolean, offsetof(rhino_CompilerEnvirons, F_xmlAvailable), "Z", 2 },
	{ "optimizationLevel", &class_int, offsetof(rhino_CompilerEnvirons, F_optimizationLevel), "I", 2 },
	{ "generatingSource", &class_boolean, offsetof(rhino_CompilerEnvirons, F_generatingSource), "Z", 2 },
	{ "strictMode", &class_boolean, offsetof(rhino_CompilerEnvirons, F_strictMode), "Z", 2 },
	{ "warningAsError", &class_boolean, offsetof(rhino_CompilerEnvirons, F_warningAsError), "Z", 2 },
	{ "generateObserverCount", &class_boolean, offsetof(rhino_CompilerEnvirons, F_generateObserverCount), "Z", 2 },
	{ "recordingComments", &class_boolean, offsetof(rhino_CompilerEnvirons, F_recordingComments), "Z", 2 },
	{ "recordingLocalJsDocComments", &class_boolean, offsetof(rhino_CompilerEnvirons, F_recordingLocalJsDocComments), "Z", 2 },
	{ "recoverFromErrors", &class_boolean, offsetof(rhino_CompilerEnvirons, F_recoverFromErrors), "Z", 2 },
	{ "warnTrailingComma", &class_boolean, offsetof(rhino_CompilerEnvirons, F_warnTrailingComma), "Z", 2 },
	{ "ideMode", &class_boolean, offsetof(rhino_CompilerEnvirons, F_ideMode), "Z", 2 },
	{ "allowSharpComments", &class_boolean, offsetof(rhino_CompilerEnvirons, F_allowSharpComments), "Z", 2 },
	{ "activationNames", &class_java_util_Set, offsetof(rhino_CompilerEnvirons, F_activationNames), "Ljava/util/Set;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_CompilerEnvirons, 0, "()V", 1 },
	{ "initFromContext", (intptr_t) M_rhino_CompilerEnvirons_initFromContext_rhino_Context, VTABLE_rhino_CompilerEnvirons_initFromContext_rhino_Context, "(Lrhino/Context;)V", 1 },
	{ "getErrorReporter", (intptr_t) M_rhino_CompilerEnvirons_getErrorReporter_R_rhino_ErrorReporter, VTABLE_rhino_CompilerEnvirons_getErrorReporter_R_rhino_ErrorReporter, "()Lrhino/ErrorReporter;", 17 },
	{ "setErrorReporter", (intptr_t) M_rhino_CompilerEnvirons_setErrorReporter_rhino_ErrorReporter, VTABLE_rhino_CompilerEnvirons_setErrorReporter_rhino_ErrorReporter, "(Lrhino/ErrorReporter;)V", 1 },
	{ "getLanguageVersion", (intptr_t) M_rhino_CompilerEnvirons_getLanguageVersion_R_int, VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int, "()I", 17 },
	{ "setLanguageVersion", (intptr_t) M_rhino_CompilerEnvirons_setLanguageVersion_int, VTABLE_rhino_CompilerEnvirons_setLanguageVersion_int, "(I)V", 1 },
	{ "isGenerateDebugInfo", (intptr_t) M_rhino_CompilerEnvirons_isGenerateDebugInfo_R_boolean, VTABLE_rhino_CompilerEnvirons_isGenerateDebugInfo_R_boolean, "()Z", 17 },
	{ "setGenerateDebugInfo", (intptr_t) M_rhino_CompilerEnvirons_setGenerateDebugInfo_boolean, VTABLE_rhino_CompilerEnvirons_setGenerateDebugInfo_boolean, "(Z)V", 1 },
	{ "isReservedKeywordAsIdentifier", (intptr_t) M_rhino_CompilerEnvirons_isReservedKeywordAsIdentifier_R_boolean, VTABLE_rhino_CompilerEnvirons_isReservedKeywordAsIdentifier_R_boolean, "()Z", 17 },
	{ "setReservedKeywordAsIdentifier", (intptr_t) M_rhino_CompilerEnvirons_setReservedKeywordAsIdentifier_boolean, VTABLE_rhino_CompilerEnvirons_setReservedKeywordAsIdentifier_boolean, "(Z)V", 1 },
	{ "isAllowMemberExprAsFunctionName", (intptr_t) M_rhino_CompilerEnvirons_isAllowMemberExprAsFunctionName_R_boolean, VTABLE_rhino_CompilerEnvirons_isAllowMemberExprAsFunctionName_R_boolean, "()Z", 17 },
	{ "setAllowMemberExprAsFunctionName", (intptr_t) M_rhino_CompilerEnvirons_setAllowMemberExprAsFunctionName_boolean, VTABLE_rhino_CompilerEnvirons_setAllowMemberExprAsFunctionName_boolean, "(Z)V", 1 },
	{ "isXmlAvailable", (intptr_t) M_rhino_CompilerEnvirons_isXmlAvailable_R_boolean, VTABLE_rhino_CompilerEnvirons_isXmlAvailable_R_boolean, "()Z", 17 },
	{ "setXmlAvailable", (intptr_t) M_rhino_CompilerEnvirons_setXmlAvailable_boolean, VTABLE_rhino_CompilerEnvirons_setXmlAvailable_boolean, "(Z)V", 1 },
	{ "getOptimizationLevel", (intptr_t) M_rhino_CompilerEnvirons_getOptimizationLevel_R_int, VTABLE_rhino_CompilerEnvirons_getOptimizationLevel_R_int, "()I", 17 },
	{ "setOptimizationLevel", (intptr_t) M_rhino_CompilerEnvirons_setOptimizationLevel_int, VTABLE_rhino_CompilerEnvirons_setOptimizationLevel_int, "(I)V", 1 },
	{ "isGeneratingSource", (intptr_t) M_rhino_CompilerEnvirons_isGeneratingSource_R_boolean, VTABLE_rhino_CompilerEnvirons_isGeneratingSource_R_boolean, "()Z", 17 },
	{ "getWarnTrailingComma", (intptr_t) M_rhino_CompilerEnvirons_getWarnTrailingComma_R_boolean, VTABLE_rhino_CompilerEnvirons_getWarnTrailingComma_R_boolean, "()Z", 1 },
	{ "setWarnTrailingComma", (intptr_t) M_rhino_CompilerEnvirons_setWarnTrailingComma_boolean, VTABLE_rhino_CompilerEnvirons_setWarnTrailingComma_boolean, "(Z)V", 1 },
	{ "isStrictMode", (intptr_t) M_rhino_CompilerEnvirons_isStrictMode_R_boolean, VTABLE_rhino_CompilerEnvirons_isStrictMode_R_boolean, "()Z", 17 },
	{ "setStrictMode", (intptr_t) M_rhino_CompilerEnvirons_setStrictMode_boolean, VTABLE_rhino_CompilerEnvirons_setStrictMode_boolean, "(Z)V", 1 },
	{ "reportWarningAsError", (intptr_t) M_rhino_CompilerEnvirons_reportWarningAsError_R_boolean, VTABLE_rhino_CompilerEnvirons_reportWarningAsError_R_boolean, "()Z", 17 },
	{ "setGeneratingSource", (intptr_t) M_rhino_CompilerEnvirons_setGeneratingSource_boolean, VTABLE_rhino_CompilerEnvirons_setGeneratingSource_boolean, "(Z)V", 1 },
	{ "isGenerateObserverCount", (intptr_t) M_rhino_CompilerEnvirons_isGenerateObserverCount_R_boolean, VTABLE_rhino_CompilerEnvirons_isGenerateObserverCount_R_boolean, "()Z", 1 },
	{ "setGenerateObserverCount", (intptr_t) M_rhino_CompilerEnvirons_setGenerateObserverCount_boolean, VTABLE_rhino_CompilerEnvirons_setGenerateObserverCount_boolean, "(Z)V", 1 },
	{ "isRecordingComments", (intptr_t) M_rhino_CompilerEnvirons_isRecordingComments_R_boolean, VTABLE_rhino_CompilerEnvirons_isRecordingComments_R_boolean, "()Z", 1 },
	{ "setRecordingComments", (intptr_t) M_rhino_CompilerEnvirons_setRecordingComments_boolean, VTABLE_rhino_CompilerEnvirons_setRecordingComments_boolean, "(Z)V", 1 },
	{ "isRecordingLocalJsDocComments", (intptr_t) M_rhino_CompilerEnvirons_isRecordingLocalJsDocComments_R_boolean, VTABLE_rhino_CompilerEnvirons_isRecordingLocalJsDocComments_R_boolean, "()Z", 1 },
	{ "setRecordingLocalJsDocComments", (intptr_t) M_rhino_CompilerEnvirons_setRecordingLocalJsDocComments_boolean, VTABLE_rhino_CompilerEnvirons_setRecordingLocalJsDocComments_boolean, "(Z)V", 1 },
	{ "setRecoverFromErrors", (intptr_t) M_rhino_CompilerEnvirons_setRecoverFromErrors_boolean, VTABLE_rhino_CompilerEnvirons_setRecoverFromErrors_boolean, "(Z)V", 1 },
	{ "recoverFromErrors", (intptr_t) M_rhino_CompilerEnvirons_recoverFromErrors_R_boolean, VTABLE_rhino_CompilerEnvirons_recoverFromErrors_R_boolean, "()Z", 1 },
	{ "setIdeMode", (intptr_t) M_rhino_CompilerEnvirons_setIdeMode_boolean, VTABLE_rhino_CompilerEnvirons_setIdeMode_boolean, "(Z)V", 1 },
	{ "isIdeMode", (intptr_t) M_rhino_CompilerEnvirons_isIdeMode_R_boolean, VTABLE_rhino_CompilerEnvirons_isIdeMode_R_boolean, "()Z", 1 },
	{ "getActivationNames", (intptr_t) M_rhino_CompilerEnvirons_getActivationNames_R_java_util_Set, VTABLE_rhino_CompilerEnvirons_getActivationNames_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "setActivationNames", (intptr_t) M_rhino_CompilerEnvirons_setActivationNames_java_util_Set, VTABLE_rhino_CompilerEnvirons_setActivationNames_java_util_Set, "(Ljava/util/Set;)V", 1 },
	{ "setAllowSharpComments", (intptr_t) M_rhino_CompilerEnvirons_setAllowSharpComments_boolean, VTABLE_rhino_CompilerEnvirons_setAllowSharpComments_boolean, "(Z)V", 1 },
	{ "getAllowSharpComments", (intptr_t) M_rhino_CompilerEnvirons_getAllowSharpComments_R_boolean, VTABLE_rhino_CompilerEnvirons_getAllowSharpComments_R_boolean, "()Z", 1 },
	{ "ideEnvirons", (intptr_t) SM_rhino_CompilerEnvirons_ideEnvirons_R_rhino_CompilerEnvirons, 0, "()Lrhino/CompilerEnvirons;", 9 },
};

Class class_rhino_CompilerEnvirons{
		.nativeName = (intptr_t) "rhino/CompilerEnvirons",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_CompilerEnvirons),
		.classVtable = (intptr_t) vtable_rhino_CompilerEnvirons,
		.staticInitializer = (intptr_t) clinit_rhino_CompilerEnvirons,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_CompilerEnvirons,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 38,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 47,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_CompilerEnvirons = registerClass(&class_rhino_CompilerEnvirons);

}
