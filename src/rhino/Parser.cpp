#include "rhino/Parser.h"
#include "java/lang/StringBuilder.h"
#include "rhino/ast/InfixExpression.h"
#include "rhino/TokenStream.h"
#include "rhino/ast/AstNode.h"
#include "rhino/ast/Jump.h"
#include "rhino/ast/NumberLiteral.h"
#include "rhino/ast/ContinueStatement.h"
#include "java/util/ArrayList.h"
#include "rhino/ast/PropertyGet.h"
#include "rhino/ast/FunctionNode.h"
#include "rhino/ast/BreakStatement.h"
#include "rhino/EvaluatorException.h"
#include "rhino/ast/NewExpression.h"
#include "rhino/ast/ScriptNode.h"
#include "rhino/ast/Assignment.h"
#include "rhino/ast/ErrorNode.h"
#include "rhino/ast/ThrowStatement.h"
#include "rhino/ast/IdeErrorReporter.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"
#include "rhino/ast/CatchClause.h"
#include "rhino/ast/Loop.h"
#include "rhino/ast/DoLoop.h"
#include "rhino/ast/TryStatement.h"
#include "rhino/ast/ForLoop.h"
#include "java/util/Iterator.h"
#include "rhino/Token.h"
#include "rhino/Context.h"
#include "rhino/ast/Name.h"
#include "rhino/ast/ElementGet.h"
#include "java/util/Map.h"
#include "rhino/ast/LetNode.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/Node.h"
#include "rhino/ast/VariableDeclaration.h"
#include "rhino/ast/ObjectProperty.h"
#include "rhino/Parser.h"
#include "java/lang/IllegalStateException.h"
#include "rhino/ast/ParenthesizedExpression.h"
#include "java/lang/RuntimeException.h"
#include "java/util/List.h"
#include "rhino/ast/ObjectLiteral.h"
#include "rhino/ast/WhileLoop.h"
#include "rhino/ast/ForInLoop.h"
#include "rhino/ast/LabeledStatement.h"
#include "java/lang/Boolean.h"
#include "java/util/HashMap.h"
#include "rhino/ast/ConditionalExpression.h"
#include "rhino/ast/CodeBlock.h"
#include "rhino/ast/IfStatement.h"
#include "java/lang/StackOverflowError.h"
#include "rhino/ast/RegExpLiteral.h"
#include "java/util/Set.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "rhino/ast/Label.h"
#include "rhino/Parser_ParserException.h"
#include "rhino/ast/FunctionCall.h"
#include "rhino/ast/SwitchCase.h"
#include "java/io/IOException.h"
#include "java/util/HashSet.h"
#include "rhino/ErrorReporter.h"
#include "rhino/ast/Symbol.h"
#include "java/lang/Math.h"
#include "rhino/ast/EmptyExpression.h"
#include "rhino/ast/ArrayComprehension.h"
#include "rhino/ast/GeneratorExpression.h"
#include "rhino/ast/WithStatement.h"
#include "rhino/ast/AstRoot.h"
#include "java/util/Map_Entry.h"
#include "rhino/ast/DestructuringForm.h"
#include "rhino/ast/VariableInitializer.h"
#include "rhino/Parser_1.h"
#include "rhino/ast/KeywordLiteral.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/ast/ArrayLiteral.h"
#include "rhino/ast/Comment.h"
#include "rhino/Parser_PerFunctionVariables.h"
#include "rhino/Token_CommentType.h"
#include "rhino/ast/ReturnStatement.h"
#include "rhino/ast/Scope.h"
#include "rhino/ast/SwitchStatement.h"
#include "rhino/Parser_ConditionData.h"
#include "rhino/ast/ExpressionStatement.h"
#include "rhino/ast/GeneratorExpressionLoop.h"
#include "rhino/CompilerEnvirons.h"
#include "rhino/ast/EmptyStatement.h"
#include "rhino/ast/StringLiteral.h"
#include "rhino/ast/ArrayComprehensionLoop.h"
#include "rhino/ast/UnaryExpression.h"
#include "rhino/ast/Yield.h"

extern "C" {

jint SF_rhino_Parser_ARGC_LIMIT;
jint SF_rhino_Parser_CLEAR_TI_MASK;
jint SF_rhino_Parser_TI_AFTER_EOL;
jint SF_rhino_Parser_TI_CHECK_LABEL;
jint SF_rhino_Parser_PROP_ENTRY;
jint SF_rhino_Parser_GET_ENTRY;
jint SF_rhino_Parser_SET_ENTRY;
jint SF_rhino_Parser_METHOD_ENTRY;

void mark_rhino_Parser(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Parser *) object;
	if (self->F_compilerEnv)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_compilerEnv)->clazz)->markFunction)((jobject) self->F_compilerEnv, mark, depth + 1);
	if (self->F_errorReporter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_errorReporter)->clazz)->markFunction)((jobject) self->F_errorReporter, mark, depth + 1);
	if (self->F_errorCollector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_errorCollector)->clazz)->markFunction)((jobject) self->F_errorCollector, mark, depth + 1);
	if (self->F_sourceURI)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sourceURI)->clazz)->markFunction)((jobject) self->F_sourceURI, mark, depth + 1);
	if (self->F_sourceChars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sourceChars)->clazz)->markFunction)((jobject) self->F_sourceChars, mark, depth + 1);
	if (self->F_ts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ts)->clazz)->markFunction)((jobject) self->F_ts, mark, depth + 1);
	if (self->F_scannedComments)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scannedComments)->clazz)->markFunction)((jobject) self->F_scannedComments, mark, depth + 1);
	if (self->F_currentJsDocComment)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentJsDocComment)->clazz)->markFunction)((jobject) self->F_currentJsDocComment, mark, depth + 1);
	if (self->F_currentLabel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentLabel)->clazz)->markFunction)((jobject) self->F_currentLabel, mark, depth + 1);
	if (self->F_currentScriptOrFn)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentScriptOrFn)->clazz)->markFunction)((jobject) self->F_currentScriptOrFn, mark, depth + 1);
	if (self->F_currentScope)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentScope)->clazz)->markFunction)((jobject) self->F_currentScope, mark, depth + 1);
	if (self->F_labelSet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_labelSet)->clazz)->markFunction)((jobject) self->F_labelSet, mark, depth + 1);
	if (self->F_loopSet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loopSet)->clazz)->markFunction)((jobject) self->F_loopSet, mark, depth + 1);
	if (self->F_loopAndSwitchSet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loopAndSwitchSet)->clazz)->markFunction)((jobject) self->F_loopAndSwitchSet, mark, depth + 1);
	if (self->F_prevNameTokenString)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prevNameTokenString)->clazz)->markFunction)((jobject) self->F_prevNameTokenString, mark, depth + 1);
}

void clinit_rhino_Parser(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_Parser_ARGC_LIMIT = jint(65536);
	SF_rhino_Parser_CLEAR_TI_MASK = jint(65535);
	SF_rhino_Parser_TI_AFTER_EOL = jint(65536);
	SF_rhino_Parser_TI_CHECK_LABEL = jint(131072);
	SF_rhino_Parser_PROP_ENTRY = jint(1);
	SF_rhino_Parser_GET_ENTRY = jint(2);
	SF_rhino_Parser_SET_ENTRY = jint(4);
	SF_rhino_Parser_METHOD_ENTRY = jint(8);
}

void init_rhino_Parser(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_rhino_CompilerEnvirons(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_CompilerEnvirons);
	init_rhino_CompilerEnvirons(ctx, sp[1].o);
	init_rhino_Parser_rhino_CompilerEnvirons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_Parser_rhino_CompilerEnvirons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_rhino_CompilerEnvirons_getErrorReporter_R_rhino_ErrorReporter) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_CompilerEnvirons_getErrorReporter_R_rhino_ErrorReporter])(ctx, (frame[1].o));
	init_rhino_Parser_rhino_CompilerEnvirons_rhino_ErrorReporter(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_Parser_rhino_CompilerEnvirons_rhino_ErrorReporter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(94);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(50);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentFlaggedToken = (jint(0));
	LINE_NUMBER(77);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_prevNameTokenString = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(95);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv = (jref) (frame[1].o);
	LINE_NUMBER(96);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_errorReporter = (jref) (frame[2].o);
	LINE_NUMBER(97);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_ast_IdeErrorReporter)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(98);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_errorCollector = (jref) (checkCast(ctx, &class_rhino_ast_IdeErrorReporter, (frame[2].o)));
	}
label_6:;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:addStrictWarning", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(104);
	frame[3].i = (jint(-1));
	frame[4].i = (jint(-1));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(107);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd;
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = (temp0 - ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg));
	}
label_3:;
	{
	LINE_NUMBER(109);
	((func_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:addStrictWarning", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isStrictMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isStrictMode_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(115);
	((func_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i));
	}
label_1:;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Parser_addWarning_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:addWarning", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(119);
	frame[3].i = (jint(-1));
	frame[4].i = (jint(-1));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(122);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd;
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = (temp0 - ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg));
	}
label_3:;
	{
	LINE_NUMBER(124);
	((func_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_addWarning_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:addWarning", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(128);
	((func_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].i), (frame[3].i));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:addWarning", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((func_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(134);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_reportWarningAsError_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_reportWarningAsError_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(135);
	((func_rhino_Parser_addError_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_errorCollector;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_errorCollector;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_sourceURI;
	((func_rhino_ast_IdeErrorReporter_warning_java_lang_String_java_lang_String_int_int) resolveInterfaceMethod(ctx, &class_rhino_ast_IdeErrorReporter, INDEX_rhino_ast_IdeErrorReporter_warning_java_lang_String_java_lang_String_int_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].i), (frame[4].i));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_errorReporter;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_sourceURI;
	sp[3].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((func_rhino_TokenStream_getLineno_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_rhino_TokenStream_getLineno_R_int])(ctx, sp[3].o);
	sp[3].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	LINE_NUMBER(140);
	sp[3].o = (jobject)((func_rhino_TokenStream_getLine_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_rhino_TokenStream_getLine_R_java_lang_String])(ctx, sp[3].o);
	sp[4].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp1 = (jint)((func_rhino_TokenStream_getOffset_R_int) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_rhino_TokenStream_getOffset_R_int])(ctx, sp[4].o);
	LINE_NUMBER(139);
	((func_rhino_ErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int) resolveInterfaceMethod(ctx, &class_rhino_ErrorReporter, INDEX_rhino_ErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, temp1);
	}
label_4:;
	LINE_NUMBER(142);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Parser_addError_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:addError", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[2].o))->F_tokenBeg;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp1 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[2].o))->F_tokenEnd;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_Parser_addError_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, temp0, (temp1 - ((jint)((rhino_TokenStream *) NULL_CHECK(sp[2].o))->F_tokenBeg)));
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_addError_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:addError", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(149);
	((func_rhino_Parser_addError_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String_int_int])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].i), (frame[3].i));
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_addError_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:addError", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[3].o))->F_tokenBeg;
	sp[3].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp1 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[3].o))->F_tokenEnd;
	sp[3].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_Parser_addError_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, (temp1 - ((jint)((rhino_TokenStream *) NULL_CHECK(sp[3].o))->F_tokenBeg)));
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_addError_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:addError", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)SM_java_lang_Character_toString_char_R_java_lang_String(ctx, (jchar((frame[2].i))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[3].o))->F_tokenBeg;
	sp[3].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp1 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[3].o))->F_tokenEnd;
	sp[3].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_Parser_addError_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, (temp1 - ((jint)((rhino_TokenStream *) NULL_CHECK(sp[3].o))->F_tokenBeg)));
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_addError_java_lang_String_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:addError", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_syntaxErrorCount = (((jint)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_syntaxErrorCount) + (jint(1)));
	LINE_NUMBER(165);
	sp[0].o = (jobject)((func_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(166);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_errorCollector;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_errorCollector;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_sourceURI;
	((func_rhino_ast_IdeErrorReporter_error_java_lang_String_java_lang_String_int_int) resolveInterfaceMethod(ctx, &class_rhino_ast_IdeErrorReporter, INDEX_rhino_ast_IdeErrorReporter_error_java_lang_String_java_lang_String_int_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].i), (frame[4].i));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(169);
	frame[6].i = (jint(1));
	frame[7].i = (jint(1));
	LINE_NUMBER(170);
	frame[8].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(171);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((func_rhino_TokenStream_getLineno_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getLineno_R_int])(ctx, sp[0].o);
	frame[6].i = temp0;
	LINE_NUMBER(173);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)((func_rhino_TokenStream_getLine_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getLine_R_java_lang_String])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(174);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp1 = (jint)((func_rhino_TokenStream_getOffset_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getOffset_R_int])(ctx, sp[0].o);
	frame[7].i = temp1;
	}
label_9:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_errorReporter;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_sourceURI;
	((func_rhino_ErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int) resolveInterfaceMethod(ctx, &class_rhino_ErrorReporter, INDEX_rhino_ErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[6].i), (frame[8].o), (frame[7].i));
	}
label_5:;
	LINE_NUMBER(178);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:addStrictWarning", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isStrictMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isStrictMode_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(184);
	M_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].o), (frame[7].i));
	}
label_1:;
	LINE_NUMBER(186);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:addWarning", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((func_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(192);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_reportWarningAsError_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_reportWarningAsError_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(193);
	M_rhino_Parser_addError_java_lang_String_java_lang_String_int_int_int_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].o), (frame[7].i));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_errorCollector;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_errorCollector;
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_sourceURI;
	((func_rhino_ast_IdeErrorReporter_warning_java_lang_String_java_lang_String_int_int) resolveInterfaceMethod(ctx, &class_rhino_ast_IdeErrorReporter, INDEX_rhino_ast_IdeErrorReporter_warning_java_lang_String_java_lang_String_int_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].i), (frame[4].i));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_errorReporter;
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_sourceURI;
	((func_rhino_ErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int) resolveInterfaceMethod(ctx, &class_rhino_ErrorReporter, INDEX_rhino_ErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[5].i), (frame[6].o), (frame[7].i));
	}
label_4:;
	LINE_NUMBER(199);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Parser_addError_java_lang_String_java_lang_String_int_int_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:addError", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_syntaxErrorCount = (((jint)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_syntaxErrorCount) + (jint(1)));
	LINE_NUMBER(205);
	sp[0].o = (jobject)((func_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(206);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_errorCollector;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_errorCollector;
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_sourceURI;
	((func_rhino_ast_IdeErrorReporter_error_java_lang_String_java_lang_String_int_int) resolveInterfaceMethod(ctx, &class_rhino_ast_IdeErrorReporter, INDEX_rhino_ast_IdeErrorReporter_error_java_lang_String_java_lang_String_int_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].i), (frame[4].i));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_errorReporter;
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_sourceURI;
	((func_rhino_ErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int) resolveInterfaceMethod(ctx, &class_rhino_ErrorReporter, INDEX_rhino_ErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[5].i), (frame[6].o), (frame[7].i));
	}
label_5:;
	LINE_NUMBER(211);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Parser_lookupMessage_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:lookupMessage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((func_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:lookupMessage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(218);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(219);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage0_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_1:;
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	LINE_NUMBER(220);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage1_java_lang_String_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_3:;
	LINE_NUMBER(218);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_rhino_Parser_reportError_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:reportError", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(224);
	((func_rhino_Parser_reportError_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_reportError_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:reportError", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(229);
	((func_rhino_Parser_reportError_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_java_lang_String_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)), (jint(1)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[3].o))->F_tokenBeg;
	sp[3].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp1 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[3].o))->F_tokenEnd;
	sp[3].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_Parser_reportError_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, (temp1 - ((jint)((rhino_TokenStream *) NULL_CHECK(sp[3].o))->F_tokenBeg)));
	}
label_3:;
	LINE_NUMBER(234);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Parser_reportError_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:reportError", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(237);
	((func_rhino_Parser_reportError_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_java_lang_String_int_int])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].i), (frame[3].i));
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_reportError_java_lang_String_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:reportError", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(242);
	((func_rhino_Parser_addError_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(244);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_recoverFromErrors_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_recoverFromErrors_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(245);
	clinit_rhino_Parser$ParserException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Parser$ParserException);
	init_rhino_Parser$ParserException_rhino_Parser$1(ctx, sp[0].o, (jobject(nullptr)));
	throwException(ctx, sp[0].o);	}
label_2:;
	LINE_NUMBER(247);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:getNodeEnd", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(253);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_rhino_ast_AstNode_getLength_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getLength_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_recordComment_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:recordComment", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_scannedComments = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(260);
	clinit_rhino_ast_Comment(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Comment);
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	LINE_NUMBER(261);
	jint temp1 = (jint)((func_rhino_TokenStream_getTokenLength_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_TokenStream_getTokenLength_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[1].o = (jobject)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_commentType;
	init_rhino_ast_Comment_int_int_rhino_Token$CommentType_java_lang_String(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(264);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_commentType;
	clinit_rhino_Token$CommentType(ctx);
	sp[1].o = (jobject)SF_rhino_Token$CommentType_JSDOC;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	LINE_NUMBER(265);
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isRecordingLocalJsDocComments_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isRecordingLocalJsDocComments_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(266);
	clinit_rhino_ast_Comment(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Comment);
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	LINE_NUMBER(267);
	jint temp1 = (jint)((func_rhino_TokenStream_getTokenLength_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_TokenStream_getTokenLength_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[1].o = (jobject)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_commentType;
	init_rhino_ast_Comment_int_int_rhino_Token$CommentType_java_lang_String(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(270);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentJsDocComment = (jref) (frame[4].o);
	LINE_NUMBER(271);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentJsDocComment;
	((func_rhino_ast_Comment_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Comment_setLineno_int])(ctx, sp[0].o, (frame[1].i));
	}
label_5:;
	{
	LINE_NUMBER(273);
	((func_rhino_ast_Comment_setLineno_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_Comment_setLineno_int])(ctx, (frame[3].o), (frame[1].i));
	LINE_NUMBER(274);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:getAndResetJsDoc", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentJsDocComment;
	frame[1].o = sp[0].o;
	LINE_NUMBER(279);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentJsDocComment = (jref) (jobject(nullptr));
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_rhino_Parser_getNumberOfEols_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:getNumberOfEols", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(285);
	frame[2].i = (jint(0));
	LINE_NUMBER(286);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[3].i = (temp0 - (jint(1)));
	}
label_2:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(287);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[3].i));
	if (temp0 != (10)) goto label_5;
	}
	LINE_NUMBER(288);
	INST_IINC(2, 1);
label_5:;
	{
	LINE_NUMBER(286);
	INST_IINC(3, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_Parser_peekToken_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:peekToken", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(314);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentFlaggedToken) == 0) goto label_1;
	}
	{
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken);
	}
label_1:;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((func_rhino_TokenStream_getLineno_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getLineno_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(319);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp1 = (jint)((func_rhino_TokenStream_getToken_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getToken_R_int])(ctx, sp[0].o);
	frame[2].i = temp1;
	LINE_NUMBER(320);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(323);
	if ((frame[2].i) == (jint(1))) goto label_6;
	}
	{
	if ((frame[2].i) != (162)) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(324);
	if ((frame[2].i) != (jint(1))) goto label_8;
	}
	{
	LINE_NUMBER(325);
	INST_IINC(1, 1);
	LINE_NUMBER(326);
	frame[3].i = (jint(1));
	LINE_NUMBER(327);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((func_rhino_TokenStream_getToken_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getToken_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isRecordingComments_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isRecordingComments_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)((func_rhino_TokenStream_getAndResetCurrentComment_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getAndResetCurrentComment_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(331);
	M_rhino_Parser_recordComment_int_java_lang_String(ctx, (frame[0].o), (frame[1].i), (frame[4].o));
	LINE_NUMBER(334);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)M_rhino_Parser_getNumberOfEols_java_lang_String_R_int(ctx, (frame[0].o), (frame[4].o));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(335);
	goto label_7;
	}
label_12:;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((func_rhino_TokenStream_getToken_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getToken_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(341);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken = (frame[2].i);
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[3].i) == 0) goto label_18;
	}
	(sp++)->i = jint(65536);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	{
	sp -= 3;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_currentFlaggedToken = (sp[1].i | sp[2].i);
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken);
	}

	popStackFrame(ctx);
}

jint M_rhino_Parser_peekFlaggedToken_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:peekFlaggedToken", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(348);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	LINE_NUMBER(349);
	popStackFrame(ctx);
	return ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentFlaggedToken);
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_consumeToken(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:consumeToken", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(353);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentFlaggedToken = (jint(0));
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_Parser_nextToken_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:nextToken", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(358);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(359);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_rhino_Parser_matchToken_int_boolean_R_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:matchToken", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(365);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[3].i = temp0;
	}
label_1:;
	{
	LINE_NUMBER(366);
	if ((frame[3].i) != (162)) goto label_2;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_2;
	{
	LINE_NUMBER(367);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(368);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[3].i = temp0;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(370);
	if ((frame[3].i) == (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(373);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_rhino_Parser_peekTokenOrEOL_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:peekTokenOrEOL", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(384);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(386);
	if ((((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentFlaggedToken) & (jint(65536))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(387);
	frame[1].i = (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:mustMatchToken", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(394);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp1 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[2].o))->F_tokenBeg;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp2 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[2].o))->F_tokenEnd;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp3 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_int_int_boolean_R_boolean(ctx, sp[0].o, temp0, sp[1].o, temp1, (temp2 - ((jint)((rhino_TokenStream *) NULL_CHECK(sp[2].o))->F_tokenBeg)), (frame[3].i));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Parser_mustMatchToken_int_java_lang_String_int_int_boolean_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:mustMatchToken", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(400);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (frame[1].i), (frame[5].i));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(403);
	((func_rhino_Parser_reportError_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_int_int])(ctx, (frame[0].o), (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_rhino_Parser_eof_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:eof", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((func_rhino_TokenStream_eof_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_eof_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Parser_insideFunction_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:insideFunction", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(412);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_nestingOfFunction) == 0) goto label_1;
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

void M_rhino_Parser_pushScope_rhino_ast_Scope(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:pushScope", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_rhino_ast_Scope_getParentScope_R_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Scope_getParentScope_R_rhino_ast_Scope])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(419);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(420);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope;
	((func_rhino_ast_Scope_addChildScope_rhino_ast_Scope) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Scope_addChildScope_rhino_ast_Scope])(ctx, sp[0].o, (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(425);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope = (jref) (frame[1].o);
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_popScope(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:popScope", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(429);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope;
	sp[1].o = (jobject)((func_rhino_ast_Scope_getParentScope_R_rhino_ast_Scope) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_Scope_getParentScope_R_rhino_ast_Scope])(ctx, sp[1].o);
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_currentScope = (jref) sp[1].o;
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_enterLoop_rhino_ast_Loop(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:enterLoop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopSet;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(434);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_loopSet = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopSet;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(436);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopAndSwitchSet;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(437);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_loopAndSwitchSet = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopAndSwitchSet;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(439);
	((func_rhino_Parser_pushScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_pushScope_rhino_ast_Scope])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(440);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentLabel;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentLabel;
	((func_rhino_ast_LabeledStatement_setStatement_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_LabeledStatement_setStatement_rhino_ast_AstNode])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(442);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentLabel;
	sp[0].o = (jobject)((func_rhino_ast_LabeledStatement_getFirstLabel_R_rhino_ast_Label) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_LabeledStatement_getFirstLabel_R_rhino_ast_Label])(ctx, sp[0].o);
	((func_rhino_ast_Label_setLoop_rhino_ast_Jump) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Label_setLoop_rhino_ast_Jump])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(447);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentLabel;
	jint temp0 = (jint)((func_rhino_ast_LabeledStatement_getPosition_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_LabeledStatement_getPosition_R_int])(ctx, sp[1].o);
	((func_rhino_ast_Loop_setRelative_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Loop_setRelative_int])(ctx, sp[0].o, (-temp0));
	}
label_8:;
	LINE_NUMBER(449);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Parser_exitLoop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:exitLoop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopSet;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopSet;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_List_remove_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_remove_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[1].o = (checkCast(ctx, &class_rhino_ast_Loop, sp[0].o));
	LINE_NUMBER(453);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopAndSwitchSet;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopAndSwitchSet;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_List_remove_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_remove_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp1 - (jint(1))));
	LINE_NUMBER(454);
	sp[0].o = (jobject)((func_rhino_ast_Loop_getParent_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Loop_getParent_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(455);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_rhino_ast_Loop_getParent_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Loop_getParent_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, sp[1].o);
	((func_rhino_ast_Loop_setRelative_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Loop_setRelative_int])(ctx, sp[0].o, temp0);
	}
label_3:;
	{
	LINE_NUMBER(457);
	((func_rhino_Parser_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(458);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_enterSwitch_rhino_ast_SwitchStatement(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:enterSwitch", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopAndSwitchSet;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(462);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_loopAndSwitchSet = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopAndSwitchSet;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(464);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_exitSwitch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:exitSwitch", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopAndSwitchSet;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopAndSwitchSet;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_List_remove_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_remove_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp0 - (jint(1))));
	LINE_NUMBER(468);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_parse_java_lang_String_java_lang_String_int_R_rhino_ast_AstRoot(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:parse", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(478);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_parseFinished) == 0) goto label_9;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"parser reused"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(479);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_sourceURI = (jref) (frame[2].o);
	LINE_NUMBER(480);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isIdeMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isIdeMode_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(481);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[1].o));
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_sourceChars = (jref) sp[1].o;
	}
label_11:;
	{
	LINE_NUMBER(483);
	sp[0].o = frame[0].o;
	clinit_rhino_TokenStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_TokenStream);
	init_rhino_TokenStream_rhino_Parser_java_io_Reader_java_lang_String_int(ctx, sp[1].o, (frame[0].o), (jobject(nullptr)), (frame[1].o), (frame[3].i));
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_ts = (jref) sp[1].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)M_rhino_Parser_parse_R_rhino_ast_AstRoot(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(490);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_parseFinished = (jint(1));
	LINE_NUMBER(485);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(486);
	frame[4].o = sp[0].o;
	LINE_NUMBER(488);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(490);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_parseFinished = (jint(1));
	LINE_NUMBER(491);
	throwException(ctx, (frame[5].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_parse_R_rhino_ast_AstRoot(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:parse", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(495);
	frame[1].i = (jint(0));
	LINE_NUMBER(496);
	clinit_rhino_ast_AstRoot(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_AstRoot);
	init_rhino_ast_AstRoot_int(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(497);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[2].o;
	((rhino_Parser *) NULL_CHECK(sp[1].o))->F_currentScriptOrFn = (jref) sp[2].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_currentScope = (jref) sp[2].o;
	LINE_NUMBER(499);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(500);
	frame[4].i = (frame[1].i);
	LINE_NUMBER(502);
	frame[5].i = (jint(1));
	LINE_NUMBER(503);
	frame[6].i = ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective);
	LINE_NUMBER(505);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective = ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_defaultUseStrictDirective);
	LINE_NUMBER(506);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective) == 0) goto label_4;
	}
	{
	LINE_NUMBER(507);
	((func_rhino_ast_AstRoot_setInStrictMode_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstRoot_setInStrictMode_boolean])(ctx, (frame[2].o), (jint(1)));
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_StackOverflowError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_8; }
	}
	{
	LINE_NUMBER(512);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[7].i = temp0;
	LINE_NUMBER(513);
	if ((frame[7].i) > 0) goto label_25;
	}
	LINE_NUMBER(514);
	goto label_5;
label_25:;
	{
	LINE_NUMBER(518);
	if ((frame[7].i) != (110)) goto label_27;
	}
	{
	LINE_NUMBER(519);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_Parser$ParserException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(521);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_calledByCompileFunction) == 0) goto label_29;
	}
	INST_ICONST(2);
	goto label_30;
label_29:;
	INST_ICONST(1);
label_30:;
	POP_N(2); // Pop method args
	sp->o = (jobject)M_rhino_Parser_function_int_R_rhino_ast_FunctionNode(ctx, sp[0].o, sp[1].i);
	sp++;
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	LINE_NUMBER(526);
	goto label_31;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(524);
	frame[9].o = sp[0].o;
	LINE_NUMBER(525);
	goto label_5;
	}
label_27:;
	{
	LINE_NUMBER(527);
	if ((frame[7].i) != (162)) goto label_33;
	}
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[8].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(529);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	goto label_31;
	}
label_33:;
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)M_rhino_Parser_statement_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(532);
	if ((frame[5].i) == 0) goto label_31;
	}
	{
	LINE_NUMBER(533);
	sp[0].o = (jobject)M_rhino_Parser_getDirective_rhino_ast_AstNode_R_java_lang_String(ctx, (frame[0].o), (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(534);
	if ((frame[9].o) != nullptr) goto label_39;
	}
	{
	LINE_NUMBER(535);
	frame[5].i = (jint(0));
	goto label_31;
	}
label_39:;
	{
	LINE_NUMBER(536);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[9].o), (((jobject) createStringLiteral(ctx, u8"use strict"_j))));
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(537);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective = (jint(1));
	LINE_NUMBER(538);
	((func_rhino_ast_AstRoot_setInStrictMode_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstRoot_setInStrictMode_boolean])(ctx, (frame[2].o), (jint(1)));
	}
label_31:;
	{
	LINE_NUMBER(542);
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[8].o));
	frame[4].i = temp0;
	LINE_NUMBER(543);
	((func_rhino_ast_AstRoot_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstRoot_addChildToBack_rhino_Node])(ctx, (frame[2].o), (frame[8].o));
	LINE_NUMBER(544);
	((func_rhino_ast_AstNode_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode])(ctx, (frame[8].o), (frame[2].o));
	LINE_NUMBER(545);
	{ popExceptionFrames(frameRef, 2); goto label_4; }
	}
label_5:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(552);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective = (frame[6].i);
	LINE_NUMBER(553);
	goto label_47;
	}
label_6:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	LINE_NUMBER(546);
	frame[7].o = sp[0].o;
	LINE_NUMBER(547);
	sp[0].o = (jobject)((func_rhino_Parser_lookupMessage_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_lookupMessage_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.too.deep.parser.recursion"_j))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(548);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isIdeMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isIdeMode_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(549);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_sourceURI;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[2].o))->F_lineno), (jobject(nullptr)), (jint(0)));
	throwException(ctx, sp[0].o);	}
label_10:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(552);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective = (frame[6].i);
	LINE_NUMBER(553);
	goto label_47;
	}
label_8:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	LINE_NUMBER(552);
	INST_ASTORE(10);
	popExceptionFrame(frameRef);
	{
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective = (frame[6].i);
	LINE_NUMBER(553);
	throwException(ctx, (frame[10].o));	}
label_47:;
	{
	LINE_NUMBER(555);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_syntaxErrorCount) == 0) goto label_53;
	}
	{
	LINE_NUMBER(556);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_syntaxErrorCount));
	frame[7].o = sp[0].o;
	LINE_NUMBER(557);
	sp[0].o = (jobject)((func_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.got.syntax.errors"_j))), (frame[7].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(558);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isIdeMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isIdeMode_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_53;
	}
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_errorReporter;
	sp[1].o = frame[7].o;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_sourceURI;
	sp[0].o = (jobject)((func_rhino_ErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException) resolveInterfaceMethod(ctx, &class_rhino_ErrorReporter, INDEX_rhino_ErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].i), (jobject(nullptr)), (jint(0)));
	throwException(ctx, sp[0].o);	}
label_53:;
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	if (sp[0].o == nullptr) goto label_58;
	}
	{
	LINE_NUMBER(567);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	frame[7].i = (temp0 - (jint(1)));
	LINE_NUMBER(568);
	jint temp1 = frame[4].i;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	sp[1].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, (frame[7].i));
	jint temp2 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, sp[0].o, (checkCast(ctx, &class_rhino_ast_AstNode, sp[1].o)));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp1, temp2);
	frame[4].i = temp3;
	LINE_NUMBER(569);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_62:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_58;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_rhino_ast_Comment, sp[0].o));
	LINE_NUMBER(570);
	((func_rhino_ast_AstRoot_addComment_rhino_ast_Comment) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstRoot_addComment_rhino_ast_Comment])(ctx, (frame[2].o), (frame[9].o));
	LINE_NUMBER(571);
	goto label_62;
	}
label_58:;
	{
	LINE_NUMBER(574);
	((func_rhino_ast_AstRoot_setLength_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstRoot_setLength_int])(ctx, (frame[2].o), ((frame[4].i) - (frame[1].i)));
	LINE_NUMBER(575);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_sourceURI;
	((func_rhino_ast_AstRoot_setSourceName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstRoot_setSourceName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(576);
	((func_rhino_ast_AstRoot_setBaseLineno_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstRoot_setBaseLineno_int])(ctx, (frame[2].o), (frame[3].i));
	LINE_NUMBER(577);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_AstRoot_setEndLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstRoot_setEndLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_parseFunctionBody_int_rhino_ast_FunctionNode_R_rhino_ast_AstNode(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:parseFunctionBody", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(583);
	frame[3].i = (jint(0));
	LINE_NUMBER(584);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (86), (jint(1)));
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(585);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 >= (180)) goto label_14;
	}
	{
	if ((frame[1].i) == (jint(4))) goto label_14;
	}
	{
	LINE_NUMBER(586);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.no.brace.body"_j))));
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(588);
	frame[3].i = (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(591);
	if ((frame[1].i) != (jint(4))) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(592);
	sp[0].o = frame[0].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction = (((jint)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction) + (jint(1)));
	LINE_NUMBER(593);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[5].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(594);
	clinit_rhino_ast_CodeBlock(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_CodeBlock);
	init_rhino_ast_CodeBlock_int(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(596);
	frame[7].i = (jint(1));
	LINE_NUMBER(597);
	frame[8].i = ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective);
	LINE_NUMBER(600);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_CodeBlock_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_CodeBlock_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_Parser$ParserException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(602);
	if ((frame[3].i) == 0) goto label_24;
	}
	{
	LINE_NUMBER(603);
	sp[0].o = (jobject)M_rhino_Parser_assignExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(604);
	clinit_rhino_ast_ReturnStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ReturnStatement);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[9].o));
	jint temp1 = (jint)((func_rhino_ast_AstNode_getLength_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_AstNode_getLength_R_int])(ctx, (frame[9].o));
	init_rhino_ast_ReturnStatement_int_int_rhino_ast_AstNode(ctx, sp[0].o, temp0, temp1, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(606);
	sp[0].o = frame[10].o;
	jint temp2 = 25;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	((func_rhino_ast_ReturnStatement_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ReturnStatement_putProp_int_java_lang_Object])(ctx, sp[0].o, temp2, sp[1].o);
	LINE_NUMBER(607);
	sp[0].o = frame[6].o;
	jint temp3 = 25;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	((func_rhino_ast_CodeBlock_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_CodeBlock_putProp_int_java_lang_Object])(ctx, sp[0].o, temp3, sp[1].o);
	LINE_NUMBER(608);
	if ((frame[4].i) == 0) goto label_30;
	}
	{
	LINE_NUMBER(609);
	sp[0].o = frame[10].o;
	jint temp0 = 27;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	((func_rhino_ast_ReturnStatement_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ReturnStatement_putProp_int_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	}
label_30:;
	{
	LINE_NUMBER(611);
	((func_rhino_ast_CodeBlock_addStatement_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_CodeBlock_addStatement_rhino_ast_AstNode])(ctx, (frame[6].o), (frame[10].o));
	LINE_NUMBER(612);
	goto label_1;
	}
label_24:;
	{
	LINE_NUMBER(616);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[10].i = temp0;
	LINE_NUMBER(617);
	switch((frame[10].i)) {
		case -1: goto label_34;
		case 0: goto label_34;
		case 87: goto label_34;
		case 110: goto label_35;
		case 162: goto label_36;
		default: goto label_37;
	}
	}
label_34:;
	LINE_NUMBER(621);
	goto label_1;
label_36:;
	{
	LINE_NUMBER(623);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(624);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[9].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(625);
	goto label_40;
	}
label_35:;
	{
	LINE_NUMBER(627);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(628);
	sp[0].o = (jobject)M_rhino_Parser_function_int_R_rhino_ast_FunctionNode(ctx, (frame[0].o), (jint(1)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(629);
	goto label_40;
	}
label_37:;
	{
	LINE_NUMBER(631);
	sp[0].o = (jobject)M_rhino_Parser_statement_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(632);
	if ((frame[7].i) == 0) goto label_40;
	}
	{
	LINE_NUMBER(633);
	sp[0].o = (jobject)M_rhino_Parser_getDirective_rhino_ast_AstNode_R_java_lang_String(ctx, (frame[0].o), (frame[9].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(634);
	if ((frame[11].o) != nullptr) goto label_46;
	}
	{
	LINE_NUMBER(635);
	frame[7].i = (jint(0));
	goto label_40;
	}
label_46:;
	{
	LINE_NUMBER(636);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8"use strict"_j))));
	if (temp0 == 0) goto label_40;
	}
	{
	LINE_NUMBER(637);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective = (jint(1));
	LINE_NUMBER(638);
	((func_rhino_ast_FunctionNode_setInStrictMode_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setInStrictMode_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(639);
	if ((frame[8].i) != 0) goto label_40;
	}
	{
	LINE_NUMBER(640);
	((func_rhino_Parser_setRequiresActivation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_setRequiresActivation])(ctx, (frame[0].o));
	}
label_40:;
	{
	LINE_NUMBER(646);
	((func_rhino_ast_CodeBlock_addStatement_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_CodeBlock_addStatement_rhino_ast_AstNode])(ctx, (frame[6].o), (frame[9].o));
	LINE_NUMBER(647);
	goto label_24;
	}
label_1:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(652);
	sp[0].o = frame[0].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction = (((jint)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction) - (jint(1)));
	LINE_NUMBER(653);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective = (frame[8].i);
	LINE_NUMBER(654);
	goto label_55;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(649);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(652);
	sp[0].o = frame[0].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction = (((jint)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction) - (jint(1)));
	LINE_NUMBER(653);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective = (frame[8].i);
	LINE_NUMBER(654);
	goto label_55;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(652);
	INST_ASTORE(12);
	popExceptionFrame(frameRef);
	{
	sp[0].o = frame[0].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction = (((jint)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction) - (jint(1)));
	LINE_NUMBER(653);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective = (frame[8].i);
	LINE_NUMBER(654);
	throwException(ctx, (frame[12].o));	}
label_55:;
	{
	LINE_NUMBER(656);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[9].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	LINE_NUMBER(657);
	sp[0].o = (jobject)M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(ctx, (frame[0].o));
	LINE_NUMBER(658);
	if ((frame[3].i) != 0) goto label_62;
	}
	{
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (87), (((jobject) createStringLiteral(ctx, u8"msg.no.brace.after.body"_j))), (jint(1)));
	if (temp0 == 0) goto label_62;
	}
	{
	LINE_NUMBER(659);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[9].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	}
label_62:;
	{
	LINE_NUMBER(660);
	((func_rhino_ast_CodeBlock_setLength_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_CodeBlock_setLength_int])(ctx, (frame[6].o), ((frame[9].i) - (frame[5].i)));
	LINE_NUMBER(661);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_getDirective_rhino_ast_AstNode_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:getDirective", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(665);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_ExpressionStatement)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((func_rhino_ast_ExpressionStatement_getExpression_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_ExpressionStatement, (frame[1].o))))->vtable)[VTABLE_rhino_ast_ExpressionStatement_getExpression_R_rhino_ast_AstNode])(ctx, (checkCast(ctx, &class_rhino_ast_ExpressionStatement, (frame[1].o))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(667);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_ast_StringLiteral)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(668);
	sp[0].o = (jobject)((func_rhino_ast_StringLiteral_getValue_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_StringLiteral, (frame[2].o))))->vtable)[VTABLE_rhino_ast_StringLiteral_getValue_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_StringLiteral, (frame[2].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(671);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_parseFunctionParams_rhino_ast_FunctionNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:parseFunctionParams", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(676);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (89), (jint(1)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(677);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg;
	jint temp1 = (jint)((func_rhino_ast_FunctionNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getPosition_R_int])(ctx, (frame[1].o));
	((func_rhino_ast_FunctionNode_setRp_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setRp_int])(ctx, sp[0].o, (temp0 - temp1));
	LINE_NUMBER(678);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(682);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(683);
	clinit_java_util_HashSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashSet);
	init_java_util_HashSet(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(685);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(686);
	if ((frame[4].i) == (84)) goto label_7;
	}
	{
	if ((frame[4].i) != (86)) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(687);
	sp[0].o = (jobject)M_rhino_Parser_destructuringPrimaryExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(688);
	((func_rhino_Parser_markDestructuring_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_markDestructuring_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(689);
	((func_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[5].o));
	LINE_NUMBER(693);
	if ((frame[2].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(694);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(696);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	sp[0].o = (jobject)((func_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(697);
	((func_rhino_Parser_defineSymbol_int_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_defineSymbol_int_java_lang_String_boolean])(ctx, (frame[0].o), (88), (frame[6].o), (jint(0)));
	LINE_NUMBER(698);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[6].o), (frame[5].o));
	LINE_NUMBER(699);
	goto label_17;
	}
label_8:;
	{
	LINE_NUMBER(700);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (39), (((jobject) createStringLiteral(ctx, u8"msg.no.parm"_j))), (jint(1)));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(701);
	sp[0].o = (jobject)M_rhino_Parser_createNameNode_R_rhino_ast_Name(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(702);
	sp[0].o = (jobject)M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(703);
	if ((frame[6].o) == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(704);
	((func_rhino_ast_Name_setJsDocNode_rhino_ast_Comment) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_Name_setJsDocNode_rhino_ast_Comment])(ctx, (frame[5].o), (frame[6].o));
	}
label_22:;
	{
	LINE_NUMBER(706);
	((func_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[5].o));
	LINE_NUMBER(707);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(708);
	((func_rhino_Parser_defineSymbol_int_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_defineSymbol_int_java_lang_String])(ctx, (frame[0].o), (88), (frame[7].o));
	LINE_NUMBER(709);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective) == 0) goto label_27;
	}
	{
	LINE_NUMBER(710);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"eval"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"eval"_j))), (frame[7].o));
	if (temp0 != 0) goto label_29;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"arguments"_j));
	sp[1].o = frame[7].o;
	LINE_NUMBER(711);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_31;
	}
label_29:;
	{
	LINE_NUMBER(712);
	((func_rhino_Parser_reportError_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.id.strict"_j))), (frame[7].o));
	}
label_31:;
	{
	LINE_NUMBER(714);
	jint temp0 = (jint)((func_java_util_Set_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_contains_java_lang_Object_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[7].o));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(715);
	((func_rhino_Parser_addError_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.dup.param.strict"_j))), (frame[7].o));
	}
label_32:;
	{
	LINE_NUMBER(716);
	jint temp0 = (jint)((func_java_util_Set_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_add_java_lang_Object_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[7].o));
	}
label_27:;
	LINE_NUMBER(718);
	goto label_17;
label_18:;
	{
	LINE_NUMBER(719);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)M_rhino_Parser_makeErrorNode_R_rhino_ast_ErrorNode(ctx, (frame[0].o));
	((func_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	}
label_17:;
	{
	LINE_NUMBER(722);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (90), (jint(1)));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(724);
	if ((frame[2].o) == nullptr) goto label_35;
	}
	{
	LINE_NUMBER(725);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (90));
	frame[4].o = sp[0].o;
	LINE_NUMBER(727);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_38:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_39;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(728);
	sp[0].o = frame[0].o;
	jint temp0 = 123;
	sp[1].o = frame[6].o;
	LINE_NUMBER(729);
	sp[1].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[1].o = checkCast(ctx, &class_rhino_Node, sp[1].o);
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	sp[2].o = (jobject)((func_rhino_Parser_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_Parser_createName_java_lang_String_R_rhino_Node])(ctx, sp[2].o, (checkCast(ctx, &class_java_lang_String, sp[3].o)));
	LINE_NUMBER(728);
	sp[0].o = (jobject)((func_rhino_Parser_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node])(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(730);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[4].o), (frame[7].o));
	LINE_NUMBER(732);
	goto label_38;
	}
label_39:;
	{
	LINE_NUMBER(733);
	((func_rhino_ast_FunctionNode_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_putProp_int_java_lang_Object])(ctx, (frame[1].o), (23), (frame[4].o));
	}
label_35:;
	{
	LINE_NUMBER(736);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (89), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.after.parms"_j))), (jint(1)));
	if (temp0 == 0) goto label_45;
	}
	{
	LINE_NUMBER(737);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg;
	jint temp1 = (jint)((func_rhino_ast_FunctionNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getPosition_R_int])(ctx, (frame[1].o));
	((func_rhino_ast_FunctionNode_setRp_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setRp_int])(ctx, sp[0].o, (temp0 - temp1));
	}
label_45:;
	LINE_NUMBER(739);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Parser_function_int_R_rhino_ast_FunctionNode(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:function", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(743);
	sp[0].o = (jobject)M_rhino_Parser_function_int_boolean_R_rhino_ast_FunctionNode(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_function_int_boolean_R_rhino_ast_FunctionNode(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:function", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(748);
	frame[3].i = (frame[1].i);
	LINE_NUMBER(749);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(750);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[5].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(751);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(752);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(754);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (39), (jint(1)));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(755);
	sp[0].o = (jobject)M_rhino_Parser_createNameNode_boolean_int_R_rhino_ast_Name(ctx, (frame[0].o), (jint(1)), (39));
	frame[6].o = sp[0].o;
	LINE_NUMBER(756);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective) == 0) goto label_15;
	}
	{
	LINE_NUMBER(757);
	sp[0].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, (frame[6].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(758);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"eval"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"eval"_j))), (frame[8].o));
	if (temp0 != 0) goto label_18;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"arguments"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"arguments"_j))), (frame[8].o));
	if (temp0 == 0) goto label_15;
	}
label_18:;
	{
	LINE_NUMBER(759);
	((func_rhino_Parser_reportError_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.id.strict"_j))), (frame[8].o));
	}
label_15:;
	{
	LINE_NUMBER(762);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (88), (jint(1)));
	if (temp0 != 0) goto label_19;
	}
	{
	LINE_NUMBER(763);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isAllowMemberExprAsFunctionName_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isAllowMemberExprAsFunctionName_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(764);
	frame[8].o = (frame[6].o);
	LINE_NUMBER(765);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(766);
	sp[0].o = (jobject)M_rhino_Parser_memberExprTail_boolean_rhino_ast_AstNode_R_rhino_ast_AstNode(ctx, (frame[0].o), (jint(0)), (frame[8].o));
	frame[7].o = sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(768);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (88), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.parms"_j))), (jint(1)));
	goto label_19;
	}
label_12:;
	{
	LINE_NUMBER(770);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (88), (jint(1)));
	if (temp0 == 0) goto label_25;
	}
	goto label_19;
label_25:;
	{
	LINE_NUMBER(772);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (23), (jint(1)));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	LINE_NUMBER(773);
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 < (200)) goto label_26;
	}
	{
	LINE_NUMBER(775);
	sp[0].o = (jobject)M_rhino_Parser_function_int_boolean_R_rhino_ast_FunctionNode(ctx, (frame[0].o), (frame[1].i), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_26:;
	{
	LINE_NUMBER(777);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isAllowMemberExprAsFunctionName_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isAllowMemberExprAsFunctionName_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(781);
	sp[0].o = (jobject)M_rhino_Parser_memberExpr_boolean_R_rhino_ast_AstNode(ctx, (frame[0].o), (jint(0)));
	frame[7].o = sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(783);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (88), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.parms"_j))), (jint(1)));
	}
label_19:;
	{
	LINE_NUMBER(785);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken) != (88)) goto label_31;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg;
	sp[0].i = temp0;
	sp += 1;
	goto label_32;
	}
label_31:;
	INST_ICONST(-1);
label_32:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(787);
	if ((frame[7].o) == nullptr) goto label_34;
	}
	{
	LINE_NUMBER(788);
	frame[3].i = (jint(2));
	}
label_34:;
	{
	LINE_NUMBER(791);
	if ((frame[3].i) == (jint(2))) goto label_36;
	}
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_36;
	{
	sp[0].o = frame[6].o;
	LINE_NUMBER(792);
	jint temp0 = (jint)((func_rhino_ast_Name_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Name_length_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_36;
	}
	{
	LINE_NUMBER(794);
	sp[0].o = frame[0].o;
	jint temp0 = 110;
	sp[1].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, (frame[6].o));
	((func_rhino_Parser_defineSymbol_int_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_defineSymbol_int_java_lang_String])(ctx, sp[0].o, temp0, sp[1].o);
	}
label_36:;
	{
	LINE_NUMBER(797);
	clinit_rhino_ast_FunctionNode(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_FunctionNode);
	init_rhino_ast_FunctionNode_int_rhino_ast_Name(ctx, sp[0].o, (frame[5].i), (frame[6].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(798);
	((func_rhino_ast_FunctionNode_setFunctionType_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setFunctionType_int])(ctx, (frame[9].o), (frame[1].i));
	LINE_NUMBER(799);
	if ((frame[2].i) == 0) goto label_41;
	}
	{
	LINE_NUMBER(800);
	((func_rhino_ast_FunctionNode_setIsES6Generator) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setIsES6Generator])(ctx, (frame[9].o));
	}
label_41:;
	{
	LINE_NUMBER(802);
	if ((frame[8].i) == (jint(-1))) goto label_43;
	}
	{
	LINE_NUMBER(803);
	((func_rhino_ast_FunctionNode_setLp_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setLp_int])(ctx, (frame[9].o), ((frame[8].i) - (frame[5].i)));
	}
label_43:;
	{
	LINE_NUMBER(805);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(ctx, (frame[0].o));
	((func_rhino_ast_FunctionNode_setJsDocNode_rhino_ast_Comment) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setJsDocNode_rhino_ast_Comment])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(807);
	clinit_rhino_Parser$PerFunctionVariables(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Parser$PerFunctionVariables);
	init_rhino_Parser$PerFunctionVariables_rhino_Parser_rhino_ast_FunctionNode(ctx, sp[0].o, (frame[0].o), (frame[9].o));
	frame[10].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(809);
	M_rhino_Parser_parseFunctionParams_rhino_ast_FunctionNode(ctx, (frame[0].o), (frame[9].o));
	LINE_NUMBER(810);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)M_rhino_Parser_parseFunctionBody_int_rhino_ast_FunctionNode_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[1].i), (frame[9].o));
	((func_rhino_ast_FunctionNode_setBody_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setBody_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(811);
	sp[0].o = frame[9].o;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_FunctionNode_setEncodedSourceBounds_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setEncodedSourceBounds_int_int])(ctx, sp[0].o, temp0, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd));
	LINE_NUMBER(812);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_FunctionNode_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setLength_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd) - (frame[5].i)));
	LINE_NUMBER(814);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp1 = (jint)((func_rhino_CompilerEnvirons_isStrictMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isStrictMode_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_1;
	}
	{
	sp[0].o = frame[9].o;
	LINE_NUMBER(815);
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode])(ctx, sp[0].o);
	jint temp0 = (jint)((func_rhino_ast_AstNode_hasConsistentReturnUsage_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_hasConsistentReturnUsage_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(816);
	if ((frame[6].o) == nullptr) goto label_52;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_Name_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_Name_length_R_int])(ctx, (frame[6].o));
	if (temp0 <= 0) goto label_52;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"msg.no.return.value"_j));
	goto label_53;
label_52:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"msg.anon.no.return.value"_j));
label_53:;
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	LINE_NUMBER(819);
	sp[0].o = frame[0].o;
	sp[1].o = frame[11].o;
	sp += 2;
	if ((frame[6].o) != nullptr) goto label_55;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_56;
label_55:;
	INST_ALOAD(6);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_56:;
	POP_N(3); // Pop method args
	((func_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(822);
	((func_rhino_Parser$PerFunctionVariables_restore) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_Parser$PerFunctionVariables_restore])(ctx, (frame[10].o));
	LINE_NUMBER(823);
	goto label_58;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(822);
	INST_ASTORE(12);
	popExceptionFrame(frameRef);
	{
	((func_rhino_Parser$PerFunctionVariables_restore) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_Parser$PerFunctionVariables_restore])(ctx, (frame[10].o));
	LINE_NUMBER(823);
	throwException(ctx, (frame[12].o));	}
label_58:;
	{
	LINE_NUMBER(825);
	if ((frame[7].o) == nullptr) goto label_60;
	}
	{
	LINE_NUMBER(827);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	LINE_NUMBER(828);
	((func_rhino_ast_FunctionNode_setMemberExprNode_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setMemberExprNode_rhino_ast_AstNode])(ctx, (frame[9].o), (frame[7].o));
	}
label_60:;
	{
	LINE_NUMBER(840);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_sourceURI;
	((func_rhino_ast_FunctionNode_setSourceName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setSourceName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(841);
	((func_rhino_ast_FunctionNode_setBaseLineno_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setBaseLineno_int])(ctx, (frame[9].o), (frame[4].i));
	LINE_NUMBER(842);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_FunctionNode_setEndLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setEndLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	LINE_NUMBER(848);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isIdeMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isIdeMode_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_66;
	}
	{
	LINE_NUMBER(849);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope;
	((func_rhino_ast_FunctionNode_setParentScope_rhino_ast_Scope) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setParentScope_rhino_ast_Scope])(ctx, sp[0].o, sp[1].o);
	}
label_66:;
	{
	LINE_NUMBER(851);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_arrowFunction_rhino_ast_AstNode_R_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:arrowFunction", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(855);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(856);
	if ((frame[1].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_ICONST(-1);
label_9:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(858);
	clinit_rhino_ast_FunctionNode(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_FunctionNode);
	init_rhino_ast_FunctionNode_int(ctx, sp[0].o, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(859);
	((func_rhino_ast_FunctionNode_setFunctionType_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setFunctionType_int])(ctx, (frame[4].o), (jint(4)));
	LINE_NUMBER(860);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(ctx, (frame[0].o));
	((func_rhino_ast_FunctionNode_setJsDocNode_rhino_ast_Comment) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setJsDocNode_rhino_ast_Comment])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(864);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(865);
	clinit_java_util_HashSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashSet);
	init_java_util_HashSet(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(867);
	clinit_rhino_Parser$PerFunctionVariables(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Parser$PerFunctionVariables);
	init_rhino_Parser$PerFunctionVariables_rhino_Parser_rhino_ast_FunctionNode(ctx, sp[0].o, (frame[0].o), (frame[4].o));
	frame[7].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(869);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_ParenthesizedExpression)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(870);
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_rhino_ast_AstNode_getLength_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getLength_R_int])(ctx, (frame[1].o));
	((func_rhino_ast_FunctionNode_setParens_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setParens_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(871);
	sp[0].o = (jobject)((func_rhino_ast_ParenthesizedExpression_getExpression_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_ParenthesizedExpression, (frame[1].o))))->vtable)[VTABLE_rhino_ast_ParenthesizedExpression_getExpression_R_rhino_ast_AstNode])(ctx, (checkCast(ctx, &class_rhino_ast_ParenthesizedExpression, (frame[1].o))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(872);
	if ((isInstance(ctx, (frame[8].o), &class_rhino_ast_EmptyExpression)) != 0) goto label_20;
	}
	{
	LINE_NUMBER(873);
	M_rhino_Parser_arrowFunctionParams_rhino_ast_FunctionNode_rhino_ast_AstNode_java_util_Map_java_util_Set(ctx, (frame[0].o), (frame[4].o), (frame[8].o), (frame[5].o), (frame[6].o));
	}
label_20:;
	LINE_NUMBER(875);
	goto label_22;
label_16:;
	{
	LINE_NUMBER(876);
	M_rhino_Parser_arrowFunctionParams_rhino_ast_FunctionNode_rhino_ast_AstNode_java_util_Map_java_util_Set(ctx, (frame[0].o), (frame[4].o), (frame[1].o), (frame[5].o), (frame[6].o));
	}
label_22:;
	{
	LINE_NUMBER(879);
	jint temp0 = (jint)((func_java_util_Map_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_isEmpty_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 != 0) goto label_23;
	}
	{
	LINE_NUMBER(880);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (90));
	frame[8].o = sp[0].o;
	LINE_NUMBER(882);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[5].o)))(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_26:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(883);
	sp[0].o = frame[0].o;
	jint temp0 = 123;
	sp[1].o = frame[10].o;
	LINE_NUMBER(884);
	sp[1].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[1].o = checkCast(ctx, &class_rhino_Node, sp[1].o);
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	sp[2].o = (jobject)((func_rhino_Parser_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_Parser_createName_java_lang_String_R_rhino_Node])(ctx, sp[2].o, (checkCast(ctx, &class_java_lang_String, sp[3].o)));
	LINE_NUMBER(883);
	sp[0].o = (jobject)((func_rhino_Parser_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node])(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(885);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[8].o), (frame[11].o));
	LINE_NUMBER(887);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(888);
	((func_rhino_ast_FunctionNode_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_FunctionNode_putProp_int_java_lang_Object])(ctx, (frame[4].o), (23), (frame[8].o));
	}
label_23:;
	{
	LINE_NUMBER(891);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)M_rhino_Parser_parseFunctionBody_int_rhino_ast_FunctionNode_R_rhino_ast_AstNode(ctx, (frame[0].o), (jint(4)), (frame[4].o));
	((func_rhino_ast_FunctionNode_setBody_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setBody_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(892);
	sp[0].o = frame[4].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_FunctionNode_setEncodedSourceBounds_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setEncodedSourceBounds_int_int])(ctx, sp[0].o, temp0, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd));
	LINE_NUMBER(893);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_FunctionNode_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setLength_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd) - (frame[3].i)));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(895);
	((func_rhino_Parser$PerFunctionVariables_restore) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_Parser$PerFunctionVariables_restore])(ctx, (frame[7].o));
	LINE_NUMBER(896);
	goto label_36;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(895);
	INST_ASTORE(12);
	popExceptionFrame(frameRef);
	{
	((func_rhino_Parser$PerFunctionVariables_restore) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_Parser$PerFunctionVariables_restore])(ctx, (frame[7].o));
	LINE_NUMBER(896);
	throwException(ctx, (frame[12].o));	}
label_36:;
	{
	LINE_NUMBER(898);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_isGenerator_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_FunctionNode_isGenerator_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_38;
	}
	{
	LINE_NUMBER(899);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.arrowfunction.generator"_j))));
	LINE_NUMBER(900);
	sp[0].o = (jobject)M_rhino_Parser_makeErrorNode_R_rhino_ast_ErrorNode(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_38:;
	{
	LINE_NUMBER(903);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_sourceURI;
	((func_rhino_ast_FunctionNode_setSourceName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setSourceName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(904);
	((func_rhino_ast_FunctionNode_setBaseLineno_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setBaseLineno_int])(ctx, (frame[4].o), (frame[2].i));
	LINE_NUMBER(905);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_FunctionNode_setEndLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setEndLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	LINE_NUMBER(907);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_arrowFunctionParams_rhino_ast_FunctionNode_rhino_ast_AstNode_java_util_Map_java_util_Set(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:arrowFunctionParams", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(911);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_ast_ArrayLiteral)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_rhino_ast_ObjectLiteral)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(912);
	((func_rhino_Parser_markDestructuring_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_markDestructuring_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(913);
	((func_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(914);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	sp[0].o = (jobject)((func_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(915);
	((func_rhino_Parser_defineSymbol_int_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_defineSymbol_int_java_lang_String_boolean])(ctx, (frame[0].o), (88), (frame[5].o), (jint(0)));
	LINE_NUMBER(916);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[5].o), (frame[2].o));
	LINE_NUMBER(917);
	goto label_8;
	}
label_2:;
	{
	if ((isInstance(ctx, (frame[2].o), &class_rhino_ast_InfixExpression)) == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[2].o));
	if (temp0 != (90)) goto label_9;
	}
	{
	LINE_NUMBER(918);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_rhino_ast_InfixExpression_getLeft_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_InfixExpression, (frame[2].o))))->vtable)[VTABLE_rhino_ast_InfixExpression_getLeft_R_rhino_ast_AstNode])(ctx, (checkCast(ctx, &class_rhino_ast_InfixExpression, (frame[2].o))));
	M_rhino_Parser_arrowFunctionParams_rhino_ast_FunctionNode_rhino_ast_AstNode_java_util_Map_java_util_Set(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].o), (frame[4].o));
	LINE_NUMBER(919);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_rhino_ast_InfixExpression_getRight_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_InfixExpression, (frame[2].o))))->vtable)[VTABLE_rhino_ast_InfixExpression_getRight_R_rhino_ast_AstNode])(ctx, (checkCast(ctx, &class_rhino_ast_InfixExpression, (frame[2].o))));
	M_rhino_Parser_arrowFunctionParams_rhino_ast_FunctionNode_rhino_ast_AstNode_java_util_Map_java_util_Set(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].o), (frame[4].o));
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(920);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_ast_Name)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(921);
	((func_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(922);
	sp[0].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[2].o))))->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[2].o))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(923);
	((func_rhino_Parser_defineSymbol_int_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_defineSymbol_int_java_lang_String])(ctx, (frame[0].o), (88), (frame[5].o));
	LINE_NUMBER(925);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective) == 0) goto label_17;
	}
	{
	LINE_NUMBER(926);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"eval"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"eval"_j))), (frame[5].o));
	if (temp0 != 0) goto label_19;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"arguments"_j));
	sp[1].o = frame[5].o;
	LINE_NUMBER(927);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(928);
	((func_rhino_Parser_reportError_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.id.strict"_j))), (frame[5].o));
	}
label_21:;
	{
	LINE_NUMBER(930);
	jint temp0 = (jint)((func_java_util_Set_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_contains_java_lang_Object_R_boolean, (frame[4].o)))(ctx, (frame[4].o), (frame[5].o));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(931);
	((func_rhino_Parser_addError_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.dup.param.strict"_j))), (frame[5].o));
	}
label_22:;
	{
	LINE_NUMBER(932);
	jint temp0 = (jint)((func_java_util_Set_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_add_java_lang_Object_R_boolean, (frame[4].o)))(ctx, (frame[4].o), (frame[5].o));
	}
label_17:;
	LINE_NUMBER(934);
	goto label_8;
label_12:;
	{
	LINE_NUMBER(935);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"msg.no.parm"_j));
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_rhino_ast_AstNode_getLength_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getLength_R_int])(ctx, (frame[2].o));
	((func_rhino_Parser_reportError_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(936);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)M_rhino_Parser_makeErrorNode_R_rhino_ast_ErrorNode(ctx, (frame[0].o));
	((func_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	LINE_NUMBER(938);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Parser_statements_rhino_ast_AstNode_R_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:statements", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(949);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken) == (86)) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	LINE_NUMBER(950);
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isIdeMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isIdeMode_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(951);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(952);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	INST_ALOAD(1);
	goto label_5;
label_4:;
	{
	clinit_rhino_ast_CodeBlock(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_CodeBlock);
	init_rhino_ast_CodeBlock_int(ctx, sp[0].o, (frame[2].i));
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(953);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_AstNode_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	}
label_7:;
	{
	LINE_NUMBER(956);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_9;
	}
	{
	if ((frame[4].i) == (87)) goto label_9;
	}
	{
	LINE_NUMBER(957);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)M_rhino_Parser_statement_R_rhino_ast_AstNode(ctx, (frame[0].o));
	((func_rhino_ast_AstNode_addChild_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_addChild_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(959);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_AstNode_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_setLength_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg) - (frame[2].i)));
	LINE_NUMBER(960);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_statements_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:statements", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(964);
	sp[0].o = (jobject)M_rhino_Parser_statements_rhino_ast_AstNode_R_rhino_ast_AstNode(ctx, (frame[0].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_condition_R_rhino_Parser$ConditionData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:condition", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(976);
	clinit_rhino_Parser$ConditionData(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Parser$ConditionData);
	init_rhino_Parser$ConditionData_rhino_Parser$1(ctx, sp[0].o, (jobject(nullptr)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(978);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (88), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.cond"_j))), (jint(1)));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(979);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((rhino_Parser$ConditionData *) NULL_CHECK(sp[0].o))->F_lp = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg);
	}
label_2:;
	{
	LINE_NUMBER(981);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	((rhino_Parser$ConditionData *) NULL_CHECK(sp[0].o))->F_condition = (jref) sp[1].o;
	LINE_NUMBER(983);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (89), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.after.cond"_j))), (jint(1)));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(984);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((rhino_Parser$ConditionData *) NULL_CHECK(sp[0].o))->F_rp = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg);
	}
label_5:;
	{
	LINE_NUMBER(988);
	sp[0].o = (jobject)((rhino_Parser$ConditionData *) NULL_CHECK((frame[1].o)))->F_condition;
	if ((isInstance(ctx, sp[0].o, &class_rhino_ast_Assignment)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(989);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"msg.equal.as.assign"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[3].o = (jobject)((rhino_Parser$ConditionData *) NULL_CHECK((frame[1].o)))->F_condition;
	LINE_NUMBER(990);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, sp[3].o);
	sp[3].o = (jobject)((rhino_Parser$ConditionData *) NULL_CHECK((frame[1].o)))->F_condition;
	LINE_NUMBER(991);
	jint temp1 = (jint)((func_rhino_ast_AstNode_getLength_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_rhino_ast_AstNode_getLength_R_int])(ctx, sp[3].o);
	LINE_NUMBER(989);
	((func_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1);
	}
label_7:;
	{
	LINE_NUMBER(993);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_statement_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:statement", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(998);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_Parser$ParserException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1000);
	sp[0].o = (jobject)M_rhino_Parser_statementHelper_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1001);
	if ((frame[2].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1002);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isStrictMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isStrictMode_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_AstNode_hasSideEffects_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_hasSideEffects_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(1003);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(1004);
	jint temp1 = frame[3].i;
	jint temp2 = (jint)M_rhino_Parser_lineBeginningFor_int_R_int(ctx, (frame[0].o), (frame[3].i));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp1, temp2);
	frame[3].i = temp3;
	LINE_NUMBER(1005);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((isInstance(ctx, (frame[2].o), &class_rhino_ast_EmptyStatement)) == 0) goto label_12;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"msg.extra.trailing.semi"_j));
	goto label_13;
label_12:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"msg.no.side.effects"_j));
label_13:;
	{
	sp -= 2;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	jint temp0 = frame[3].i;
	sp[3].o = frame[0].o;
	sp[4].o = frame[2].o;
	LINE_NUMBER(1008);
	jint temp1 = (jint)M_rhino_Parser_nodeEnd_rhino_ast_AstNode_R_int(ctx, sp[3].o, sp[4].o);
	jint temp2 = temp1 - (frame[3].i);
	LINE_NUMBER(1005);
	((func_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp2);
	}
label_8:;
	{
	LINE_NUMBER(1010);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(1011);
	if ((frame[3].i) != (162)) goto label_17;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_AstNode_getLineno_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getLineno_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp1 - (jint(1))));
	jint temp2 = (jint)((func_rhino_ast_Comment_getLineno_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Comment, sp[0].o)))->vtable)[VTABLE_rhino_ast_Comment_getLineno_R_int])(ctx, (checkCast(ctx, &class_rhino_ast_Comment, sp[0].o)));
	if (temp0 != temp2) goto label_17;
	}
	{
	LINE_NUMBER(1012);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[2].o))(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, (temp0 - (jint(1))));
	((func_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode])(ctx, sp[0].o, (checkCast(ctx, &class_rhino_ast_AstNode, sp[1].o)));
	LINE_NUMBER(1013);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	}
label_17:;
	LINE_NUMBER(1015);
	INST_ALOAD(2);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	LINE_NUMBER(1019);
	goto label_20;
label_2:;
	LINE_NUMBER(1017);
	INST_ASTORE(2);
label_20:;
	{
	LINE_NUMBER(1024);
	jint temp0 = (jint)M_rhino_Parser_peekTokenOrEOL_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(1025);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1026);
	switch((frame[2].i)) {
		case -1: goto label_23;
		case 0: goto label_23;
		case 1: goto label_23;
		case 83: goto label_23;
		default: goto label_24;
	}
	}
label_23:;
	LINE_NUMBER(1031);
	goto label_25;
label_24:;
	LINE_NUMBER(1033);
	goto label_20;
label_25:;
	{
	LINE_NUMBER(1037);
	clinit_rhino_ast_EmptyStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_EmptyStatement);
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	init_rhino_ast_EmptyStatement_int_int(ctx, sp[0].o, temp0, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg) - (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_statementHelper_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:statementHelper", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1042);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentLabel;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentLabel;
	sp[0].o = (jobject)((func_rhino_ast_LabeledStatement_getStatement_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_LabeledStatement_getStatement_R_rhino_ast_AstNode])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1043);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentLabel = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(1046);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(1048);
	switch((frame[2].i)) {
		case -1: goto label_4;
		case 4: goto label_5;
		case 39: goto label_6;
		case 50: goto label_7;
		case 73: goto label_5;
		case 82: goto label_8;
		case 83: goto label_9;
		case 86: goto label_10;
		case 110: goto label_11;
		case 113: goto label_12;
		case 115: goto label_13;
		case 118: goto label_14;
		case 119: goto label_15;
		case 120: goto label_16;
		case 121: goto label_17;
		case 122: goto label_18;
		case 123: goto label_19;
		case 124: goto label_20;
		case 154: goto label_21;
		case 155: goto label_19;
		case 161: goto label_22;
		case 162: goto label_23;
		default: goto label_24;
	}
	}
label_12:;
	{
	LINE_NUMBER(1050);
	sp[0].o = (jobject)M_rhino_Parser_ifStatement_R_rhino_ast_IfStatement(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(1053);
	sp[0].o = (jobject)M_rhino_Parser_switchStatement_R_rhino_ast_SwitchStatement(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(1056);
	sp[0].o = (jobject)M_rhino_Parser_whileLoop_R_rhino_ast_WhileLoop(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(1059);
	sp[0].o = (jobject)M_rhino_Parser_doLoop_R_rhino_ast_DoLoop(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(1062);
	sp[0].o = (jobject)M_rhino_Parser_forLoop_R_rhino_ast_Loop(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(1065);
	sp[0].o = (jobject)M_rhino_Parser_tryStatement_R_rhino_ast_TryStatement(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(1068);
	sp[0].o = (jobject)M_rhino_Parser_throwStatement_R_rhino_ast_ThrowStatement(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1069);
	goto label_26;
	}
label_17:;
	{
	LINE_NUMBER(1072);
	sp[0].o = (jobject)M_rhino_Parser_breakStatement_R_rhino_ast_BreakStatement(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1073);
	goto label_26;
	}
label_18:;
	{
	LINE_NUMBER(1076);
	sp[0].o = (jobject)M_rhino_Parser_continueStatement_R_rhino_ast_ContinueStatement(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1077);
	goto label_26;
	}
label_20:;
	{
	LINE_NUMBER(1080);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective) == 0) goto label_29;
	}
	{
	LINE_NUMBER(1081);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.no.with.strict"_j))));
	}
label_29:;
	{
	LINE_NUMBER(1083);
	sp[0].o = (jobject)M_rhino_Parser_withStatement_R_rhino_ast_WithStatement(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(1087);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1088);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(1089);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)M_rhino_Parser_variables_int_int_boolean_R_rhino_ast_VariableDeclaration(ctx, sp[0].o, temp0, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg), (jint(1)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1090);
	((func_rhino_ast_AstNode_setLineno_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setLineno_int])(ctx, (frame[1].o), (frame[4].i));
	LINE_NUMBER(1091);
	goto label_26;
	}
label_21:;
	{
	LINE_NUMBER(1094);
	sp[0].o = (jobject)M_rhino_Parser_letStatement_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1095);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_VariableDeclaration)) == 0) goto label_36;
	}
	{
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 != (83)) goto label_36;
	}
	LINE_NUMBER(1096);
	goto label_26;
label_36:;
	{
	LINE_NUMBER(1097);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_5:;
	{
	LINE_NUMBER(1101);
	sp[0].o = (jobject)M_rhino_Parser_returnOrYield_int_boolean_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[2].i), (jint(0)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1102);
	goto label_26;
	}
label_22:;
	{
	LINE_NUMBER(1105);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1106);
	clinit_rhino_ast_KeywordLiteral(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_KeywordLiteral);
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp1 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	init_rhino_ast_KeywordLiteral_int_int_int(ctx, sp[0].o, temp0, (temp1 - ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg)), (frame[2].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1108);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_AstNode_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	LINE_NUMBER(1109);
	goto label_26;
	}
label_10:;
	{
	LINE_NUMBER(1112);
	sp[0].o = (jobject)M_rhino_Parser_block_R_rhino_ast_AstNode(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1115);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1116);
	sp[0].o = (jobject)M_rhino_Parser_makeErrorNode_R_rhino_ast_ErrorNode(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(1119);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1120);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(1121);
	clinit_rhino_ast_EmptyStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_EmptyStatement);
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	init_rhino_ast_EmptyStatement_int_int(ctx, sp[0].o, temp0, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd) - (frame[3].i)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1122);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_AstNode_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	LINE_NUMBER(1123);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_11:;
	{
	LINE_NUMBER(1126);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1127);
	sp[0].o = (jobject)M_rhino_Parser_function_int_R_rhino_ast_FunctionNode(ctx, (frame[0].o), (jint(3)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(1130);
	sp[0].o = (jobject)M_rhino_Parser_nameOrLabel_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1131);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_ExpressionStatement)) == 0) goto label_49;
	}
	LINE_NUMBER(1132);
	goto label_26;
label_49:;
	{
	LINE_NUMBER(1133);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_23:;
	{
	LINE_NUMBER(1136);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[1].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(1137);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_24:;
	{
	LINE_NUMBER(1139);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(1140);
	clinit_rhino_ast_ExpressionStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ExpressionStatement);
	sp[1].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	jint temp0 = (jint)((func_rhino_Parser_insideFunction_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_insideFunction_R_boolean])(ctx, (frame[0].o));
	jobject temp1 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp1;
	sp += 3;
	if (temp0 != 0) goto label_53;
	}
	INST_ICONST(1);
	goto label_54;
label_53:;
	INST_ICONST(0);
label_54:;
	{
	sp -= 4;
	init_rhino_ast_ExpressionStatement_rhino_ast_AstNode_boolean(ctx, sp[0].o, sp[2].o, sp[3].i);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1141);
	((func_rhino_ast_AstNode_setLineno_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setLineno_int])(ctx, (frame[1].o), (frame[4].i));
	}
label_26:;
	{
	LINE_NUMBER(1145);
	M_rhino_Parser_autoInsertSemicolon_rhino_ast_AstNode(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1146);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_autoInsertSemicolon_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:autoInsertSemicolon", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1150);
	jint temp0 = (jint)M_rhino_Parser_peekFlaggedToken_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(1151);
	jint temp1 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[1].o));
	frame[3].i = temp1;
	LINE_NUMBER(1152);
	switch(((frame[2].i) & (jint(65535)))) {
		case -1: goto label_3;
		case 0: goto label_3;
		case 83: goto label_4;
		case 87: goto label_3;
		default: goto label_5;
	}
	}
label_4:;
	{
	LINE_NUMBER(1155);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1157);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_AstNode_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_setLength_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd) - (frame[3].i)));
	LINE_NUMBER(1158);
	goto label_8;
	}
label_3:;
	{
	LINE_NUMBER(1165);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	jint temp1 = (frame[3].i) + (jint(1));
	jint temp2 = (jint)M_rhino_Parser_nodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[1].o));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp1, temp2);
	M_rhino_Parser_warnMissingSemi_int_int(ctx, sp[0].o, temp0, temp3);
	LINE_NUMBER(1166);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(1168);
	if (((frame[2].i) & (jint(65536))) != 0) goto label_10;
	}
	{
	LINE_NUMBER(1170);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.no.semi.stmt"_j))));
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(1172);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)M_rhino_Parser_nodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[1].o));
	M_rhino_Parser_warnMissingSemi_int_int(ctx, sp[0].o, temp0, temp1);
	}
label_8:;
	LINE_NUMBER(1176);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Parser_ifStatement_R_rhino_ast_IfStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:ifStatement", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1180);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken) == (113)) goto label_1;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(1181);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1182);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	frame[3].i = (jint(-1));
	LINE_NUMBER(1183);
	clinit_rhino_ast_IfStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_IfStatement);
	init_rhino_ast_IfStatement_int(ctx, sp[0].o, (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1184);
	sp[0].o = (jobject)M_rhino_Parser_condition_R_rhino_Parser$ConditionData(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1185);
	sp[0].o = (jobject)M_rhino_Parser_getNextStatementAfterInlineComments_rhino_ast_AstNode_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[4].o));
	frame[6].o = sp[0].o;
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(1186);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (114), (jint(1)));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(1187);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[8].i = temp0;
	LINE_NUMBER(1188);
	if ((frame[8].i) != (162)) goto label_13;
	}
	{
	LINE_NUMBER(1189);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[2].o))(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, (temp0 - (jint(1))));
	((func_rhino_ast_IfStatement_setElseKeyWordInlineComment_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_IfStatement_setElseKeyWordInlineComment_rhino_ast_AstNode])(ctx, sp[0].o, (checkCast(ctx, &class_rhino_ast_AstNode, sp[1].o)));
	LINE_NUMBER(1190);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	}
label_13:;
	{
	LINE_NUMBER(1192);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg) - (frame[1].i));
	LINE_NUMBER(1193);
	sp[0].o = (jobject)M_rhino_Parser_statement_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(1195);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[7].o) == nullptr) goto label_17;
	}
	INST_ALOAD(7);
	goto label_18;
label_17:;
	INST_ALOAD(6);
label_18:;
	{
	sp -= 2;
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, sp[0].o, sp[1].o);
	frame[8].i = temp0;
	LINE_NUMBER(1196);
	((func_rhino_ast_IfStatement_setLength_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_IfStatement_setLength_int])(ctx, (frame[4].o), ((frame[8].i) - (frame[1].i)));
	LINE_NUMBER(1197);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_Parser$ConditionData *) NULL_CHECK((frame[5].o)))->F_condition;
	((func_rhino_ast_IfStatement_setCondition_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_IfStatement_setCondition_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1198);
	((func_rhino_ast_IfStatement_setParens_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_IfStatement_setParens_int_int])(ctx, (frame[4].o), (((jint)((rhino_Parser$ConditionData *) NULL_CHECK((frame[5].o)))->F_lp) - (frame[1].i)), (((jint)((rhino_Parser$ConditionData *) NULL_CHECK((frame[5].o)))->F_rp) - (frame[1].i)));
	LINE_NUMBER(1199);
	((func_rhino_ast_IfStatement_setThenPart_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_IfStatement_setThenPart_rhino_ast_AstNode])(ctx, (frame[4].o), (frame[6].o));
	LINE_NUMBER(1200);
	((func_rhino_ast_IfStatement_setElsePart_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_IfStatement_setElsePart_rhino_ast_AstNode])(ctx, (frame[4].o), (frame[7].o));
	LINE_NUMBER(1201);
	((func_rhino_ast_IfStatement_setElsePosition_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_IfStatement_setElsePosition_int])(ctx, (frame[4].o), (frame[3].i));
	LINE_NUMBER(1202);
	((func_rhino_ast_IfStatement_setLineno_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_IfStatement_setLineno_int])(ctx, (frame[4].o), (frame[2].i));
	LINE_NUMBER(1203);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_switchStatement_R_rhino_ast_SwitchStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:switchStatement", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1208);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken) == (115)) goto label_7;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(1209);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1210);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(1212);
	clinit_rhino_ast_SwitchStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_SwitchStatement);
	init_rhino_ast_SwitchStatement_int(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1213);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (88), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.switch"_j))), (jint(1)));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(1214);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_SwitchStatement_setLp_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_SwitchStatement_setLp_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg) - (frame[1].i)));
	}
label_11:;
	{
	LINE_NUMBER(1215);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_SwitchStatement_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_SwitchStatement_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	LINE_NUMBER(1217);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1218);
	((func_rhino_ast_SwitchStatement_setExpression_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_SwitchStatement_setExpression_rhino_ast_AstNode])(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(1219);
	M_rhino_Parser_enterSwitch_rhino_ast_SwitchStatement(ctx, (frame[0].o), (frame[2].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1222);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (89), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.after.switch"_j))), (jint(1)));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(1223);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_SwitchStatement_setRp_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_SwitchStatement_setRp_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg) - (frame[1].i)));
	}
label_16:;
	{
	LINE_NUMBER(1225);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (86), (((jobject) createStringLiteral(ctx, u8"msg.no.brace.switch"_j))), (jint(1)));
	LINE_NUMBER(1227);
	frame[4].i = (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(1231);
	jint temp0 = (jint)M_rhino_Parser_nextToken_R_int(ctx, (frame[0].o));
	frame[5].i = temp0;
	LINE_NUMBER(1232);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[6].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(1233);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[7].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(1234);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(1235);
	switch((frame[5].i)) {
		case 87: goto label_24;
		case 116: goto label_25;
		case 117: goto label_26;
		case 162: goto label_27;
		default: goto label_28;
	}
	}
label_24:;
	{
	LINE_NUMBER(1237);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_SwitchStatement_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_SwitchStatement_setLength_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd) - (frame[1].i)));
	LINE_NUMBER(1238);
	goto label_1;
	}
label_25:;
	{
	LINE_NUMBER(1241);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1242);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (104), (((jobject) createStringLiteral(ctx, u8"msg.no.colon.case"_j))), (jint(1)));
	LINE_NUMBER(1243);
	goto label_32;
	}
label_26:;
	{
	LINE_NUMBER(1246);
	if ((frame[4].i) == 0) goto label_33;
	}
	{
	LINE_NUMBER(1247);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.double.switch.default"_j))));
	}
label_33:;
	{
	LINE_NUMBER(1249);
	frame[4].i = (jint(1));
	LINE_NUMBER(1250);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (104), (((jobject) createStringLiteral(ctx, u8"msg.no.colon.case"_j))), (jint(1)));
	LINE_NUMBER(1251);
	goto label_32;
	}
label_27:;
	{
	LINE_NUMBER(1253);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[9].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(1254);
	((func_rhino_ast_SwitchStatement_addChild_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_SwitchStatement_addChild_rhino_ast_AstNode])(ctx, (frame[2].o), (frame[9].o));
	LINE_NUMBER(1255);
	goto label_19;
	}
label_28:;
	{
	LINE_NUMBER(1257);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.switch"_j))));
	LINE_NUMBER(1258);
	goto label_1;
	}
label_32:;
	{
	LINE_NUMBER(1261);
	clinit_rhino_ast_SwitchCase(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_SwitchCase);
	init_rhino_ast_SwitchCase_int(ctx, sp[0].o, (frame[6].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1262);
	((func_rhino_ast_SwitchCase_setExpression_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_SwitchCase_setExpression_rhino_ast_AstNode])(ctx, (frame[9].o), (frame[8].o));
	LINE_NUMBER(1263);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_SwitchCase_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_SwitchCase_setLength_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd) - (frame[1].i)));
	LINE_NUMBER(1264);
	((func_rhino_ast_SwitchCase_setLineno_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_SwitchCase_setLineno_int])(ctx, (frame[9].o), (frame[7].i));
	}
label_43:;
	{
	LINE_NUMBER(1266);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[5].i = temp0;
	if (temp0 == (87)) goto label_44;
	}
	{
	if ((frame[5].i) == (116)) goto label_44;
	}
	{
	if ((frame[5].i) == (117)) goto label_44;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_44;
	{
	LINE_NUMBER(1270);
	if ((frame[5].i) != (162)) goto label_46;
	}
	{
	LINE_NUMBER(1271);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[10].o = (checkCast(ctx, &class_rhino_ast_Comment, sp[0].o));
	LINE_NUMBER(1272);
	sp[0].o = (jobject)((func_rhino_ast_SwitchCase_getInlineComment_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_SwitchCase_getInlineComment_R_rhino_ast_AstNode])(ctx, (frame[9].o));
	if (sp[0].o != nullptr) goto label_49;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_Comment_getLineno_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_Comment_getLineno_R_int])(ctx, (frame[10].o));
	jint temp1 = (jint)((func_rhino_ast_SwitchCase_getLineno_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_SwitchCase_getLineno_R_int])(ctx, (frame[9].o));
	if (temp0 != temp1) goto label_49;
	}
	{
	LINE_NUMBER(1273);
	((func_rhino_ast_SwitchCase_setInlineComment_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_SwitchCase_setInlineComment_rhino_ast_AstNode])(ctx, (frame[9].o), (frame[10].o));
	goto label_51;
	}
label_49:;
	{
	LINE_NUMBER(1275);
	((func_rhino_ast_SwitchCase_addStatement_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_SwitchCase_addStatement_rhino_ast_AstNode])(ctx, (frame[9].o), (frame[10].o));
	}
label_51:;
	{
	LINE_NUMBER(1277);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1278);
	goto label_43;
	}
label_46:;
	{
	LINE_NUMBER(1280);
	sp[0].o = (jobject)M_rhino_Parser_statement_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1281);
	((func_rhino_ast_SwitchCase_addStatement_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_SwitchCase_addStatement_rhino_ast_AstNode])(ctx, (frame[9].o), (frame[10].o));
	LINE_NUMBER(1282);
	goto label_43;
	}
label_44:;
	{
	LINE_NUMBER(1283);
	((func_rhino_ast_SwitchStatement_addCase_rhino_ast_SwitchCase) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_SwitchStatement_addCase_rhino_ast_SwitchCase])(ctx, (frame[2].o), (frame[9].o));
	LINE_NUMBER(1284);
	goto label_19;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1286);
	M_rhino_Parser_exitSwitch(ctx, (frame[0].o));
	LINE_NUMBER(1287);
	goto label_57;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1286);
	INST_ASTORE(11);
	popExceptionFrame(frameRef);
	{
	M_rhino_Parser_exitSwitch(ctx, (frame[0].o));
	LINE_NUMBER(1287);
	throwException(ctx, (frame[11].o));	}
label_57:;
	{
	LINE_NUMBER(1288);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_whileLoop_R_rhino_ast_WhileLoop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:whileLoop", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1293);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken) == (118)) goto label_7;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(1294);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1295);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(1296);
	clinit_rhino_ast_WhileLoop(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_WhileLoop);
	init_rhino_ast_WhileLoop_int(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1297);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_WhileLoop_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_WhileLoop_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	LINE_NUMBER(1298);
	M_rhino_Parser_enterLoop_rhino_ast_Loop(ctx, (frame[0].o), (frame[2].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1300);
	sp[0].o = (jobject)M_rhino_Parser_condition_R_rhino_Parser$ConditionData(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1301);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Parser$ConditionData *) NULL_CHECK((frame[3].o)))->F_condition;
	((func_rhino_ast_WhileLoop_setCondition_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_WhileLoop_setCondition_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1302);
	((func_rhino_ast_WhileLoop_setParens_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_WhileLoop_setParens_int_int])(ctx, (frame[2].o), (((jint)((rhino_Parser$ConditionData *) NULL_CHECK((frame[3].o)))->F_lp) - (frame[1].i)), (((jint)((rhino_Parser$ConditionData *) NULL_CHECK((frame[3].o)))->F_rp) - (frame[1].i)));
	LINE_NUMBER(1303);
	sp[0].o = (jobject)M_rhino_Parser_getNextStatementAfterInlineComments_rhino_ast_AstNode_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1304);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[4].o));
	((func_rhino_ast_WhileLoop_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_WhileLoop_setLength_int])(ctx, sp[0].o, (temp0 - (frame[1].i)));
	LINE_NUMBER(1305);
	((func_rhino_ast_WhileLoop_setBody_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_WhileLoop_setBody_rhino_ast_AstNode])(ctx, (frame[2].o), (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1307);
	M_rhino_Parser_exitLoop(ctx, (frame[0].o));
	LINE_NUMBER(1308);
	goto label_18;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1307);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	M_rhino_Parser_exitLoop(ctx, (frame[0].o));
	LINE_NUMBER(1308);
	throwException(ctx, (frame[5].o));	}
label_18:;
	{
	LINE_NUMBER(1309);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_doLoop_R_rhino_ast_DoLoop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:doLoop", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1314);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken) == (119)) goto label_7;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(1315);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1316);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(1317);
	clinit_rhino_ast_DoLoop(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_DoLoop);
	init_rhino_ast_DoLoop_int(ctx, sp[0].o, (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1318);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_DoLoop_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_DoLoop_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	LINE_NUMBER(1319);
	M_rhino_Parser_enterLoop_rhino_ast_Loop(ctx, (frame[0].o), (frame[3].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1321);
	sp[0].o = (jobject)M_rhino_Parser_getNextStatementAfterInlineComments_rhino_ast_AstNode_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1322);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (118), (((jobject) createStringLiteral(ctx, u8"msg.no.while.do"_j))), (jint(1)));
	LINE_NUMBER(1323);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_DoLoop_setWhilePosition_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_DoLoop_setWhilePosition_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg) - (frame[1].i)));
	LINE_NUMBER(1324);
	sp[0].o = (jobject)M_rhino_Parser_condition_R_rhino_Parser$ConditionData(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1325);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Parser$ConditionData *) NULL_CHECK((frame[5].o)))->F_condition;
	((func_rhino_ast_DoLoop_setCondition_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_DoLoop_setCondition_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1326);
	((func_rhino_ast_DoLoop_setParens_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_DoLoop_setParens_int_int])(ctx, (frame[3].o), (((jint)((rhino_Parser$ConditionData *) NULL_CHECK((frame[5].o)))->F_lp) - (frame[1].i)), (((jint)((rhino_Parser$ConditionData *) NULL_CHECK((frame[5].o)))->F_rp) - (frame[1].i)));
	LINE_NUMBER(1327);
	jint temp1 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[4].o));
	frame[2].i = temp1;
	LINE_NUMBER(1328);
	((func_rhino_ast_DoLoop_setBody_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_DoLoop_setBody_rhino_ast_AstNode])(ctx, (frame[3].o), (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1330);
	M_rhino_Parser_exitLoop(ctx, (frame[0].o));
	LINE_NUMBER(1331);
	goto label_20;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1330);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	M_rhino_Parser_exitLoop(ctx, (frame[0].o));
	LINE_NUMBER(1331);
	throwException(ctx, (frame[6].o));	}
label_20:;
	{
	LINE_NUMBER(1335);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (83), (jint(1)));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(1336);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	}
label_22:;
	{
	LINE_NUMBER(1338);
	((func_rhino_ast_DoLoop_setLength_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_DoLoop_setLength_int])(ctx, (frame[3].o), ((frame[2].i) - (frame[1].i)));
	LINE_NUMBER(1339);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jint M_rhino_Parser_peekUntilNonComment_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:peekUntilNonComment", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
label_0:;
	{
	LINE_NUMBER(1343);
	if ((frame[1].i) != (162)) goto label_1;
	}
	{
	LINE_NUMBER(1344);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1345);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(1347);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_getNextStatementAfterInlineComments_rhino_ast_AstNode_R_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:getNextStatementAfterInlineComments", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1351);
	sp[0].o = (jobject)M_rhino_Parser_statement_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1352);
	jint temp0 = 162;
	jint temp1 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[2].o));
	if (temp0 != temp1) goto label_2;
	}
	{
	LINE_NUMBER(1353);
	frame[3].o = (frame[2].o);
	LINE_NUMBER(1354);
	sp[0].o = (jobject)M_rhino_Parser_statement_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1355);
	if ((frame[1].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1356);
	((func_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[3].o));
	goto label_2;
	}
label_6:;
	{
	LINE_NUMBER(1358);
	((func_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode])(ctx, (frame[2].o), (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(1361);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_forLoop_R_rhino_ast_Loop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:forLoop", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1366);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken) == (120)) goto label_13;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_13:;
	{
	LINE_NUMBER(1367);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1368);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(1369);
	frame[3].i = (jint(0));
	frame[4].i = (jint(0));
	frame[5].i = (jint(0));
	LINE_NUMBER(1370);
	frame[6].i = (jint(-1));
	frame[7].i = (jint(-1));
	frame[8].i = (jint(-1));
	frame[9].i = (jint(-1));
	LINE_NUMBER(1373);
	frame[12].o = (jobject(nullptr));
	LINE_NUMBER(1376);
	clinit_rhino_ast_Scope(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Scope);
	init_rhino_ast_Scope(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	LINE_NUMBER(1377);
	((func_rhino_Parser_pushScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_pushScope_rhino_ast_Scope])(ctx, (frame[0].o), (frame[14].o));
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(1380);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (39), (jint(1)));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(1381);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"each"_j));
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[1].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(1382);
	frame[3].i = (jint(1));
	LINE_NUMBER(1383);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[6].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg) - (frame[1].i));
	goto label_26;
	}
label_28:;
	{
	LINE_NUMBER(1385);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.for"_j))));
	}
label_26:;
	{
	LINE_NUMBER(1389);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (88), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.for"_j))), (jint(1)));
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(1390);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[8].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg) - (frame[1].i));
	}
label_31:;
	{
	LINE_NUMBER(1391);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[15].i = temp0;
	LINE_NUMBER(1393);
	sp[0].o = (jobject)M_rhino_Parser_forLoopInit_int_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[15].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1394);
	jint temp1 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (52), (jint(1)));
	if (temp1 == 0) goto label_35;
	}
	{
	LINE_NUMBER(1395);
	frame[4].i = (jint(1));
	LINE_NUMBER(1396);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[7].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg) - (frame[1].i));
	LINE_NUMBER(1397);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[11].o = sp[0].o;
	goto label_40;
	}
label_35:;
	{
	LINE_NUMBER(1398);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 < (200)) goto label_41;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = 39;
	jint temp1 = jint(1);
	LINE_NUMBER(1399);
	jint temp2 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp2 == 0) goto label_41;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"of"_j));
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[1].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_41;
	}
	{
	LINE_NUMBER(1400);
	frame[5].i = (jint(1));
	LINE_NUMBER(1401);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[7].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg) - (frame[1].i));
	LINE_NUMBER(1402);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[11].o = sp[0].o;
	goto label_40;
	}
label_41:;
	{
	LINE_NUMBER(1404);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (83), (((jobject) createStringLiteral(ctx, u8"msg.no.semi.for"_j))), (jint(1)));
	LINE_NUMBER(1405);
	jint temp1 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp1 != (83)) goto label_48;
	}
	{
	LINE_NUMBER(1407);
	clinit_rhino_ast_EmptyExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_EmptyExpression);
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	init_rhino_ast_EmptyExpression_int_int(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg), (jint(1)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1408);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_AstNode_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	goto label_51;
	}
label_48:;
	{
	LINE_NUMBER(1410);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[11].o = sp[0].o;
	}
label_51:;
	{
	LINE_NUMBER(1413);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (83), (((jobject) createStringLiteral(ctx, u8"msg.no.semi.for.cond"_j))), (jint(1)));
	LINE_NUMBER(1414);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[16].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	LINE_NUMBER(1415);
	jint temp1 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp1 != (89)) goto label_54;
	}
	{
	LINE_NUMBER(1416);
	clinit_rhino_ast_EmptyExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_EmptyExpression);
	init_rhino_ast_EmptyExpression_int_int(ctx, sp[0].o, (frame[16].i), (jint(1)));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1417);
	sp[0].o = frame[12].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_AstNode_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	goto label_40;
	}
label_54:;
	{
	LINE_NUMBER(1419);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[12].o = sp[0].o;
	}
label_40:;
	{
	LINE_NUMBER(1423);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (89), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.for.ctrl"_j))), (jint(1)));
	if (temp0 == 0) goto label_57;
	}
	{
	LINE_NUMBER(1424);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[9].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg) - (frame[1].i));
	}
label_57:;
	{
	LINE_NUMBER(1426);
	if ((frame[4].i) != 0) goto label_59;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_60;
label_59:;
	{
	LINE_NUMBER(1427);
	clinit_rhino_ast_ForInLoop(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ForInLoop);
	init_rhino_ast_ForInLoop_int(ctx, sp[0].o, (frame[1].i));
	frame[16].o = sp[0].o;
	LINE_NUMBER(1428);
	if ((isInstance(ctx, (frame[10].o), &class_rhino_ast_VariableDeclaration)) == 0) goto label_62;
	}
	{
	LINE_NUMBER(1430);
	sp[0].o = (jobject)((func_rhino_ast_VariableDeclaration_getVariables_R_java_util_List) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_VariableDeclaration, (frame[10].o))))->vtable)[VTABLE_rhino_ast_VariableDeclaration_getVariables_R_java_util_List])(ctx, (checkCast(ctx, &class_rhino_ast_VariableDeclaration, (frame[10].o))));
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 <= (jint(1))) goto label_62;
	}
	{
	LINE_NUMBER(1431);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.mult.index"_j))));
	}
label_62:;
	{
	LINE_NUMBER(1434);
	if ((frame[5].i) == 0) goto label_65;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_65;
	{
	LINE_NUMBER(1435);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.invalid.for.each"_j))));
	}
label_65:;
	{
	LINE_NUMBER(1437);
	((func_rhino_ast_ForInLoop_setIterator_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_rhino_ast_ForInLoop_setIterator_rhino_ast_AstNode])(ctx, (frame[16].o), (frame[10].o));
	LINE_NUMBER(1438);
	((func_rhino_ast_ForInLoop_setIteratedObject_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_rhino_ast_ForInLoop_setIteratedObject_rhino_ast_AstNode])(ctx, (frame[16].o), (frame[11].o));
	LINE_NUMBER(1439);
	((func_rhino_ast_ForInLoop_setInPosition_int) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_rhino_ast_ForInLoop_setInPosition_int])(ctx, (frame[16].o), (frame[7].i));
	LINE_NUMBER(1440);
	((func_rhino_ast_ForInLoop_setIsForEach_boolean) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_rhino_ast_ForInLoop_setIsForEach_boolean])(ctx, (frame[16].o), (frame[3].i));
	LINE_NUMBER(1441);
	((func_rhino_ast_ForInLoop_setEachPosition_int) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_rhino_ast_ForInLoop_setEachPosition_int])(ctx, (frame[16].o), (frame[6].i));
	LINE_NUMBER(1442);
	((func_rhino_ast_ForInLoop_setIsForOf_boolean) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_rhino_ast_ForInLoop_setIsForOf_boolean])(ctx, (frame[16].o), (frame[5].i));
	LINE_NUMBER(1443);
	frame[13].o = (frame[16].o);
	LINE_NUMBER(1444);
	goto label_74;
	}
label_60:;
	{
	LINE_NUMBER(1445);
	clinit_rhino_ast_ForLoop(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ForLoop);
	init_rhino_ast_ForLoop_int(ctx, sp[0].o, (frame[1].i));
	frame[16].o = sp[0].o;
	LINE_NUMBER(1446);
	((func_rhino_ast_ForLoop_setInitializer_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_rhino_ast_ForLoop_setInitializer_rhino_ast_AstNode])(ctx, (frame[16].o), (frame[10].o));
	LINE_NUMBER(1447);
	((func_rhino_ast_ForLoop_setCondition_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_rhino_ast_ForLoop_setCondition_rhino_ast_AstNode])(ctx, (frame[16].o), (frame[11].o));
	LINE_NUMBER(1448);
	((func_rhino_ast_ForLoop_setIncrement_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_rhino_ast_ForLoop_setIncrement_rhino_ast_AstNode])(ctx, (frame[16].o), (frame[12].o));
	LINE_NUMBER(1449);
	frame[13].o = (frame[16].o);
	}
label_74:;
	{
	LINE_NUMBER(1453);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope;
	((func_rhino_ast_Scope_replaceWith_rhino_ast_Scope) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Scope_replaceWith_rhino_ast_Scope])(ctx, sp[0].o, (frame[13].o));
	LINE_NUMBER(1454);
	((func_rhino_Parser_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(1459);
	M_rhino_Parser_enterLoop_rhino_ast_Loop(ctx, (frame[0].o), (frame[13].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1461);
	sp[0].o = (jobject)M_rhino_Parser_getNextStatementAfterInlineComments_rhino_ast_AstNode_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[13].o));
	frame[16].o = sp[0].o;
	LINE_NUMBER(1462);
	sp[0].o = frame[13].o;
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[16].o));
	((func_rhino_ast_Loop_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Loop_setLength_int])(ctx, sp[0].o, (temp0 - (frame[1].i)));
	LINE_NUMBER(1463);
	((func_rhino_ast_Loop_setBody_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_ast_Loop_setBody_rhino_ast_AstNode])(ctx, (frame[13].o), (frame[16].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1465);
	M_rhino_Parser_exitLoop(ctx, (frame[0].o));
	LINE_NUMBER(1466);
	goto label_7;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1465);
	INST_ASTORE(17);
	popExceptionFrame(frameRef);
	{
	M_rhino_Parser_exitLoop(ctx, (frame[0].o));
	LINE_NUMBER(1466);
	throwException(ctx, (frame[17].o));	}
label_7:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1469);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope;
	if (sp[0].o != (frame[14].o)) goto label_85;
	}
	{
	LINE_NUMBER(1470);
	((func_rhino_Parser_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_popScope])(ctx, (frame[0].o));
	goto label_85;
	}
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	LINE_NUMBER(1469);
	INST_ASTORE(18);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope;
	if (sp[0].o != (frame[14].o)) goto label_87;
	}
	{
	LINE_NUMBER(1470);
	((func_rhino_Parser_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_popScope])(ctx, (frame[0].o));
	}
label_87:;
	{
	LINE_NUMBER(1472);
	throwException(ctx, (frame[18].o));	}
label_85:;
	{
	LINE_NUMBER(1473);
	((func_rhino_ast_Loop_setParens_int_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_ast_Loop_setParens_int_int])(ctx, (frame[13].o), (frame[8].i), (frame[9].i));
	LINE_NUMBER(1474);
	((func_rhino_ast_Loop_setLineno_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_ast_Loop_setLineno_int])(ctx, (frame[13].o), (frame[2].i));
	LINE_NUMBER(1475);
	popStackFrame(ctx);
	return (frame[13].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_forLoopInit_int_R_rhino_ast_AstNode(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:forLoopInit", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1480);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit = (jint(1));
	LINE_NUMBER(1482);
	if ((frame[1].i) != (83)) goto label_7;
	}
	{
	LINE_NUMBER(1483);
	clinit_rhino_ast_EmptyExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_EmptyExpression);
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	init_rhino_ast_EmptyExpression_int_int(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg), (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1484);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_AstNode_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(1485);
	if ((frame[1].i) == (123)) goto label_11;
	}
	{
	if ((frame[1].i) != (154)) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(1486);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1487);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)M_rhino_Parser_variables_int_int_boolean_R_rhino_ast_VariableDeclaration(ctx, sp[0].o, temp0, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg), (jint(0)));
	frame[2].o = sp[0].o;
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(1489);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1490);
	((func_rhino_Parser_markDestructuring_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_markDestructuring_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[2].o));
	}
label_10:;
	{
	LINE_NUMBER(1492);
	frame[3].o = (frame[2].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1494);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit = (jint(0));
	LINE_NUMBER(1492);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1494);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit = (jint(0));
	LINE_NUMBER(1495);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_tryStatement_R_rhino_ast_TryStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[23];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:tryStatement", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1500);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken) == (82)) goto label_1;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(1501);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1504);
	sp[0].o = (jobject)M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1506);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	frame[4].i = (jint(-1));
	LINE_NUMBER(1508);
	clinit_rhino_ast_TryStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_TryStatement);
	init_rhino_ast_TryStatement_int(ctx, sp[0].o, (frame[2].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1510);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[6].i = temp0;
	LINE_NUMBER(1511);
	if ((frame[6].i) != (162)) goto label_9;
	}
	{
	LINE_NUMBER(1512);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[7].o = (checkCast(ctx, &class_rhino_ast_Comment, sp[0].o));
	LINE_NUMBER(1513);
	((func_rhino_ast_TryStatement_setInlineComment_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_TryStatement_setInlineComment_rhino_ast_AstNode])(ctx, (frame[5].o), (frame[7].o));
	LINE_NUMBER(1514);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1515);
	jint temp1 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[6].i = temp1;
	}
label_9:;
	{
	LINE_NUMBER(1517);
	if ((frame[6].i) == (86)) goto label_14;
	}
	{
	LINE_NUMBER(1518);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.no.brace.try"_j))));
	}
label_14:;
	{
	LINE_NUMBER(1520);
	sp[0].o = (jobject)M_rhino_Parser_getNextStatementAfterInlineComments_rhino_ast_AstNode_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1521);
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[7].o));
	frame[8].i = temp0;
	LINE_NUMBER(1523);
	frame[9].o = (jobject(nullptr));
	LINE_NUMBER(1525);
	frame[10].i = (jint(0));
	LINE_NUMBER(1526);
	jint temp1 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[11].i = temp1;
	LINE_NUMBER(1527);
	if ((frame[11].i) != (125)) goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(1528);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (125), (jint(1)));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(1529);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[12].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(1530);
	if ((frame[10].i) == 0) goto label_26;
	}
	{
	LINE_NUMBER(1531);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.catch.unreachable"_j))));
	}
label_26:;
	{
	LINE_NUMBER(1533);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[13].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	frame[14].i = (jint(-1));
	frame[15].i = (jint(-1));
	frame[16].i = (jint(-1));
	LINE_NUMBER(1534);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (88), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.catch"_j))), (jint(1)));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(1535);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[14].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	}
label_32:;
	{
	LINE_NUMBER(1537);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (39), (((jobject) createStringLiteral(ctx, u8"msg.bad.catchcond"_j))), (jint(1)));
	LINE_NUMBER(1539);
	sp[0].o = (jobject)M_rhino_Parser_createNameNode_R_rhino_ast_Name(ctx, (frame[0].o));
	frame[17].o = sp[0].o;
	LINE_NUMBER(1540);
	sp[0].o = (jobject)M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(ctx, (frame[0].o));
	frame[18].o = sp[0].o;
	LINE_NUMBER(1541);
	if ((frame[18].o) == nullptr) goto label_37;
	}
	{
	LINE_NUMBER(1542);
	((func_rhino_ast_Name_setJsDocNode_rhino_ast_Comment) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_rhino_ast_Name_setJsDocNode_rhino_ast_Comment])(ctx, (frame[17].o), (frame[18].o));
	}
label_37:;
	{
	LINE_NUMBER(1544);
	sp[0].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, (frame[17].o));
	frame[19].o = sp[0].o;
	LINE_NUMBER(1545);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective) == 0) goto label_40;
	}
	{
	LINE_NUMBER(1546);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"eval"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"eval"_j))), (frame[19].o));
	if (temp0 != 0) goto label_42;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"arguments"_j));
	sp[1].o = frame[19].o;
	LINE_NUMBER(1547);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_40;
	}
label_42:;
	{
	LINE_NUMBER(1548);
	((func_rhino_Parser_reportError_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.id.strict"_j))), (frame[19].o));
	}
label_40:;
	{
	LINE_NUMBER(1552);
	frame[20].o = (jobject(nullptr));
	LINE_NUMBER(1553);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (113), (jint(1)));
	if (temp0 == 0) goto label_45;
	}
	{
	LINE_NUMBER(1554);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[16].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(1555);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[20].o = sp[0].o;
	goto label_48;
	}
label_45:;
	{
	LINE_NUMBER(1557);
	frame[10].i = (jint(1));
	}
label_48:;
	{
	LINE_NUMBER(1560);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (89), (((jobject) createStringLiteral(ctx, u8"msg.bad.catchcond"_j))), (jint(1)));
	if (temp0 == 0) goto label_49;
	}
	{
	LINE_NUMBER(1561);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[15].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	}
label_49:;
	{
	LINE_NUMBER(1562);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (86), (((jobject) createStringLiteral(ctx, u8"msg.no.brace.catchblock"_j))), (jint(1)));
	LINE_NUMBER(1564);
	sp[0].o = (jobject)M_rhino_Parser_statements_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[21].o = (checkCast(ctx, &class_rhino_ast_CodeBlock, sp[0].o));
	LINE_NUMBER(1565);
	jint temp1 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[21].o));
	frame[8].i = temp1;
	LINE_NUMBER(1566);
	clinit_rhino_ast_CatchClause(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_CatchClause);
	init_rhino_ast_CatchClause_int(ctx, sp[0].o, (frame[13].i));
	frame[22].o = sp[0].o;
	LINE_NUMBER(1567);
	((func_rhino_ast_CatchClause_setVarName_rhino_ast_Name) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_rhino_ast_CatchClause_setVarName_rhino_ast_Name])(ctx, (frame[22].o), (frame[17].o));
	LINE_NUMBER(1568);
	((func_rhino_ast_CatchClause_setCatchCondition_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_rhino_ast_CatchClause_setCatchCondition_rhino_ast_AstNode])(ctx, (frame[22].o), (frame[20].o));
	LINE_NUMBER(1569);
	((func_rhino_ast_CatchClause_setBody_rhino_ast_CodeBlock) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_rhino_ast_CatchClause_setBody_rhino_ast_CodeBlock])(ctx, (frame[22].o), (frame[21].o));
	LINE_NUMBER(1570);
	if ((frame[16].i) == (jint(-1))) goto label_58;
	}
	{
	LINE_NUMBER(1571);
	((func_rhino_ast_CatchClause_setIfPosition_int) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_rhino_ast_CatchClause_setIfPosition_int])(ctx, (frame[22].o), ((frame[16].i) - (frame[13].i)));
	}
label_58:;
	{
	LINE_NUMBER(1573);
	((func_rhino_ast_CatchClause_setParens_int_int) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_rhino_ast_CatchClause_setParens_int_int])(ctx, (frame[22].o), (frame[14].i), (frame[15].i));
	LINE_NUMBER(1574);
	((func_rhino_ast_CatchClause_setLineno_int) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_rhino_ast_CatchClause_setLineno_int])(ctx, (frame[22].o), (frame[12].i));
	LINE_NUMBER(1576);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (87), (((jobject) createStringLiteral(ctx, u8"msg.no.brace.after.body"_j))), (jint(1)));
	if (temp0 == 0) goto label_62;
	}
	{
	LINE_NUMBER(1577);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[8].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	}
label_62:;
	{
	LINE_NUMBER(1578);
	((func_rhino_ast_CatchClause_setLength_int) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_rhino_ast_CatchClause_setLength_int])(ctx, (frame[22].o), ((frame[8].i) - (frame[13].i)));
	LINE_NUMBER(1579);
	if ((frame[9].o) != nullptr) goto label_65;
	}
	{
	LINE_NUMBER(1580);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_65:;
	{
	LINE_NUMBER(1581);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, (frame[9].o)))(ctx, (frame[9].o), (frame[22].o));
	LINE_NUMBER(1582);
	goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(1583);
	if ((frame[11].i) == (126)) goto label_23;
	}
	{
	LINE_NUMBER(1584);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (126), (((jobject) createStringLiteral(ctx, u8"msg.try.no.catchfinally"_j))), (jint(1)));
	}
label_23:;
	{
	LINE_NUMBER(1587);
	frame[12].o = (jobject(nullptr));
	LINE_NUMBER(1588);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (126), (jint(1)));
	if (temp0 == 0) goto label_70;
	}
	{
	LINE_NUMBER(1589);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(1590);
	sp[0].o = (jobject)M_rhino_Parser_statement_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1591);
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[12].o));
	frame[8].i = temp0;
	}
label_70:;
	{
	LINE_NUMBER(1594);
	((func_rhino_ast_TryStatement_setLength_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_TryStatement_setLength_int])(ctx, (frame[5].o), ((frame[8].i) - (frame[2].i)));
	LINE_NUMBER(1595);
	((func_rhino_ast_TryStatement_setTryBlock_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_TryStatement_setTryBlock_rhino_ast_AstNode])(ctx, (frame[5].o), (frame[7].o));
	LINE_NUMBER(1596);
	((func_rhino_ast_TryStatement_setCatchClauses_java_util_List) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_TryStatement_setCatchClauses_java_util_List])(ctx, (frame[5].o), (frame[9].o));
	LINE_NUMBER(1597);
	((func_rhino_ast_TryStatement_setFinallyBlock_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_TryStatement_setFinallyBlock_rhino_ast_AstNode])(ctx, (frame[5].o), (frame[12].o));
	LINE_NUMBER(1598);
	if ((frame[4].i) == (jint(-1))) goto label_78;
	}
	{
	LINE_NUMBER(1599);
	((func_rhino_ast_TryStatement_setFinallyPosition_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_TryStatement_setFinallyPosition_int])(ctx, (frame[5].o), ((frame[4].i) - (frame[2].i)));
	}
label_78:;
	{
	LINE_NUMBER(1601);
	((func_rhino_ast_TryStatement_setLineno_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_TryStatement_setLineno_int])(ctx, (frame[5].o), (frame[3].i));
	LINE_NUMBER(1603);
	if ((frame[1].o) == nullptr) goto label_81;
	}
	{
	LINE_NUMBER(1604);
	((func_rhino_ast_TryStatement_setJsDocNode_rhino_ast_Comment) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_TryStatement_setJsDocNode_rhino_ast_Comment])(ctx, (frame[5].o), (frame[1].o));
	}
label_81:;
	{
	LINE_NUMBER(1607);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_throwStatement_R_rhino_ast_ThrowStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:throwStatement", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1612);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken) == (50)) goto label_1;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(1613);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1614);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(1615);
	jint temp0 = (jint)M_rhino_Parser_peekTokenOrEOL_R_int(ctx, (frame[0].o));
	if (temp0 != (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(1618);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.throw.eol"_j))));
	}
label_5:;
	{
	LINE_NUMBER(1620);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1621);
	clinit_rhino_ast_ThrowStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ThrowStatement);
	init_rhino_ast_ThrowStatement_int_rhino_ast_AstNode(ctx, sp[0].o, (frame[1].i), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1622);
	((func_rhino_ast_ThrowStatement_setLineno_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_ThrowStatement_setLineno_int])(ctx, (frame[4].o), (frame[2].i));
	LINE_NUMBER(1623);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_matchJumpLabelName_R_rhino_ast_LabeledStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:matchJumpLabelName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1634);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(1636);
	jint temp0 = (jint)M_rhino_Parser_peekTokenOrEOL_R_int(ctx, (frame[0].o));
	if (temp0 != (39)) goto label_2;
	}
	{
	LINE_NUMBER(1637);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1638);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_labelSet;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1639);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_labelSet;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[1].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_rhino_ast_LabeledStatement, sp[0].o));
	}
label_5:;
	{
	LINE_NUMBER(1641);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1642);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.undef.label"_j))));
	}
label_2:;
	{
	LINE_NUMBER(1646);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_breakStatement_R_rhino_ast_BreakStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:breakStatement", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1651);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken) == (121)) goto label_1;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(1652);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1653);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	LINE_NUMBER(1654);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(1655);
	jint temp0 = (jint)M_rhino_Parser_peekTokenOrEOL_R_int(ctx, (frame[0].o));
	if (temp0 != (39)) goto label_7;
	}
	{
	LINE_NUMBER(1656);
	sp[0].o = (jobject)M_rhino_Parser_createNameNode_R_rhino_ast_Name(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1657);
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[4].o));
	frame[3].i = temp0;
	}
label_7:;
	{
	LINE_NUMBER(1661);
	sp[0].o = (jobject)M_rhino_Parser_matchJumpLabelName_R_rhino_ast_LabeledStatement(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1663);
	if ((frame[5].o) != nullptr) goto label_11;
	}
	INST_ACONST_NULL();
	goto label_12;
label_11:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_rhino_ast_LabeledStatement_getFirstLabel_R_rhino_ast_Label) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_LabeledStatement_getFirstLabel_R_rhino_ast_Label])(ctx, sp[0].o);
	sp++;
label_12:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1665);
	if ((frame[6].o) != nullptr) goto label_14;
	}
	INST_ALOAD(4);
	if ((--sp)->o != nullptr) goto label_14;
	{
	LINE_NUMBER(1666);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopAndSwitchSet;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopAndSwitchSet;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(1667);
	((func_rhino_Parser_reportError_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_int_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.break"_j))), (frame[2].i), ((frame[3].i) - (frame[2].i)));
	goto label_14;
	}
label_17:;
	{
	LINE_NUMBER(1669);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopAndSwitchSet;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopAndSwitchSet;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[6].o = (checkCast(ctx, &class_rhino_ast_Jump, sp[0].o));
	}
label_14:;
	{
	LINE_NUMBER(1673);
	clinit_rhino_ast_BreakStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_BreakStatement);
	init_rhino_ast_BreakStatement_int_int(ctx, sp[0].o, (frame[2].i), ((frame[3].i) - (frame[2].i)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1674);
	((func_rhino_ast_BreakStatement_setBreakLabel_rhino_ast_Name) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_BreakStatement_setBreakLabel_rhino_ast_Name])(ctx, (frame[7].o), (frame[4].o));
	LINE_NUMBER(1676);
	if ((frame[6].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(1677);
	((func_rhino_ast_BreakStatement_setBreakTarget_rhino_ast_Jump) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_BreakStatement_setBreakTarget_rhino_ast_Jump])(ctx, (frame[7].o), (frame[6].o));
	}
label_20:;
	{
	LINE_NUMBER(1678);
	((func_rhino_ast_BreakStatement_setLineno_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_BreakStatement_setLineno_int])(ctx, (frame[7].o), (frame[1].i));
	LINE_NUMBER(1679);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_continueStatement_R_rhino_ast_ContinueStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:continueStatement", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1684);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken) == (122)) goto label_1;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(1685);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1686);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	LINE_NUMBER(1687);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(1688);
	jint temp0 = (jint)M_rhino_Parser_peekTokenOrEOL_R_int(ctx, (frame[0].o));
	if (temp0 != (39)) goto label_7;
	}
	{
	LINE_NUMBER(1689);
	sp[0].o = (jobject)M_rhino_Parser_createNameNode_R_rhino_ast_Name(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1690);
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[4].o));
	frame[3].i = temp0;
	}
label_7:;
	{
	LINE_NUMBER(1694);
	sp[0].o = (jobject)M_rhino_Parser_matchJumpLabelName_R_rhino_ast_LabeledStatement(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1695);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(1696);
	if ((frame[5].o) != nullptr) goto label_12;
	}
	INST_ALOAD(4);
	if ((--sp)->o != nullptr) goto label_12;
	{
	LINE_NUMBER(1697);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopSet;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopSet;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(1698);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.continue.outside"_j))));
	goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(1700);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopSet;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopSet;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[6].o = (checkCast(ctx, &class_rhino_ast_Loop, sp[0].o));
	goto label_16;
	}
label_12:;
	{
	LINE_NUMBER(1703);
	if ((frame[5].o) == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_rhino_ast_LabeledStatement_getStatement_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_LabeledStatement_getStatement_R_rhino_ast_AstNode])(ctx, (frame[5].o));
	if ((isInstance(ctx, sp[0].o, &class_rhino_ast_Loop)) != 0) goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(1704);
	((func_rhino_Parser_reportError_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_int_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.continue.nonloop"_j))), (frame[2].i), ((frame[3].i) - (frame[2].i)));
	}
label_18:;
	{
	LINE_NUMBER(1706);
	if ((frame[5].o) != nullptr) goto label_19;
	}
	INST_ACONST_NULL();
	goto label_20;
label_19:;
	{
	sp[0].o = (jobject)((func_rhino_ast_LabeledStatement_getStatement_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_LabeledStatement_getStatement_R_rhino_ast_AstNode])(ctx, (frame[5].o));
	sp[0].o = checkCast(ctx, &class_rhino_ast_Loop, sp[0].o);
	sp += 1;
	}
label_20:;
	INST_ASTORE(6);
label_16:;
	{
	LINE_NUMBER(1709);
	clinit_rhino_ast_ContinueStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ContinueStatement);
	init_rhino_ast_ContinueStatement_int_int(ctx, sp[0].o, (frame[2].i), ((frame[3].i) - (frame[2].i)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1710);
	if ((frame[6].o) == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(1711);
	((func_rhino_ast_ContinueStatement_setTarget_rhino_ast_Loop) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_ContinueStatement_setTarget_rhino_ast_Loop])(ctx, (frame[7].o), (frame[6].o));
	}
label_22:;
	{
	LINE_NUMBER(1712);
	((func_rhino_ast_ContinueStatement_setLabel_rhino_ast_Name) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_ContinueStatement_setLabel_rhino_ast_Name])(ctx, (frame[7].o), (frame[4].o));
	LINE_NUMBER(1713);
	((func_rhino_ast_ContinueStatement_setLineno_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_ContinueStatement_setLineno_int])(ctx, (frame[7].o), (frame[1].i));
	LINE_NUMBER(1714);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_withStatement_R_rhino_ast_WithStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:withStatement", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1719);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken) == (124)) goto label_1;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(1720);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1722);
	sp[0].o = (jobject)M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1724);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	frame[4].i = (jint(-1));
	frame[5].i = (jint(-1));
	LINE_NUMBER(1725);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (88), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.with"_j))), (jint(1)));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1726);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	}
label_8:;
	{
	LINE_NUMBER(1728);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1730);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (89), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.after.with"_j))), (jint(1)));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(1731);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[5].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	}
label_11:;
	{
	LINE_NUMBER(1733);
	clinit_rhino_ast_WithStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_WithStatement);
	init_rhino_ast_WithStatement_int(ctx, sp[0].o, (frame[3].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1734);
	sp[0].o = (jobject)M_rhino_Parser_getNextStatementAfterInlineComments_rhino_ast_AstNode_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1735);
	sp[0].o = frame[7].o;
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[8].o));
	((func_rhino_ast_WithStatement_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_WithStatement_setLength_int])(ctx, sp[0].o, (temp0 - (frame[3].i)));
	LINE_NUMBER(1736);
	((func_rhino_ast_WithStatement_setJsDocNode_rhino_ast_Comment) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_WithStatement_setJsDocNode_rhino_ast_Comment])(ctx, (frame[7].o), (frame[1].o));
	LINE_NUMBER(1737);
	((func_rhino_ast_WithStatement_setExpression_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_WithStatement_setExpression_rhino_ast_AstNode])(ctx, (frame[7].o), (frame[6].o));
	LINE_NUMBER(1738);
	((func_rhino_ast_WithStatement_setStatement_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_WithStatement_setStatement_rhino_ast_AstNode])(ctx, (frame[7].o), (frame[8].o));
	LINE_NUMBER(1739);
	((func_rhino_ast_WithStatement_setParens_int_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_WithStatement_setParens_int_int])(ctx, (frame[7].o), (frame[4].i), (frame[5].i));
	LINE_NUMBER(1740);
	((func_rhino_ast_WithStatement_setLineno_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_WithStatement_setLineno_int])(ctx, (frame[7].o), (frame[2].i));
	LINE_NUMBER(1741);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_letStatement_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:letStatement", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1745);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken) == (154)) goto label_1;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(1746);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1747);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(1749);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 != (88)) goto label_5;
	}
	{
	LINE_NUMBER(1750);
	sp[0].o = (jobject)M_rhino_Parser_let_boolean_int_R_rhino_ast_AstNode(ctx, (frame[0].o), (jint(1)), (frame[2].i));
	frame[3].o = sp[0].o;
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(1752);
	sp[0].o = (jobject)M_rhino_Parser_variables_int_int_boolean_R_rhino_ast_VariableDeclaration(ctx, (frame[0].o), (154), (frame[2].i), (jint(1)));
	frame[3].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(1754);
	((func_rhino_ast_AstNode_setLineno_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_AstNode_setLineno_int])(ctx, (frame[3].o), (frame[1].i));
	LINE_NUMBER(1755);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_Parser_nowAllSet_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:nowAllSet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1767);
	if (((frame[0].i) & (frame[2].i)) == (frame[2].i)) goto label_1;
	}
	{
	if (((frame[1].i) & (frame[2].i)) != (frame[2].i)) goto label_1;
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

jobject M_rhino_Parser_returnOrYield_int_boolean_R_rhino_ast_AstNode(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:returnOrYield", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1772);
	jint temp0 = (jint)((func_rhino_Parser_insideFunction_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_insideFunction_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1773);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) != (jint(4))) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"msg.bad.return"_j));
	goto label_4;
label_3:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"msg.bad.yield"_j));
label_4:;
	POP_N(2); // Pop method args
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, sp[0].o, sp[1].o);
label_1:;
	{
	LINE_NUMBER(1776);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1777);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[5].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	LINE_NUMBER(1779);
	frame[6].i = (jint(0));
	LINE_NUMBER(1780);
	if ((frame[1].i) != (73)) goto label_10;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	LINE_NUMBER(1781);
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 < (200)) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(1782);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, sp[0].o);
	if (temp0 != (23)) goto label_10;
	}
	{
	LINE_NUMBER(1783);
	frame[6].i = (jint(1));
	LINE_NUMBER(1784);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	}
label_10:;
	{
	LINE_NUMBER(1787);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(1789);
	jint temp0 = (jint)M_rhino_Parser_peekTokenOrEOL_R_int(ctx, (frame[0].o));
	switch(temp0) {
		case -1: goto label_16;
		case 0: goto label_16;
		case 1: goto label_16;
		case 73: goto label_17;
		case 83: goto label_16;
		case 85: goto label_16;
		case 87: goto label_16;
		case 89: goto label_16;
		default: goto label_18;
	}
	}
label_16:;
	LINE_NUMBER(1797);
	goto label_19;
label_17:;
	{
	LINE_NUMBER(1799);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 >= (200)) goto label_18;
	}
	LINE_NUMBER(1801);
	goto label_19;
label_18:;
	{
	LINE_NUMBER(1805);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1806);
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[7].o));
	frame[5].i = temp0;
	}
label_19:;
	{
	LINE_NUMBER(1809);
	frame[8].i = ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_endFlags);
	LINE_NUMBER(1812);
	if ((frame[1].i) != (jint(4))) goto label_23;
	}
	{
	LINE_NUMBER(1813);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_endFlags;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[7].o) != nullptr) goto label_25;
	}
	INST_ICONST(2);
	goto label_26;
label_25:;
	INST_ICONST(4);
label_26:;
	{
	sp -= 3;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_endFlags = (sp[1].i | sp[2].i);
	LINE_NUMBER(1814);
	clinit_rhino_ast_ReturnStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ReturnStatement);
	init_rhino_ast_ReturnStatement_int_int_rhino_ast_AstNode(ctx, sp[0].o, (frame[4].i), ((frame[5].i) - (frame[4].i)), (frame[7].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1817);
	jint temp0 = (jint)SM_rhino_Parser_nowAllSet_int_int_int_R_boolean(ctx, (frame[8].i), ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_endFlags), (6));
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(1819);
	((func_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.return.inconsistent"_j))), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[4].i), ((frame[5].i) - (frame[4].i)));
	goto label_29;
	}
label_23:;
	{
	LINE_NUMBER(1821);
	jint temp0 = (jint)((func_rhino_Parser_insideFunction_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_insideFunction_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_31;
	}
	{
	LINE_NUMBER(1822);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.yield"_j))));
	}
label_31:;
	{
	LINE_NUMBER(1823);
	sp[0].o = frame[0].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_endFlags = (((jint)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_endFlags) | (8));
	LINE_NUMBER(1824);
	clinit_rhino_ast_Yield(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Yield);
	init_rhino_ast_Yield_int_int_rhino_ast_AstNode_boolean(ctx, sp[0].o, (frame[4].i), ((frame[5].i) - (frame[4].i)), (frame[7].o), (frame[6].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1825);
	((func_rhino_Parser_setRequiresActivation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_setRequiresActivation])(ctx, (frame[0].o));
	LINE_NUMBER(1826);
	((func_rhino_Parser_setIsGenerator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_setIsGenerator])(ctx, (frame[0].o));
	LINE_NUMBER(1827);
	if ((frame[2].i) != 0) goto label_29;
	}
	{
	LINE_NUMBER(1828);
	clinit_rhino_ast_ExpressionStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ExpressionStatement);
	init_rhino_ast_ExpressionStatement_rhino_ast_AstNode(ctx, sp[0].o, (frame[9].o));
	frame[9].o = sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(1833);
	jint temp0 = (jint)((func_rhino_Parser_insideFunction_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_insideFunction_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_38;
	}
	{
	jint temp0 = frame[8].i;
	jint temp1 = (jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_endFlags;
	jint temp2 = 12;
	LINE_NUMBER(1834);
	jint temp3 = (jint)SM_rhino_Parser_nowAllSet_int_int_int_R_boolean(ctx, temp0, temp1, temp2);
	if (temp3 == 0) goto label_38;
	}
	{
	LINE_NUMBER(1836);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	frame[10].o = (checkCast(ctx, &class_rhino_ast_FunctionNode, sp[0].o));
	LINE_NUMBER(1837);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_isES6Generator_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_FunctionNode_isES6Generator_R_boolean])(ctx, (frame[10].o));
	if (temp0 != 0) goto label_38;
	}
	{
	LINE_NUMBER(1838);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_FunctionNode, sp[0].o)))->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name])(ctx, (checkCast(ctx, &class_rhino_ast_FunctionNode, sp[0].o)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1839);
	if ((frame[11].o) == nullptr) goto label_44;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_Name_length_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_ast_Name_length_R_int])(ctx, (frame[11].o));
	if (temp0 != 0) goto label_45;
	}
label_44:;
	{
	LINE_NUMBER(1840);
	((func_rhino_Parser_addError_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.anon.generator.returns"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	goto label_38;
	}
label_45:;
	{
	LINE_NUMBER(1842);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"msg.generator.returns"_j));
	sp[2].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, (frame[11].o));
	((func_rhino_Parser_addError_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_38:;
	{
	LINE_NUMBER(1847);
	((func_rhino_ast_AstNode_setLineno_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_AstNode_setLineno_int])(ctx, (frame[9].o), (frame[3].i));
	LINE_NUMBER(1848);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_block_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:block", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1853);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken) == (86)) goto label_7;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(1854);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1855);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(1856);
	clinit_rhino_ast_Scope(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Scope);
	init_rhino_ast_Scope_int(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1857);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_Scope_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Scope_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	LINE_NUMBER(1858);
	((func_rhino_Parser_pushScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_pushScope_rhino_ast_Scope])(ctx, (frame[0].o), (frame[2].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1860);
	sp[0].o = (jobject)M_rhino_Parser_statements_rhino_ast_AstNode_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(1861);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (87), (((jobject) createStringLiteral(ctx, u8"msg.no.brace.block"_j))), (jint(1)));
	LINE_NUMBER(1862);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_Scope_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Scope_setLength_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd) - (frame[1].i)));
	LINE_NUMBER(1863);
	frame[3].o = (frame[2].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1865);
	((func_rhino_Parser_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(1863);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1865);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_rhino_Parser_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(1866);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

void M_rhino_Parser_recordLabel_rhino_ast_Label_rhino_ast_LabeledStatement(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:recordLabel", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1872);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 == (104)) goto label_1;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(1873);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(1874);
	sp[0].o = (jobject)((func_rhino_ast_Label_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Label_getName_R_java_lang_String])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1875);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_labelSet;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1876);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_labelSet = (jref) sp[1].o;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(1878);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_labelSet;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_rhino_ast_LabeledStatement, sp[0].o));
	LINE_NUMBER(1879);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1880);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isIdeMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isIdeMode_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(1881);
	sp[0].o = (jobject)((func_rhino_ast_LabeledStatement_getLabelByName_java_lang_String_R_rhino_ast_Label) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_LabeledStatement_getLabelByName_java_lang_String_R_rhino_ast_Label])(ctx, (frame[4].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1882);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"msg.dup.label"_j));
	sp[2].o = frame[5].o;
	LINE_NUMBER(1883);
	jint temp0 = (jint)((func_rhino_ast_Label_getAbsolutePosition_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_ast_Label_getAbsolutePosition_R_int])(ctx, sp[2].o);
	jint temp1 = (jint)((func_rhino_ast_Label_getLength_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_Label_getLength_R_int])(ctx, (frame[5].o));
	LINE_NUMBER(1882);
	((func_rhino_Parser_reportError_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	}
label_9:;
	{
	LINE_NUMBER(1885);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"msg.dup.label"_j));
	sp[2].o = frame[1].o;
	LINE_NUMBER(1886);
	jint temp0 = (jint)((func_rhino_ast_Label_getPosition_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_ast_Label_getPosition_R_int])(ctx, sp[2].o);
	jint temp1 = (jint)((func_rhino_ast_Label_getLength_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Label_getLength_R_int])(ctx, (frame[1].o));
	LINE_NUMBER(1885);
	((func_rhino_Parser_reportError_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	}
label_6:;
	{
	LINE_NUMBER(1889);
	((func_rhino_ast_LabeledStatement_addLabel_rhino_ast_Label) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_LabeledStatement_addLabel_rhino_ast_Label])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(1890);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_labelSet;
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[3].o), (frame[2].o));
	LINE_NUMBER(1891);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_nameOrLabel_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:nameOrLabel", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1901);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken) == (39)) goto label_7;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(1902);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(1905);
	sp[0].o = frame[0].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_currentFlaggedToken = (((jint)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_currentFlaggedToken) | (jint(131072)));
	LINE_NUMBER(1906);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1908);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[2].o));
	if (temp0 == (131)) goto label_11;
	}
	{
	LINE_NUMBER(1909);
	clinit_rhino_ast_ExpressionStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ExpressionStatement);
	sp[1].o = frame[2].o;
	jint temp0 = (jint)((func_rhino_Parser_insideFunction_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_insideFunction_R_boolean])(ctx, (frame[0].o));
	jobject temp1 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp1;
	sp += 3;
	if (temp0 != 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 4;
	init_rhino_ast_ExpressionStatement_rhino_ast_AstNode_boolean(ctx, sp[0].o, sp[2].o, sp[3].i);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1910);
	((rhino_Node *) NULL_CHECK((frame[3].o)))->F_lineno = ((jint)((rhino_Node *) NULL_CHECK((frame[2].o)))->F_lineno);
	LINE_NUMBER(1911);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_11:;
	{
	LINE_NUMBER(1914);
	clinit_rhino_ast_LabeledStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_LabeledStatement);
	init_rhino_ast_LabeledStatement_int(ctx, sp[0].o, (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1915);
	M_rhino_Parser_recordLabel_rhino_ast_Label_rhino_ast_LabeledStatement(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_Label, (frame[2].o))), (frame[3].o));
	LINE_NUMBER(1916);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_LabeledStatement_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_LabeledStatement_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	LINE_NUMBER(1918);
	frame[4].o = (jobject(nullptr));
	}
label_20:;
	{
	LINE_NUMBER(1919);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 != (39)) goto label_0;
	}
	{
	LINE_NUMBER(1920);
	sp[0].o = frame[0].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_currentFlaggedToken = (((jint)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_currentFlaggedToken) | (jint(131072)));
	LINE_NUMBER(1921);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1922);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[2].o));
	if (temp0 == (131)) goto label_24;
	}
	{
	LINE_NUMBER(1923);
	clinit_rhino_ast_ExpressionStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ExpressionStatement);
	sp[1].o = frame[2].o;
	jint temp0 = (jint)((func_rhino_Parser_insideFunction_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_insideFunction_R_boolean])(ctx, (frame[0].o));
	jobject temp1 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp1;
	sp += 3;
	if (temp0 != 0) goto label_26;
	}
	INST_ICONST(1);
	goto label_27;
label_26:;
	INST_ICONST(0);
label_27:;
	{
	sp -= 4;
	init_rhino_ast_ExpressionStatement_rhino_ast_AstNode_boolean(ctx, sp[0].o, sp[2].o, sp[3].i);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1924);
	M_rhino_Parser_autoInsertSemicolon_rhino_ast_AstNode(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(1925);
	goto label_0;
	}
label_24:;
	{
	LINE_NUMBER(1927);
	M_rhino_Parser_recordLabel_rhino_ast_Label_rhino_ast_LabeledStatement(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_Label, (frame[2].o))), (frame[3].o));
	goto label_20;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1932);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentLabel = (jref) (frame[3].o);
	LINE_NUMBER(1933);
	if ((frame[4].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1934);
	sp[0].o = (jobject)M_rhino_Parser_statementHelper_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1935);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[5].i = temp0;
	LINE_NUMBER(1936);
	if ((frame[5].i) != (162)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_AstNode_getLineno_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_AstNode_getLineno_R_int])(ctx, (frame[4].o));
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp1 - (jint(1))));
	jint temp2 = (jint)((func_rhino_ast_Comment_getLineno_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Comment, sp[0].o)))->vtable)[VTABLE_rhino_ast_Comment_getLineno_R_int])(ctx, (checkCast(ctx, &class_rhino_ast_Comment, sp[0].o)));
	if (temp0 != temp2) goto label_1;
	}
	{
	LINE_NUMBER(1937);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_scannedComments;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[2].o))(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, (temp0 - (jint(1))));
	((func_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode])(ctx, sp[0].o, (checkCast(ctx, &class_rhino_ast_AstNode, sp[1].o)));
	LINE_NUMBER(1938);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1942);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentLabel = (jref) (jobject(nullptr));
	LINE_NUMBER(1944);
	sp[0].o = (jobject)((func_rhino_ast_LabeledStatement_getLabels_R_java_util_List) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_LabeledStatement_getLabels_R_java_util_List])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_37:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_38;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_rhino_ast_Label, sp[0].o));
	LINE_NUMBER(1945);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_labelSet;
	sp[1].o = (jobject)((func_rhino_ast_Label_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_Label_getName_R_java_lang_String])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1946);
	goto label_37;
	}
label_38:;
	LINE_NUMBER(1947);
	goto label_41;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1942);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentLabel = (jref) (jobject(nullptr));
	LINE_NUMBER(1944);
	sp[0].o = (jobject)((func_rhino_ast_LabeledStatement_getLabels_R_java_util_List) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_LabeledStatement_getLabels_R_java_util_List])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_43:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_44;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_rhino_ast_Label, sp[0].o));
	LINE_NUMBER(1945);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_labelSet;
	sp[1].o = (jobject)((func_rhino_ast_Label_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_Label_getName_R_java_lang_String])(ctx, (frame[9].o));
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1946);
	goto label_43;
	}
label_44:;
	{
	LINE_NUMBER(1947);
	throwException(ctx, (frame[7].o));	}
label_41:;
	{
	LINE_NUMBER(1951);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode])(ctx, (frame[4].o));
	sp += 1;
	if (sp[0].o != nullptr) goto label_47;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	LINE_NUMBER(1952);
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, sp[0].o, sp[1].o);
	jint temp1 = temp0 - (frame[1].i);
	sp[0].i = temp1;
	sp += 1;
	goto label_49;
	}
label_47:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	LINE_NUMBER(1953);
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_49:;
	{
	sp -= 2;
	LINE_NUMBER(1951);
	((func_rhino_ast_LabeledStatement_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_LabeledStatement_setLength_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1954);
	((func_rhino_ast_LabeledStatement_setStatement_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_LabeledStatement_setStatement_rhino_ast_AstNode])(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(1955);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_variables_int_int_boolean_R_rhino_ast_VariableDeclaration(jcontext ctx, jobject self, jint param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:variables", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1970);
	clinit_rhino_ast_VariableDeclaration(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_VariableDeclaration);
	init_rhino_ast_VariableDeclaration_int(ctx, sp[0].o, (frame[2].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1971);
	sp[0].o = (jobject)((func_rhino_ast_VariableDeclaration_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_VariableDeclaration_setType_int_R_rhino_Node])(ctx, (frame[5].o), (frame[1].i));
	LINE_NUMBER(1972);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_VariableDeclaration_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_VariableDeclaration_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	LINE_NUMBER(1973);
	sp[0].o = (jobject)M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1974);
	if ((frame[6].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1975);
	((func_rhino_ast_VariableDeclaration_setJsDocNode_rhino_ast_Comment) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_VariableDeclaration_setJsDocNode_rhino_ast_Comment])(ctx, (frame[5].o), (frame[6].o));
	}
label_5:;
	{
	LINE_NUMBER(1981);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(1982);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(1983);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[9].i = temp0;
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[10].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(1984);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	LINE_NUMBER(1986);
	if ((frame[9].i) == (84)) goto label_12;
	}
	{
	if ((frame[9].i) != (86)) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(1988);
	sp[0].o = (jobject)M_rhino_Parser_destructuringPrimaryExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1989);
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[7].o));
	frame[4].i = temp0;
	LINE_NUMBER(1990);
	if ((isInstance(ctx, (frame[7].o), &class_rhino_ast_DestructuringForm)) != 0) goto label_16;
	}
	{
	LINE_NUMBER(1991);
	((func_rhino_Parser_reportError_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_int_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.assign.left"_j))), (frame[10].i), ((frame[4].i) - (frame[10].i)));
	}
label_16:;
	{
	LINE_NUMBER(1992);
	((func_rhino_Parser_markDestructuring_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_markDestructuring_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[7].o));
	goto label_18;
	}
label_13:;
	{
	LINE_NUMBER(1995);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (39), (((jobject) createStringLiteral(ctx, u8"msg.bad.var"_j))), (jint(1)));
	LINE_NUMBER(1996);
	sp[0].o = (jobject)M_rhino_Parser_createNameNode_R_rhino_ast_Name(ctx, (frame[0].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1997);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp1 = (jint)((func_rhino_TokenStream_getLineno_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_TokenStream_getLineno_R_int])(ctx, sp[1].o);
	((func_rhino_ast_Name_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Name_setLineno_int])(ctx, sp[0].o, temp1);
	LINE_NUMBER(1998);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective) == 0) goto label_22;
	}
	{
	LINE_NUMBER(1999);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(2000);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"eval"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"eval"_j))), (frame[11].o));
	if (temp0 != 0) goto label_25;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"arguments"_j));
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[1].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_22;
	}
label_25:;
	{
	LINE_NUMBER(2001);
	((func_rhino_Parser_reportError_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.id.strict"_j))), (frame[11].o));
	}
label_22:;
	{
	LINE_NUMBER(2004);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[1].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[1].o);
	((func_rhino_Parser_defineSymbol_int_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_defineSymbol_int_java_lang_String_boolean])(ctx, sp[0].o, temp0, sp[1].o, ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit));
	}
label_18:;
	{
	LINE_NUMBER(2007);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[11].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(2009);
	sp[0].o = (jobject)M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(ctx, (frame[0].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(2011);
	frame[13].o = (jobject(nullptr));
	LINE_NUMBER(2012);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (91), (jint(1)));
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(2013);
	sp[0].o = (jobject)M_rhino_Parser_assignExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(2014);
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[13].o));
	frame[4].i = temp0;
	}
label_29:;
	{
	LINE_NUMBER(2017);
	clinit_rhino_ast_VariableInitializer(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_VariableInitializer);
	init_rhino_ast_VariableInitializer_int_int(ctx, sp[0].o, (frame[10].i), ((frame[4].i) - (frame[10].i)));
	frame[14].o = sp[0].o;
	LINE_NUMBER(2018);
	if ((frame[7].o) == nullptr) goto label_33;
	}
	{
	LINE_NUMBER(2019);
	if ((frame[13].o) != nullptr) goto label_35;
	}
	{
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit) != 0) goto label_35;
	}
	{
	LINE_NUMBER(2020);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.destruct.assign.no.init"_j))));
	}
label_35:;
	{
	LINE_NUMBER(2022);
	((func_rhino_ast_VariableInitializer_setTarget_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_ast_VariableInitializer_setTarget_rhino_ast_AstNode])(ctx, (frame[14].o), (frame[7].o));
	goto label_37;
	}
label_33:;
	{
	LINE_NUMBER(2024);
	((func_rhino_ast_VariableInitializer_setTarget_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_ast_VariableInitializer_setTarget_rhino_ast_AstNode])(ctx, (frame[14].o), (frame[8].o));
	}
label_37:;
	{
	LINE_NUMBER(2026);
	((func_rhino_ast_VariableInitializer_setInitializer_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_ast_VariableInitializer_setInitializer_rhino_ast_AstNode])(ctx, (frame[14].o), (frame[13].o));
	LINE_NUMBER(2027);
	sp[0].o = (jobject)((func_rhino_ast_VariableInitializer_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_ast_VariableInitializer_setType_int_R_rhino_Node])(ctx, (frame[14].o), (frame[1].i));
	LINE_NUMBER(2028);
	((func_rhino_ast_VariableInitializer_setJsDocNode_rhino_ast_Comment) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_ast_VariableInitializer_setJsDocNode_rhino_ast_Comment])(ctx, (frame[14].o), (frame[12].o));
	LINE_NUMBER(2029);
	((func_rhino_ast_VariableInitializer_setLineno_int) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_ast_VariableInitializer_setLineno_int])(ctx, (frame[14].o), (frame[11].i));
	LINE_NUMBER(2030);
	((func_rhino_ast_VariableDeclaration_addVariable_rhino_ast_VariableInitializer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_VariableDeclaration_addVariable_rhino_ast_VariableInitializer])(ctx, (frame[5].o), (frame[14].o));
	LINE_NUMBER(2032);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (90), (jint(1)));
	if (temp0 != 0) goto label_43;
	}
	goto label_44;
label_43:;
	LINE_NUMBER(2033);
	goto label_5;
label_44:;
	{
	LINE_NUMBER(2034);
	((func_rhino_ast_VariableDeclaration_setLength_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_VariableDeclaration_setLength_int])(ctx, (frame[5].o), ((frame[4].i) - (frame[2].i)));
	LINE_NUMBER(2035);
	((func_rhino_ast_VariableDeclaration_setIsStatement_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_VariableDeclaration_setIsStatement_boolean])(ctx, (frame[5].o), (frame[3].i));
	LINE_NUMBER(2036);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_let_boolean_int_R_rhino_ast_AstNode(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:let", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2042);
	clinit_rhino_ast_LetNode(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_LetNode);
	init_rhino_ast_LetNode_int(ctx, sp[0].o, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2043);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_LetNode_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_LetNode_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	LINE_NUMBER(2044);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (88), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.after.let"_j))), (jint(1)));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(2045);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_LetNode_setLp_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_LetNode_setLp_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg) - (frame[2].i)));
	}
label_9:;
	{
	LINE_NUMBER(2046);
	((func_rhino_Parser_pushScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_pushScope_rhino_ast_Scope])(ctx, (frame[0].o), (frame[3].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2048);
	sp[0].o = frame[0].o;
	jint temp0 = 154;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)M_rhino_Parser_variables_int_int_boolean_R_rhino_ast_VariableDeclaration(ctx, sp[0].o, temp0, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg), (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2049);
	((func_rhino_ast_LetNode_setVariables_rhino_ast_VariableDeclaration) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_LetNode_setVariables_rhino_ast_VariableDeclaration])(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(2050);
	jint temp1 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (89), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.let"_j))), (jint(1)));
	if (temp1 == 0) goto label_13;
	}
	{
	LINE_NUMBER(2051);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_LetNode_setRp_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_LetNode_setRp_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg) - (frame[2].i)));
	}
label_13:;
	{
	LINE_NUMBER(2053);
	if ((frame[1].i) == 0) goto label_15;
	}
	{
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 != (86)) goto label_15;
	}
	{
	LINE_NUMBER(2055);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2056);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[5].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2057);
	sp[0].o = (jobject)M_rhino_Parser_statements_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2058);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (87), (((jobject) createStringLiteral(ctx, u8"msg.no.curly.let"_j))), (jint(1)));
	LINE_NUMBER(2059);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_AstNode_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_setLength_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd) - (frame[5].i)));
	LINE_NUMBER(2060);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_LetNode_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_LetNode_setLength_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd) - (frame[2].i)));
	LINE_NUMBER(2061);
	((func_rhino_ast_LetNode_setBody_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_LetNode_setBody_rhino_ast_AstNode])(ctx, (frame[3].o), (frame[6].o));
	LINE_NUMBER(2062);
	sp[0].o = (jobject)((func_rhino_ast_LetNode_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_LetNode_setType_int_R_rhino_Node])(ctx, (frame[3].o), (154));
	LINE_NUMBER(2063);
	{ popExceptionFrames(frameRef, 1); goto label_25; }
	}
label_15:;
	{
	LINE_NUMBER(2065);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2066);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[5].o));
	((func_rhino_ast_LetNode_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_LetNode_setLength_int])(ctx, sp[0].o, (temp0 - (frame[2].i)));
	LINE_NUMBER(2067);
	((func_rhino_ast_LetNode_setBody_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_LetNode_setBody_rhino_ast_AstNode])(ctx, (frame[3].o), (frame[5].o));
	LINE_NUMBER(2068);
	if ((frame[1].i) == 0) { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	{
	LINE_NUMBER(2070);
	clinit_rhino_ast_ExpressionStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ExpressionStatement);
	sp[1].o = frame[3].o;
	sp[2].o = frame[0].o;
	LINE_NUMBER(2071);
	jint temp0 = (jint)((func_rhino_Parser_insideFunction_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_Parser_insideFunction_R_boolean])(ctx, sp[2].o);
	jobject temp1 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp1;
	sp += 3;
	if (temp0 != 0) goto label_31;
	}
	INST_ICONST(1);
	goto label_32;
label_31:;
	INST_ICONST(0);
label_32:;
	{
	sp -= 4;
	init_rhino_ast_ExpressionStatement_rhino_ast_AstNode_boolean(ctx, sp[0].o, sp[2].o, sp[3].i);
	frame[6].o = sp[0].o;
	LINE_NUMBER(2072);
	sp[0].o = frame[6].o;
	jint temp0 = (jint)((func_rhino_ast_LetNode_getLineno_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_LetNode_getLineno_R_int])(ctx, (frame[3].o));
	((func_rhino_ast_ExpressionStatement_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ExpressionStatement_setLineno_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(2073);
	frame[7].o = (frame[6].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(2077);
	((func_rhino_Parser_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(2073);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_25:;
	{
	LINE_NUMBER(2077);
	((func_rhino_Parser_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(2078);
	goto label_37;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(2077);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	((func_rhino_Parser_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(2078);
	throwException(ctx, (frame[8].o));	}
label_37:;
	{
	LINE_NUMBER(2079);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_defineSymbol_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:defineSymbol", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2083);
	((func_rhino_Parser_defineSymbol_int_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_defineSymbol_int_java_lang_String_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (jint(0)));
	LINE_NUMBER(2084);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_defineSymbol_int_java_lang_String_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:defineSymbol", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(2087);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2088);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isIdeMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isIdeMode_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	LINE_NUMBER(2089);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(2091);
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(2093);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope;
	sp[0].o = (jobject)((func_rhino_ast_Scope_getDefiningScope_java_lang_String_R_rhino_ast_Scope) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Scope_getDefiningScope_java_lang_String_R_rhino_ast_Scope])(ctx, sp[0].o, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2094);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = frame[2].o;
	LINE_NUMBER(2095);
	sp[0].o = (jobject)((func_rhino_ast_Scope_getSymbol_java_lang_String_R_rhino_ast_Symbol) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Scope_getSymbol_java_lang_String_R_rhino_ast_Symbol])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_8;
	}
label_6:;
	INST_ACONST_NULL();
label_8:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(2097);
	if ((frame[5].o) == nullptr) goto label_10;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_Symbol_getDeclType_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_Symbol_getDeclType_R_int])(ctx, (frame[5].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ICONST(-1);
label_11:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(2098);
	if ((frame[5].o) == nullptr) goto label_13;
	}
	{
	if ((frame[6].i) == (155)) goto label_14;
	}
	{
	if ((frame[1].i) == (155)) goto label_14;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	if ((frame[6].i) != (154)) goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(2102);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[6].i) != (155)) goto label_15;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"msg.const.redecl"_j));
	goto label_16;
label_15:;
	{
	if ((frame[6].i) != (154)) goto label_17;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"msg.let.redecl"_j));
	goto label_16;
label_17:;
	{
	if ((frame[6].i) != (123)) goto label_18;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"msg.var.redecl"_j));
	goto label_16;
label_18:;
	{
	if ((frame[6].i) != (110)) goto label_19;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"msg.fn.redecl"_j));
	goto label_16;
label_19:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"msg.parm.redecl"_j));
label_16:;
	{
	sp -= 2;
	((func_rhino_Parser_addError_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(2107);
	popStackFrame(ctx);
	return;
	}
label_13:;
	{
	LINE_NUMBER(2109);
	switch((frame[1].i)) {
		case 88: goto label_21;
		case 110: goto label_22;
		case 123: goto label_22;
		case 154: goto label_23;
		case 155: goto label_23;
		default: goto label_24;
	}
	}
label_23:;
	{
	LINE_NUMBER(2112);
	if ((frame[3].i) != 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope;
	LINE_NUMBER(2113);
	jint temp0 = (jint)((func_rhino_ast_Scope_getType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Scope_getType_R_int])(ctx, sp[0].o);
	if (temp0 == (113)) goto label_27;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope;
	if ((isInstance(ctx, sp[0].o, &class_rhino_ast_Loop)) == 0) goto label_25;
	}
label_27:;
	{
	LINE_NUMBER(2115);
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.let.decl.not.in.block"_j))));
	LINE_NUMBER(2116);
	popStackFrame(ctx);
	return;
	}
label_25:;
	{
	LINE_NUMBER(2118);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope;
	clinit_rhino_ast_Symbol(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ast_Symbol);
	init_rhino_ast_Symbol_int_java_lang_String(ctx, sp[1].o, (frame[1].i), (frame[2].o));
	((func_rhino_ast_Scope_putSymbol_rhino_ast_Symbol) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Scope_putSymbol_rhino_ast_Symbol])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2119);
	popStackFrame(ctx);
	return;
	}
label_22:;
	{
	LINE_NUMBER(2123);
	if ((frame[5].o) == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(2124);
	if ((frame[6].i) != (123)) goto label_32;
	}
	{
	LINE_NUMBER(2125);
	((func_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.var.redecl"_j))), (frame[2].o));
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(2126);
	if ((frame[6].i) != (88)) goto label_34;
	}
	{
	LINE_NUMBER(2127);
	((func_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.var.hides.arg"_j))), (frame[2].o));
	goto label_34;
	}
label_30:;
	{
	LINE_NUMBER(2130);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	clinit_rhino_ast_Symbol(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ast_Symbol);
	init_rhino_ast_Symbol_int_java_lang_String(ctx, sp[1].o, (frame[1].i), (frame[2].o));
	((func_rhino_ast_ScriptNode_putSymbol_rhino_ast_Symbol) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_putSymbol_rhino_ast_Symbol])(ctx, sp[0].o, sp[1].o);
	}
label_34:;
	LINE_NUMBER(2132);
	popStackFrame(ctx);
	INST_RETURN();
label_21:;
	{
	LINE_NUMBER(2135);
	if ((frame[5].o) == nullptr) goto label_36;
	}
	{
	LINE_NUMBER(2138);
	((func_rhino_Parser_addWarning_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addWarning_java_lang_String_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.dup.parms"_j))), (frame[2].o));
	}
label_36:;
	{
	LINE_NUMBER(2140);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	clinit_rhino_ast_Symbol(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ast_Symbol);
	init_rhino_ast_Symbol_int_java_lang_String(ctx, sp[1].o, (frame[1].i), (frame[2].o));
	((func_rhino_ast_ScriptNode_putSymbol_rhino_ast_Symbol) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_putSymbol_rhino_ast_Symbol])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2141);
	popStackFrame(ctx);
	return;
	}
label_24:;
	{
	LINE_NUMBER(2144);
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_expr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:expr", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2150);
	sp[0].o = (jobject)M_rhino_Parser_assignExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2151);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(2152);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (90), (jint(1)));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2153);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2154);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isStrictMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isStrictMode_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_AstNode_hasSideEffects_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_hasSideEffects_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(2155);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"msg.no.side.effects"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	jint temp0 = frame[2].i;
	sp[3].o = frame[0].o;
	sp[4].o = frame[1].o;
	LINE_NUMBER(2156);
	jint temp1 = (jint)M_rhino_Parser_nodeEnd_rhino_ast_AstNode_R_int(ctx, sp[3].o, sp[4].o);
	jint temp2 = temp1 - (frame[2].i);
	LINE_NUMBER(2155);
	((func_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp2);
	}
label_6:;
	{
	LINE_NUMBER(2157);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 != (73)) goto label_10;
	}
	{
	LINE_NUMBER(2158);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.yield.parenthesized"_j))));
	}
label_10:;
	{
	LINE_NUMBER(2159);
	clinit_rhino_ast_InfixExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_InfixExpression);
	jint temp0 = 90;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)M_rhino_Parser_assignExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	init_rhino_ast_InfixExpression_int_rhino_ast_AstNode_rhino_ast_AstNode_int(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, (frame[3].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2160);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(2161);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_assignExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:assignExpr", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2166);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(2167);
	if ((frame[1].i) != (73)) goto label_2;
	}
	{
	LINE_NUMBER(2168);
	sp[0].o = (jobject)M_rhino_Parser_returnOrYield_int_boolean_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[1].i), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2170);
	sp[0].o = (jobject)M_rhino_Parser_condExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2171);
	frame[3].i = (jint(0));
	LINE_NUMBER(2172);
	jint temp0 = (jint)M_rhino_Parser_peekTokenOrEOL_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(2173);
	if ((frame[1].i) != (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(2174);
	frame[3].i = (jint(1));
	LINE_NUMBER(2175);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	}
label_7:;
	{
	LINE_NUMBER(2177);
	if ((91) > (frame[1].i)) goto label_10;
	}
	{
	if ((frame[1].i) > (102)) goto label_10;
	}
	{
	LINE_NUMBER(2178);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inDestructuringAssignment) == 0) goto label_12;
	}
	{
	LINE_NUMBER(2182);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.destruct.default.vals"_j))));
	}
label_12:;
	{
	LINE_NUMBER(2185);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2188);
	sp[0].o = (jobject)M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2190);
	((func_rhino_Parser_markDestructuring_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_markDestructuring_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(2191);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[5].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2193);
	clinit_rhino_ast_Assignment(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Assignment);
	jint temp0 = frame[1].i;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)M_rhino_Parser_assignExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	init_rhino_ast_Assignment_int_rhino_ast_AstNode_rhino_ast_AstNode_int(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, (frame[5].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2195);
	if ((frame[4].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(2196);
	((func_rhino_ast_AstNode_setJsDocNode_rhino_ast_Comment) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_setJsDocNode_rhino_ast_Comment])(ctx, (frame[2].o), (frame[4].o));
	}
label_19:;
	LINE_NUMBER(2198);
	goto label_21;
label_10:;
	{
	if ((frame[1].i) != (83)) goto label_22;
	}
	{
	LINE_NUMBER(2201);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentJsDocComment;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(2202);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(ctx, (frame[0].o));
	((func_rhino_ast_AstNode_setJsDocNode_rhino_ast_Comment) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_setJsDocNode_rhino_ast_Comment])(ctx, sp[0].o, sp[1].o);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(2204);
	if ((frame[3].i) != 0) goto label_21;
	}
	{
	if ((frame[1].i) != (165)) goto label_21;
	}
	{
	LINE_NUMBER(2205);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2206);
	sp[0].o = (jobject)M_rhino_Parser_arrowFunction_rhino_ast_AstNode_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[2].o));
	frame[2].o = sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(2208);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_condExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:condExpr", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2213);
	sp[0].o = (jobject)M_rhino_Parser_orExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2214);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (103), (jint(1)));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(2215);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(2216);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	frame[4].i = (jint(-1));
	LINE_NUMBER(2222);
	frame[5].i = ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit);
	LINE_NUMBER(2223);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2226);
	sp[0].o = (jobject)M_rhino_Parser_assignExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(2228);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit = (frame[5].i);
	LINE_NUMBER(2229);
	goto label_15;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(2228);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit = (frame[5].i);
	LINE_NUMBER(2229);
	throwException(ctx, (frame[7].o));	}
label_15:;
	{
	LINE_NUMBER(2230);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (104), (((jobject) createStringLiteral(ctx, u8"msg.no.colon.cond"_j))), (jint(1)));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(2231);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	}
label_17:;
	{
	LINE_NUMBER(2232);
	sp[0].o = (jobject)M_rhino_Parser_assignExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2233);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[1].o));
	frame[8].i = temp0;
	jint temp1 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[7].o));
	frame[9].i = (temp1 - (frame[8].i));
	LINE_NUMBER(2234);
	clinit_rhino_ast_ConditionalExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ConditionalExpression);
	init_rhino_ast_ConditionalExpression_int_int(ctx, sp[0].o, (frame[8].i), (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(2235);
	((func_rhino_ast_ConditionalExpression_setLineno_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_ConditionalExpression_setLineno_int])(ctx, (frame[10].o), (frame[2].i));
	LINE_NUMBER(2236);
	((func_rhino_ast_ConditionalExpression_setTestExpression_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_ConditionalExpression_setTestExpression_rhino_ast_AstNode])(ctx, (frame[10].o), (frame[1].o));
	LINE_NUMBER(2237);
	((func_rhino_ast_ConditionalExpression_setTrueExpression_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_ConditionalExpression_setTrueExpression_rhino_ast_AstNode])(ctx, (frame[10].o), (frame[6].o));
	LINE_NUMBER(2238);
	((func_rhino_ast_ConditionalExpression_setFalseExpression_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_ConditionalExpression_setFalseExpression_rhino_ast_AstNode])(ctx, (frame[10].o), (frame[7].o));
	LINE_NUMBER(2239);
	((func_rhino_ast_ConditionalExpression_setQuestionMarkPosition_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_ConditionalExpression_setQuestionMarkPosition_int])(ctx, (frame[10].o), ((frame[3].i) - (frame[8].i)));
	LINE_NUMBER(2240);
	((func_rhino_ast_ConditionalExpression_setColonPosition_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_ConditionalExpression_setColonPosition_int])(ctx, (frame[10].o), ((frame[4].i) - (frame[8].i)));
	LINE_NUMBER(2241);
	frame[1].o = (frame[10].o);
	}
label_8:;
	{
	LINE_NUMBER(2243);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_orExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:orExpr", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2248);
	sp[0].o = (jobject)M_rhino_Parser_andExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2249);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (105), (jint(1)));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2250);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2251);
	clinit_rhino_ast_InfixExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_InfixExpression);
	jint temp0 = 105;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)M_rhino_Parser_orExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	init_rhino_ast_InfixExpression_int_rhino_ast_AstNode_rhino_ast_AstNode_int(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, (frame[2].i));
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2253);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_andExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:andExpr", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2258);
	sp[0].o = (jobject)M_rhino_Parser_bitOrExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2259);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (106), (jint(1)));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2260);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2261);
	clinit_rhino_ast_InfixExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_InfixExpression);
	jint temp0 = 106;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)M_rhino_Parser_andExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	init_rhino_ast_InfixExpression_int_rhino_ast_AstNode_rhino_ast_AstNode_int(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, (frame[2].i));
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2263);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_bitOrExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:bitOrExpr", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2268);
	sp[0].o = (jobject)M_rhino_Parser_bitXorExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2269);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (9), (jint(1)));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2270);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2271);
	clinit_rhino_ast_InfixExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_InfixExpression);
	jint temp0 = 9;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)M_rhino_Parser_bitXorExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	init_rhino_ast_InfixExpression_int_rhino_ast_AstNode_rhino_ast_AstNode_int(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, (frame[2].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2272);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(2273);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_bitXorExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:bitXorExpr", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2278);
	sp[0].o = (jobject)M_rhino_Parser_bitAndExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2279);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (10), (jint(1)));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2280);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2281);
	clinit_rhino_ast_InfixExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_InfixExpression);
	jint temp0 = 10;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)M_rhino_Parser_bitAndExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	init_rhino_ast_InfixExpression_int_rhino_ast_AstNode_rhino_ast_AstNode_int(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, (frame[2].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2282);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(2283);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_bitAndExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:bitAndExpr", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2288);
	sp[0].o = (jobject)M_rhino_Parser_eqExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2289);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (11), (jint(1)));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2290);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2291);
	clinit_rhino_ast_InfixExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_InfixExpression);
	jint temp0 = 11;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)M_rhino_Parser_eqExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	init_rhino_ast_InfixExpression_int_rhino_ast_AstNode_rhino_ast_AstNode_int(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, (frame[2].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2292);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(2293);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_eqExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:eqExpr", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2298);
	sp[0].o = (jobject)M_rhino_Parser_relExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2300);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2301);
	switch((frame[2].i)) {
		case 12: goto label_4;
		case 13: goto label_4;
		case 46: goto label_4;
		case 47: goto label_4;
		default: goto label_5;
	}
	}
label_4:;
	{
	LINE_NUMBER(2306);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2307);
	frame[4].i = (frame[2].i);
	LINE_NUMBER(2308);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 != (120)) goto label_8;
	}
	{
	LINE_NUMBER(2310);
	if ((frame[2].i) != (12)) goto label_10;
	}
	{
	LINE_NUMBER(2311);
	frame[4].i = (46);
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(2312);
	if ((frame[2].i) != (13)) goto label_8;
	}
	{
	LINE_NUMBER(2313);
	frame[4].i = (47);
	}
label_8:;
	{
	LINE_NUMBER(2315);
	clinit_rhino_ast_InfixExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_InfixExpression);
	jint temp0 = frame[4].i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)M_rhino_Parser_relExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	init_rhino_ast_InfixExpression_int_rhino_ast_AstNode_rhino_ast_AstNode_int(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, (frame[3].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2316);
	goto label_1;
	}
label_5:;
	LINE_NUMBER(2318);
	goto label_14;
label_14:;
	{
	LINE_NUMBER(2320);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_relExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:relExpr", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2325);
	sp[0].o = (jobject)M_rhino_Parser_shiftExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2327);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2328);
	switch((frame[2].i)) {
		case 14: goto label_4;
		case 15: goto label_4;
		case 16: goto label_4;
		case 17: goto label_4;
		case 52: goto label_5;
		case 53: goto label_4;
		default: goto label_6;
	}
	}
label_5:;
	{
	LINE_NUMBER(2330);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit) == 0) goto label_4;
	}
	LINE_NUMBER(2331);
	goto label_6;
label_4:;
	{
	LINE_NUMBER(2338);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2339);
	clinit_rhino_ast_InfixExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_InfixExpression);
	jint temp0 = frame[2].i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)M_rhino_Parser_shiftExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	init_rhino_ast_InfixExpression_int_rhino_ast_AstNode_rhino_ast_AstNode_int(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, (frame[3].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2340);
	goto label_1;
	}
label_6:;
	LINE_NUMBER(2342);
	goto label_10;
label_10:;
	{
	LINE_NUMBER(2344);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_shiftExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:shiftExpr", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2349);
	sp[0].o = (jobject)M_rhino_Parser_addExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2351);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2352);
	switch((frame[2].i)) {
		case 18: goto label_4;
		case 19: goto label_4;
		case 20: goto label_4;
		default: goto label_5;
	}
	}
label_4:;
	{
	LINE_NUMBER(2356);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2357);
	clinit_rhino_ast_InfixExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_InfixExpression);
	jint temp0 = frame[2].i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)M_rhino_Parser_addExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	init_rhino_ast_InfixExpression_int_rhino_ast_AstNode_rhino_ast_AstNode_int(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, (frame[3].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2358);
	goto label_1;
	}
label_5:;
	LINE_NUMBER(2360);
	goto label_8;
label_8:;
	{
	LINE_NUMBER(2362);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_addExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:addExpr", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2367);
	sp[0].o = (jobject)M_rhino_Parser_mulExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2369);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2370);
	if ((frame[2].i) == (21)) goto label_4;
	}
	{
	if ((frame[2].i) != (22)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(2371);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2372);
	clinit_rhino_ast_InfixExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_InfixExpression);
	jint temp0 = frame[2].i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)M_rhino_Parser_mulExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	init_rhino_ast_InfixExpression_int_rhino_ast_AstNode_rhino_ast_AstNode_int(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, (frame[3].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2373);
	goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(2377);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_mulExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:mulExpr", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2382);
	sp[0].o = (jobject)M_rhino_Parser_unaryExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2384);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2385);
	switch((frame[2].i)) {
		case 23: goto label_4;
		case 24: goto label_4;
		case 25: goto label_4;
		default: goto label_5;
	}
	}
label_4:;
	{
	LINE_NUMBER(2389);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2390);
	clinit_rhino_ast_InfixExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_InfixExpression);
	jint temp0 = frame[2].i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)M_rhino_Parser_unaryExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	init_rhino_ast_InfixExpression_int_rhino_ast_AstNode_rhino_ast_AstNode_int(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, (frame[3].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2391);
	goto label_1;
	}
label_5:;
	LINE_NUMBER(2393);
	goto label_8;
label_8:;
	{
	LINE_NUMBER(2395);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_unaryExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:unaryExpr", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2401);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(2402);
	if ((frame[2].i) != (162)) goto label_2;
	}
	{
	LINE_NUMBER(2403);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2404);
	jint temp0 = (jint)M_rhino_Parser_peekUntilNonComment_int_R_int(ctx, (frame[0].o), (frame[2].i));
	frame[2].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(2406);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(2408);
	switch((frame[2].i)) {
		case -1: goto label_6;
		case 14: goto label_7;
		case 21: goto label_8;
		case 22: goto label_9;
		case 26: goto label_10;
		case 27: goto label_10;
		case 31: goto label_10;
		case 32: goto label_10;
		case 107: goto label_11;
		case 108: goto label_11;
		case 127: goto label_10;
		default: goto label_7;
	}
	}
label_10:;
	{
	LINE_NUMBER(2415);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2416);
	clinit_rhino_ast_UnaryExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_UnaryExpression);
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp1 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg;
	sp[1].o = (jobject)M_rhino_Parser_unaryExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	init_rhino_ast_UnaryExpression_int_int_rhino_ast_AstNode(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2417);
	((func_rhino_ast_AstNode_setLineno_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setLineno_int])(ctx, (frame[1].o), (frame[3].i));
	LINE_NUMBER(2418);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_8:;
	{
	LINE_NUMBER(2421);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2423);
	clinit_rhino_ast_UnaryExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_UnaryExpression);
	jint temp0 = 28;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp1 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg;
	sp[1].o = (jobject)M_rhino_Parser_unaryExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	init_rhino_ast_UnaryExpression_int_int_rhino_ast_AstNode(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2424);
	((func_rhino_ast_AstNode_setLineno_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setLineno_int])(ctx, (frame[1].o), (frame[3].i));
	LINE_NUMBER(2425);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_9:;
	{
	LINE_NUMBER(2428);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2430);
	clinit_rhino_ast_UnaryExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_UnaryExpression);
	jint temp0 = 29;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp1 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg;
	sp[1].o = (jobject)M_rhino_Parser_unaryExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	init_rhino_ast_UnaryExpression_int_int_rhino_ast_AstNode(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2431);
	((func_rhino_ast_AstNode_setLineno_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setLineno_int])(ctx, (frame[1].o), (frame[3].i));
	LINE_NUMBER(2432);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_11:;
	{
	LINE_NUMBER(2436);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2437);
	clinit_rhino_ast_UnaryExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_UnaryExpression);
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp1 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg;
	sp[1].o = frame[0].o;
	jint temp2 = jint(1);
	LINE_NUMBER(2438);
	sp[1].o = (jobject)M_rhino_Parser_memberExpr_boolean_R_rhino_ast_AstNode(ctx, sp[1].o, temp2);
	init_rhino_ast_UnaryExpression_int_int_rhino_ast_AstNode(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2439);
	((func_rhino_ast_UnaryExpression_setLineno_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_UnaryExpression_setLineno_int])(ctx, (frame[4].o), (frame[3].i));
	LINE_NUMBER(2440);
	M_rhino_Parser_checkBadIncDec_rhino_ast_UnaryExpression(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(2441);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_6:;
	{
	LINE_NUMBER(2444);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2445);
	sp[0].o = (jobject)M_rhino_Parser_makeErrorNode_R_rhino_ast_ErrorNode(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(2452);
	sp[0].o = (jobject)M_rhino_Parser_memberExpr_boolean_R_rhino_ast_AstNode(ctx, (frame[0].o), (jint(1)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2454);
	jint temp0 = (jint)M_rhino_Parser_peekTokenOrEOL_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(2455);
	if ((frame[2].i) == (107)) goto label_29;
	}
	{
	if ((frame[2].i) == (108)) goto label_29;
	}
	{
	LINE_NUMBER(2456);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_29:;
	{
	LINE_NUMBER(2458);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2459);
	clinit_rhino_ast_UnaryExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_UnaryExpression);
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	init_rhino_ast_UnaryExpression_int_int_rhino_ast_AstNode_boolean(ctx, sp[0].o, temp0, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg), (frame[5].o), (jint(1)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2461);
	((func_rhino_ast_UnaryExpression_setLineno_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_UnaryExpression_setLineno_int])(ctx, (frame[6].o), (frame[3].i));
	LINE_NUMBER(2462);
	M_rhino_Parser_checkBadIncDec_rhino_ast_UnaryExpression(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(2463);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_argumentList_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:argumentList", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2469);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (89), (jint(1)));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(2470);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(2472);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2473);
	frame[2].i = ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit);
	LINE_NUMBER(2474);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit = (jint(0));
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(2477);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 != (89)) goto label_15;
	}
	LINE_NUMBER(2479);
	goto label_5;
label_15:;
	{
	LINE_NUMBER(2481);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 != (73)) goto label_17;
	}
	{
	LINE_NUMBER(2482);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.yield.parenthesized"_j))));
	}
label_17:;
	{
	LINE_NUMBER(2484);
	sp[0].o = (jobject)M_rhino_Parser_assignExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2485);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 != (120)) goto label_20;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2487);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)M_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_boolean_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[3].o), (jint(0)), (jint(1)));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(2490);
	goto label_21;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2488);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2490);
	goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(2492);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	}
label_21:;
	{
	LINE_NUMBER(2494);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (90), (jint(1)));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(2496);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit = (frame[2].i);
	LINE_NUMBER(2497);
	goto label_24;
	}
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	LINE_NUMBER(2496);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit = (frame[2].i);
	LINE_NUMBER(2497);
	throwException(ctx, (frame[5].o));	}
label_24:;
	{
	LINE_NUMBER(2499);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (89), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.arg"_j))), (jint(1)));
	LINE_NUMBER(2500);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_memberExpr_boolean_R_rhino_ast_AstNode(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:memberExpr", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2510);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(2513);
	if ((frame[2].i) == (30)) goto label_3;
	}
	{
	LINE_NUMBER(2514);
	sp[0].o = (jobject)M_rhino_Parser_primaryExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(2516);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2517);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[5].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2518);
	clinit_rhino_ast_NewExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_NewExpression);
	init_rhino_ast_NewExpression_int(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2520);
	sp[0].o = (jobject)M_rhino_Parser_memberExpr_boolean_R_rhino_ast_AstNode(ctx, (frame[0].o), (jint(0)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2521);
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[7].o));
	frame[8].i = temp0;
	LINE_NUMBER(2522);
	((func_rhino_ast_NewExpression_setTarget_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_NewExpression_setTarget_rhino_ast_AstNode])(ctx, (frame[6].o), (frame[7].o));
	LINE_NUMBER(2525);
	jint temp1 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (88), (jint(1)));
	if (temp1 == 0) goto label_13;
	}
	{
	LINE_NUMBER(2526);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[9].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2527);
	sp[0].o = (jobject)M_rhino_Parser_argumentList_R_java_util_List(ctx, (frame[0].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(2528);
	if ((frame[10].o) == nullptr) goto label_17;
	}
	{
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 <= (jint(65536))) goto label_17;
	}
	{
	LINE_NUMBER(2529);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.too.many.constructor.args"_j))));
	}
label_17:;
	{
	LINE_NUMBER(2530);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[11].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2531);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[8].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	LINE_NUMBER(2532);
	if ((frame[10].o) == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(2533);
	((func_rhino_ast_NewExpression_setArguments_java_util_List) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_NewExpression_setArguments_java_util_List])(ctx, (frame[6].o), (frame[10].o));
	}
label_21:;
	{
	LINE_NUMBER(2534);
	((func_rhino_ast_NewExpression_setParens_int_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_NewExpression_setParens_int_int])(ctx, (frame[6].o), ((frame[9].i) - (frame[5].i)), ((frame[11].i) - (frame[5].i)));
	}
label_13:;
	{
	LINE_NUMBER(2541);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (86), (jint(1)));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(2542);
	sp[0].o = (jobject)M_rhino_Parser_objectLiteral_R_rhino_ast_ObjectLiteral(ctx, (frame[0].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(2543);
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[10].o));
	frame[8].i = temp0;
	LINE_NUMBER(2544);
	((func_rhino_ast_NewExpression_setInitializer_rhino_ast_ObjectLiteral) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_NewExpression_setInitializer_rhino_ast_ObjectLiteral])(ctx, (frame[6].o), (frame[10].o));
	}
label_23:;
	{
	LINE_NUMBER(2546);
	((func_rhino_ast_NewExpression_setLength_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_NewExpression_setLength_int])(ctx, (frame[6].o), ((frame[8].i) - (frame[5].i)));
	LINE_NUMBER(2547);
	frame[4].o = (frame[6].o);
	}
label_6:;
	{
	LINE_NUMBER(2549);
	((func_rhino_ast_AstNode_setLineno_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_AstNode_setLineno_int])(ctx, (frame[4].o), (frame[3].i));
	LINE_NUMBER(2550);
	sp[0].o = (jobject)M_rhino_Parser_memberExprTail_boolean_rhino_ast_AstNode_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[1].i), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2551);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_memberExprTail_boolean_rhino_ast_AstNode_R_rhino_ast_AstNode(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:memberExprTail", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2564);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(2565);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[2].o));
	frame[3].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(2569);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[5].i = temp0;
	LINE_NUMBER(2570);
	switch((frame[5].i)) {
		case 84: goto label_4;
		case 88: goto label_5;
		case 109: goto label_6;
		case 162: goto label_7;
		default: goto label_8;
	}
	}
label_6:;
	{
	LINE_NUMBER(2572);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(2573);
	sp[0].o = (jobject)M_rhino_Parser_propertyAccess_int_rhino_ast_AstNode_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[5].i), (frame[2].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2574);
	((func_rhino_ast_AstNode_setLineno_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_setLineno_int])(ctx, (frame[2].o), (frame[4].i));
	LINE_NUMBER(2575);
	goto label_12;
	}
label_4:;
	{
	LINE_NUMBER(2578);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2579);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[6].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	frame[7].i = (jint(-1));
	LINE_NUMBER(2580);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(2581);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2582);
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[8].o));
	frame[9].i = temp0;
	LINE_NUMBER(2583);
	jint temp1 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (85), (((jobject) createStringLiteral(ctx, u8"msg.no.bracket.index"_j))), (jint(1)));
	if (temp1 == 0) goto label_19;
	}
	{
	LINE_NUMBER(2584);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[7].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2585);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[9].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	}
label_19:;
	{
	LINE_NUMBER(2587);
	clinit_rhino_ast_ElementGet(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ElementGet);
	init_rhino_ast_ElementGet_int_int(ctx, sp[0].o, (frame[3].i), ((frame[9].i) - (frame[3].i)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(2588);
	((func_rhino_ast_ElementGet_setTarget_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_ElementGet_setTarget_rhino_ast_AstNode])(ctx, (frame[10].o), (frame[2].o));
	LINE_NUMBER(2589);
	((func_rhino_ast_ElementGet_setElement_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_ElementGet_setElement_rhino_ast_AstNode])(ctx, (frame[10].o), (frame[8].o));
	LINE_NUMBER(2590);
	((func_rhino_ast_ElementGet_setParens_int_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_ElementGet_setParens_int_int])(ctx, (frame[10].o), (frame[6].i), (frame[7].i));
	LINE_NUMBER(2591);
	((func_rhino_ast_ElementGet_setLineno_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_ElementGet_setLineno_int])(ctx, (frame[10].o), (frame[4].i));
	LINE_NUMBER(2592);
	frame[2].o = (frame[10].o);
	LINE_NUMBER(2593);
	goto label_12;
	}
label_5:;
	{
	LINE_NUMBER(2596);
	if ((frame[1].i) != 0) goto label_28;
	}
	LINE_NUMBER(2597);
	goto label_30;
label_28:;
	{
	LINE_NUMBER(2599);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(2600);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2601);
	M_rhino_Parser_checkCallRequiresActivation_rhino_ast_AstNode(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(2602);
	clinit_rhino_ast_FunctionCall(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_FunctionCall);
	init_rhino_ast_FunctionCall_int(ctx, sp[0].o, (frame[3].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(2603);
	((func_rhino_ast_FunctionCall_setTarget_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_ast_FunctionCall_setTarget_rhino_ast_AstNode])(ctx, (frame[11].o), (frame[2].o));
	LINE_NUMBER(2606);
	((func_rhino_ast_FunctionCall_setLineno_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_ast_FunctionCall_setLineno_int])(ctx, (frame[11].o), (frame[4].i));
	LINE_NUMBER(2607);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_FunctionCall_setLp_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionCall_setLp_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg) - (frame[3].i)));
	LINE_NUMBER(2608);
	sp[0].o = (jobject)M_rhino_Parser_argumentList_R_java_util_List(ctx, (frame[0].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(2609);
	if ((frame[12].o) == nullptr) goto label_39;
	}
	{
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[12].o)))(ctx, (frame[12].o));
	if (temp0 <= (jint(65536))) goto label_39;
	}
	{
	LINE_NUMBER(2610);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.too.many.function.args"_j))));
	}
label_39:;
	{
	LINE_NUMBER(2611);
	((func_rhino_ast_FunctionCall_setArguments_java_util_List) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_ast_FunctionCall_setArguments_java_util_List])(ctx, (frame[11].o), (frame[12].o));
	LINE_NUMBER(2612);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_FunctionCall_setRp_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionCall_setRp_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg) - (frame[3].i)));
	LINE_NUMBER(2613);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_FunctionCall_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionCall_setLength_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd) - (frame[3].i)));
	LINE_NUMBER(2614);
	frame[2].o = (frame[11].o);
	LINE_NUMBER(2615);
	goto label_12;
	}
label_7:;
	{
	LINE_NUMBER(2618);
	frame[13].i = ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentFlaggedToken);
	LINE_NUMBER(2619);
	jint temp0 = (jint)M_rhino_Parser_peekUntilNonComment_int_R_int(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(2620);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentFlaggedToken) & (jint(65536))) == 0) goto label_47;
	}
	{
	jint temp0 = (jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentFlaggedToken;
	sp[0].i = temp0;
	sp += 1;
	goto label_48;
	}
label_47:;
	INST_ILOAD(13);
label_48:;
	{
	sp -= 2;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_currentFlaggedToken = sp[1].i;
	LINE_NUMBER(2621);
	goto label_12;
	}
label_8:;
	LINE_NUMBER(2623);
	goto label_30;
label_12:;
	LINE_NUMBER(2625);
	goto label_2;
label_30:;
	{
	LINE_NUMBER(2626);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_propertyAccess_int_rhino_ast_AstNode_R_rhino_ast_AstNode(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:propertyAccess", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2636);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(2637);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[5].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2638);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2640);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isXmlAvailable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isXmlAvailable_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(2641);
	jint temp0 = (jint)M_rhino_Parser_nextToken_R_int(ctx, (frame[0].o));
	frame[6].i = temp0;
	LINE_NUMBER(2642);
	if ((frame[6].i) == (39)) goto label_9;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	LINE_NUMBER(2643);
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isReservedKeywordAsIdentifier_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isReservedKeywordAsIdentifier_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	LINE_NUMBER(2644);
	sp[0].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)SM_rhino_TokenStream_isKeyword_java_lang_String_int_boolean_R_boolean(ctx, sp[0].o, temp0, ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective));
	if (temp1 != 0) goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(2645);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.no.name.after.dot"_j))));
	}
label_9:;
	{
	LINE_NUMBER(2648);
	sp[0].o = (jobject)M_rhino_Parser_createNameNode_boolean_int_R_rhino_ast_Name(ctx, (frame[0].o), (jint(1)), (33));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2649);
	clinit_rhino_ast_PropertyGet(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_PropertyGet);
	init_rhino_ast_PropertyGet_rhino_ast_AstNode_rhino_ast_Name_int(ctx, sp[0].o, (frame[2].o), (frame[7].o), (frame[5].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2650);
	((func_rhino_ast_PropertyGet_setLineno_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_PropertyGet_setLineno_int])(ctx, (frame[8].o), (frame[4].i));
	LINE_NUMBER(2651);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_6:;
	{
	LINE_NUMBER(2656);
	jint temp0 = (jint)M_rhino_Parser_nextToken_R_int(ctx, (frame[0].o));
	frame[7].i = temp0;
	LINE_NUMBER(2657);
	switch((frame[7].i)) {
		case 23: goto label_17;
		case 39: goto label_18;
		case 50: goto label_19;
		case 128: goto label_20;
		default: goto label_21;
	}
	}
label_19:;
	{
	LINE_NUMBER(2660);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"throw"_j));
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	M_rhino_Parser_saveNameTokenData_int_java_lang_String_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[2].o))->F_lineno));
	LINE_NUMBER(2661);
	sp[0].o = (jobject)M_rhino_Parser_propertyName_int_int_R_rhino_ast_AstNode(ctx, (frame[0].o), (jint(-1)), (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2662);
	goto label_24;
	}
label_18:;
	{
	LINE_NUMBER(2666);
	sp[0].o = (jobject)M_rhino_Parser_propertyName_int_int_R_rhino_ast_AstNode(ctx, (frame[0].o), (jint(-1)), (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2667);
	goto label_24;
	}
label_17:;
	{
	LINE_NUMBER(2671);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"*"_j));
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	M_rhino_Parser_saveNameTokenData_int_java_lang_String_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[2].o))->F_lineno));
	LINE_NUMBER(2672);
	sp[0].o = (jobject)M_rhino_Parser_propertyName_int_int_R_rhino_ast_AstNode(ctx, (frame[0].o), (jint(-1)), (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2673);
	goto label_24;
	}
label_20:;
	{
	LINE_NUMBER(2676);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(2677);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg;
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	M_rhino_Parser_saveNameTokenData_int_java_lang_String_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[2].o))->F_lineno));
	LINE_NUMBER(2678);
	sp[0].o = (jobject)M_rhino_Parser_propertyName_int_int_R_rhino_ast_AstNode(ctx, (frame[0].o), (jint(-1)), (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2679);
	goto label_24;
	}
label_21:;
	{
	LINE_NUMBER(2683);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isReservedKeywordAsIdentifier_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isReservedKeywordAsIdentifier_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(2685);
	sp[0].o = (jobject)SM_rhino_Token_keywordToName_int_R_java_lang_String(ctx, (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2686);
	if ((frame[8].o) == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(2687);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg;
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	M_rhino_Parser_saveNameTokenData_int_java_lang_String_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[2].o))->F_lineno));
	LINE_NUMBER(2688);
	sp[0].o = (jobject)M_rhino_Parser_propertyName_int_int_R_rhino_ast_AstNode(ctx, (frame[0].o), (jint(-1)), (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2689);
	goto label_24;
	}
label_31:;
	{
	LINE_NUMBER(2692);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.no.name.after.dot"_j))));
	LINE_NUMBER(2693);
	sp[0].o = (jobject)M_rhino_Parser_makeErrorNode_R_rhino_ast_ErrorNode(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(2696);
	clinit_rhino_ast_PropertyGet(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_PropertyGet);
	init_rhino_ast_PropertyGet(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(2697);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[2].o));
	frame[9].i = temp0;
	LINE_NUMBER(2698);
	((func_rhino_ast_InfixExpression_setPosition_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_InfixExpression_setPosition_int])(ctx, (frame[8].o), (frame[9].i));
	LINE_NUMBER(2699);
	sp[0].o = frame[8].o;
	jint temp1 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[6].o));
	((func_rhino_ast_InfixExpression_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_InfixExpression_setLength_int])(ctx, sp[0].o, (temp1 - (frame[9].i)));
	LINE_NUMBER(2700);
	((func_rhino_ast_InfixExpression_setOperatorPosition_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_InfixExpression_setOperatorPosition_int])(ctx, (frame[8].o), ((frame[5].i) - (frame[9].i)));
	LINE_NUMBER(2701);
	sp[0].o = frame[8].o;
	jint temp2 = (jint)((func_rhino_ast_AstNode_getLineno_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getLineno_R_int])(ctx, (frame[2].o));
	((func_rhino_ast_InfixExpression_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_InfixExpression_setLineno_int])(ctx, sp[0].o, temp2);
	LINE_NUMBER(2702);
	((func_rhino_ast_InfixExpression_setLeft_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_InfixExpression_setLeft_rhino_ast_AstNode])(ctx, (frame[8].o), (frame[2].o));
	LINE_NUMBER(2703);
	((func_rhino_ast_InfixExpression_setRight_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_InfixExpression_setRight_rhino_ast_AstNode])(ctx, (frame[8].o), (frame[6].o));
	LINE_NUMBER(2704);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_propertyName_int_int_R_rhino_ast_AstNode(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:propertyName", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2718);
	if ((frame[1].i) == (jint(-1))) goto label_1;
	}
	INST_ILOAD(1);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg;
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(2719);
	frame[5].i = (jint(-1));
	LINE_NUMBER(2720);
	sp[0].o = (jobject)M_rhino_Parser_createNameNode_boolean_int_R_rhino_ast_Name(ctx, (frame[0].o), (jint(1)), ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2721);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(2723);
	if ((frame[7].o) != nullptr) goto label_8;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_8;
	{
	if ((frame[1].i) != (jint(-1))) goto label_8;
	}
	{
	LINE_NUMBER(2724);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_8:;
	{
	LINE_NUMBER(2726);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"one of us has done something horribly wrong "_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_destructuringPrimaryExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:destructuringPrimaryExpr", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2733);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inDestructuringAssignment = (jint(1));
	LINE_NUMBER(2734);
	sp[0].o = (jobject)M_rhino_Parser_primaryExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(2736);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inDestructuringAssignment = (jint(0));
	LINE_NUMBER(2734);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2736);
	frame[2].o = sp[0].o;
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inDestructuringAssignment = (jint(0));
	LINE_NUMBER(2737);
	throwException(ctx, (frame[2].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_primaryExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:primaryExpr", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2742);
	jint temp0 = (jint)M_rhino_Parser_peekFlaggedToken_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(2743);
	frame[2].i = ((frame[1].i) & (jint(65535)));
	LINE_NUMBER(2745);
	switch((frame[2].i)) {
		case -1: goto label_3;
		case 0: goto label_4;
		case 24: goto label_5;
		case 39: goto label_6;
		case 40: goto label_7;
		case 41: goto label_8;
		case 42: goto label_9;
		case 43: goto label_9;
		case 44: goto label_9;
		case 45: goto label_9;
		case 84: goto label_10;
		case 86: goto label_11;
		case 88: goto label_12;
		case 101: goto label_5;
		case 110: goto label_13;
		case 128: goto label_14;
		case 154: goto label_15;
		default: goto label_16;
	}
	}
label_13:;
	{
	LINE_NUMBER(2747);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2748);
	sp[0].o = (jobject)M_rhino_Parser_function_int_R_rhino_ast_FunctionNode(ctx, (frame[0].o), (jint(2)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(2751);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2752);
	sp[0].o = (jobject)M_rhino_Parser_arrayLiteral_R_rhino_ast_AstNode(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(2755);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2756);
	sp[0].o = (jobject)M_rhino_Parser_objectLiteral_R_rhino_ast_ObjectLiteral(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(2759);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2760);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)M_rhino_Parser_let_boolean_int_R_rhino_ast_AstNode(ctx, sp[0].o, temp0, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(2763);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2764);
	sp[0].o = (jobject)M_rhino_Parser_parenExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(2767);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2768);
	sp[0].o = (jobject)M_rhino_Parser_name_int_int_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(2771);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2772);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2773);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective) == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((func_rhino_TokenStream_isNumberOldOctal_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_isNumberOldOctal_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(2774);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.no.old.octal.strict"_j))));
	}
label_25:;
	{
	LINE_NUMBER(2776);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((func_rhino_TokenStream_isNumberBinary_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_isNumberBinary_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(2777);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"0b"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(2779);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((func_rhino_TokenStream_isNumberOldOctal_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_isNumberOldOctal_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(2780);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"0"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(2782);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((func_rhino_TokenStream_isNumberOctal_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_isNumberOctal_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(2783);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"0o"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(2785);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((func_rhino_TokenStream_isNumberHex_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_isNumberHex_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(2786);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"0x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_33:;
	{
	LINE_NUMBER(2788);
	clinit_rhino_ast_NumberLiteral(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_NumberLiteral);
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	LINE_NUMBER(2790);
	jdouble temp1 = (jdouble)((func_rhino_TokenStream_getNumber_R_double) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_TokenStream_getNumber_R_double])(ctx, sp[2].o);
	init_rhino_ast_NumberLiteral_int_java_lang_String_double(ctx, sp[0].o, temp0, sp[1].o, temp1);
	LINE_NUMBER(2788);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(2794);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2795);
	sp[0].o = (jobject)M_rhino_Parser_createStringLiteral_R_rhino_ast_StringLiteral(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(2799);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2801);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_TokenStream_readRegExp_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_readRegExp_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(2802);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	LINE_NUMBER(2803);
	clinit_rhino_ast_RegExpLiteral(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_RegExpLiteral);
	init_rhino_ast_RegExpLiteral_int_int(ctx, sp[0].o, (frame[3].i), ((frame[4].i) - (frame[3].i)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2804);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[1].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[1].o);
	((func_rhino_ast_RegExpLiteral_setValue_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_RegExpLiteral_setValue_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2805);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[1].o = (jobject)((func_rhino_TokenStream_readAndClearRegExpFlags_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_TokenStream_readAndClearRegExpFlags_R_java_lang_String])(ctx, sp[1].o);
	((func_rhino_ast_RegExpLiteral_setFlags_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_RegExpLiteral_setFlags_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2806);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_9:;
	{
	LINE_NUMBER(2812);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2813);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2814);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	LINE_NUMBER(2815);
	clinit_rhino_ast_KeywordLiteral(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_KeywordLiteral);
	init_rhino_ast_KeywordLiteral_int_int_int(ctx, sp[0].o, (frame[3].i), ((frame[4].i) - (frame[3].i)), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(2818);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2819);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"msg.reserved.id"_j));
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[2].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[2].o);
	((func_rhino_Parser_reportError_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(2820);
	goto label_50;
	}
label_3:;
	{
	LINE_NUMBER(2823);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2825);
	goto label_50;
	}
label_4:;
	{
	LINE_NUMBER(2828);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2829);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.unexpected.eof"_j))));
	LINE_NUMBER(2830);
	goto label_50;
	}
label_16:;
	{
	LINE_NUMBER(2833);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2834);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.syntax"_j))));
	}
label_50:;
	{
	LINE_NUMBER(2838);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2839);
	sp[0].o = (jobject)M_rhino_Parser_makeErrorNode_R_rhino_ast_ErrorNode(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_parenExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:parenExpr", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2843);
	frame[1].i = ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit);
	LINE_NUMBER(2844);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2846);
	sp[0].o = (jobject)M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2847);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(2848);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2849);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 != (89)) goto label_17;
	}
	{
	clinit_rhino_ast_EmptyExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_EmptyExpression);
	init_rhino_ast_EmptyExpression_int(ctx, sp[0].o, (frame[4].i));
	sp += 1;
	goto label_18;
	}
label_17:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, sp[0].o);
	sp++;
label_18:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(2850);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 != (120)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(2851);
	sp[0].o = (jobject)M_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[5].o), (frame[4].i));
	frame[6].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(2869);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit = (frame[1].i);
	LINE_NUMBER(2851);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2853);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (89), (((jobject) createStringLiteral(ctx, u8"msg.no.paren"_j))), (jint(1)));
	LINE_NUMBER(2854);
	jint temp1 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[5].o));
	if (temp1 != (129)) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 == (165)) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(2855);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.syntax"_j))));
	LINE_NUMBER(2856);
	sp[0].o = (jobject)M_rhino_Parser_makeErrorNode_R_rhino_ast_ErrorNode(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(2869);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit = (frame[1].i);
	LINE_NUMBER(2856);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2858);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[6].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd) - (frame[4].i));
	LINE_NUMBER(2859);
	clinit_rhino_ast_ParenthesizedExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ParenthesizedExpression);
	init_rhino_ast_ParenthesizedExpression_int_int_rhino_ast_AstNode(ctx, sp[0].o, (frame[4].i), (frame[6].i), (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2860);
	((func_rhino_ast_ParenthesizedExpression_setLineno_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_ParenthesizedExpression_setLineno_int])(ctx, (frame[7].o), (frame[3].i));
	LINE_NUMBER(2861);
	if ((frame[2].o) != nullptr) goto label_29;
	}
	{
	LINE_NUMBER(2862);
	sp[0].o = (jobject)M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(2864);
	if ((frame[2].o) == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(2865);
	((func_rhino_ast_ParenthesizedExpression_setJsDocNode_rhino_ast_Comment) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_ParenthesizedExpression_setJsDocNode_rhino_ast_Comment])(ctx, (frame[7].o), (frame[2].o));
	}
label_31:;
	{
	LINE_NUMBER(2867);
	frame[8].o = (frame[7].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(2869);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit = (frame[1].i);
	LINE_NUMBER(2867);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_2:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(2869);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit = (frame[1].i);
	LINE_NUMBER(2870);
	throwException(ctx, (frame[9].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_name_int_int_R_rhino_ast_AstNode(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:name", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2874);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2875);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[5].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(2876);
	if ((jint(0)) == ((frame[1].i) & (jint(131072)))) goto label_4;
	}
	{
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 != (104)) goto label_4;
	}
	{
	LINE_NUMBER(2879);
	clinit_rhino_ast_Label(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Label);
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	init_rhino_ast_Label_int_int(ctx, sp[0].o, temp0, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd) - (frame[4].i)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2880);
	((func_rhino_ast_Label_setName_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_Label_setName_java_lang_String])(ctx, (frame[6].o), (frame[3].o));
	LINE_NUMBER(2881);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_Label_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Label_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	LINE_NUMBER(2882);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_4:;
	{
	LINE_NUMBER(2887);
	M_rhino_Parser_saveNameTokenData_int_java_lang_String_int(ctx, (frame[0].o), (frame[4].i), (frame[3].o), (frame[5].i));
	LINE_NUMBER(2889);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isXmlAvailable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isXmlAvailable_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(2890);
	sp[0].o = (jobject)M_rhino_Parser_propertyName_int_int_R_rhino_ast_AstNode(ctx, (frame[0].o), (jint(-1)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(2892);
	sp[0].o = (jobject)M_rhino_Parser_createNameNode_boolean_int_R_rhino_ast_Name(ctx, (frame[0].o), (jint(1)), (39));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_arrayLiteral_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:arrayLiteral", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2900);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken) == (84)) goto label_1;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(2901);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	LINE_NUMBER(2902);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2903);
	clinit_rhino_ast_ArrayLiteral(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ArrayLiteral);
	init_rhino_ast_ArrayLiteral_int(ctx, sp[0].o, (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2904);
	frame[5].i = (jint(1));
	LINE_NUMBER(2905);
	frame[6].i = (jint(-1));
	LINE_NUMBER(2906);
	frame[7].i = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(2908);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[8].i = temp0;
	LINE_NUMBER(2909);
	if ((frame[8].i) != (90)) goto label_10;
	}
	{
	LINE_NUMBER(2910);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2911);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[6].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	LINE_NUMBER(2912);
	if ((frame[5].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(2913);
	frame[5].i = (jint(1));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(2915);
	sp[0].o = frame[3].o;
	clinit_rhino_ast_EmptyExpression(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ast_EmptyExpression);
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	init_rhino_ast_EmptyExpression_int_int(ctx, sp[1].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[2].o))->F_tokenBeg), (jint(1)));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2916);
	INST_IINC(7, 1);
	goto label_16;
	}
label_10:;
	{
	LINE_NUMBER(2918);
	if ((frame[8].i) != (162)) goto label_18;
	}
	{
	LINE_NUMBER(2919);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	goto label_16;
	}
label_18:;
	{
	LINE_NUMBER(2920);
	if ((frame[8].i) != (85)) goto label_20;
	}
	{
	LINE_NUMBER(2921);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2927);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	LINE_NUMBER(2928);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].i = temp0;
	sp += 2;
	if ((frame[5].i) == 0) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	{
	sp -= 3;
	((func_rhino_ast_ArrayLiteral_setDestructuringLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ArrayLiteral_setDestructuringLength_int])(ctx, sp[0].o, (sp[1].i + sp[2].i));
	LINE_NUMBER(2930);
	((func_rhino_ast_ArrayLiteral_setSkipCount_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_ArrayLiteral_setSkipCount_int])(ctx, (frame[4].o), (frame[7].i));
	LINE_NUMBER(2931);
	if ((frame[6].i) == (jint(-1))) goto label_28;
	}
	{
	LINE_NUMBER(2932);
	M_rhino_Parser_warnTrailingComma_int_java_util_List_int(ctx, (frame[0].o), (frame[1].i), (frame[3].o), (frame[6].i));
	goto label_28;
	}
label_20:;
	{
	LINE_NUMBER(2934);
	if ((frame[8].i) != (120)) goto label_30;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_30;
	{
	sp[0].o = frame[3].o;
	LINE_NUMBER(2935);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 != (jint(1))) goto label_30;
	}
	{
	LINE_NUMBER(2936);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (jint(0)));
	sp[0].o = (jobject)M_rhino_Parser_arrayComprehension_rhino_ast_AstNode_int_R_rhino_ast_AstNode(ctx, sp[0].o, (checkCast(ctx, &class_rhino_ast_AstNode, sp[1].o)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_30:;
	{
	LINE_NUMBER(2937);
	if ((frame[8].i) != 0) goto label_33;
	}
	{
	LINE_NUMBER(2938);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.no.bracket.arg"_j))));
	LINE_NUMBER(2939);
	goto label_28;
	}
label_33:;
	{
	LINE_NUMBER(2941);
	if ((frame[5].i) != 0) goto label_36;
	}
	{
	LINE_NUMBER(2942);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.no.bracket.arg"_j))));
	}
label_36:;
	{
	LINE_NUMBER(2944);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)M_rhino_Parser_assignExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2945);
	frame[5].i = (jint(0));
	LINE_NUMBER(2946);
	frame[6].i = (jint(-1));
	}
label_16:;
	LINE_NUMBER(2948);
	goto label_8;
label_28:;
	{
	LINE_NUMBER(2949);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[3].o)))(ctx, (frame[3].o));
	frame[8].o = sp[0].o;
	}
label_40:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_41;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(2950);
	((func_rhino_ast_ArrayLiteral_addElement_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_ArrayLiteral_addElement_rhino_ast_AstNode])(ctx, (frame[4].o), (frame[9].o));
	LINE_NUMBER(2951);
	goto label_40;
	}
label_41:;
	{
	LINE_NUMBER(2952);
	((func_rhino_ast_ArrayLiteral_setLength_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_ArrayLiteral_setLength_int])(ctx, (frame[4].o), ((frame[2].i) - (frame[1].i)));
	LINE_NUMBER(2953);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_arrayComprehension_rhino_ast_AstNode_int_R_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:arrayComprehension", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2964);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2966);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 != (120)) goto label_2;
	}
	{
	LINE_NUMBER(2967);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)M_rhino_Parser_arrayComprehensionLoop_R_rhino_ast_ArrayComprehensionLoop(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(2969);
	frame[4].i = (jint(-1));
	LINE_NUMBER(2970);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(2971);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 != (113)) goto label_6;
	}
	{
	LINE_NUMBER(2972);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(2973);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg) - (frame[2].i));
	LINE_NUMBER(2974);
	sp[0].o = (jobject)M_rhino_Parser_condition_R_rhino_Parser$ConditionData(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(2976);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (85), (((jobject) createStringLiteral(ctx, u8"msg.no.bracket.arg"_j))), (jint(1)));
	LINE_NUMBER(2977);
	clinit_rhino_ast_ArrayComprehension(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ArrayComprehension);
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	init_rhino_ast_ArrayComprehension_int_int(ctx, sp[0].o, temp1, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd) - (frame[2].i)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2978);
	((func_rhino_ast_ArrayComprehension_setResult_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_ArrayComprehension_setResult_rhino_ast_AstNode])(ctx, (frame[6].o), (frame[1].o));
	LINE_NUMBER(2979);
	((func_rhino_ast_ArrayComprehension_setLoops_java_util_List) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_ArrayComprehension_setLoops_java_util_List])(ctx, (frame[6].o), (frame[3].o));
	LINE_NUMBER(2980);
	if ((frame[5].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(2981);
	((func_rhino_ast_ArrayComprehension_setIfPosition_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_ArrayComprehension_setIfPosition_int])(ctx, (frame[6].o), (frame[4].i));
	LINE_NUMBER(2982);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((rhino_Parser$ConditionData *) NULL_CHECK((frame[5].o)))->F_condition;
	((func_rhino_ast_ArrayComprehension_setFilter_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ArrayComprehension_setFilter_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2983);
	((func_rhino_ast_ArrayComprehension_setFilterLp_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_ArrayComprehension_setFilterLp_int])(ctx, (frame[6].o), (((jint)((rhino_Parser$ConditionData *) NULL_CHECK((frame[5].o)))->F_lp) - (frame[2].i)));
	LINE_NUMBER(2984);
	((func_rhino_ast_ArrayComprehension_setFilterRp_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_ArrayComprehension_setFilterRp_int])(ctx, (frame[6].o), (((jint)((rhino_Parser$ConditionData *) NULL_CHECK((frame[5].o)))->F_rp) - (frame[2].i)));
	}
label_14:;
	{
	LINE_NUMBER(2986);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_arrayComprehensionLoop_R_rhino_ast_ArrayComprehensionLoop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:arrayComprehensionLoop", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2991);
	jint temp0 = (jint)M_rhino_Parser_nextToken_R_int(ctx, (frame[0].o));
	if (temp0 == (120)) goto label_7;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(2992);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(2993);
	frame[2].i = (jint(-1));
	frame[3].i = (jint(-1));
	frame[4].i = (jint(-1));
	frame[5].i = (jint(-1));
	LINE_NUMBER(2994);
	frame[6].i = (jint(0));
	LINE_NUMBER(2995);
	clinit_rhino_ast_ArrayComprehensionLoop(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ArrayComprehensionLoop);
	init_rhino_ast_ArrayComprehensionLoop_int(ctx, sp[0].o, (frame[1].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2997);
	((func_rhino_Parser_pushScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_pushScope_rhino_ast_Scope])(ctx, (frame[0].o), (frame[7].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2999);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (39), (jint(1)));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(3000);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"each"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(3001);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg) - (frame[1].i));
	goto label_15;
	}
label_17:;
	{
	LINE_NUMBER(3003);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.for"_j))));
	}
label_15:;
	{
	LINE_NUMBER(3006);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (88), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.for"_j))), (jint(1)));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(3007);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg) - (frame[1].i));
	}
label_19:;
	{
	LINE_NUMBER(3010);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(3011);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	switch(temp0) {
		case 39: goto label_22;
		case 84: goto label_23;
		case 86: goto label_23;
		default: goto label_24;
	}
	}
label_23:;
	{
	LINE_NUMBER(3015);
	sp[0].o = (jobject)M_rhino_Parser_destructuringPrimaryExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(3016);
	((func_rhino_Parser_markDestructuring_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_markDestructuring_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[8].o));
	LINE_NUMBER(3017);
	goto label_27;
	}
label_22:;
	{
	LINE_NUMBER(3019);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(3020);
	sp[0].o = (jobject)M_rhino_Parser_createNameNode_R_rhino_ast_Name(ctx, (frame[0].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(3021);
	goto label_27;
	}
label_24:;
	{
	LINE_NUMBER(3023);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.var"_j))));
	}
label_27:;
	{
	LINE_NUMBER(3028);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[8].o));
	if (temp0 != (39)) goto label_30;
	}
	{
	LINE_NUMBER(3029);
	sp[0].o = frame[0].o;
	jint temp0 = 154;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[1].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[1].o);
	((func_rhino_Parser_defineSymbol_int_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_defineSymbol_int_java_lang_String_boolean])(ctx, sp[0].o, temp0, sp[1].o, (jint(1)));
	}
label_30:;
	{
	LINE_NUMBER(3032);
	jint temp0 = (jint)M_rhino_Parser_nextToken_R_int(ctx, (frame[0].o));
	switch(temp0) {
		case 39: goto label_32;
		case 52: goto label_33;
		default: goto label_34;
	}
	}
label_33:;
	{
	LINE_NUMBER(3034);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[5].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg) - (frame[1].i));
	LINE_NUMBER(3035);
	goto label_36;
	}
label_32:;
	{
	LINE_NUMBER(3037);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"of"_j));
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[1].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_34;
	}
	{
	LINE_NUMBER(3038);
	if ((frame[2].i) == (jint(-1))) goto label_38;
	}
	{
	LINE_NUMBER(3039);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.invalid.for.each"_j))));
	}
label_38:;
	{
	LINE_NUMBER(3041);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[5].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg) - (frame[1].i));
	LINE_NUMBER(3042);
	frame[6].i = (jint(1));
	LINE_NUMBER(3043);
	goto label_36;
	}
label_34:;
	{
	LINE_NUMBER(3047);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.in.after.for.name"_j))));
	}
label_36:;
	{
	LINE_NUMBER(3049);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(3050);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (89), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.for.ctrl"_j))), (jint(1)));
	if (temp0 == 0) goto label_43;
	}
	{
	LINE_NUMBER(3051);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg) - (frame[1].i));
	}
label_43:;
	{
	LINE_NUMBER(3053);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_ArrayComprehensionLoop_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ArrayComprehensionLoop_setLength_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd) - (frame[1].i)));
	LINE_NUMBER(3054);
	((func_rhino_ast_ArrayComprehensionLoop_setIterator_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_ArrayComprehensionLoop_setIterator_rhino_ast_AstNode])(ctx, (frame[7].o), (frame[8].o));
	LINE_NUMBER(3055);
	((func_rhino_ast_ArrayComprehensionLoop_setIteratedObject_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_ArrayComprehensionLoop_setIteratedObject_rhino_ast_AstNode])(ctx, (frame[7].o), (frame[9].o));
	LINE_NUMBER(3056);
	((func_rhino_ast_ArrayComprehensionLoop_setInPosition_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_ArrayComprehensionLoop_setInPosition_int])(ctx, (frame[7].o), (frame[5].i));
	LINE_NUMBER(3057);
	((func_rhino_ast_ArrayComprehensionLoop_setEachPosition_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_ArrayComprehensionLoop_setEachPosition_int])(ctx, (frame[7].o), (frame[2].i));
	LINE_NUMBER(3058);
	sp[0].o = frame[7].o;
	sp += 1;
	if ((frame[2].i) == (jint(-1))) goto label_50;
	}
	INST_ICONST(1);
	goto label_51;
label_50:;
	INST_ICONST(0);
label_51:;
	{
	sp -= 2;
	((func_rhino_ast_ArrayComprehensionLoop_setIsForEach_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ArrayComprehensionLoop_setIsForEach_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(3059);
	((func_rhino_ast_ArrayComprehensionLoop_setParens_int_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_ArrayComprehensionLoop_setParens_int_int])(ctx, (frame[7].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(3060);
	((func_rhino_ast_ArrayComprehensionLoop_setIsForOf_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_ArrayComprehensionLoop_setIsForOf_boolean])(ctx, (frame[7].o), (frame[6].i));
	LINE_NUMBER(3061);
	frame[10].o = (frame[7].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(3063);
	((func_rhino_Parser_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(3061);
	popStackFrame(ctx);
	return (frame[10].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(3063);
	INST_ASTORE(11);
	popExceptionFrame(frameRef);
	{
	((func_rhino_Parser_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(3064);
	throwException(ctx, (frame[11].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_R_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:generatorExpression", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3069);
	sp[0].o = (jobject)M_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_boolean_R_rhino_ast_AstNode(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_boolean_R_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:generatorExpression", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(3075);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(3077);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 != (120)) goto label_2;
	}
	{
	LINE_NUMBER(3078);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)M_rhino_Parser_generatorExpressionLoop_R_rhino_ast_GeneratorExpressionLoop(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(3080);
	frame[5].i = (jint(-1));
	LINE_NUMBER(3081);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(3082);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	if (temp0 != (113)) goto label_6;
	}
	{
	LINE_NUMBER(3083);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(3084);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[5].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg) - (frame[2].i));
	LINE_NUMBER(3085);
	sp[0].o = (jobject)M_rhino_Parser_condition_R_rhino_Parser$ConditionData(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(3087);
	if ((frame[3].i) != 0) goto label_10;
	}
	{
	LINE_NUMBER(3088);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (89), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.let"_j))), (jint(1)));
	}
label_10:;
	{
	LINE_NUMBER(3090);
	clinit_rhino_ast_GeneratorExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_GeneratorExpression);
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	init_rhino_ast_GeneratorExpression_int_int(ctx, sp[0].o, temp0, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd) - (frame[2].i)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(3091);
	((func_rhino_ast_GeneratorExpression_setResult_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_GeneratorExpression_setResult_rhino_ast_AstNode])(ctx, (frame[7].o), (frame[1].o));
	LINE_NUMBER(3092);
	((func_rhino_ast_GeneratorExpression_setLoops_java_util_List) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_GeneratorExpression_setLoops_java_util_List])(ctx, (frame[7].o), (frame[4].o));
	LINE_NUMBER(3093);
	if ((frame[6].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(3094);
	((func_rhino_ast_GeneratorExpression_setIfPosition_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_GeneratorExpression_setIfPosition_int])(ctx, (frame[7].o), (frame[5].i));
	LINE_NUMBER(3095);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((rhino_Parser$ConditionData *) NULL_CHECK((frame[6].o)))->F_condition;
	((func_rhino_ast_GeneratorExpression_setFilter_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_GeneratorExpression_setFilter_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(3096);
	((func_rhino_ast_GeneratorExpression_setFilterLp_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_GeneratorExpression_setFilterLp_int])(ctx, (frame[7].o), (((jint)((rhino_Parser$ConditionData *) NULL_CHECK((frame[6].o)))->F_lp) - (frame[2].i)));
	LINE_NUMBER(3097);
	((func_rhino_ast_GeneratorExpression_setFilterRp_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_GeneratorExpression_setFilterRp_int])(ctx, (frame[7].o), (((jint)((rhino_Parser$ConditionData *) NULL_CHECK((frame[6].o)))->F_rp) - (frame[2].i)));
	}
label_15:;
	{
	LINE_NUMBER(3099);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_generatorExpressionLoop_R_rhino_ast_GeneratorExpressionLoop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:generatorExpressionLoop", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3104);
	jint temp0 = (jint)M_rhino_Parser_nextToken_R_int(ctx, (frame[0].o));
	if (temp0 == (120)) goto label_7;
	}
	{
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(3105);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(3106);
	frame[2].i = (jint(-1));
	frame[3].i = (jint(-1));
	frame[4].i = (jint(-1));
	LINE_NUMBER(3107);
	clinit_rhino_ast_GeneratorExpressionLoop(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_GeneratorExpressionLoop);
	init_rhino_ast_GeneratorExpressionLoop_int(ctx, sp[0].o, (frame[1].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3109);
	((func_rhino_Parser_pushScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_pushScope_rhino_ast_Scope])(ctx, (frame[0].o), (frame[5].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(3111);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (88), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.for"_j))), (jint(1)));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(3112);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg) - (frame[1].i));
	}
label_13:;
	{
	LINE_NUMBER(3115);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(3116);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	switch(temp0) {
		case 39: goto label_16;
		case 84: goto label_17;
		case 86: goto label_17;
		default: goto label_18;
	}
	}
label_17:;
	{
	LINE_NUMBER(3120);
	sp[0].o = (jobject)M_rhino_Parser_destructuringPrimaryExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(3121);
	((func_rhino_Parser_markDestructuring_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_markDestructuring_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(3122);
	goto label_21;
	}
label_16:;
	{
	LINE_NUMBER(3124);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(3125);
	sp[0].o = (jobject)M_rhino_Parser_createNameNode_R_rhino_ast_Name(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(3126);
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(3128);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.var"_j))));
	}
label_21:;
	{
	LINE_NUMBER(3133);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[6].o));
	if (temp0 != (39)) goto label_24;
	}
	{
	LINE_NUMBER(3134);
	sp[0].o = frame[0].o;
	jint temp0 = 154;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[1].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[1].o);
	((func_rhino_Parser_defineSymbol_int_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_defineSymbol_int_java_lang_String_boolean])(ctx, sp[0].o, temp0, sp[1].o, (jint(1)));
	}
label_24:;
	{
	LINE_NUMBER(3137);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (52), (((jobject) createStringLiteral(ctx, u8"msg.in.after.for.name"_j))), (jint(1)));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(3138);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[4].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg) - (frame[1].i));
	}
label_26:;
	{
	LINE_NUMBER(3139);
	sp[0].o = (jobject)M_rhino_Parser_expr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(3140);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (89), (((jobject) createStringLiteral(ctx, u8"msg.no.paren.for.ctrl"_j))), (jint(1)));
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(3141);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg) - (frame[1].i));
	}
label_29:;
	{
	LINE_NUMBER(3143);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_GeneratorExpressionLoop_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_GeneratorExpressionLoop_setLength_int])(ctx, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd) - (frame[1].i)));
	LINE_NUMBER(3144);
	((func_rhino_ast_GeneratorExpressionLoop_setIterator_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_GeneratorExpressionLoop_setIterator_rhino_ast_AstNode])(ctx, (frame[5].o), (frame[6].o));
	LINE_NUMBER(3145);
	((func_rhino_ast_GeneratorExpressionLoop_setIteratedObject_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_GeneratorExpressionLoop_setIteratedObject_rhino_ast_AstNode])(ctx, (frame[5].o), (frame[7].o));
	LINE_NUMBER(3146);
	((func_rhino_ast_GeneratorExpressionLoop_setInPosition_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_GeneratorExpressionLoop_setInPosition_int])(ctx, (frame[5].o), (frame[4].i));
	LINE_NUMBER(3147);
	((func_rhino_ast_GeneratorExpressionLoop_setParens_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_GeneratorExpressionLoop_setParens_int_int])(ctx, (frame[5].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(3148);
	frame[8].o = (frame[5].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(3150);
	((func_rhino_Parser_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(3148);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(3150);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	((func_rhino_Parser_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(3151);
	throwException(ctx, (frame[9].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_objectLiteral_R_rhino_ast_ObjectLiteral(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:objectLiteral", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3161);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(3162);
	frame[3].i = (jint(-1));
	LINE_NUMBER(3163);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(3164);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(3165);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(3166);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective) == 0) goto label_7;
	}
	{
	LINE_NUMBER(3167);
	clinit_java_util_HashSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashSet);
	init_java_util_HashSet(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(3168);
	clinit_java_util_HashSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashSet);
	init_java_util_HashSet(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(3170);
	sp[0].o = (jobject)M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(3174);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(3175);
	frame[9].i = (jint(1));
	LINE_NUMBER(3176);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[10].i = temp0;
	LINE_NUMBER(3177);
	sp[0].o = (jobject)M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(ctx, (frame[0].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(3178);
	if ((frame[10].i) != (162)) goto label_15;
	}
	{
	LINE_NUMBER(3179);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(3180);
	jint temp0 = (jint)M_rhino_Parser_peekUntilNonComment_int_R_int(ctx, (frame[0].o), (frame[10].i));
	frame[10].i = temp0;
	}
label_15:;
	{
	LINE_NUMBER(3182);
	if ((frame[10].i) != (87)) goto label_18;
	}
	{
	LINE_NUMBER(3183);
	if ((frame[3].i) == (jint(-1))) goto label_20;
	}
	{
	LINE_NUMBER(3184);
	M_rhino_Parser_warnTrailingComma_int_java_util_List_int(ctx, (frame[0].o), (frame[1].i), (frame[4].o), (frame[3].i));
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(3187);
	sp[0].o = (jobject)M_rhino_Parser_objliteralProperty_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(3188);
	if ((frame[12].o) != nullptr) goto label_23;
	}
	{
	LINE_NUMBER(3189);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.prop"_j))));
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(3191);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(3192);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[13].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(3193);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	LINE_NUMBER(3203);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[14].i = temp0;
	LINE_NUMBER(3204);
	if ((frame[14].i) == (90)) goto label_30;
	}
	{
	if ((frame[14].i) == (104)) goto label_30;
	}
	{
	if ((frame[14].i) == (87)) goto label_30;
	}
	{
	LINE_NUMBER(3207);
	if ((frame[14].i) != (88)) goto label_32;
	}
	{
	LINE_NUMBER(3208);
	frame[9].i = (8);
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(3209);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[12].o));
	if (temp0 != (39)) goto label_34;
	}
	{
	LINE_NUMBER(3210);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"get"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"get"_j))), (frame[8].o));
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(3211);
	frame[9].i = (jint(2));
	goto label_34;
	}
label_36:;
	{
	LINE_NUMBER(3212);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"set"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"set"_j))), (frame[8].o));
	if (temp0 == 0) goto label_34;
	}
	{
	LINE_NUMBER(3213);
	frame[9].i = (jint(4));
	}
label_34:;
	{
	LINE_NUMBER(3216);
	if ((frame[9].i) == (jint(2))) goto label_39;
	}
	{
	if ((frame[9].i) != (jint(4))) goto label_40;
	}
label_39:;
	{
	LINE_NUMBER(3217);
	sp[0].o = (jobject)M_rhino_Parser_objliteralProperty_R_rhino_ast_AstNode(ctx, (frame[0].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(3218);
	if ((frame[12].o) != nullptr) goto label_42;
	}
	{
	LINE_NUMBER(3219);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.prop"_j))));
	}
label_42:;
	{
	LINE_NUMBER(3221);
	M_rhino_Parser_consumeToken(ctx, (frame[0].o));
	}
label_40:;
	{
	LINE_NUMBER(3223);
	if ((frame[12].o) != nullptr) goto label_44;
	}
	{
	LINE_NUMBER(3224);
	frame[8].o = (jobject(nullptr));
	goto label_25;
	}
label_44:;
	{
	LINE_NUMBER(3226);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(3227);
	sp[0].o = (jobject)M_rhino_Parser_methodDefinition_int_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty(ctx, (frame[0].o), (frame[13].i), (frame[12].o), (frame[9].i));
	frame[15].o = sp[0].o;
	LINE_NUMBER(3229);
	((func_rhino_ast_AstNode_setJsDocNode_rhino_ast_Comment) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_ast_AstNode_setJsDocNode_rhino_ast_Comment])(ctx, (frame[12].o), (frame[11].o));
	LINE_NUMBER(3230);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, (frame[4].o)))(ctx, (frame[4].o), (frame[15].o));
	LINE_NUMBER(3231);
	goto label_25;
	}
label_30:;
	{
	LINE_NUMBER(3233);
	((func_rhino_ast_AstNode_setJsDocNode_rhino_ast_Comment) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_ast_AstNode_setJsDocNode_rhino_ast_Comment])(ctx, (frame[12].o), (frame[11].o));
	LINE_NUMBER(3234);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)M_rhino_Parser_plainProperty_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty(ctx, (frame[0].o), (frame[12].o), (frame[10].i));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_25:;
	{
	LINE_NUMBER(3238);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective) == 0) goto label_51;
	}
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_51;
	{
	LINE_NUMBER(3239);
	switch((frame[9].i)) {
		case 1: goto label_53;
		case 2: goto label_54;
		case 3: goto label_51;
		case 4: goto label_55;
		case 5: goto label_51;
		case 6: goto label_51;
		case 7: goto label_51;
		case 8: goto label_53;
		default: goto label_51;
	}
	}
label_53:;
	{
	LINE_NUMBER(3242);
	jint temp0 = (jint)((func_java_util_Set_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_contains_java_lang_Object_R_boolean, (frame[5].o)))(ctx, (frame[5].o), (frame[8].o));
	if (temp0 != 0) goto label_56;
	}
	{
	sp[0].o = frame[6].o;
	sp[1].o = frame[8].o;
	LINE_NUMBER(3243);
	jint temp0 = (jint)((func_java_util_Set_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_contains_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_58;
	}
label_56:;
	{
	LINE_NUMBER(3244);
	((func_rhino_Parser_addError_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.dup.obj.lit.prop.strict"_j))), (frame[8].o));
	}
label_58:;
	{
	LINE_NUMBER(3246);
	jint temp0 = (jint)((func_java_util_Set_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_add_java_lang_Object_R_boolean, (frame[5].o)))(ctx, (frame[5].o), (frame[8].o));
	LINE_NUMBER(3247);
	jint temp1 = (jint)((func_java_util_Set_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_add_java_lang_Object_R_boolean, (frame[6].o)))(ctx, (frame[6].o), (frame[8].o));
	LINE_NUMBER(3248);
	goto label_51;
	}
label_54:;
	{
	LINE_NUMBER(3250);
	jint temp0 = (jint)((func_java_util_Set_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_contains_java_lang_Object_R_boolean, (frame[5].o)))(ctx, (frame[5].o), (frame[8].o));
	if (temp0 == 0) goto label_61;
	}
	{
	LINE_NUMBER(3251);
	((func_rhino_Parser_addError_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.dup.obj.lit.prop.strict"_j))), (frame[8].o));
	}
label_61:;
	{
	LINE_NUMBER(3253);
	jint temp0 = (jint)((func_java_util_Set_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_add_java_lang_Object_R_boolean, (frame[5].o)))(ctx, (frame[5].o), (frame[8].o));
	LINE_NUMBER(3254);
	goto label_51;
	}
label_55:;
	{
	LINE_NUMBER(3256);
	jint temp0 = (jint)((func_java_util_Set_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_contains_java_lang_Object_R_boolean, (frame[6].o)))(ctx, (frame[6].o), (frame[8].o));
	if (temp0 == 0) goto label_64;
	}
	{
	LINE_NUMBER(3257);
	((func_rhino_Parser_addError_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.dup.obj.lit.prop.strict"_j))), (frame[8].o));
	}
label_64:;
	{
	LINE_NUMBER(3259);
	jint temp0 = (jint)((func_java_util_Set_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_add_java_lang_Object_R_boolean, (frame[6].o)))(ctx, (frame[6].o), (frame[8].o));
	}
label_51:;
	{
	LINE_NUMBER(3265);
	sp[0].o = (jobject)M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(ctx, (frame[0].o));
	LINE_NUMBER(3267);
	jint temp0 = (jint)M_rhino_Parser_matchToken_int_boolean_R_boolean(ctx, (frame[0].o), (90), (jint(1)));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(3268);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	LINE_NUMBER(3272);
	goto label_10;
	}
label_20:;
	{
	LINE_NUMBER(3274);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (87), (((jobject) createStringLiteral(ctx, u8"msg.no.brace.prop"_j))), (jint(1)));
	LINE_NUMBER(3275);
	clinit_rhino_ast_ObjectLiteral(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ObjectLiteral);
	jint temp1 = frame[1].i;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	init_rhino_ast_ObjectLiteral_int_int(ctx, sp[0].o, temp1, (((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd) - (frame[1].i)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(3276);
	if ((frame[7].o) == nullptr) goto label_71;
	}
	{
	LINE_NUMBER(3277);
	((func_rhino_ast_ObjectLiteral_setJsDocNode_rhino_ast_Comment) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_ObjectLiteral_setJsDocNode_rhino_ast_Comment])(ctx, (frame[8].o), (frame[7].o));
	}
label_71:;
	{
	LINE_NUMBER(3279);
	((func_rhino_ast_ObjectLiteral_setElements_java_util_List) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_ObjectLiteral_setElements_java_util_List])(ctx, (frame[8].o), (frame[4].o));
	LINE_NUMBER(3280);
	((func_rhino_ast_ObjectLiteral_setLineno_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_ObjectLiteral_setLineno_int])(ctx, (frame[8].o), (frame[2].i));
	LINE_NUMBER(3281);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_objliteralProperty_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:objliteralProperty", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3286);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(3287);
	switch((frame[2].i)) {
		case 39: goto label_2;
		case 40: goto label_3;
		case 41: goto label_4;
		default: goto label_5;
	}
	}
label_2:;
	{
	LINE_NUMBER(3289);
	sp[0].o = (jobject)M_rhino_Parser_createNameNode_R_rhino_ast_Name(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3290);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(3293);
	sp[0].o = (jobject)M_rhino_Parser_createStringLiteral_R_rhino_ast_StringLiteral(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3294);
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(3297);
	clinit_rhino_ast_NumberLiteral(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_NumberLiteral);
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	LINE_NUMBER(3298);
	sp[1].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jdouble temp1 = (jdouble)((func_rhino_TokenStream_getNumber_R_double) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_TokenStream_getNumber_R_double])(ctx, sp[2].o);
	init_rhino_ast_NumberLiteral_int_java_lang_String_double(ctx, sp[0].o, temp0, sp[1].o, temp1);
	frame[1].o = sp[0].o;
	LINE_NUMBER(3299);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(3302);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isReservedKeywordAsIdentifier_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isReservedKeywordAsIdentifier_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	LINE_NUMBER(3303);
	sp[0].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)SM_rhino_TokenStream_isKeyword_java_lang_String_int_boolean_R_boolean(ctx, sp[0].o, temp0, ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective));
	if (temp1 == 0) goto label_11;
	}
	{
	LINE_NUMBER(3305);
	sp[0].o = (jobject)M_rhino_Parser_createNameNode_R_rhino_ast_Name(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3306);
	goto label_7;
	}
label_11:;
	{
	LINE_NUMBER(3308);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(3311);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_plainProperty_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:plainProperty", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3318);
	jint temp0 = (jint)M_rhino_Parser_peekToken_R_int(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(3319);
	if ((frame[3].i) == (90)) goto label_2;
	}
	{
	if ((frame[3].i) != (87)) goto label_3;
	}
label_2:;
	{
	if ((frame[2].i) != (39)) goto label_3;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	LINE_NUMBER(3320);
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 < (180)) goto label_3;
	}
	{
	LINE_NUMBER(3321);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inDestructuringAssignment) != 0) goto label_6;
	}
	{
	LINE_NUMBER(3322);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.object.init"_j))));
	}
label_6:;
	{
	LINE_NUMBER(3324);
	clinit_rhino_ast_Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Name);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_rhino_ast_AstNode_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getString_R_java_lang_String])(ctx, (frame[1].o));
	init_rhino_ast_Name_int_java_lang_String(ctx, sp[0].o, temp0, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(3325);
	clinit_rhino_ast_ObjectProperty(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ObjectProperty);
	init_rhino_ast_ObjectProperty(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(3326);
	sp[0].o = frame[5].o;
	jint temp1 = 26;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	((func_rhino_ast_ObjectProperty_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ObjectProperty_putProp_int_java_lang_Object])(ctx, sp[0].o, temp1, sp[1].o);
	LINE_NUMBER(3327);
	((func_rhino_ast_ObjectProperty_setLeftAndRight_rhino_ast_AstNode_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_setLeftAndRight_rhino_ast_AstNode_rhino_ast_AstNode])(ctx, (frame[5].o), (frame[1].o), (frame[4].o));
	LINE_NUMBER(3328);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_3:;
	{
	LINE_NUMBER(3330);
	jint temp0 = (jint)M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(ctx, (frame[0].o), (104), (((jobject) createStringLiteral(ctx, u8"msg.no.colon.prop"_j))), (jint(1)));
	LINE_NUMBER(3331);
	clinit_rhino_ast_ObjectProperty(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ObjectProperty);
	init_rhino_ast_ObjectProperty(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(3332);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_ObjectProperty_setOperatorPosition_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ObjectProperty_setOperatorPosition_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg));
	LINE_NUMBER(3333);
	sp[0].o = frame[4].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)M_rhino_Parser_assignExpr_R_rhino_ast_AstNode(ctx, (frame[0].o));
	((func_rhino_ast_ObjectProperty_setLeftAndRight_rhino_ast_AstNode_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ObjectProperty_setLeftAndRight_rhino_ast_AstNode_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(3334);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_methodDefinition_int_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:methodDefinition", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(3339);
	sp[0].o = (jobject)M_rhino_Parser_function_int_R_rhino_ast_FunctionNode(ctx, (frame[0].o), (jint(2)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3341);
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3342);
	if ((frame[5].o) == nullptr) goto label_3;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_Name_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_Name_length_R_int])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(3343);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.prop"_j))));
	}
label_3:;
	{
	LINE_NUMBER(3345);
	clinit_rhino_ast_ObjectProperty(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ObjectProperty);
	init_rhino_ast_ObjectProperty_int(ctx, sp[0].o, (frame[1].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(3346);
	switch((frame[3].i)) {
		case 2: goto label_6;
		case 4: goto label_7;
		case 8: goto label_8;
		default: goto label_9;
	}
	}
label_6:;
	{
	LINE_NUMBER(3348);
	((func_rhino_ast_ObjectProperty_setIsGetterMethod) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_setIsGetterMethod])(ctx, (frame[6].o));
	LINE_NUMBER(3349);
	((func_rhino_ast_FunctionNode_setFunctionIsGetterMethod) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setFunctionIsGetterMethod])(ctx, (frame[4].o));
	LINE_NUMBER(3350);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(3352);
	((func_rhino_ast_ObjectProperty_setIsSetterMethod) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_setIsSetterMethod])(ctx, (frame[6].o));
	LINE_NUMBER(3353);
	((func_rhino_ast_FunctionNode_setFunctionIsSetterMethod) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setFunctionIsSetterMethod])(ctx, (frame[4].o));
	LINE_NUMBER(3354);
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(3356);
	((func_rhino_ast_ObjectProperty_setIsNormalMethod) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_setIsNormalMethod])(ctx, (frame[6].o));
	LINE_NUMBER(3357);
	((func_rhino_ast_FunctionNode_setFunctionIsNormalMethod) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setFunctionIsNormalMethod])(ctx, (frame[4].o));
	}
label_9:;
	{
	LINE_NUMBER(3360);
	jint temp0 = (jint)M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(ctx, (frame[0].o), (frame[4].o));
	frame[7].i = temp0;
	LINE_NUMBER(3361);
	((func_rhino_ast_ObjectProperty_setLeft_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_setLeft_rhino_ast_AstNode])(ctx, (frame[6].o), (frame[2].o));
	LINE_NUMBER(3362);
	((func_rhino_ast_ObjectProperty_setRight_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_setRight_rhino_ast_AstNode])(ctx, (frame[6].o), (frame[4].o));
	LINE_NUMBER(3363);
	((func_rhino_ast_ObjectProperty_setLength_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_setLength_int])(ctx, (frame[6].o), ((frame[7].i) - (frame[1].i)));
	LINE_NUMBER(3364);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_createNameNode_R_rhino_ast_Name(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:createNameNode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3368);
	sp[0].o = (jobject)M_rhino_Parser_createNameNode_boolean_int_R_rhino_ast_Name(ctx, (frame[0].o), (jint(0)), (39));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_createNameNode_boolean_int_R_rhino_ast_Name(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:createNameNode", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3379);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[3].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	LINE_NUMBER(3380);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(3381);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[5].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	LINE_NUMBER(3382);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_prevNameTokenString;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(3383);
	frame[3].i = ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_prevNameTokenStart);
	LINE_NUMBER(3384);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_prevNameTokenString;
	frame[4].o = sp[0].o;
	LINE_NUMBER(3385);
	frame[5].i = ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_prevNameTokenLineno);
	LINE_NUMBER(3386);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_prevNameTokenStart = (jint(0));
	LINE_NUMBER(3387);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_prevNameTokenString = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(3388);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_prevNameTokenLineno = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(3390);
	if ((frame[4].o) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(3391);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isIdeMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isIdeMode_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(3392);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(3394);
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	}
label_11:;
	{
	LINE_NUMBER(3397);
	clinit_rhino_ast_Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Name);
	init_rhino_ast_Name_int_java_lang_String(ctx, sp[0].o, (frame[3].i), (frame[4].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(3398);
	((func_rhino_ast_Name_setLineno_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_Name_setLineno_int])(ctx, (frame[6].o), (frame[5].i));
	LINE_NUMBER(3399);
	if ((frame[1].i) == 0) goto label_17;
	}
	{
	LINE_NUMBER(3400);
	((func_rhino_Parser_checkActivationName_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_checkActivationName_java_lang_String_int])(ctx, (frame[0].o), (frame[4].o), (frame[2].i));
	}
label_17:;
	{
	LINE_NUMBER(3402);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_createStringLiteral_R_rhino_ast_StringLiteral(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:createStringLiteral", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3406);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenBeg);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_tokenEnd);
	LINE_NUMBER(3407);
	clinit_rhino_ast_StringLiteral(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_StringLiteral);
	init_rhino_ast_StringLiteral_int_int(ctx, sp[0].o, (frame[1].i), ((frame[2].i) - (frame[1].i)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(3408);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_StringLiteral_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_StringLiteral_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	LINE_NUMBER(3409);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[1].o = (jobject)((func_rhino_TokenStream_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_TokenStream_getString_R_java_lang_String])(ctx, sp[1].o);
	((func_rhino_ast_StringLiteral_setValue_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_StringLiteral_setValue_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(3410);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((func_rhino_TokenStream_getQuoteChar_R_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_TokenStream_getQuoteChar_R_char])(ctx, sp[1].o);
	((func_rhino_ast_StringLiteral_setQuoteCharacter_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_StringLiteral_setQuoteCharacter_char])(ctx, sp[0].o, temp0);
	LINE_NUMBER(3411);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_checkActivationName_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:checkActivationName", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3415);
	jint temp0 = (jint)((func_rhino_Parser_insideFunction_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_insideFunction_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	LINE_NUMBER(3416);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(3418);
	frame[3].i = (jint(0));
	LINE_NUMBER(3419);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"arguments"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"arguments"_j))), (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	sp[0].o = checkCast(ctx, &class_rhino_ast_FunctionNode, sp[0].o);
	LINE_NUMBER(3421);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_getFunctionType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionType_R_int])(ctx, sp[0].o);
	if (temp0 == (jint(4))) goto label_4;
	}
	{
	LINE_NUMBER(3422);
	frame[3].i = (jint(1));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(3423);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	sp[0].o = (jobject)((func_rhino_CompilerEnvirons_getActivationNames_R_java_util_Set) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getActivationNames_R_java_util_Set])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	LINE_NUMBER(3424);
	sp[0].o = (jobject)((func_rhino_CompilerEnvirons_getActivationNames_R_java_util_Set) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getActivationNames_R_java_util_Set])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_util_Set_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_contains_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(3425);
	frame[3].i = (jint(1));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(3426);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"length"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"length"_j))), (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(3427);
	if ((frame[2].i) != (33)) goto label_7;
	}
	{
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	LINE_NUMBER(3428);
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 != (120)) goto label_7;
	}
	{
	LINE_NUMBER(3430);
	frame[3].i = (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(3433);
	if ((frame[3].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(3434);
	((func_rhino_Parser_setRequiresActivation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_setRequiresActivation])(ctx, (frame[0].o));
	}
label_14:;
	LINE_NUMBER(3436);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Parser_setRequiresActivation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:setRequiresActivation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3439);
	jint temp0 = (jint)((func_rhino_Parser_insideFunction_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_insideFunction_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(3440);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	((func_rhino_ast_FunctionNode_setRequiresActivation) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_FunctionNode, sp[0].o)))->vtable)[VTABLE_rhino_ast_FunctionNode_setRequiresActivation])(ctx, (checkCast(ctx, &class_rhino_ast_FunctionNode, sp[0].o)));
	}
label_1:;
	LINE_NUMBER(3442);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Parser_checkCallRequiresActivation_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:checkCallRequiresActivation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3445);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[1].o));
	if (temp0 != (39)) goto label_1;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"eval"_j));
	sp[1].o = checkCast(ctx, &class_rhino_ast_Name, (frame[1].o));
	LINE_NUMBER(3446);
	sp[1].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
label_1:;
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(3447);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, sp[0].o);
	if (temp0 != (33)) goto label_5;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"eval"_j));
	sp[1].o = checkCast(ctx, &class_rhino_ast_PropertyGet, (frame[1].o));
	LINE_NUMBER(3448);
	sp[1].o = (jobject)((func_rhino_ast_PropertyGet_getProperty_R_rhino_ast_Name) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_PropertyGet_getProperty_R_rhino_ast_Name])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(3449);
	((func_rhino_Parser_setRequiresActivation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_setRequiresActivation])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(3450);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Parser_setIsGenerator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:setIsGenerator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3453);
	jint temp0 = (jint)((func_rhino_Parser_insideFunction_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_insideFunction_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(3454);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	((func_rhino_ast_FunctionNode_setIsGenerator) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_FunctionNode, sp[0].o)))->vtable)[VTABLE_rhino_ast_FunctionNode_setIsGenerator])(ctx, (checkCast(ctx, &class_rhino_ast_FunctionNode, sp[0].o)));
	}
label_1:;
	LINE_NUMBER(3456);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Parser_checkBadIncDec_rhino_ast_UnaryExpression(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:checkBadIncDec", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3459);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_UnaryExpression_getOperand_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_UnaryExpression_getOperand_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_Parser_removeParens_rhino_ast_AstNode_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_removeParens_rhino_ast_AstNode_R_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3460);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(3461);
	if ((frame[3].i) == (39)) goto label_3;
	}
	{
	if ((frame[3].i) == (33)) goto label_3;
	}
	{
	if ((frame[3].i) == (36)) goto label_3;
	}
	{
	if ((frame[3].i) == (68)) goto label_3;
	}
	{
	if ((frame[3].i) == (38)) goto label_3;
	}
	{
	LINE_NUMBER(3466);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_rhino_ast_UnaryExpression_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_UnaryExpression_getType_R_int])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 != (107)) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"msg.bad.incr"_j));
	goto label_6;
label_5:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"msg.bad.decr"_j));
label_6:;
	POP_N(2); // Pop method args
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, sp[0].o, sp[1].o);
label_3:;
	LINE_NUMBER(3469);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Parser_makeErrorNode_R_rhino_ast_ErrorNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:makeErrorNode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3472);
	clinit_rhino_ast_ErrorNode(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_ErrorNode);
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	jint temp1 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenEnd;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	init_rhino_ast_ErrorNode_int_int(ctx, sp[0].o, temp0, (temp1 - ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3473);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	((func_rhino_ast_ErrorNode_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ErrorNode_setLineno_int])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_lineno));
	LINE_NUMBER(3474);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_rhino_Parser_nodeEnd_rhino_ast_AstNode_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:nodeEnd", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3479);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_rhino_ast_AstNode_getLength_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getLength_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_saveNameTokenData_int_java_lang_String_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:saveNameTokenData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(3483);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_prevNameTokenStart = (frame[1].i);
	LINE_NUMBER(3484);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_prevNameTokenString = (jref) (frame[2].o);
	LINE_NUMBER(3485);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_prevNameTokenLineno = (frame[3].i);
	LINE_NUMBER(3486);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_Parser_lineBeginningFor_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:lineBeginningFor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3500);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_sourceChars;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3501);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(3503);
	if ((frame[1].i) > 0) goto label_3;
	}
	{
	LINE_NUMBER(3504);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(3506);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_sourceChars;
	frame[2].o = sp[0].o;
	LINE_NUMBER(3507);
	if ((frame[1].i) < (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(3508);
	frame[1].i = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(3510);
	INST_IINC(1, -1);
	if ((frame[1].i) < 0) goto label_8;
	}
	{
	LINE_NUMBER(3511);
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(3512);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isJSLineTerminator_int_R_boolean(ctx, (frame[3].i));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(3513);
	popStackFrame(ctx);
	return ((frame[1].i) + (jint(1)));
	}
label_11:;
	LINE_NUMBER(3515);
	goto label_6;
label_8:;
	{
	LINE_NUMBER(3516);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_warnMissingSemi_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:warnMissingSemi", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3523);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isStrictMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isStrictMode_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(3524);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(3525);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)((func_rhino_TokenStream_getLine_int_Array1_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TokenStream_getLine_int_Array1_int_R_java_lang_String])(ctx, sp[0].o, (frame[2].i), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3529);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isIdeMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isIdeMode_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (frame[2].i) - ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(1))));
	LINE_NUMBER(3530);
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	sp[0].i = temp2;
	sp += 1;
	goto label_7;
	}
label_5:;
	INST_ILOAD(1);
label_7:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(3532);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(3533);
	M_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.missing.semi"_j))), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[5].i), ((frame[2].i) - (frame[5].i)), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0)))), (frame[4].o), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(1)))));
	goto label_1;
	}
label_9:;
	{
	LINE_NUMBER(3537);
	((func_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.missing.semi"_j))), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[5].i), ((frame[2].i) - (frame[5].i)));
	}
label_1:;
	LINE_NUMBER(3540);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Parser_warnTrailingComma_int_java_util_List_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:warnTrailingComma", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(3543);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getWarnTrailingComma_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getWarnTrailingComma_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(3545);
	jint temp0 = (jint)((func_java_util_List_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_isEmpty_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(3546);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (jint(0)));
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o)))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o)));
	frame[1].i = temp0;
	}
label_3:;
	{
	LINE_NUMBER(3548);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)M_rhino_Parser_lineBeginningFor_int_R_int(ctx, (frame[0].o), (frame[3].i));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	frame[1].i = temp2;
	LINE_NUMBER(3549);
	((func_rhino_Parser_addWarning_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_addWarning_java_lang_String_int_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.extra.trailing.comma"_j))), (frame[1].i), ((frame[3].i) - (frame[1].i)));
	}
label_1:;
	LINE_NUMBER(3551);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Parser_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:createDestructuringAssignment", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(3610);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	sp[0].o = (jobject)((func_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(3611);
	sp[0].o = (jobject)((func_rhino_Parser_destructuringAssignmentHelper_int_rhino_Node_rhino_Node_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_destructuringAssignmentHelper_int_rhino_Node_rhino_Node_java_lang_String_R_rhino_Node])(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3613);
	sp[0].o = (jobject)((func_rhino_Node_getLastChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_Node_getLastChild_R_rhino_Node])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(3614);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_rhino_Parser_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_createName_java_lang_String_R_rhino_Node])(ctx, (frame[0].o), (frame[4].o));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(3615);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_destructuringAssignmentHelper_int_rhino_Node_rhino_Node_java_lang_String_R_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:destructuringAssignmentHelper", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(3620);
	sp[0].o = frame[0].o;
	jint temp0 = 159;
	jint temp1 = (jint)((func_rhino_Node_getLineno_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getLineno_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_rhino_Parser_createScopeNode_int_int_R_rhino_ast_Scope) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_createScopeNode_int_int_R_rhino_ast_Scope])(ctx, sp[0].o, temp0, temp1);
	frame[5].o = sp[0].o;
	LINE_NUMBER(3621);
	sp[0].o = frame[5].o;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp2 = 154;
	sp[2].o = frame[0].o;
	jint temp3 = 39;
	sp[3].o = frame[4].o;
	sp[4].o = frame[3].o;
	LINE_NUMBER(3622);
	sp[2].o = (jobject)((func_rhino_Parser_createName_int_java_lang_String_rhino_Node_R_rhino_Node) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_Parser_createName_int_java_lang_String_rhino_Node_R_rhino_Node])(ctx, sp[2].o, temp3, sp[3].o, sp[4].o);
	init_rhino_Node_int_rhino_Node(ctx, sp[1].o, temp2, sp[2].o);
	LINE_NUMBER(3621);
	((func_rhino_ast_Scope_addChildToFront_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Scope_addChildToFront_rhino_Node])(ctx, sp[0].o, sp[1].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(3624);
	((func_rhino_Parser_pushScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_pushScope_rhino_ast_Scope])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(3625);
	((func_rhino_Parser_defineSymbol_int_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_defineSymbol_int_java_lang_String_boolean])(ctx, (frame[0].o), (154), (frame[4].o), (jint(1)));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(3627);
	((func_rhino_Parser_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(3628);
	goto label_12;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(3627);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	((func_rhino_Parser_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(3628);
	throwException(ctx, (frame[6].o));	}
label_12:;
	{
	LINE_NUMBER(3629);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (90));
	frame[6].o = sp[0].o;
	LINE_NUMBER(3630);
	((func_rhino_ast_Scope_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_Scope_addChildToBack_rhino_Node])(ctx, (frame[5].o), (frame[6].o));
	LINE_NUMBER(3631);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(3632);
	frame[8].i = (jint(1));
	LINE_NUMBER(3633);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[2].o));
	switch(temp0) {
		case 33: goto label_18;
		case 36: goto label_18;
		case 66: goto label_19;
		case 67: goto label_20;
		default: goto label_21;
	}
	}
label_19:;
	{
	LINE_NUMBER(3635);
	jint temp0 = (jint)((func_rhino_Parser_destructuringArray_rhino_ast_ArrayLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_destructuringArray_rhino_ast_ArrayLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ArrayLiteral, (frame[2].o))), (frame[1].i), (frame[4].o), (frame[6].o), (frame[7].o));
	frame[8].i = temp0;
	LINE_NUMBER(3638);
	goto label_23;
	}
label_20:;
	{
	LINE_NUMBER(3640);
	jint temp0 = (jint)((func_rhino_Parser_destructuringObject_rhino_ast_ObjectLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_destructuringObject_rhino_ast_ObjectLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ObjectLiteral, (frame[2].o))), (frame[1].i), (frame[4].o), (frame[6].o), (frame[7].o));
	frame[8].i = temp0;
	LINE_NUMBER(3643);
	goto label_23;
	}
label_18:;
	{
	LINE_NUMBER(3646);
	switch((frame[1].i)) {
		case 123: goto label_25;
		case 154: goto label_25;
		case 155: goto label_25;
		default: goto label_26;
	}
	}
label_25:;
	{
	LINE_NUMBER(3650);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.assign.left"_j))));
	}
label_26:;
	{
	LINE_NUMBER(3652);
	sp[0].o = frame[6].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((func_rhino_Parser_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_createName_java_lang_String_R_rhino_Node])(ctx, (frame[0].o), (frame[4].o));
	sp[1].o = (jobject)((func_rhino_Parser_simpleAssignment_rhino_Node_rhino_Node_R_rhino_Node) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Parser_simpleAssignment_rhino_Node_rhino_Node_R_rhino_Node])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(3653);
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(3655);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.assign.left"_j))));
	}
label_23:;
	{
	LINE_NUMBER(3657);
	if ((frame[8].i) == 0) goto label_28;
	}
	{
	LINE_NUMBER(3659);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_rhino_Parser_createNumber_double_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_createNumber_double_R_rhino_Node])(ctx, (frame[0].o), (jdouble(0)));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	}
label_28:;
	{
	LINE_NUMBER(3661);
	((func_rhino_ast_Scope_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_Scope_putProp_int_java_lang_Object])(ctx, (frame[5].o), (22), (frame[7].o));
	LINE_NUMBER(3662);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jbool M_rhino_Parser_destructuringArray_rhino_ast_ArrayLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:destructuringArray", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(3670);
	frame[6].i = (jint(1));
	LINE_NUMBER(3671);
	if ((frame[2].i) != (155)) goto label_2;
	}
	INST_SIPUSH(156);
	goto label_3;
label_2:;
	INST_BIPUSH(8);
label_3:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(3673);
	frame[8].i = (jint(0));
	LINE_NUMBER(3674);
	sp[0].o = (jobject)((func_rhino_ast_ArrayLiteral_getElements_R_java_util_List) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ArrayLiteral_getElements_R_java_util_List])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(3675);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[10].o));
	if (temp0 != (129)) goto label_9;
	}
	{
	LINE_NUMBER(3676);
	INST_IINC(8, 1);
	LINE_NUMBER(3677);
	goto label_6;
	}
label_9:;
	{
	LINE_NUMBER(3679);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 36;
	sp[1].o = frame[0].o;
	sp[2].o = frame[3].o;
	LINE_NUMBER(3680);
	sp[1].o = (jobject)((func_rhino_Parser_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Parser_createName_java_lang_String_R_rhino_Node])(ctx, sp[1].o, sp[2].o);
	sp[2].o = frame[0].o;
	jdouble temp1 = jdouble((frame[8].i));
	LINE_NUMBER(3681);
	sp[2].o = (jobject)((func_rhino_Parser_createNumber_double_R_rhino_Node) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_Parser_createNumber_double_R_rhino_Node])(ctx, sp[2].o, temp1);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(3682);
	jint temp2 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[10].o));
	if (temp2 != (39)) goto label_15;
	}
	{
	LINE_NUMBER(3683);
	sp[0].o = (jobject)((func_rhino_ast_AstNode_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_AstNode_getString_R_java_lang_String])(ctx, (frame[10].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(3684);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = frame[7].i;
	sp[1].o = frame[0].o;
	jint temp1 = 49;
	sp[2].o = frame[12].o;
	sp[3].o = jobject(nullptr);
	LINE_NUMBER(3685);
	sp[1].o = (jobject)((func_rhino_Parser_createName_int_java_lang_String_rhino_Node_R_rhino_Node) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Parser_createName_int_java_lang_String_rhino_Node_R_rhino_Node])(ctx, sp[1].o, temp1, sp[2].o, sp[3].o);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, temp0, sp[1].o, (frame[11].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(3688);
	if ((frame[2].i) == (123)) goto label_20;
	}
	{
	if ((frame[2].i) != (154)) goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(3692);
	((func_rhino_Node_putIntProp_int_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_Node_putIntProp_int_int])(ctx, (frame[13].o), (28), (jint(1)));
	}
label_21:;
	{
	LINE_NUMBER(3694);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[4].o), (frame[13].o));
	LINE_NUMBER(3695);
	if ((frame[2].i) == (jint(-1))) goto label_23;
	}
	{
	LINE_NUMBER(3696);
	((func_rhino_Parser_defineSymbol_int_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_defineSymbol_int_java_lang_String_boolean])(ctx, (frame[0].o), (frame[2].i), (frame[12].o), (jint(1)));
	LINE_NUMBER(3697);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, (frame[5].o)))(ctx, (frame[5].o), (frame[12].o));
	}
label_23:;
	LINE_NUMBER(3699);
	goto label_26;
label_15:;
	{
	LINE_NUMBER(3700);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[2].i;
	sp[2].o = frame[10].o;
	sp[3].o = frame[11].o;
	sp[4].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	LINE_NUMBER(3704);
	sp[4].o = (jobject)((func_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String])(ctx, sp[4].o);
	LINE_NUMBER(3702);
	sp[1].o = (jobject)((func_rhino_Parser_destructuringAssignmentHelper_int_rhino_Node_rhino_Node_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Parser_destructuringAssignmentHelper_int_rhino_Node_rhino_Node_java_lang_String_R_rhino_Node])(ctx, sp[1].o, temp0, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(3701);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	}
label_26:;
	{
	LINE_NUMBER(3706);
	INST_IINC(8, 1);
	LINE_NUMBER(3707);
	frame[6].i = (jint(0));
	LINE_NUMBER(3708);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(3709);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jbool M_rhino_Parser_destructuringObject_rhino_ast_ObjectLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:destructuringObject", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(3717);
	frame[6].i = (jint(1));
	LINE_NUMBER(3718);
	if ((frame[2].i) != (155)) goto label_2;
	}
	INST_SIPUSH(156);
	goto label_3;
label_2:;
	INST_BIPUSH(8);
label_3:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(3721);
	sp[0].o = (jobject)((func_rhino_ast_ObjectLiteral_getElements_R_java_util_List) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ObjectLiteral_getElements_R_java_util_List])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_rhino_ast_ObjectProperty, sp[0].o));
	LINE_NUMBER(3722);
	frame[10].i = (jint(0));
	LINE_NUMBER(3726);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(3727);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	frame[10].i = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno);
	}
label_9:;
	{
	LINE_NUMBER(3729);
	sp[0].o = (jobject)((func_rhino_ast_ObjectProperty_getLeft_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_getLeft_R_rhino_ast_AstNode])(ctx, (frame[9].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(3731);
	if ((isInstance(ctx, (frame[11].o), &class_rhino_ast_Name)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(3732);
	sp[0].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[11].o))))->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[11].o))));
	sp[0].o = (jobject)SM_rhino_Node_newString_java_lang_String_R_rhino_Node(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(3733);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 33;
	sp[1].o = (jobject)((func_rhino_Parser_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_createName_java_lang_String_R_rhino_Node])(ctx, (frame[0].o), (frame[3].o));
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, temp0, sp[1].o, (frame[13].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(3734);
	goto label_16;
	}
label_12:;
	{
	if ((isInstance(ctx, (frame[11].o), &class_rhino_ast_StringLiteral)) == 0) goto label_17;
	}
	{
	LINE_NUMBER(3735);
	sp[0].o = (jobject)((func_rhino_ast_StringLiteral_getValue_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_StringLiteral, (frame[11].o))))->vtable)[VTABLE_rhino_ast_StringLiteral_getValue_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_StringLiteral, (frame[11].o))));
	sp[0].o = (jobject)SM_rhino_Node_newString_java_lang_String_R_rhino_Node(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(3736);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 33;
	sp[1].o = (jobject)((func_rhino_Parser_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_createName_java_lang_String_R_rhino_Node])(ctx, (frame[0].o), (frame[3].o));
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, temp0, sp[1].o, (frame[13].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(3737);
	goto label_16;
	}
label_17:;
	{
	if ((isInstance(ctx, (frame[11].o), &class_rhino_ast_NumberLiteral)) == 0) goto label_21;
	}
	{
	LINE_NUMBER(3738);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)((func_rhino_ast_NumberLiteral_getNumber_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_NumberLiteral, (frame[11].o))))->vtable)[VTABLE_rhino_ast_NumberLiteral_getNumber_R_double])(ctx, (checkCast(ctx, &class_rhino_ast_NumberLiteral, (frame[11].o))));
	sp[0].o = (jobject)((func_rhino_Parser_createNumber_double_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_createNumber_double_R_rhino_Node])(ctx, sp[0].o, (jdouble((jint(temp0)))));
	frame[13].o = sp[0].o;
	LINE_NUMBER(3739);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp1 = 36;
	sp[1].o = (jobject)((func_rhino_Parser_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_createName_java_lang_String_R_rhino_Node])(ctx, (frame[0].o), (frame[3].o));
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, temp1, sp[1].o, (frame[13].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(3740);
	goto label_16;
	}
label_21:;
	{
	LINE_NUMBER(3741);
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(3743);
	((func_rhino_Node_setLineno_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_setLineno_int])(ctx, (frame[12].o), (frame[10].i));
	LINE_NUMBER(3744);
	sp[0].o = (jobject)((func_rhino_ast_ObjectProperty_getRight_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_getRight_R_rhino_ast_AstNode])(ctx, (frame[9].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(3745);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[13].o));
	if (temp0 != (39)) goto label_27;
	}
	{
	LINE_NUMBER(3746);
	sp[0].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[13].o))))->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[13].o))));
	frame[14].o = sp[0].o;
	LINE_NUMBER(3747);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = frame[7].i;
	sp[1].o = frame[0].o;
	jint temp1 = 49;
	sp[2].o = frame[14].o;
	sp[3].o = jobject(nullptr);
	LINE_NUMBER(3748);
	sp[1].o = (jobject)((func_rhino_Parser_createName_int_java_lang_String_rhino_Node_R_rhino_Node) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Parser_createName_int_java_lang_String_rhino_Node_R_rhino_Node])(ctx, sp[1].o, temp1, sp[2].o, sp[3].o);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, temp0, sp[1].o, (frame[12].o));
	frame[15].o = sp[0].o;
	LINE_NUMBER(3751);
	if ((frame[2].i) == (123)) goto label_32;
	}
	{
	if ((frame[2].i) != (154)) goto label_33;
	}
label_32:;
	{
	LINE_NUMBER(3755);
	((func_rhino_Node_putIntProp_int_int) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_rhino_Node_putIntProp_int_int])(ctx, (frame[15].o), (28), (jint(1)));
	}
label_33:;
	{
	LINE_NUMBER(3757);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[4].o), (frame[15].o));
	LINE_NUMBER(3758);
	if ((frame[2].i) == (jint(-1))) goto label_35;
	}
	{
	LINE_NUMBER(3759);
	((func_rhino_Parser_defineSymbol_int_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_defineSymbol_int_java_lang_String_boolean])(ctx, (frame[0].o), (frame[2].i), (frame[14].o), (jint(1)));
	LINE_NUMBER(3760);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, (frame[5].o)))(ctx, (frame[5].o), (frame[14].o));
	}
label_35:;
	LINE_NUMBER(3762);
	goto label_38;
label_27:;
	{
	LINE_NUMBER(3763);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[2].i;
	sp[2].o = frame[13].o;
	sp[3].o = frame[12].o;
	sp[4].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	LINE_NUMBER(3766);
	sp[4].o = (jobject)((func_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String])(ctx, sp[4].o);
	LINE_NUMBER(3765);
	sp[1].o = (jobject)((func_rhino_Parser_destructuringAssignmentHelper_int_rhino_Node_rhino_Node_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Parser_destructuringAssignmentHelper_int_rhino_Node_rhino_Node_java_lang_String_R_rhino_Node])(ctx, sp[1].o, temp0, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(3764);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	}
label_38:;
	{
	LINE_NUMBER(3768);
	frame[6].i = (jint(0));
	LINE_NUMBER(3769);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(3770);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_createName_java_lang_String_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:createName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3774);
	((func_rhino_Parser_checkActivationName_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_checkActivationName_java_lang_String_int])(ctx, (frame[0].o), (frame[1].o), (39));
	LINE_NUMBER(3775);
	sp[0].o = (jobject)SM_rhino_Node_newString_int_java_lang_String_R_rhino_Node(ctx, (39), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_createName_int_java_lang_String_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:createName", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(3779);
	sp[0].o = (jobject)((func_rhino_Parser_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_createName_java_lang_String_R_rhino_Node])(ctx, (frame[0].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3780);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[4].o), (frame[1].i));
	LINE_NUMBER(3781);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(3782);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[4].o), (frame[3].o));
	}
label_3:;
	{
	LINE_NUMBER(3783);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_createNumber_double_R_rhino_Node(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:createNumber", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(3787);
	sp[0].o = (jobject)SM_rhino_Node_newNumber_double_R_rhino_Node(ctx, (frame[1].d));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_createScopeNode_int_int_R_rhino_ast_Scope(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:createScopeNode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3798);
	clinit_rhino_ast_Scope(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Scope);
	init_rhino_ast_Scope(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(3799);
	sp[0].o = (jobject)((func_rhino_ast_Scope_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_Scope_setType_int_R_rhino_Node])(ctx, (frame[3].o), (frame[1].i));
	LINE_NUMBER(3800);
	((func_rhino_ast_Scope_setLineno_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_Scope_setLineno_int])(ctx, (frame[3].o), (frame[2].i));
	LINE_NUMBER(3801);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Parser_simpleAssignment_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:simpleAssignment", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(3827);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(3828);
	switch((frame[3].i)) {
		case 33: goto label_2;
		case 36: goto label_2;
		case 39: goto label_3;
		case 68: goto label_4;
		default: goto label_5;
	}
	}
label_3:;
	{
	LINE_NUMBER(3830);
	sp[0].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[1].o))))->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[1].o))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3831);
	if (((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective) == 0) goto label_7;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"eval"_j));
	sp[1].o = frame[4].o;
	LINE_NUMBER(3832);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"arguments"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"arguments"_j))), (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(3833);
	((func_rhino_Parser_reportError_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.id.strict"_j))), (frame[4].o));
	}
label_7:;
	{
	LINE_NUMBER(3835);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[1].o), (49));
	LINE_NUMBER(3836);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, (8), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(3845);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_PropertyGet)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(3846);
	sp[0].o = (jobject)((func_rhino_ast_PropertyGet_getTarget_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_PropertyGet, (frame[1].o))))->vtable)[VTABLE_rhino_ast_PropertyGet_getTarget_R_rhino_ast_AstNode])(ctx, (checkCast(ctx, &class_rhino_ast_PropertyGet, (frame[1].o))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3847);
	sp[0].o = (jobject)((func_rhino_ast_PropertyGet_getProperty_R_rhino_ast_Name) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_PropertyGet, (frame[1].o))))->vtable)[VTABLE_rhino_ast_PropertyGet_getProperty_R_rhino_ast_Name])(ctx, (checkCast(ctx, &class_rhino_ast_PropertyGet, (frame[1].o))));
	frame[6].o = sp[0].o;
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(3848);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_ElementGet)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(3849);
	sp[0].o = (jobject)((func_rhino_ast_ElementGet_getTarget_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_ElementGet, (frame[1].o))))->vtable)[VTABLE_rhino_ast_ElementGet_getTarget_R_rhino_ast_AstNode])(ctx, (checkCast(ctx, &class_rhino_ast_ElementGet, (frame[1].o))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3850);
	sp[0].o = (jobject)((func_rhino_ast_ElementGet_getElement_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_ElementGet, (frame[1].o))))->vtable)[VTABLE_rhino_ast_ElementGet_getElement_R_rhino_ast_AstNode])(ctx, (checkCast(ctx, &class_rhino_ast_ElementGet, (frame[1].o))));
	frame[6].o = sp[0].o;
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(3853);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3854);
	sp[0].o = (jobject)((func_rhino_Node_getLastChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getLastChild_R_rhino_Node])(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(3857);
	if ((frame[3].i) != (33)) goto label_21;
	}
	{
	LINE_NUMBER(3858);
	frame[7].i = (35);
	LINE_NUMBER(3864);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[6].o), (41));
	goto label_24;
	}
label_21:;
	{
	LINE_NUMBER(3866);
	frame[7].i = (37);
	}
label_24:;
	{
	LINE_NUMBER(3868);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node_rhino_Node(ctx, sp[0].o, (frame[7].i), (frame[5].o), (frame[6].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(3871);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3872);
	((func_rhino_Parser_checkMutableReference_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_checkMutableReference_rhino_Node])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(3873);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, (69), (frame[5].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(3877);
	sp[0].o = (jobject)M_rhino_Parser_codeBug_R_java_lang_RuntimeException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_Parser_checkMutableReference_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:checkMutableReference", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3881);
	jint temp0 = (jint)((func_rhino_Node_getIntProp_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getIntProp_int_int_R_int])(ctx, (frame[1].o), (16), (jint(0)));
	frame[2].i = temp0;
	LINE_NUMBER(3882);
	if (((frame[2].i) & (jint(4))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(3883);
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.assign.left"_j))));
	}
label_2:;
	LINE_NUMBER(3885);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Parser_removeParens_rhino_ast_AstNode_R_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:removeParens", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(3889);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_ParenthesizedExpression)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3890);
	sp[0].o = (jobject)((func_rhino_ast_ParenthesizedExpression_getExpression_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_ParenthesizedExpression, (frame[1].o))))->vtable)[VTABLE_rhino_ast_ParenthesizedExpression_getExpression_R_rhino_ast_AstNode])(ctx, (checkCast(ctx, &class_rhino_ast_ParenthesizedExpression, (frame[1].o))));
	frame[1].o = sp[0].o;
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(3892);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_rhino_Parser_markDestructuring_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:markDestructuring", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3896);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_DestructuringForm)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3897);
	((func_rhino_ast_DestructuringForm_setIsDestructuring_boolean) resolveInterfaceMethod(ctx, &class_rhino_ast_DestructuringForm, INDEX_rhino_ast_DestructuringForm_setIsDestructuring_boolean, (checkCast(ctx, &class_rhino_ast_DestructuringForm, (frame[1].o)))))(ctx, (checkCast(ctx, &class_rhino_ast_DestructuringForm, (frame[1].o))), (jint(1)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(3898);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_ParenthesizedExpression)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(3899);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ParenthesizedExpression_getExpression_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_ParenthesizedExpression, (frame[1].o))))->vtable)[VTABLE_rhino_ast_ParenthesizedExpression_getExpression_R_rhino_ast_AstNode])(ctx, (checkCast(ctx, &class_rhino_ast_ParenthesizedExpression, (frame[1].o))));
	((func_rhino_Parser_markDestructuring_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_markDestructuring_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(3901);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Parser_codeBug_R_java_lang_RuntimeException(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:codeBug", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3906);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ts.cursor="_j))));
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_cursor));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", ts.tokenBeg="_j))));
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_ts;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_tokenBeg));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", currentToken="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentToken));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_java_lang_String_R_java_lang_RuntimeException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_Parser_setDefaultUseStrictDirective_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:setDefaultUseStrictDirective", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3912);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_defaultUseStrictDirective = (frame[1].i);
	LINE_NUMBER(3913);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Parser_inUseStrictDirective_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:inUseStrictDirective", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3916);
	popStackFrame(ctx);
	return ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inUseStrictDirective);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Parser_access$200_rhino_Parser_R_java_util_Map(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:access$200", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_labelSet;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Parser_access$202_rhino_Parser_java_util_Map_R_java_util_Map(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:access$202", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_labelSet = (jref) sp[1].o;
	popStackFrame(ctx);
	return sp[1].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Parser_access$300_rhino_Parser_R_java_util_List(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:access$300", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopSet;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Parser_access$302_rhino_Parser_java_util_List_R_java_util_List(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:access$302", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_loopSet = (jref) sp[1].o;
	popStackFrame(ctx);
	return sp[1].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Parser_access$400_rhino_Parser_R_java_util_List(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:access$400", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_loopAndSwitchSet;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Parser_access$402_rhino_Parser_java_util_List_R_java_util_List(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:access$402", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_loopAndSwitchSet = (jref) sp[1].o;
	popStackFrame(ctx);
	return sp[1].o;
	}

	popStackFrame(ctx);
}

jint SM_rhino_Parser_access$500_rhino_Parser_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:access$500", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_endFlags);
	}

	popStackFrame(ctx);
}

jint SM_rhino_Parser_access$502_rhino_Parser_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:access$502", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_endFlags = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_Parser_access$600_rhino_Parser_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:access$600", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return ((jint)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_inForInit);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_Parser_access$602_rhino_Parser_boolean_R_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser:access$602", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_inForInit = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Parser[] {
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
	(void *) M_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String,
	(void *) M_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int,
	(void *) M_rhino_Parser_addWarning_java_lang_String_java_lang_String,
	(void *) M_rhino_Parser_addWarning_java_lang_String_int_int,
	(void *) M_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int,
	(void *) M_rhino_Parser_addError_java_lang_String,
	(void *) M_rhino_Parser_addError_java_lang_String_int_int,
	(void *) M_rhino_Parser_addError_java_lang_String_java_lang_String,
	(void *) M_rhino_Parser_addError_java_lang_String_int,
	(void *) M_rhino_Parser_addError_java_lang_String_java_lang_String_int_int,
	(void *) M_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int,
	(void *) M_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int,
	(void *) M_rhino_Parser_addError_java_lang_String_java_lang_String_int_int_int_java_lang_String_int,
	(void *) M_rhino_Parser_lookupMessage_java_lang_String_R_java_lang_String,
	(void *) M_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String,
	(void *) M_rhino_Parser_reportError_java_lang_String,
	(void *) M_rhino_Parser_reportError_java_lang_String_java_lang_String,
	(void *) M_rhino_Parser_reportError_java_lang_String_int_int,
	(void *) M_rhino_Parser_reportError_java_lang_String_java_lang_String_int_int,
	(void *) M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int,
	(void *) M_rhino_Parser_recordComment_int_java_lang_String,
	(void *) M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment,
	(void *) M_rhino_Parser_getNumberOfEols_java_lang_String_R_int,
	(void *) M_rhino_Parser_peekToken_R_int,
	(void *) M_rhino_Parser_peekFlaggedToken_R_int,
	(void *) M_rhino_Parser_consumeToken,
	(void *) M_rhino_Parser_nextToken_R_int,
	(void *) M_rhino_Parser_matchToken_int_boolean_R_boolean,
	(void *) M_rhino_Parser_peekTokenOrEOL_R_int,
	(void *) M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean,
	(void *) M_rhino_Parser_mustMatchToken_int_java_lang_String_int_int_boolean_R_boolean,
	(void *) M_rhino_Parser_eof_R_boolean,
	(void *) M_rhino_Parser_insideFunction_R_boolean,
	(void *) M_rhino_Parser_pushScope_rhino_ast_Scope,
	(void *) M_rhino_Parser_popScope,
	(void *) M_rhino_Parser_enterLoop_rhino_ast_Loop,
	(void *) M_rhino_Parser_exitLoop,
	(void *) M_rhino_Parser_enterSwitch_rhino_ast_SwitchStatement,
	(void *) M_rhino_Parser_exitSwitch,
	(void *) M_rhino_Parser_parse_java_lang_String_java_lang_String_int_R_rhino_ast_AstRoot,
	(void *) M_rhino_Parser_parse_R_rhino_ast_AstRoot,
	(void *) M_rhino_Parser_parseFunctionBody_int_rhino_ast_FunctionNode_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_getDirective_rhino_ast_AstNode_R_java_lang_String,
	(void *) M_rhino_Parser_parseFunctionParams_rhino_ast_FunctionNode,
	(void *) M_rhino_Parser_function_int_R_rhino_ast_FunctionNode,
	(void *) M_rhino_Parser_function_int_boolean_R_rhino_ast_FunctionNode,
	(void *) M_rhino_Parser_arrowFunction_rhino_ast_AstNode_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_arrowFunctionParams_rhino_ast_FunctionNode_rhino_ast_AstNode_java_util_Map_java_util_Set,
	(void *) M_rhino_Parser_statements_rhino_ast_AstNode_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_statements_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_condition_R_rhino_Parser$ConditionData,
	(void *) M_rhino_Parser_statement_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_statementHelper_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_autoInsertSemicolon_rhino_ast_AstNode,
	(void *) M_rhino_Parser_ifStatement_R_rhino_ast_IfStatement,
	(void *) M_rhino_Parser_switchStatement_R_rhino_ast_SwitchStatement,
	(void *) M_rhino_Parser_whileLoop_R_rhino_ast_WhileLoop,
	(void *) M_rhino_Parser_doLoop_R_rhino_ast_DoLoop,
	(void *) M_rhino_Parser_peekUntilNonComment_int_R_int,
	(void *) M_rhino_Parser_getNextStatementAfterInlineComments_rhino_ast_AstNode_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_forLoop_R_rhino_ast_Loop,
	(void *) M_rhino_Parser_forLoopInit_int_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_tryStatement_R_rhino_ast_TryStatement,
	(void *) M_rhino_Parser_throwStatement_R_rhino_ast_ThrowStatement,
	(void *) M_rhino_Parser_matchJumpLabelName_R_rhino_ast_LabeledStatement,
	(void *) M_rhino_Parser_breakStatement_R_rhino_ast_BreakStatement,
	(void *) M_rhino_Parser_continueStatement_R_rhino_ast_ContinueStatement,
	(void *) M_rhino_Parser_withStatement_R_rhino_ast_WithStatement,
	(void *) M_rhino_Parser_letStatement_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_returnOrYield_int_boolean_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_block_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_recordLabel_rhino_ast_Label_rhino_ast_LabeledStatement,
	(void *) M_rhino_Parser_nameOrLabel_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_variables_int_int_boolean_R_rhino_ast_VariableDeclaration,
	(void *) M_rhino_Parser_let_boolean_int_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_defineSymbol_int_java_lang_String,
	(void *) M_rhino_Parser_defineSymbol_int_java_lang_String_boolean,
	(void *) M_rhino_Parser_expr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_assignExpr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_condExpr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_orExpr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_andExpr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_bitOrExpr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_bitXorExpr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_bitAndExpr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_eqExpr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_relExpr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_shiftExpr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_addExpr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_mulExpr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_unaryExpr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_argumentList_R_java_util_List,
	(void *) M_rhino_Parser_memberExpr_boolean_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_memberExprTail_boolean_rhino_ast_AstNode_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_propertyAccess_int_rhino_ast_AstNode_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_propertyName_int_int_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_destructuringPrimaryExpr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_primaryExpr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_parenExpr_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_name_int_int_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_arrayLiteral_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_arrayComprehension_rhino_ast_AstNode_int_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_arrayComprehensionLoop_R_rhino_ast_ArrayComprehensionLoop,
	(void *) M_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_boolean_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_generatorExpressionLoop_R_rhino_ast_GeneratorExpressionLoop,
	(void *) M_rhino_Parser_objectLiteral_R_rhino_ast_ObjectLiteral,
	(void *) M_rhino_Parser_objliteralProperty_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_plainProperty_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty,
	(void *) M_rhino_Parser_methodDefinition_int_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty,
	(void *) M_rhino_Parser_createNameNode_R_rhino_ast_Name,
	(void *) M_rhino_Parser_createNameNode_boolean_int_R_rhino_ast_Name,
	(void *) M_rhino_Parser_createStringLiteral_R_rhino_ast_StringLiteral,
	(void *) M_rhino_Parser_checkActivationName_java_lang_String_int,
	(void *) M_rhino_Parser_setRequiresActivation,
	(void *) M_rhino_Parser_checkCallRequiresActivation_rhino_ast_AstNode,
	(void *) M_rhino_Parser_setIsGenerator,
	(void *) M_rhino_Parser_checkBadIncDec_rhino_ast_UnaryExpression,
	(void *) M_rhino_Parser_makeErrorNode_R_rhino_ast_ErrorNode,
	(void *) M_rhino_Parser_nodeEnd_rhino_ast_AstNode_R_int,
	(void *) M_rhino_Parser_saveNameTokenData_int_java_lang_String_int,
	(void *) M_rhino_Parser_lineBeginningFor_int_R_int,
	(void *) M_rhino_Parser_warnMissingSemi_int_int,
	(void *) M_rhino_Parser_warnTrailingComma_int_java_util_List_int,
	(void *) M_rhino_Parser_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node,
	(void *) M_rhino_Parser_destructuringAssignmentHelper_int_rhino_Node_rhino_Node_java_lang_String_R_rhino_Node,
	(void *) M_rhino_Parser_destructuringArray_rhino_ast_ArrayLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean,
	(void *) M_rhino_Parser_destructuringObject_rhino_ast_ObjectLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean,
	(void *) M_rhino_Parser_createName_java_lang_String_R_rhino_Node,
	(void *) M_rhino_Parser_createName_int_java_lang_String_rhino_Node_R_rhino_Node,
	(void *) M_rhino_Parser_createNumber_double_R_rhino_Node,
	(void *) M_rhino_Parser_createScopeNode_int_int_R_rhino_ast_Scope,
	(void *) M_rhino_Parser_simpleAssignment_rhino_Node_rhino_Node_R_rhino_Node,
	(void *) M_rhino_Parser_checkMutableReference_rhino_Node,
	(void *) M_rhino_Parser_removeParens_rhino_ast_AstNode_R_rhino_ast_AstNode,
	(void *) M_rhino_Parser_markDestructuring_rhino_ast_AstNode,
	(void *) M_rhino_Parser_codeBug_R_java_lang_RuntimeException,
	(void *) M_rhino_Parser_setDefaultUseStrictDirective_boolean,
	(void *) M_rhino_Parser_inUseStrictDirective_R_boolean,
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
	{ "addStrictWarning", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "addStrictWarning", "(Ljava/lang/String;Ljava/lang/String;II)V" },
	{ "addWarning", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "addWarning", "(Ljava/lang/String;II)V" },
	{ "addWarning", "(Ljava/lang/String;Ljava/lang/String;II)V" },
	{ "addError", "(Ljava/lang/String;)V" },
	{ "addError", "(Ljava/lang/String;II)V" },
	{ "addError", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "addError", "(Ljava/lang/String;I)V" },
	{ "addError", "(Ljava/lang/String;Ljava/lang/String;II)V" },
	{ "addStrictWarning", "(Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;I)V" },
	{ "addWarning", "(Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;I)V" },
	{ "addError", "(Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;I)V" },
	{ "lookupMessage", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "lookupMessage", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
	{ "reportError", "(Ljava/lang/String;)V" },
	{ "reportError", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "reportError", "(Ljava/lang/String;II)V" },
	{ "reportError", "(Ljava/lang/String;Ljava/lang/String;II)V" },
	{ "getNodeEnd", "(Lrhino/ast/AstNode;)I" },
	{ "recordComment", "(ILjava/lang/String;)V" },
	{ "getAndResetJsDoc", "()Lrhino/ast/Comment;" },
	{ "getNumberOfEols", "(Ljava/lang/String;)I" },
	{ "peekToken", "()I" },
	{ "peekFlaggedToken", "()I" },
	{ "consumeToken", "()V" },
	{ "nextToken", "()I" },
	{ "matchToken", "(IZ)Z" },
	{ "peekTokenOrEOL", "()I" },
	{ "mustMatchToken", "(ILjava/lang/String;Z)Z" },
	{ "mustMatchToken", "(ILjava/lang/String;IIZ)Z" },
	{ "eof", "()Z" },
	{ "insideFunction", "()Z" },
	{ "pushScope", "(Lrhino/ast/Scope;)V" },
	{ "popScope", "()V" },
	{ "enterLoop", "(Lrhino/ast/Loop;)V" },
	{ "exitLoop", "()V" },
	{ "enterSwitch", "(Lrhino/ast/SwitchStatement;)V" },
	{ "exitSwitch", "()V" },
	{ "parse", "(Ljava/lang/String;Ljava/lang/String;I)Lrhino/ast/AstRoot;" },
	{ "parse", "()Lrhino/ast/AstRoot;" },
	{ "parseFunctionBody", "(ILrhino/ast/FunctionNode;)Lrhino/ast/AstNode;" },
	{ "getDirective", "(Lrhino/ast/AstNode;)Ljava/lang/String;" },
	{ "parseFunctionParams", "(Lrhino/ast/FunctionNode;)V" },
	{ "function", "(I)Lrhino/ast/FunctionNode;" },
	{ "function", "(IZ)Lrhino/ast/FunctionNode;" },
	{ "arrowFunction", "(Lrhino/ast/AstNode;)Lrhino/ast/AstNode;" },
	{ "arrowFunctionParams", "(Lrhino/ast/FunctionNode;Lrhino/ast/AstNode;Ljava/util/Map;Ljava/util/Set;)V" },
	{ "statements", "(Lrhino/ast/AstNode;)Lrhino/ast/AstNode;" },
	{ "statements", "()Lrhino/ast/AstNode;" },
	{ "condition", "()Lrhino/Parser$ConditionData;" },
	{ "statement", "()Lrhino/ast/AstNode;" },
	{ "statementHelper", "()Lrhino/ast/AstNode;" },
	{ "autoInsertSemicolon", "(Lrhino/ast/AstNode;)V" },
	{ "ifStatement", "()Lrhino/ast/IfStatement;" },
	{ "switchStatement", "()Lrhino/ast/SwitchStatement;" },
	{ "whileLoop", "()Lrhino/ast/WhileLoop;" },
	{ "doLoop", "()Lrhino/ast/DoLoop;" },
	{ "peekUntilNonComment", "(I)I" },
	{ "getNextStatementAfterInlineComments", "(Lrhino/ast/AstNode;)Lrhino/ast/AstNode;" },
	{ "forLoop", "()Lrhino/ast/Loop;" },
	{ "forLoopInit", "(I)Lrhino/ast/AstNode;" },
	{ "tryStatement", "()Lrhino/ast/TryStatement;" },
	{ "throwStatement", "()Lrhino/ast/ThrowStatement;" },
	{ "matchJumpLabelName", "()Lrhino/ast/LabeledStatement;" },
	{ "breakStatement", "()Lrhino/ast/BreakStatement;" },
	{ "continueStatement", "()Lrhino/ast/ContinueStatement;" },
	{ "withStatement", "()Lrhino/ast/WithStatement;" },
	{ "letStatement", "()Lrhino/ast/AstNode;" },
	{ "returnOrYield", "(IZ)Lrhino/ast/AstNode;" },
	{ "block", "()Lrhino/ast/AstNode;" },
	{ "recordLabel", "(Lrhino/ast/Label;Lrhino/ast/LabeledStatement;)V" },
	{ "nameOrLabel", "()Lrhino/ast/AstNode;" },
	{ "variables", "(IIZ)Lrhino/ast/VariableDeclaration;" },
	{ "let", "(ZI)Lrhino/ast/AstNode;" },
	{ "defineSymbol", "(ILjava/lang/String;)V" },
	{ "defineSymbol", "(ILjava/lang/String;Z)V" },
	{ "expr", "()Lrhino/ast/AstNode;" },
	{ "assignExpr", "()Lrhino/ast/AstNode;" },
	{ "condExpr", "()Lrhino/ast/AstNode;" },
	{ "orExpr", "()Lrhino/ast/AstNode;" },
	{ "andExpr", "()Lrhino/ast/AstNode;" },
	{ "bitOrExpr", "()Lrhino/ast/AstNode;" },
	{ "bitXorExpr", "()Lrhino/ast/AstNode;" },
	{ "bitAndExpr", "()Lrhino/ast/AstNode;" },
	{ "eqExpr", "()Lrhino/ast/AstNode;" },
	{ "relExpr", "()Lrhino/ast/AstNode;" },
	{ "shiftExpr", "()Lrhino/ast/AstNode;" },
	{ "addExpr", "()Lrhino/ast/AstNode;" },
	{ "mulExpr", "()Lrhino/ast/AstNode;" },
	{ "unaryExpr", "()Lrhino/ast/AstNode;" },
	{ "argumentList", "()Ljava/util/List;" },
	{ "memberExpr", "(Z)Lrhino/ast/AstNode;" },
	{ "memberExprTail", "(ZLrhino/ast/AstNode;)Lrhino/ast/AstNode;" },
	{ "propertyAccess", "(ILrhino/ast/AstNode;)Lrhino/ast/AstNode;" },
	{ "propertyName", "(II)Lrhino/ast/AstNode;" },
	{ "destructuringPrimaryExpr", "()Lrhino/ast/AstNode;" },
	{ "primaryExpr", "()Lrhino/ast/AstNode;" },
	{ "parenExpr", "()Lrhino/ast/AstNode;" },
	{ "name", "(II)Lrhino/ast/AstNode;" },
	{ "arrayLiteral", "()Lrhino/ast/AstNode;" },
	{ "arrayComprehension", "(Lrhino/ast/AstNode;I)Lrhino/ast/AstNode;" },
	{ "arrayComprehensionLoop", "()Lrhino/ast/ArrayComprehensionLoop;" },
	{ "generatorExpression", "(Lrhino/ast/AstNode;I)Lrhino/ast/AstNode;" },
	{ "generatorExpression", "(Lrhino/ast/AstNode;IZ)Lrhino/ast/AstNode;" },
	{ "generatorExpressionLoop", "()Lrhino/ast/GeneratorExpressionLoop;" },
	{ "objectLiteral", "()Lrhino/ast/ObjectLiteral;" },
	{ "objliteralProperty", "()Lrhino/ast/AstNode;" },
	{ "plainProperty", "(Lrhino/ast/AstNode;I)Lrhino/ast/ObjectProperty;" },
	{ "methodDefinition", "(ILrhino/ast/AstNode;I)Lrhino/ast/ObjectProperty;" },
	{ "createNameNode", "()Lrhino/ast/Name;" },
	{ "createNameNode", "(ZI)Lrhino/ast/Name;" },
	{ "createStringLiteral", "()Lrhino/ast/StringLiteral;" },
	{ "checkActivationName", "(Ljava/lang/String;I)V" },
	{ "setRequiresActivation", "()V" },
	{ "checkCallRequiresActivation", "(Lrhino/ast/AstNode;)V" },
	{ "setIsGenerator", "()V" },
	{ "checkBadIncDec", "(Lrhino/ast/UnaryExpression;)V" },
	{ "makeErrorNode", "()Lrhino/ast/ErrorNode;" },
	{ "nodeEnd", "(Lrhino/ast/AstNode;)I" },
	{ "saveNameTokenData", "(ILjava/lang/String;I)V" },
	{ "lineBeginningFor", "(I)I" },
	{ "warnMissingSemi", "(II)V" },
	{ "warnTrailingComma", "(ILjava/util/List;I)V" },
	{ "createDestructuringAssignment", "(ILrhino/Node;Lrhino/Node;)Lrhino/Node;" },
	{ "destructuringAssignmentHelper", "(ILrhino/Node;Lrhino/Node;Ljava/lang/String;)Lrhino/Node;" },
	{ "destructuringArray", "(Lrhino/ast/ArrayLiteral;ILjava/lang/String;Lrhino/Node;Ljava/util/List;)Z" },
	{ "destructuringObject", "(Lrhino/ast/ObjectLiteral;ILjava/lang/String;Lrhino/Node;Ljava/util/List;)Z" },
	{ "createName", "(Ljava/lang/String;)Lrhino/Node;" },
	{ "createName", "(ILjava/lang/String;Lrhino/Node;)Lrhino/Node;" },
	{ "createNumber", "(D)Lrhino/Node;" },
	{ "createScopeNode", "(II)Lrhino/ast/Scope;" },
	{ "simpleAssignment", "(Lrhino/Node;Lrhino/Node;)Lrhino/Node;" },
	{ "checkMutableReference", "(Lrhino/Node;)V" },
	{ "removeParens", "(Lrhino/ast/AstNode;)Lrhino/ast/AstNode;" },
	{ "markDestructuring", "(Lrhino/ast/AstNode;)V" },
	{ "codeBug", "()Ljava/lang/RuntimeException;" },
	{ "setDefaultUseStrictDirective", "(Z)V" },
	{ "inUseStrictDirective", "()Z" },
};

static jclass innerClasses[] {
	&class_rhino_Parser$PerFunctionVariables,
	&class_rhino_Parser$ConditionData,
	&class_rhino_Parser$ParserException,
};

static FieldMetadata fields[] {
	{ "ARGC_LIMIT", &class_int, (intptr_t) &SF_rhino_Parser_ARGC_LIMIT, "I", 25 },
	{ "CLEAR_TI_MASK", &class_int, (intptr_t) &SF_rhino_Parser_CLEAR_TI_MASK, "I", 24 },
	{ "TI_AFTER_EOL", &class_int, (intptr_t) &SF_rhino_Parser_TI_AFTER_EOL, "I", 24 },
	{ "TI_CHECK_LABEL", &class_int, (intptr_t) &SF_rhino_Parser_TI_CHECK_LABEL, "I", 24 },
	{ "compilerEnv", &class_rhino_CompilerEnvirons, offsetof(rhino_Parser, F_compilerEnv), "Lrhino/CompilerEnvirons;", 0 },
	{ "errorReporter", &class_rhino_ErrorReporter, offsetof(rhino_Parser, F_errorReporter), "Lrhino/ErrorReporter;", 18 },
	{ "errorCollector", &class_rhino_ast_IdeErrorReporter, offsetof(rhino_Parser, F_errorCollector), "Lrhino/ast/IdeErrorReporter;", 2 },
	{ "sourceURI", &class_java_lang_String, offsetof(rhino_Parser, F_sourceURI), "Ljava/lang/String;", 2 },
	{ "sourceChars", getArrayClass(&class_char, 1), offsetof(rhino_Parser, F_sourceChars), "[C", 2 },
	{ "calledByCompileFunction", &class_boolean, offsetof(rhino_Parser, F_calledByCompileFunction), "Z", 0 },
	{ "parseFinished", &class_boolean, offsetof(rhino_Parser, F_parseFinished), "Z", 2 },
	{ "ts", &class_rhino_TokenStream, offsetof(rhino_Parser, F_ts), "Lrhino/TokenStream;", 2 },
	{ "currentFlaggedToken", &class_int, offsetof(rhino_Parser, F_currentFlaggedToken), "I", 2 },
	{ "currentToken", &class_int, offsetof(rhino_Parser, F_currentToken), "I", 2 },
	{ "syntaxErrorCount", &class_int, offsetof(rhino_Parser, F_syntaxErrorCount), "I", 2 },
	{ "scannedComments", &class_java_util_List, offsetof(rhino_Parser, F_scannedComments), "Ljava/util/List;", 2 },
	{ "currentJsDocComment", &class_rhino_ast_Comment, offsetof(rhino_Parser, F_currentJsDocComment), "Lrhino/ast/Comment;", 2 },
	{ "nestingOfFunction", &class_int, offsetof(rhino_Parser, F_nestingOfFunction), "I", 4 },
	{ "currentLabel", &class_rhino_ast_LabeledStatement, offsetof(rhino_Parser, F_currentLabel), "Lrhino/ast/LabeledStatement;", 2 },
	{ "inDestructuringAssignment", &class_boolean, offsetof(rhino_Parser, F_inDestructuringAssignment), "Z", 2 },
	{ "inUseStrictDirective", &class_boolean, offsetof(rhino_Parser, F_inUseStrictDirective), "Z", 4 },
	{ "currentScriptOrFn", &class_rhino_ast_ScriptNode, offsetof(rhino_Parser, F_currentScriptOrFn), "Lrhino/ast/ScriptNode;", 0 },
	{ "currentScope", &class_rhino_ast_Scope, offsetof(rhino_Parser, F_currentScope), "Lrhino/ast/Scope;", 0 },
	{ "endFlags", &class_int, offsetof(rhino_Parser, F_endFlags), "I", 2 },
	{ "inForInit", &class_boolean, offsetof(rhino_Parser, F_inForInit), "Z", 2 },
	{ "labelSet", &class_java_util_Map, offsetof(rhino_Parser, F_labelSet), "Ljava/util/Map;", 2 },
	{ "loopSet", &class_java_util_List, offsetof(rhino_Parser, F_loopSet), "Ljava/util/List;", 2 },
	{ "loopAndSwitchSet", &class_java_util_List, offsetof(rhino_Parser, F_loopAndSwitchSet), "Ljava/util/List;", 2 },
	{ "prevNameTokenStart", &class_int, offsetof(rhino_Parser, F_prevNameTokenStart), "I", 2 },
	{ "prevNameTokenString", &class_java_lang_String, offsetof(rhino_Parser, F_prevNameTokenString), "Ljava/lang/String;", 2 },
	{ "prevNameTokenLineno", &class_int, offsetof(rhino_Parser, F_prevNameTokenLineno), "I", 2 },
	{ "defaultUseStrictDirective", &class_boolean, offsetof(rhino_Parser, F_defaultUseStrictDirective), "Z", 2 },
	{ "PROP_ENTRY", &class_int, (intptr_t) &SF_rhino_Parser_PROP_ENTRY, "I", 26 },
	{ "GET_ENTRY", &class_int, (intptr_t) &SF_rhino_Parser_GET_ENTRY, "I", 26 },
	{ "SET_ENTRY", &class_int, (intptr_t) &SF_rhino_Parser_SET_ENTRY, "I", 26 },
	{ "METHOD_ENTRY", &class_int, (intptr_t) &SF_rhino_Parser_METHOD_ENTRY, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Parser, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_Parser_rhino_CompilerEnvirons, 0, "(Lrhino/CompilerEnvirons;)V", 1 },
	{ "<init>", (intptr_t) init_rhino_Parser_rhino_CompilerEnvirons_rhino_ErrorReporter, 0, "(Lrhino/CompilerEnvirons;Lrhino/ErrorReporter;)V", 1 },
	{ "addStrictWarning", (intptr_t) M_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String, VTABLE_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 0 },
	{ "addStrictWarning", (intptr_t) M_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int, VTABLE_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int, "(Ljava/lang/String;Ljava/lang/String;II)V", 0 },
	{ "addWarning", (intptr_t) M_rhino_Parser_addWarning_java_lang_String_java_lang_String, VTABLE_rhino_Parser_addWarning_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 0 },
	{ "addWarning", (intptr_t) M_rhino_Parser_addWarning_java_lang_String_int_int, VTABLE_rhino_Parser_addWarning_java_lang_String_int_int, "(Ljava/lang/String;II)V", 0 },
	{ "addWarning", (intptr_t) M_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int, VTABLE_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int, "(Ljava/lang/String;Ljava/lang/String;II)V", 0 },
	{ "addError", (intptr_t) M_rhino_Parser_addError_java_lang_String, VTABLE_rhino_Parser_addError_java_lang_String, "(Ljava/lang/String;)V", 0 },
	{ "addError", (intptr_t) M_rhino_Parser_addError_java_lang_String_int_int, VTABLE_rhino_Parser_addError_java_lang_String_int_int, "(Ljava/lang/String;II)V", 0 },
	{ "addError", (intptr_t) M_rhino_Parser_addError_java_lang_String_java_lang_String, VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 0 },
	{ "addError", (intptr_t) M_rhino_Parser_addError_java_lang_String_int, VTABLE_rhino_Parser_addError_java_lang_String_int, "(Ljava/lang/String;I)V", 0 },
	{ "addError", (intptr_t) M_rhino_Parser_addError_java_lang_String_java_lang_String_int_int, VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String_int_int, "(Ljava/lang/String;Ljava/lang/String;II)V", 0 },
	{ "addStrictWarning", (intptr_t) M_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int, VTABLE_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int, "(Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;I)V", 2 },
	{ "addWarning", (intptr_t) M_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int, VTABLE_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int, "(Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;I)V", 2 },
	{ "addError", (intptr_t) M_rhino_Parser_addError_java_lang_String_java_lang_String_int_int_int_java_lang_String_int, VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String_int_int_int_java_lang_String_int, "(Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;I)V", 2 },
	{ "lookupMessage", (intptr_t) M_rhino_Parser_lookupMessage_java_lang_String_R_java_lang_String, VTABLE_rhino_Parser_lookupMessage_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 0 },
	{ "lookupMessage", (intptr_t) M_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String, VTABLE_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 0 },
	{ "reportError", (intptr_t) M_rhino_Parser_reportError_java_lang_String, VTABLE_rhino_Parser_reportError_java_lang_String, "(Ljava/lang/String;)V", 0 },
	{ "reportError", (intptr_t) M_rhino_Parser_reportError_java_lang_String_java_lang_String, VTABLE_rhino_Parser_reportError_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 0 },
	{ "reportError", (intptr_t) M_rhino_Parser_reportError_java_lang_String_int_int, VTABLE_rhino_Parser_reportError_java_lang_String_int_int, "(Ljava/lang/String;II)V", 0 },
	{ "reportError", (intptr_t) M_rhino_Parser_reportError_java_lang_String_java_lang_String_int_int, VTABLE_rhino_Parser_reportError_java_lang_String_java_lang_String_int_int, "(Ljava/lang/String;Ljava/lang/String;II)V", 0 },
	{ "getNodeEnd", (intptr_t) M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int, VTABLE_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int, "(Lrhino/ast/AstNode;)I", 2 },
	{ "recordComment", (intptr_t) M_rhino_Parser_recordComment_int_java_lang_String, VTABLE_rhino_Parser_recordComment_int_java_lang_String, "(ILjava/lang/String;)V", 2 },
	{ "getAndResetJsDoc", (intptr_t) M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment, VTABLE_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment, "()Lrhino/ast/Comment;", 2 },
	{ "getNumberOfEols", (intptr_t) M_rhino_Parser_getNumberOfEols_java_lang_String_R_int, VTABLE_rhino_Parser_getNumberOfEols_java_lang_String_R_int, "(Ljava/lang/String;)I", 2 },
	{ "peekToken", (intptr_t) M_rhino_Parser_peekToken_R_int, VTABLE_rhino_Parser_peekToken_R_int, "()I", 2 },
	{ "peekFlaggedToken", (intptr_t) M_rhino_Parser_peekFlaggedToken_R_int, VTABLE_rhino_Parser_peekFlaggedToken_R_int, "()I", 2 },
	{ "consumeToken", (intptr_t) M_rhino_Parser_consumeToken, VTABLE_rhino_Parser_consumeToken, "()V", 2 },
	{ "nextToken", (intptr_t) M_rhino_Parser_nextToken_R_int, VTABLE_rhino_Parser_nextToken_R_int, "()I", 2 },
	{ "matchToken", (intptr_t) M_rhino_Parser_matchToken_int_boolean_R_boolean, VTABLE_rhino_Parser_matchToken_int_boolean_R_boolean, "(IZ)Z", 2 },
	{ "peekTokenOrEOL", (intptr_t) M_rhino_Parser_peekTokenOrEOL_R_int, VTABLE_rhino_Parser_peekTokenOrEOL_R_int, "()I", 2 },
	{ "mustMatchToken", (intptr_t) M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean, VTABLE_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean, "(ILjava/lang/String;Z)Z", 2 },
	{ "mustMatchToken", (intptr_t) M_rhino_Parser_mustMatchToken_int_java_lang_String_int_int_boolean_R_boolean, VTABLE_rhino_Parser_mustMatchToken_int_java_lang_String_int_int_boolean_R_boolean, "(ILjava/lang/String;IIZ)Z", 2 },
	{ "eof", (intptr_t) M_rhino_Parser_eof_R_boolean, VTABLE_rhino_Parser_eof_R_boolean, "()Z", 1 },
	{ "insideFunction", (intptr_t) M_rhino_Parser_insideFunction_R_boolean, VTABLE_rhino_Parser_insideFunction_R_boolean, "()Z", 0 },
	{ "pushScope", (intptr_t) M_rhino_Parser_pushScope_rhino_ast_Scope, VTABLE_rhino_Parser_pushScope_rhino_ast_Scope, "(Lrhino/ast/Scope;)V", 0 },
	{ "popScope", (intptr_t) M_rhino_Parser_popScope, VTABLE_rhino_Parser_popScope, "()V", 0 },
	{ "enterLoop", (intptr_t) M_rhino_Parser_enterLoop_rhino_ast_Loop, VTABLE_rhino_Parser_enterLoop_rhino_ast_Loop, "(Lrhino/ast/Loop;)V", 2 },
	{ "exitLoop", (intptr_t) M_rhino_Parser_exitLoop, VTABLE_rhino_Parser_exitLoop, "()V", 2 },
	{ "enterSwitch", (intptr_t) M_rhino_Parser_enterSwitch_rhino_ast_SwitchStatement, VTABLE_rhino_Parser_enterSwitch_rhino_ast_SwitchStatement, "(Lrhino/ast/SwitchStatement;)V", 2 },
	{ "exitSwitch", (intptr_t) M_rhino_Parser_exitSwitch, VTABLE_rhino_Parser_exitSwitch, "()V", 2 },
	{ "parse", (intptr_t) M_rhino_Parser_parse_java_lang_String_java_lang_String_int_R_rhino_ast_AstRoot, VTABLE_rhino_Parser_parse_java_lang_String_java_lang_String_int_R_rhino_ast_AstRoot, "(Ljava/lang/String;Ljava/lang/String;I)Lrhino/ast/AstRoot;", 1 },
	{ "parse", (intptr_t) M_rhino_Parser_parse_R_rhino_ast_AstRoot, VTABLE_rhino_Parser_parse_R_rhino_ast_AstRoot, "()Lrhino/ast/AstRoot;", 2 },
	{ "parseFunctionBody", (intptr_t) M_rhino_Parser_parseFunctionBody_int_rhino_ast_FunctionNode_R_rhino_ast_AstNode, VTABLE_rhino_Parser_parseFunctionBody_int_rhino_ast_FunctionNode_R_rhino_ast_AstNode, "(ILrhino/ast/FunctionNode;)Lrhino/ast/AstNode;", 2 },
	{ "getDirective", (intptr_t) M_rhino_Parser_getDirective_rhino_ast_AstNode_R_java_lang_String, VTABLE_rhino_Parser_getDirective_rhino_ast_AstNode_R_java_lang_String, "(Lrhino/ast/AstNode;)Ljava/lang/String;", 2 },
	{ "parseFunctionParams", (intptr_t) M_rhino_Parser_parseFunctionParams_rhino_ast_FunctionNode, VTABLE_rhino_Parser_parseFunctionParams_rhino_ast_FunctionNode, "(Lrhino/ast/FunctionNode;)V", 2 },
	{ "function", (intptr_t) M_rhino_Parser_function_int_R_rhino_ast_FunctionNode, VTABLE_rhino_Parser_function_int_R_rhino_ast_FunctionNode, "(I)Lrhino/ast/FunctionNode;", 2 },
	{ "function", (intptr_t) M_rhino_Parser_function_int_boolean_R_rhino_ast_FunctionNode, VTABLE_rhino_Parser_function_int_boolean_R_rhino_ast_FunctionNode, "(IZ)Lrhino/ast/FunctionNode;", 2 },
	{ "arrowFunction", (intptr_t) M_rhino_Parser_arrowFunction_rhino_ast_AstNode_R_rhino_ast_AstNode, VTABLE_rhino_Parser_arrowFunction_rhino_ast_AstNode_R_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)Lrhino/ast/AstNode;", 2 },
	{ "arrowFunctionParams", (intptr_t) M_rhino_Parser_arrowFunctionParams_rhino_ast_FunctionNode_rhino_ast_AstNode_java_util_Map_java_util_Set, VTABLE_rhino_Parser_arrowFunctionParams_rhino_ast_FunctionNode_rhino_ast_AstNode_java_util_Map_java_util_Set, "(Lrhino/ast/FunctionNode;Lrhino/ast/AstNode;Ljava/util/Map;Ljava/util/Set;)V", 2 },
	{ "statements", (intptr_t) M_rhino_Parser_statements_rhino_ast_AstNode_R_rhino_ast_AstNode, VTABLE_rhino_Parser_statements_rhino_ast_AstNode_R_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)Lrhino/ast/AstNode;", 2 },
	{ "statements", (intptr_t) M_rhino_Parser_statements_R_rhino_ast_AstNode, VTABLE_rhino_Parser_statements_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "condition", (intptr_t) M_rhino_Parser_condition_R_rhino_Parser$ConditionData, VTABLE_rhino_Parser_condition_R_rhino_Parser$ConditionData, "()Lrhino/Parser$ConditionData;", 2 },
	{ "statement", (intptr_t) M_rhino_Parser_statement_R_rhino_ast_AstNode, VTABLE_rhino_Parser_statement_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "statementHelper", (intptr_t) M_rhino_Parser_statementHelper_R_rhino_ast_AstNode, VTABLE_rhino_Parser_statementHelper_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "autoInsertSemicolon", (intptr_t) M_rhino_Parser_autoInsertSemicolon_rhino_ast_AstNode, VTABLE_rhino_Parser_autoInsertSemicolon_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 2 },
	{ "ifStatement", (intptr_t) M_rhino_Parser_ifStatement_R_rhino_ast_IfStatement, VTABLE_rhino_Parser_ifStatement_R_rhino_ast_IfStatement, "()Lrhino/ast/IfStatement;", 2 },
	{ "switchStatement", (intptr_t) M_rhino_Parser_switchStatement_R_rhino_ast_SwitchStatement, VTABLE_rhino_Parser_switchStatement_R_rhino_ast_SwitchStatement, "()Lrhino/ast/SwitchStatement;", 2 },
	{ "whileLoop", (intptr_t) M_rhino_Parser_whileLoop_R_rhino_ast_WhileLoop, VTABLE_rhino_Parser_whileLoop_R_rhino_ast_WhileLoop, "()Lrhino/ast/WhileLoop;", 2 },
	{ "doLoop", (intptr_t) M_rhino_Parser_doLoop_R_rhino_ast_DoLoop, VTABLE_rhino_Parser_doLoop_R_rhino_ast_DoLoop, "()Lrhino/ast/DoLoop;", 2 },
	{ "peekUntilNonComment", (intptr_t) M_rhino_Parser_peekUntilNonComment_int_R_int, VTABLE_rhino_Parser_peekUntilNonComment_int_R_int, "(I)I", 2 },
	{ "getNextStatementAfterInlineComments", (intptr_t) M_rhino_Parser_getNextStatementAfterInlineComments_rhino_ast_AstNode_R_rhino_ast_AstNode, VTABLE_rhino_Parser_getNextStatementAfterInlineComments_rhino_ast_AstNode_R_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)Lrhino/ast/AstNode;", 2 },
	{ "forLoop", (intptr_t) M_rhino_Parser_forLoop_R_rhino_ast_Loop, VTABLE_rhino_Parser_forLoop_R_rhino_ast_Loop, "()Lrhino/ast/Loop;", 2 },
	{ "forLoopInit", (intptr_t) M_rhino_Parser_forLoopInit_int_R_rhino_ast_AstNode, VTABLE_rhino_Parser_forLoopInit_int_R_rhino_ast_AstNode, "(I)Lrhino/ast/AstNode;", 2 },
	{ "tryStatement", (intptr_t) M_rhino_Parser_tryStatement_R_rhino_ast_TryStatement, VTABLE_rhino_Parser_tryStatement_R_rhino_ast_TryStatement, "()Lrhino/ast/TryStatement;", 2 },
	{ "throwStatement", (intptr_t) M_rhino_Parser_throwStatement_R_rhino_ast_ThrowStatement, VTABLE_rhino_Parser_throwStatement_R_rhino_ast_ThrowStatement, "()Lrhino/ast/ThrowStatement;", 2 },
	{ "matchJumpLabelName", (intptr_t) M_rhino_Parser_matchJumpLabelName_R_rhino_ast_LabeledStatement, VTABLE_rhino_Parser_matchJumpLabelName_R_rhino_ast_LabeledStatement, "()Lrhino/ast/LabeledStatement;", 2 },
	{ "breakStatement", (intptr_t) M_rhino_Parser_breakStatement_R_rhino_ast_BreakStatement, VTABLE_rhino_Parser_breakStatement_R_rhino_ast_BreakStatement, "()Lrhino/ast/BreakStatement;", 2 },
	{ "continueStatement", (intptr_t) M_rhino_Parser_continueStatement_R_rhino_ast_ContinueStatement, VTABLE_rhino_Parser_continueStatement_R_rhino_ast_ContinueStatement, "()Lrhino/ast/ContinueStatement;", 2 },
	{ "withStatement", (intptr_t) M_rhino_Parser_withStatement_R_rhino_ast_WithStatement, VTABLE_rhino_Parser_withStatement_R_rhino_ast_WithStatement, "()Lrhino/ast/WithStatement;", 2 },
	{ "letStatement", (intptr_t) M_rhino_Parser_letStatement_R_rhino_ast_AstNode, VTABLE_rhino_Parser_letStatement_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "nowAllSet", (intptr_t) SM_rhino_Parser_nowAllSet_int_int_int_R_boolean, 0, "(III)Z", 10 },
	{ "returnOrYield", (intptr_t) M_rhino_Parser_returnOrYield_int_boolean_R_rhino_ast_AstNode, VTABLE_rhino_Parser_returnOrYield_int_boolean_R_rhino_ast_AstNode, "(IZ)Lrhino/ast/AstNode;", 2 },
	{ "block", (intptr_t) M_rhino_Parser_block_R_rhino_ast_AstNode, VTABLE_rhino_Parser_block_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "recordLabel", (intptr_t) M_rhino_Parser_recordLabel_rhino_ast_Label_rhino_ast_LabeledStatement, VTABLE_rhino_Parser_recordLabel_rhino_ast_Label_rhino_ast_LabeledStatement, "(Lrhino/ast/Label;Lrhino/ast/LabeledStatement;)V", 2 },
	{ "nameOrLabel", (intptr_t) M_rhino_Parser_nameOrLabel_R_rhino_ast_AstNode, VTABLE_rhino_Parser_nameOrLabel_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "variables", (intptr_t) M_rhino_Parser_variables_int_int_boolean_R_rhino_ast_VariableDeclaration, VTABLE_rhino_Parser_variables_int_int_boolean_R_rhino_ast_VariableDeclaration, "(IIZ)Lrhino/ast/VariableDeclaration;", 2 },
	{ "let", (intptr_t) M_rhino_Parser_let_boolean_int_R_rhino_ast_AstNode, VTABLE_rhino_Parser_let_boolean_int_R_rhino_ast_AstNode, "(ZI)Lrhino/ast/AstNode;", 2 },
	{ "defineSymbol", (intptr_t) M_rhino_Parser_defineSymbol_int_java_lang_String, VTABLE_rhino_Parser_defineSymbol_int_java_lang_String, "(ILjava/lang/String;)V", 0 },
	{ "defineSymbol", (intptr_t) M_rhino_Parser_defineSymbol_int_java_lang_String_boolean, VTABLE_rhino_Parser_defineSymbol_int_java_lang_String_boolean, "(ILjava/lang/String;Z)V", 0 },
	{ "expr", (intptr_t) M_rhino_Parser_expr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_expr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "assignExpr", (intptr_t) M_rhino_Parser_assignExpr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_assignExpr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "condExpr", (intptr_t) M_rhino_Parser_condExpr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_condExpr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "orExpr", (intptr_t) M_rhino_Parser_orExpr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_orExpr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "andExpr", (intptr_t) M_rhino_Parser_andExpr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_andExpr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "bitOrExpr", (intptr_t) M_rhino_Parser_bitOrExpr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_bitOrExpr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "bitXorExpr", (intptr_t) M_rhino_Parser_bitXorExpr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_bitXorExpr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "bitAndExpr", (intptr_t) M_rhino_Parser_bitAndExpr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_bitAndExpr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "eqExpr", (intptr_t) M_rhino_Parser_eqExpr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_eqExpr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "relExpr", (intptr_t) M_rhino_Parser_relExpr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_relExpr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "shiftExpr", (intptr_t) M_rhino_Parser_shiftExpr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_shiftExpr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "addExpr", (intptr_t) M_rhino_Parser_addExpr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_addExpr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "mulExpr", (intptr_t) M_rhino_Parser_mulExpr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_mulExpr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "unaryExpr", (intptr_t) M_rhino_Parser_unaryExpr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_unaryExpr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "argumentList", (intptr_t) M_rhino_Parser_argumentList_R_java_util_List, VTABLE_rhino_Parser_argumentList_R_java_util_List, "()Ljava/util/List;", 2 },
	{ "memberExpr", (intptr_t) M_rhino_Parser_memberExpr_boolean_R_rhino_ast_AstNode, VTABLE_rhino_Parser_memberExpr_boolean_R_rhino_ast_AstNode, "(Z)Lrhino/ast/AstNode;", 2 },
	{ "memberExprTail", (intptr_t) M_rhino_Parser_memberExprTail_boolean_rhino_ast_AstNode_R_rhino_ast_AstNode, VTABLE_rhino_Parser_memberExprTail_boolean_rhino_ast_AstNode_R_rhino_ast_AstNode, "(ZLrhino/ast/AstNode;)Lrhino/ast/AstNode;", 2 },
	{ "propertyAccess", (intptr_t) M_rhino_Parser_propertyAccess_int_rhino_ast_AstNode_R_rhino_ast_AstNode, VTABLE_rhino_Parser_propertyAccess_int_rhino_ast_AstNode_R_rhino_ast_AstNode, "(ILrhino/ast/AstNode;)Lrhino/ast/AstNode;", 2 },
	{ "propertyName", (intptr_t) M_rhino_Parser_propertyName_int_int_R_rhino_ast_AstNode, VTABLE_rhino_Parser_propertyName_int_int_R_rhino_ast_AstNode, "(II)Lrhino/ast/AstNode;", 2 },
	{ "destructuringPrimaryExpr", (intptr_t) M_rhino_Parser_destructuringPrimaryExpr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_destructuringPrimaryExpr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "primaryExpr", (intptr_t) M_rhino_Parser_primaryExpr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_primaryExpr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "parenExpr", (intptr_t) M_rhino_Parser_parenExpr_R_rhino_ast_AstNode, VTABLE_rhino_Parser_parenExpr_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "name", (intptr_t) M_rhino_Parser_name_int_int_R_rhino_ast_AstNode, VTABLE_rhino_Parser_name_int_int_R_rhino_ast_AstNode, "(II)Lrhino/ast/AstNode;", 2 },
	{ "arrayLiteral", (intptr_t) M_rhino_Parser_arrayLiteral_R_rhino_ast_AstNode, VTABLE_rhino_Parser_arrayLiteral_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "arrayComprehension", (intptr_t) M_rhino_Parser_arrayComprehension_rhino_ast_AstNode_int_R_rhino_ast_AstNode, VTABLE_rhino_Parser_arrayComprehension_rhino_ast_AstNode_int_R_rhino_ast_AstNode, "(Lrhino/ast/AstNode;I)Lrhino/ast/AstNode;", 2 },
	{ "arrayComprehensionLoop", (intptr_t) M_rhino_Parser_arrayComprehensionLoop_R_rhino_ast_ArrayComprehensionLoop, VTABLE_rhino_Parser_arrayComprehensionLoop_R_rhino_ast_ArrayComprehensionLoop, "()Lrhino/ast/ArrayComprehensionLoop;", 2 },
	{ "generatorExpression", (intptr_t) M_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_R_rhino_ast_AstNode, VTABLE_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_R_rhino_ast_AstNode, "(Lrhino/ast/AstNode;I)Lrhino/ast/AstNode;", 2 },
	{ "generatorExpression", (intptr_t) M_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_boolean_R_rhino_ast_AstNode, VTABLE_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_boolean_R_rhino_ast_AstNode, "(Lrhino/ast/AstNode;IZ)Lrhino/ast/AstNode;", 2 },
	{ "generatorExpressionLoop", (intptr_t) M_rhino_Parser_generatorExpressionLoop_R_rhino_ast_GeneratorExpressionLoop, VTABLE_rhino_Parser_generatorExpressionLoop_R_rhino_ast_GeneratorExpressionLoop, "()Lrhino/ast/GeneratorExpressionLoop;", 2 },
	{ "objectLiteral", (intptr_t) M_rhino_Parser_objectLiteral_R_rhino_ast_ObjectLiteral, VTABLE_rhino_Parser_objectLiteral_R_rhino_ast_ObjectLiteral, "()Lrhino/ast/ObjectLiteral;", 2 },
	{ "objliteralProperty", (intptr_t) M_rhino_Parser_objliteralProperty_R_rhino_ast_AstNode, VTABLE_rhino_Parser_objliteralProperty_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 2 },
	{ "plainProperty", (intptr_t) M_rhino_Parser_plainProperty_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty, VTABLE_rhino_Parser_plainProperty_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty, "(Lrhino/ast/AstNode;I)Lrhino/ast/ObjectProperty;", 2 },
	{ "methodDefinition", (intptr_t) M_rhino_Parser_methodDefinition_int_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty, VTABLE_rhino_Parser_methodDefinition_int_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty, "(ILrhino/ast/AstNode;I)Lrhino/ast/ObjectProperty;", 2 },
	{ "createNameNode", (intptr_t) M_rhino_Parser_createNameNode_R_rhino_ast_Name, VTABLE_rhino_Parser_createNameNode_R_rhino_ast_Name, "()Lrhino/ast/Name;", 2 },
	{ "createNameNode", (intptr_t) M_rhino_Parser_createNameNode_boolean_int_R_rhino_ast_Name, VTABLE_rhino_Parser_createNameNode_boolean_int_R_rhino_ast_Name, "(ZI)Lrhino/ast/Name;", 2 },
	{ "createStringLiteral", (intptr_t) M_rhino_Parser_createStringLiteral_R_rhino_ast_StringLiteral, VTABLE_rhino_Parser_createStringLiteral_R_rhino_ast_StringLiteral, "()Lrhino/ast/StringLiteral;", 2 },
	{ "checkActivationName", (intptr_t) M_rhino_Parser_checkActivationName_java_lang_String_int, VTABLE_rhino_Parser_checkActivationName_java_lang_String_int, "(Ljava/lang/String;I)V", 4 },
	{ "setRequiresActivation", (intptr_t) M_rhino_Parser_setRequiresActivation, VTABLE_rhino_Parser_setRequiresActivation, "()V", 4 },
	{ "checkCallRequiresActivation", (intptr_t) M_rhino_Parser_checkCallRequiresActivation_rhino_ast_AstNode, VTABLE_rhino_Parser_checkCallRequiresActivation_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 2 },
	{ "setIsGenerator", (intptr_t) M_rhino_Parser_setIsGenerator, VTABLE_rhino_Parser_setIsGenerator, "()V", 4 },
	{ "checkBadIncDec", (intptr_t) M_rhino_Parser_checkBadIncDec_rhino_ast_UnaryExpression, VTABLE_rhino_Parser_checkBadIncDec_rhino_ast_UnaryExpression, "(Lrhino/ast/UnaryExpression;)V", 2 },
	{ "makeErrorNode", (intptr_t) M_rhino_Parser_makeErrorNode_R_rhino_ast_ErrorNode, VTABLE_rhino_Parser_makeErrorNode_R_rhino_ast_ErrorNode, "()Lrhino/ast/ErrorNode;", 2 },
	{ "nodeEnd", (intptr_t) M_rhino_Parser_nodeEnd_rhino_ast_AstNode_R_int, VTABLE_rhino_Parser_nodeEnd_rhino_ast_AstNode_R_int, "(Lrhino/ast/AstNode;)I", 2 },
	{ "saveNameTokenData", (intptr_t) M_rhino_Parser_saveNameTokenData_int_java_lang_String_int, VTABLE_rhino_Parser_saveNameTokenData_int_java_lang_String_int, "(ILjava/lang/String;I)V", 2 },
	{ "lineBeginningFor", (intptr_t) M_rhino_Parser_lineBeginningFor_int_R_int, VTABLE_rhino_Parser_lineBeginningFor_int_R_int, "(I)I", 2 },
	{ "warnMissingSemi", (intptr_t) M_rhino_Parser_warnMissingSemi_int_int, VTABLE_rhino_Parser_warnMissingSemi_int_int, "(II)V", 2 },
	{ "warnTrailingComma", (intptr_t) M_rhino_Parser_warnTrailingComma_int_java_util_List_int, VTABLE_rhino_Parser_warnTrailingComma_int_java_util_List_int, "(ILjava/util/List;I)V", 2 },
	{ "createDestructuringAssignment", (intptr_t) M_rhino_Parser_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node, VTABLE_rhino_Parser_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node, "(ILrhino/Node;Lrhino/Node;)Lrhino/Node;", 0 },
	{ "destructuringAssignmentHelper", (intptr_t) M_rhino_Parser_destructuringAssignmentHelper_int_rhino_Node_rhino_Node_java_lang_String_R_rhino_Node, VTABLE_rhino_Parser_destructuringAssignmentHelper_int_rhino_Node_rhino_Node_java_lang_String_R_rhino_Node, "(ILrhino/Node;Lrhino/Node;Ljava/lang/String;)Lrhino/Node;", 0 },
	{ "destructuringArray", (intptr_t) M_rhino_Parser_destructuringArray_rhino_ast_ArrayLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean, VTABLE_rhino_Parser_destructuringArray_rhino_ast_ArrayLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean, "(Lrhino/ast/ArrayLiteral;ILjava/lang/String;Lrhino/Node;Ljava/util/List;)Z", 0 },
	{ "destructuringObject", (intptr_t) M_rhino_Parser_destructuringObject_rhino_ast_ObjectLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean, VTABLE_rhino_Parser_destructuringObject_rhino_ast_ObjectLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean, "(Lrhino/ast/ObjectLiteral;ILjava/lang/String;Lrhino/Node;Ljava/util/List;)Z", 0 },
	{ "createName", (intptr_t) M_rhino_Parser_createName_java_lang_String_R_rhino_Node, VTABLE_rhino_Parser_createName_java_lang_String_R_rhino_Node, "(Ljava/lang/String;)Lrhino/Node;", 4 },
	{ "createName", (intptr_t) M_rhino_Parser_createName_int_java_lang_String_rhino_Node_R_rhino_Node, VTABLE_rhino_Parser_createName_int_java_lang_String_rhino_Node_R_rhino_Node, "(ILjava/lang/String;Lrhino/Node;)Lrhino/Node;", 4 },
	{ "createNumber", (intptr_t) M_rhino_Parser_createNumber_double_R_rhino_Node, VTABLE_rhino_Parser_createNumber_double_R_rhino_Node, "(D)Lrhino/Node;", 4 },
	{ "createScopeNode", (intptr_t) M_rhino_Parser_createScopeNode_int_int_R_rhino_ast_Scope, VTABLE_rhino_Parser_createScopeNode_int_int_R_rhino_ast_Scope, "(II)Lrhino/ast/Scope;", 4 },
	{ "simpleAssignment", (intptr_t) M_rhino_Parser_simpleAssignment_rhino_Node_rhino_Node_R_rhino_Node, VTABLE_rhino_Parser_simpleAssignment_rhino_Node_rhino_Node_R_rhino_Node, "(Lrhino/Node;Lrhino/Node;)Lrhino/Node;", 4 },
	{ "checkMutableReference", (intptr_t) M_rhino_Parser_checkMutableReference_rhino_Node, VTABLE_rhino_Parser_checkMutableReference_rhino_Node, "(Lrhino/Node;)V", 4 },
	{ "removeParens", (intptr_t) M_rhino_Parser_removeParens_rhino_ast_AstNode_R_rhino_ast_AstNode, VTABLE_rhino_Parser_removeParens_rhino_ast_AstNode_R_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)Lrhino/ast/AstNode;", 4 },
	{ "markDestructuring", (intptr_t) M_rhino_Parser_markDestructuring_rhino_ast_AstNode, VTABLE_rhino_Parser_markDestructuring_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 0 },
	{ "codeBug", (intptr_t) M_rhino_Parser_codeBug_R_java_lang_RuntimeException, VTABLE_rhino_Parser_codeBug_R_java_lang_RuntimeException, "()Ljava/lang/RuntimeException;", 2 },
	{ "setDefaultUseStrictDirective", (intptr_t) M_rhino_Parser_setDefaultUseStrictDirective_boolean, VTABLE_rhino_Parser_setDefaultUseStrictDirective_boolean, "(Z)V", 1 },
	{ "inUseStrictDirective", (intptr_t) M_rhino_Parser_inUseStrictDirective_R_boolean, VTABLE_rhino_Parser_inUseStrictDirective_R_boolean, "()Z", 1 },
	{ "access$200", (intptr_t) SM_rhino_Parser_access$200_rhino_Parser_R_java_util_Map, 0, "(Lrhino/Parser;)Ljava/util/Map;", 4104 },
	{ "access$202", (intptr_t) SM_rhino_Parser_access$202_rhino_Parser_java_util_Map_R_java_util_Map, 0, "(Lrhino/Parser;Ljava/util/Map;)Ljava/util/Map;", 4104 },
	{ "access$300", (intptr_t) SM_rhino_Parser_access$300_rhino_Parser_R_java_util_List, 0, "(Lrhino/Parser;)Ljava/util/List;", 4104 },
	{ "access$302", (intptr_t) SM_rhino_Parser_access$302_rhino_Parser_java_util_List_R_java_util_List, 0, "(Lrhino/Parser;Ljava/util/List;)Ljava/util/List;", 4104 },
	{ "access$400", (intptr_t) SM_rhino_Parser_access$400_rhino_Parser_R_java_util_List, 0, "(Lrhino/Parser;)Ljava/util/List;", 4104 },
	{ "access$402", (intptr_t) SM_rhino_Parser_access$402_rhino_Parser_java_util_List_R_java_util_List, 0, "(Lrhino/Parser;Ljava/util/List;)Ljava/util/List;", 4104 },
	{ "access$500", (intptr_t) SM_rhino_Parser_access$500_rhino_Parser_R_int, 0, "(Lrhino/Parser;)I", 4104 },
	{ "access$502", (intptr_t) SM_rhino_Parser_access$502_rhino_Parser_int_R_int, 0, "(Lrhino/Parser;I)I", 4104 },
	{ "access$600", (intptr_t) SM_rhino_Parser_access$600_rhino_Parser_R_boolean, 0, "(Lrhino/Parser;)Z", 4104 },
	{ "access$602", (intptr_t) SM_rhino_Parser_access$602_rhino_Parser_boolean_R_boolean, 0, "(Lrhino/Parser;Z)Z", 4104 },
};

Class class_rhino_Parser{
		.nativeName = (intptr_t) "rhino/Parser",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Parser),
		.classVtable = (intptr_t) vtable_rhino_Parser,
		.staticInitializer = (intptr_t) clinit_rhino_Parser,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Parser,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 36,
		.nativeFields = (intptr_t) fields,
		.methodCount = 153,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 150,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Parser = registerClass(&class_rhino_Parser);

}
