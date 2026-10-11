#include "rhino/IRFactory.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "rhino/ast/InfixExpression.h"
#include "rhino/ast/AstNode.h"
#include "rhino/ast/NumberLiteral.h"
#include "rhino/ast/Jump.h"
#include "rhino/ast/ContinueStatement.h"
#include "rhino/IRFactory.h"
#include "java/util/ArrayList.h"
#include "rhino/ast/PropertyGet.h"
#include "rhino/ast/FunctionNode.h"
#include "rhino/ast/BreakStatement.h"
#include "rhino/ast/NewExpression.h"
#include "rhino/ast/ScriptNode.h"
#include "rhino/ast/Assignment.h"
#include "rhino/ast/ThrowStatement.h"
#include "java/lang/Throwable.h"
#include "rhino/ast/CatchClause.h"
#include "rhino/Decompiler.h"
#include "rhino/ast/DoLoop.h"
#include "rhino/ast/Loop.h"
#include "rhino/ast/TryStatement.h"
#include "rhino/ast/ForLoop.h"
#include "java/util/Iterator.h"
#include "rhino/Token.h"
#include "rhino/ast/Name.h"
#include "rhino/ast/ElementGet.h"
#include "rhino/ast/LetNode.h"
#include "rhino/Node.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/ast/VariableDeclaration.h"
#include "rhino/ast/ObjectProperty.h"
#include "rhino/Parser.h"
#include "rhino/ast/ParenthesizedExpression.h"
#include "java/lang/RuntimeException.h"
#include "rhino/ast/ObjectLiteral.h"
#include "rhino/ast/WhileLoop.h"
#include "java/util/List.h"
#include "java/lang/Double.h"
#include "rhino/ast/ForInLoop.h"
#include "rhino/ast/LabeledStatement.h"
#include "java/lang/Boolean.h"
#include "rhino/ast/ConditionalExpression.h"
#include "rhino/ast/CodeBlock.h"
#include "rhino/ast/IfStatement.h"
#include "rhino/ast/RegExpLiteral.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "rhino/ast/Label.h"
#include "rhino/ast/FunctionCall.h"
#include "rhino/ast/SwitchCase.h"
#include "rhino/ErrorReporter.h"
#include "rhino/ast/Symbol.h"
#include "rhino/ast/ArrayComprehension.h"
#include "rhino/ast/EmptyExpression.h"
#include "rhino/ast/GeneratorExpression.h"
#include "rhino/ast/WithStatement.h"
#include "rhino/ast/AstRoot.h"
#include "rhino/ast/VariableInitializer.h"
#include "rhino/ast/DestructuringForm.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/ast/ArrayLiteral.h"
#include "rhino/Parser_PerFunctionVariables.h"
#include "rhino/ast/ReturnStatement.h"
#include "rhino/ast/SwitchStatement.h"
#include "rhino/ast/Scope.h"
#include "rhino/ast/ExpressionStatement.h"
#include "rhino/ast/GeneratorExpressionLoop.h"
#include "rhino/CompilerEnvirons.h"
#include "rhino/ast/StringLiteral.h"
#include "rhino/ast/ArrayComprehensionLoop.h"
#include "rhino/ast/UnaryExpression.h"
#include "rhino/ast/Yield.h"

extern "C" {

jint SF_rhino_IRFactory_LOOP_DO_WHILE;
jint SF_rhino_IRFactory_LOOP_WHILE;
jint SF_rhino_IRFactory_LOOP_FOR;
jint SF_rhino_IRFactory_ALWAYS_TRUE_BOOLEAN;
jint SF_rhino_IRFactory_ALWAYS_FALSE_BOOLEAN;

void mark_rhino_IRFactory(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_Parser(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_IRFactory *) object;
	if (self->F_decompiler)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_decompiler)->clazz)->markFunction)((jobject) self->F_decompiler, mark, depth + 1);
}

void clinit_rhino_IRFactory(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_Parser(ctx);
	SF_rhino_IRFactory_LOOP_DO_WHILE = jint(0);
	SF_rhino_IRFactory_LOOP_WHILE = jint(1);
	SF_rhino_IRFactory_LOOP_FOR = jint(2);
	SF_rhino_IRFactory_ALWAYS_TRUE_BOOLEAN = jint(1);
	SF_rhino_IRFactory_ALWAYS_FALSE_BOOLEAN = jint(-1);
}

void init_rhino_IRFactory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_IRFactory(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_rhino_Parser(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_rhino_Decompiler(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Decompiler);
	init_rhino_Decompiler(ctx, sp[1].o);
	((rhino_IRFactory *) NULL_CHECK(sp[0].o))->F_decompiler = (jref) sp[1].o;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_IRFactory_rhino_CompilerEnvirons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_IRFactory(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_rhino_CompilerEnvirons_getErrorReporter_R_rhino_ErrorReporter) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_CompilerEnvirons_getErrorReporter_R_rhino_ErrorReporter])(ctx, (frame[1].o));
	init_rhino_IRFactory_rhino_CompilerEnvirons_rhino_ErrorReporter(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_IRFactory_rhino_CompilerEnvirons_rhino_ErrorReporter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_IRFactory(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(33);
	init_rhino_Parser_rhino_CompilerEnvirons_rhino_ErrorReporter(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_rhino_Decompiler(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Decompiler);
	init_rhino_Decompiler(ctx, sp[1].o);
	((rhino_IRFactory *) NULL_CHECK(sp[0].o))->F_decompiler = (jref) sp[1].o;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformTree_rhino_ast_AstRoot_R_rhino_ast_ScriptNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformTree", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn = (jref) (frame[1].o);
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_rhino_ast_AstRoot_isInStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstRoot_isInStrictMode_R_boolean])(ctx, (frame[1].o));
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_inUseStrictDirective = temp0;
	LINE_NUMBER(43);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	jint temp1 = (jint)((func_rhino_Decompiler_getCurrentOffset_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_getCurrentOffset_R_int])(ctx, sp[0].o);
	frame[2].i = temp1;
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_rhino_ast_ScriptNode, sp[0].o));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	jint temp2 = (jint)((func_rhino_Decompiler_getCurrentOffset_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_getCurrentOffset_R_int])(ctx, sp[0].o);
	frame[4].i = temp2;
	LINE_NUMBER(52);
	((func_rhino_ast_ScriptNode_setEncodedSourceBounds_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_ScriptNode_setEncodedSourceBounds_int_int])(ctx, (frame[3].o), (frame[2].i), (frame[4].i));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	jint temp3 = (jint)((func_rhino_CompilerEnvirons_isGeneratingSource_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isGeneratingSource_R_boolean])(ctx, sp[0].o);
	if (temp3 == 0) goto label_7;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	sp[1].o = (jobject)((func_rhino_Decompiler_getEncodedSource_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Decompiler_getEncodedSource_R_java_lang_String])(ctx, sp[1].o);
	((func_rhino_ast_ScriptNode_setEncodedSource_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_setEncodedSource_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(59);
	((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler = (jref) (jobject(nullptr));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transform", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case 4: goto label_1;
		case 5: goto label_2;
		case 6: goto label_2;
		case 7: goto label_2;
		case 8: goto label_2;
		case 9: goto label_2;
		case 10: goto label_2;
		case 11: goto label_2;
		case 12: goto label_2;
		case 13: goto label_2;
		case 14: goto label_2;
		case 15: goto label_2;
		case 16: goto label_2;
		case 17: goto label_2;
		case 18: goto label_2;
		case 19: goto label_2;
		case 20: goto label_2;
		case 21: goto label_2;
		case 22: goto label_2;
		case 23: goto label_2;
		case 24: goto label_2;
		case 25: goto label_2;
		case 26: goto label_2;
		case 27: goto label_2;
		case 28: goto label_2;
		case 29: goto label_2;
		case 30: goto label_3;
		case 31: goto label_2;
		case 32: goto label_2;
		case 33: goto label_4;
		case 34: goto label_2;
		case 35: goto label_2;
		case 36: goto label_5;
		case 37: goto label_2;
		case 38: goto label_6;
		case 39: goto label_7;
		case 40: goto label_8;
		case 41: goto label_9;
		case 42: goto label_10;
		case 43: goto label_10;
		case 44: goto label_10;
		case 45: goto label_10;
		case 46: goto label_2;
		case 47: goto label_2;
		case 48: goto label_11;
		case 49: goto label_2;
		case 50: goto label_12;
		case 51: goto label_2;
		case 52: goto label_2;
		case 53: goto label_2;
		case 54: goto label_2;
		case 55: goto label_2;
		case 56: goto label_2;
		case 57: goto label_2;
		case 58: goto label_2;
		case 59: goto label_2;
		case 60: goto label_2;
		case 61: goto label_2;
		case 62: goto label_2;
		case 63: goto label_2;
		case 64: goto label_2;
		case 65: goto label_2;
		case 66: goto label_13;
		case 67: goto label_14;
		case 68: goto label_2;
		case 69: goto label_2;
		case 70: goto label_2;
		case 71: goto label_2;
		case 72: goto label_2;
		case 73: goto label_15;
		case 74: goto label_2;
		case 75: goto label_2;
		case 76: goto label_2;
		case 77: goto label_2;
		case 78: goto label_2;
		case 79: goto label_2;
		case 80: goto label_2;
		case 81: goto label_2;
		case 82: goto label_16;
		case 83: goto label_2;
		case 84: goto label_2;
		case 85: goto label_2;
		case 86: goto label_2;
		case 87: goto label_2;
		case 88: goto label_2;
		case 89: goto label_2;
		case 90: goto label_2;
		case 91: goto label_2;
		case 92: goto label_2;
		case 93: goto label_2;
		case 94: goto label_2;
		case 95: goto label_2;
		case 96: goto label_2;
		case 97: goto label_2;
		case 98: goto label_2;
		case 99: goto label_2;
		case 100: goto label_2;
		case 101: goto label_2;
		case 102: goto label_2;
		case 103: goto label_17;
		case 104: goto label_2;
		case 105: goto label_2;
		case 106: goto label_2;
		case 107: goto label_2;
		case 108: goto label_2;
		case 109: goto label_2;
		case 110: goto label_18;
		case 111: goto label_2;
		case 112: goto label_2;
		case 113: goto label_19;
		case 114: goto label_2;
		case 115: goto label_20;
		case 116: goto label_2;
		case 117: goto label_2;
		case 118: goto label_21;
		case 119: goto label_22;
		case 120: goto label_23;
		case 121: goto label_24;
		case 122: goto label_25;
		case 123: goto label_2;
		case 124: goto label_26;
		case 125: goto label_2;
		case 126: goto label_2;
		case 127: goto label_2;
		case 128: goto label_2;
		case 129: goto label_27;
		case 130: goto label_28;
		case 131: goto label_2;
		case 132: goto label_2;
		case 133: goto label_2;
		case 134: goto label_2;
		case 135: goto label_2;
		case 136: goto label_2;
		case 137: goto label_29;
		case 138: goto label_2;
		case 139: goto label_2;
		case 140: goto label_2;
		case 141: goto label_2;
		case 142: goto label_2;
		case 143: goto label_2;
		case 144: goto label_2;
		case 145: goto label_2;
		case 146: goto label_2;
		case 147: goto label_2;
		case 148: goto label_2;
		case 149: goto label_2;
		case 150: goto label_2;
		case 151: goto label_2;
		case 152: goto label_2;
		case 153: goto label_2;
		case 154: goto label_2;
		case 155: goto label_2;
		case 156: goto label_2;
		case 157: goto label_2;
		case 158: goto label_30;
		case 159: goto label_2;
		case 160: goto label_2;
		case 161: goto label_10;
		case 162: goto label_2;
		case 163: goto label_31;
		case 164: goto label_2;
		case 165: goto label_2;
		case 166: goto label_15;
		default: goto label_2;
	}
	}
label_30:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)M_rhino_IRFactory_transformArrayComp_rhino_ast_ArrayComprehension_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ArrayComprehension, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)M_rhino_IRFactory_transformArrayLiteral_rhino_ast_ArrayLiteral_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ArrayLiteral, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_28:;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)M_rhino_IRFactory_transformBlock_rhino_ast_AstNode_R_rhino_Node(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)M_rhino_IRFactory_transformBreak_rhino_ast_BreakStatement_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_BreakStatement, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)M_rhino_IRFactory_transformFunctionCall_rhino_ast_FunctionCall_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_FunctionCall, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)M_rhino_IRFactory_transformContinue_rhino_ast_ContinueStatement_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ContinueStatement, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)M_rhino_IRFactory_transformDoLoop_rhino_ast_DoLoop_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_DoLoop, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_23:;
	{
	LINE_NUMBER(86);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_ForInLoop)) == 0) goto label_32;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)M_rhino_IRFactory_transformForInLoop_rhino_ast_ForInLoop_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ForInLoop, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_32:;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)M_rhino_IRFactory_transformForLoop_rhino_ast_ForLoop_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ForLoop, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)M_rhino_IRFactory_transformFunction_rhino_ast_FunctionNode_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_FunctionNode, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)M_rhino_IRFactory_transformGenExpr_rhino_ast_GeneratorExpression_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_GeneratorExpression, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)M_rhino_IRFactory_transformElementGet_rhino_ast_ElementGet_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ElementGet, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)M_rhino_IRFactory_transformPropertyGet_rhino_ast_PropertyGet_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_PropertyGet, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)M_rhino_IRFactory_transformCondExpr_rhino_ast_ConditionalExpression_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ConditionalExpression, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)M_rhino_IRFactory_transformIf_rhino_ast_IfStatement_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_IfStatement, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)M_rhino_IRFactory_transformLiteral_rhino_ast_AstNode_R_rhino_Node(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)M_rhino_IRFactory_transformName_rhino_ast_Name_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_Name, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)M_rhino_IRFactory_transformNumber_rhino_ast_NumberLiteral_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_NumberLiteral, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)M_rhino_IRFactory_transformNewExpr_rhino_ast_NewExpression_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_NewExpression, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)M_rhino_IRFactory_transformObjectLiteral_rhino_ast_ObjectLiteral_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ObjectLiteral, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)M_rhino_IRFactory_transformRegExp_rhino_ast_RegExpLiteral_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_RegExpLiteral, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)M_rhino_IRFactory_transformReturn_rhino_ast_ReturnStatement_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ReturnStatement, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)M_rhino_IRFactory_transformScript_rhino_ast_ScriptNode_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ScriptNode, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)M_rhino_IRFactory_transformString_rhino_ast_StringLiteral_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_StringLiteral, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)M_rhino_IRFactory_transformSwitch_rhino_ast_SwitchStatement_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_SwitchStatement, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)M_rhino_IRFactory_transformThrow_rhino_ast_ThrowStatement_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ThrowStatement, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)M_rhino_IRFactory_transformTry_rhino_ast_TryStatement_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_TryStatement, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)M_rhino_IRFactory_transformWhileLoop_rhino_ast_WhileLoop_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_WhileLoop, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_26:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)M_rhino_IRFactory_transformWith_rhino_ast_WithStatement_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_WithStatement, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)M_rhino_IRFactory_transformYield_rhino_ast_Yield_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_Yield, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(140);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_ExpressionStatement)) == 0) goto label_34;
	}
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)M_rhino_IRFactory_transformExprStmt_rhino_ast_ExpressionStatement_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ExpressionStatement, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_34:;
	{
	LINE_NUMBER(143);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_Assignment)) == 0) goto label_36;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)M_rhino_IRFactory_transformAssignment_rhino_ast_Assignment_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_Assignment, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_36:;
	{
	LINE_NUMBER(146);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_UnaryExpression)) == 0) goto label_38;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)M_rhino_IRFactory_transformUnary_rhino_ast_UnaryExpression_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_UnaryExpression, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_38:;
	{
	LINE_NUMBER(149);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_InfixExpression)) == 0) goto label_40;
	}
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)M_rhino_IRFactory_transformInfix_rhino_ast_InfixExpression_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_InfixExpression, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_40:;
	{
	LINE_NUMBER(152);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_VariableDeclaration)) == 0) goto label_42;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)M_rhino_IRFactory_transformVariables_rhino_ast_VariableDeclaration_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_VariableDeclaration, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_42:;
	{
	LINE_NUMBER(155);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_ParenthesizedExpression)) == 0) goto label_44;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)M_rhino_IRFactory_transformParenExpr_rhino_ast_ParenthesizedExpression_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ParenthesizedExpression, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_44:;
	{
	LINE_NUMBER(158);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_LabeledStatement)) == 0) goto label_46;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)M_rhino_IRFactory_transformLabeledStatement_rhino_ast_LabeledStatement_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_LabeledStatement, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_46:;
	{
	LINE_NUMBER(161);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_LetNode)) == 0) goto label_48;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)M_rhino_IRFactory_transformLetNode_rhino_ast_LetNode_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_LetNode, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_48:;
	{
	LINE_NUMBER(164);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Can't transform: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformArrayComp_rhino_ast_ArrayComprehension_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformArrayComp", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(189);
	jint temp0 = (jint)((func_rhino_ast_ArrayComprehension_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ArrayComprehension_getLineno_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(190);
	sp[0].o = (jobject)((func_rhino_IRFactory_createScopeNode_int_int_R_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_createScopeNode_int_int_R_rhino_ast_Scope])(ctx, (frame[0].o), (158), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(191);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	sp[0].o = (jobject)((func_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(192);
	((func_rhino_IRFactory_pushScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_pushScope_rhino_ast_Scope])(ctx, (frame[0].o), (frame[3].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(194);
	((func_rhino_IRFactory_defineSymbol_int_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_defineSymbol_int_java_lang_String_boolean])(ctx, (frame[0].o), (154), (frame[4].o), (jint(0)));
	LINE_NUMBER(195);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_int(ctx, sp[0].o, (130), (frame[2].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	jint temp0 = 30;
	sp[1].o = (jobject)((func_rhino_IRFactory_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_createName_java_lang_String_R_rhino_Node])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Array"_j))));
	sp[0].o = (jobject)M_rhino_IRFactory_createCallOrNew_int_rhino_Node_R_rhino_Node(ctx, sp[0].o, temp0, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(197);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp1 = 134;
	sp[1].o = frame[0].o;
	jint temp2 = 91;
	sp[2].o = frame[0].o;
	sp[3].o = frame[4].o;
	LINE_NUMBER(199);
	sp[2].o = (jobject)((func_rhino_IRFactory_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_IRFactory_createName_java_lang_String_R_rhino_Node])(ctx, sp[2].o, sp[3].o);
	sp[3].o = frame[6].o;
	LINE_NUMBER(198);
	sp[1].o = (jobject)M_rhino_IRFactory_createAssignment_int_rhino_Node_rhino_Node_R_rhino_Node(ctx, sp[1].o, temp2, sp[2].o, sp[3].o);
	init_rhino_Node_int_rhino_Node_int(ctx, sp[0].o, temp1, sp[1].o, (frame[2].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(202);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[5].o), (frame[7].o));
	LINE_NUMBER(203);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)M_rhino_IRFactory_arrayCompTransformHelper_rhino_ast_ArrayComprehension_java_lang_String_R_rhino_Node(ctx, (frame[0].o), (frame[1].o), (frame[4].o));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(204);
	((func_rhino_ast_Scope_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_Scope_addChildToBack_rhino_Node])(ctx, (frame[3].o), (frame[5].o));
	LINE_NUMBER(205);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_rhino_IRFactory_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_createName_java_lang_String_R_rhino_Node])(ctx, (frame[0].o), (frame[4].o));
	((func_rhino_ast_Scope_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Scope_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(206);
	frame[8].o = (frame[3].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(208);
	((func_rhino_IRFactory_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(208);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	((func_rhino_IRFactory_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(209);
	throwException(ctx, (frame[9].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_arrayCompTransformHelper_rhino_ast_ArrayComprehension_java_lang_String_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:arrayCompTransformHelper", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (84));
	LINE_NUMBER(215);
	jint temp0 = (jint)((func_rhino_ast_ArrayComprehension_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ArrayComprehension_getLineno_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ArrayComprehension_getResult_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ArrayComprehension_getResult_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_rhino_ast_ArrayComprehension_getLoops_R_java_util_List) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ArrayComprehension_getLoops_R_java_util_List])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(219);
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].i = temp1;
	LINE_NUMBER(222);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_Node, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(223);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_Node, (frame[6].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(225);
	frame[9].i = (jint(0));
	}
label_14:;
	{
	if ((frame[9].i) >= (frame[6].i)) goto label_15;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[9].i));
	frame[10].o = (checkCast(ctx, &class_rhino_ast_ArrayComprehensionLoop, sp[0].o));
	LINE_NUMBER(227);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(228);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (120));
	LINE_NUMBER(229);
	jint temp0 = (jint)((func_rhino_ast_ArrayComprehensionLoop_isForEach_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_ArrayComprehensionLoop_isForEach_R_boolean])(ctx, (frame[10].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"each "_j))));
	}
label_20:;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(234);
	sp[0].o = (jobject)((func_rhino_ast_ArrayComprehensionLoop_getIterator_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_ArrayComprehensionLoop_getIterator_R_rhino_ast_AstNode])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(236);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[11].o));
	if (temp0 != (39)) goto label_24;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((func_rhino_ast_AstNode_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_ast_AstNode_getString_R_java_lang_String])(ctx, (frame[11].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(238);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (frame[12].o));
	goto label_27;
	}
label_24:;
	{
	LINE_NUMBER(241);
	((func_rhino_IRFactory_decompile_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_decompile_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[11].o));
	LINE_NUMBER(242);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	sp[0].o = (jobject)((func_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String])(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(243);
	((func_rhino_IRFactory_defineSymbol_int_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_defineSymbol_int_java_lang_String_boolean])(ctx, (frame[0].o), (88), (frame[12].o), (jint(0)));
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	jint temp0 = 90;
	sp[1].o = frame[0].o;
	jint temp1 = 91;
	sp[2].o = frame[11].o;
	sp[3].o = frame[0].o;
	sp[4].o = frame[12].o;
	LINE_NUMBER(247);
	sp[3].o = (jobject)((func_rhino_IRFactory_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_rhino_IRFactory_createName_java_lang_String_R_rhino_Node])(ctx, sp[3].o, sp[4].o);
	LINE_NUMBER(245);
	sp[1].o = (jobject)M_rhino_IRFactory_createAssignment_int_rhino_Node_rhino_Node_R_rhino_Node(ctx, sp[1].o, temp1, sp[2].o, sp[3].o);
	sp[2].o = frame[4].o;
	LINE_NUMBER(244);
	sp[0].o = (jobject)M_rhino_IRFactory_createBinary_int_rhino_Node_rhino_Node_R_rhino_Node(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	frame[4].o = sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((func_rhino_IRFactory_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_createName_java_lang_String_R_rhino_Node])(ctx, (frame[0].o), (frame[12].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(253);
	((func_rhino_IRFactory_defineSymbol_int_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_defineSymbol_int_java_lang_String_boolean])(ctx, (frame[0].o), (154), (frame[12].o), (jint(0)));
	LINE_NUMBER(254);
	ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)) = (frame[13].o);
	LINE_NUMBER(256);
	jint temp0 = (jint)((func_rhino_ast_ArrayComprehensionLoop_isForOf_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_ArrayComprehensionLoop_isForOf_R_boolean])(ctx, (frame[10].o));
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"of "_j))));
	goto label_39;
	}
label_37:;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (52));
	}
label_39:;
	{
	LINE_NUMBER(261);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_rhino_ast_ArrayComprehensionLoop_getIteratedObject_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_ArrayComprehensionLoop_getIteratedObject_R_rhino_ast_AstNode])(ctx, (frame[10].o));
	sp[1].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(262);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	LINE_NUMBER(225);
	INST_IINC(9, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	jint temp0 = 38;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[2].o;
	LINE_NUMBER(267);
	sp[2].o = (jobject)((func_rhino_IRFactory_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_IRFactory_createName_java_lang_String_R_rhino_Node])(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)M_rhino_IRFactory_createPropertyGet_rhino_Node_java_lang_String_java_lang_String_int_R_rhino_Node(ctx, sp[1].o, sp[2].o, (jobject(nullptr)), (((jobject) createStringLiteral(ctx, u8"push"_j))), (jint(0)));
	LINE_NUMBER(266);
	sp[0].o = (jobject)M_rhino_IRFactory_createCallOrNew_int_rhino_Node_R_rhino_Node(ctx, sp[0].o, temp0, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(271);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_int(ctx, sp[0].o, (134), (frame[9].o), (frame[3].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(273);
	sp[0].o = (jobject)((func_rhino_ast_ArrayComprehension_getFilter_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ArrayComprehension_getFilter_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_46;
	}
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(275);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (113));
	LINE_NUMBER(276);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_rhino_ast_ArrayComprehension_getFilter_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ArrayComprehension_getFilter_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)M_rhino_IRFactory_createIf_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node(ctx, sp[0].o, sp[1].o, (frame[10].o), (jobject(nullptr)), (frame[3].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(278);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	}
label_46:;
	{
	LINE_NUMBER(282);
	frame[11].i = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(284);
	frame[12].i = ((frame[6].i) - (jint(1)));
	}
label_52:;
	INST_ILOAD(12);
	if ((--sp)->i < 0) goto label_1;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[12].i));
	frame[13].o = (checkCast(ctx, &class_rhino_ast_ArrayComprehensionLoop, sp[0].o));
	LINE_NUMBER(286);
	sp[0].o = frame[0].o;
	sp[1].o = jobject(nullptr);
	sp[2].o = frame[13].o;
	LINE_NUMBER(287);
	jint temp0 = (jint)((func_rhino_ast_ArrayComprehensionLoop_getLineno_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_ast_ArrayComprehensionLoop_getLineno_R_int])(ctx, sp[2].o);
	LINE_NUMBER(286);
	sp[0].o = (jobject)M_rhino_IRFactory_createLoopNode_rhino_Node_int_R_rhino_ast_Scope(ctx, sp[0].o, sp[1].o, temp0);
	frame[14].o = sp[0].o;
	LINE_NUMBER(288);
	((func_rhino_IRFactory_pushScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_pushScope_rhino_ast_Scope])(ctx, (frame[0].o), (frame[14].o));
	LINE_NUMBER(289);
	INST_IINC(11, 1);
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	jint temp1 = 154;
	sp[1].o = frame[14].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[12].i));
	sp[3].o = (jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[12].i));
	sp[4].o = frame[10].o;
	sp[5].o = frame[13].o;
	LINE_NUMBER(295);
	jint temp2 = (jint)((func_rhino_ast_ArrayComprehensionLoop_isForEach_R_boolean) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_rhino_ast_ArrayComprehensionLoop_isForEach_R_boolean])(ctx, sp[5].o);
	sp[5].o = frame[13].o;
	LINE_NUMBER(296);
	jint temp3 = (jint)((func_rhino_ast_ArrayComprehensionLoop_isForOf_R_boolean) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_rhino_ast_ArrayComprehensionLoop_isForOf_R_boolean])(ctx, sp[5].o);
	LINE_NUMBER(290);
	sp[0].o = (jobject)M_rhino_IRFactory_createForIn_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_boolean_boolean_R_rhino_Node(ctx, sp[0].o, temp1, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp2, temp3);
	frame[10].o = sp[0].o;
	LINE_NUMBER(284);
	INST_IINC(12, -1);
	goto label_52;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(299);
	frame[12].i = (jint(0));
	}
label_64:;
	{
	if ((frame[12].i) >= (frame[11].i)) goto label_65;
	}
	{
	LINE_NUMBER(300);
	((func_rhino_IRFactory_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(299);
	INST_IINC(12, 1);
	goto label_64;
	}
label_65:;
	LINE_NUMBER(302);
	goto label_68;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(299);
	INST_ASTORE(15);
	popExceptionFrame(frameRef);
	INST_ICONST(0);
	INST_ISTORE(16);
label_69:;
	{
	if ((frame[16].i) >= (frame[11].i)) goto label_70;
	}
	{
	LINE_NUMBER(300);
	((func_rhino_IRFactory_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(299);
	INST_IINC(16, 1);
	goto label_69;
	}
label_70:;
	{
	LINE_NUMBER(302);
	throwException(ctx, (frame[15].o));	}
label_68:;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (85));
	LINE_NUMBER(308);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[9].o), (frame[4].o));
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return (frame[10].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformArrayLiteral_rhino_ast_ArrayLiteral_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformArrayLiteral", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(313);
	jint temp0 = (jint)((func_rhino_ast_ArrayLiteral_isDestructuring_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ArrayLiteral_isDestructuring_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (84));
	LINE_NUMBER(317);
	sp[0].o = (jobject)((func_rhino_ast_ArrayLiteral_getElements_R_java_util_List) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ArrayLiteral_getElements_R_java_util_List])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(318);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (66));
	frame[3].o = sp[0].o;
	LINE_NUMBER(319);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(320);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_8;
	}
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[5].i));
	frame[6].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(322);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[6].o));
	if (temp0 == (129)) goto label_11;
	}
	{
	LINE_NUMBER(323);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, (frame[0].o), (frame[6].o));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(325);
	if ((frame[4].o) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(326);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(328);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[5].i));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	{
	LINE_NUMBER(330);
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 >= (temp1 - (jint(1)))) goto label_16;
	}
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (90));
	}
label_16:;
	{
	LINE_NUMBER(320);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (85));
	LINE_NUMBER(334);
	sp[0].o = frame[3].o;
	jint temp0 = 21;
	sp[1].o = frame[1].o;
	LINE_NUMBER(335);
	jint temp1 = (jint)((func_rhino_ast_ArrayLiteral_getDestructuringLength_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_ArrayLiteral_getDestructuringLength_R_int])(ctx, sp[1].o);
	LINE_NUMBER(334);
	((func_rhino_Node_putIntProp_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_putIntProp_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(336);
	if ((frame[4].o) == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(337);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[4].o)))(ctx, (frame[4].o));
	sp[0].o = (jobject) createArray(ctx, &class_int, temp0);
	frame[5].o = sp[0].o;
	LINE_NUMBER(338);
	frame[6].i = (jint(0));
	}
label_25:;
	{
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 >= temp1) goto label_26;
	}
	{
	LINE_NUMBER(339);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[6].i));
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[1].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[1].o)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(338);
	INST_IINC(6, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(340);
	((func_rhino_Node_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_putProp_int_java_lang_Object])(ctx, (frame[3].o), (11), (frame[5].o));
	}
label_22:;
	{
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformAssignment_rhino_ast_Assignment_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformAssignment", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(346);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_Assignment_getLeft_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Assignment_getLeft_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_removeParens_rhino_ast_AstNode_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_removeParens_rhino_ast_AstNode_R_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(348);
	jint temp0 = (jint)((func_rhino_IRFactory_isDestructuring_rhino_Node_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_isDestructuring_rhino_Node_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(349);
	((func_rhino_IRFactory_decompile_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_decompile_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(350);
	frame[3].o = (frame[2].o);
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, (frame[0].o), (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	jint temp0 = (jint)((func_rhino_ast_Assignment_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Assignment_getType_R_int])(ctx, (frame[1].o));
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(355);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_rhino_ast_Assignment_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Assignment_getType_R_int])(ctx, (frame[1].o));
	sp[1].o = frame[3].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[1].o;
	LINE_NUMBER(357);
	sp[3].o = (jobject)((func_rhino_ast_Assignment_getRight_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_rhino_ast_Assignment_getRight_R_rhino_ast_AstNode])(ctx, sp[3].o);
	sp[2].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(355);
	sp[0].o = (jobject)M_rhino_IRFactory_createAssignment_int_rhino_Node_rhino_Node_R_rhino_Node(ctx, sp[0].o, temp1, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformBlock_rhino_ast_AstNode_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformBlock", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(361);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_Scope)) == 0) goto label_0;
	}
	{
	LINE_NUMBER(362);
	((func_rhino_IRFactory_pushScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_pushScope_rhino_ast_Scope])(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_Scope, (frame[1].o))));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(365);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(366);
	sp[0].o = (jobject)((func_rhino_ast_AstNode_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_rhino_Node, sp[0].o));
	LINE_NUMBER(367);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_AstNode, (frame[4].o))));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(368);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(369);
	((func_rhino_ast_AstNode_removeChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_removeChildren])(ctx, (frame[1].o));
	LINE_NUMBER(370);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_rhino_Node, sp[0].o));
	LINE_NUMBER(371);
	((func_rhino_ast_AstNode_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_addChildToBack_rhino_Node])(ctx, (frame[1].o), (frame[4].o));
	LINE_NUMBER(372);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(373);
	frame[3].o = (frame[1].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(375);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_Scope)) == 0) goto label_18;
	}
	{
	LINE_NUMBER(376);
	((func_rhino_IRFactory_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_popScope])(ctx, (frame[0].o));
	}
label_18:;
	{
	LINE_NUMBER(373);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(375);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_Scope)) == 0) goto label_20;
	}
	{
	LINE_NUMBER(376);
	((func_rhino_IRFactory_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_popScope])(ctx, (frame[0].o));
	}
label_20:;
	{
	LINE_NUMBER(378);
	throwException(ctx, (frame[5].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformBreak_rhino_ast_BreakStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformBreak", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (121));
	LINE_NUMBER(383);
	sp[0].o = (jobject)((func_rhino_ast_BreakStatement_getBreakLabel_R_rhino_ast_Name) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_BreakStatement_getBreakLabel_R_rhino_ast_Name])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	sp[1].o = (jobject)((func_rhino_ast_BreakStatement_getBreakLabel_R_rhino_ast_Name) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_BreakStatement_getBreakLabel_R_rhino_ast_Name])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, sp[1].o);
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (83));
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformCondExpr_rhino_ast_ConditionalExpression_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformCondExpr", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ConditionalExpression_getTestExpression_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ConditionalExpression_getTestExpression_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(392);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (103));
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ConditionalExpression_getTrueExpression_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ConditionalExpression_getTrueExpression_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(394);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (104));
	LINE_NUMBER(395);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ConditionalExpression_getFalseExpression_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ConditionalExpression_getFalseExpression_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(396);
	sp[0].o = (jobject)M_rhino_IRFactory_createCondExpr_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformContinue_rhino_ast_ContinueStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformContinue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (122));
	LINE_NUMBER(401);
	sp[0].o = (jobject)((func_rhino_ast_ContinueStatement_getLabel_R_rhino_ast_Name) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ContinueStatement_getLabel_R_rhino_ast_Name])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	sp[1].o = (jobject)((func_rhino_ast_ContinueStatement_getLabel_R_rhino_ast_Name) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ContinueStatement_getLabel_R_rhino_ast_Name])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, sp[1].o);
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (83));
	LINE_NUMBER(405);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformDoLoop_rhino_ast_DoLoop_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformDoLoop", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((func_rhino_ast_DoLoop_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_DoLoop_setType_int_R_rhino_Node])(ctx, (frame[1].o), (133));
	LINE_NUMBER(410);
	((func_rhino_IRFactory_pushScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_pushScope_rhino_ast_Scope])(ctx, (frame[0].o), (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (119));
	LINE_NUMBER(413);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (86));
	LINE_NUMBER(414);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_DoLoop_getBody_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_DoLoop_getBody_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(415);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (87));
	LINE_NUMBER(416);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (118));
	LINE_NUMBER(417);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(418);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_DoLoop_getCondition_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_DoLoop_getCondition_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(419);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	LINE_NUMBER(420);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (83));
	LINE_NUMBER(421);
	sp[0].o = (jobject)M_rhino_IRFactory_createLoop_rhino_ast_Jump_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].o), (frame[3].o), (jobject(nullptr)), (jobject(nullptr)));
	frame[4].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(424);
	((func_rhino_IRFactory_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(424);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_rhino_IRFactory_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(425);
	throwException(ctx, (frame[5].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformElementGet_rhino_ast_ElementGet_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformElementGet", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(431);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ElementGet_getTarget_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ElementGet_getTarget_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(432);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (84));
	LINE_NUMBER(433);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ElementGet_getElement_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ElementGet_getElement_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(434);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (85));
	LINE_NUMBER(435);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, (36), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformExprStmt_rhino_ast_ExpressionStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformExprStmt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(439);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ExpressionStatement_getExpression_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ExpressionStatement_getExpression_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(440);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (83));
	LINE_NUMBER(441);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = (jint)((func_rhino_ast_ExpressionStatement_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ExpressionStatement_getType_R_int])(ctx, (frame[1].o));
	sp[1].o = frame[2].o;
	jint temp1 = (jint)((func_rhino_ast_ExpressionStatement_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ExpressionStatement_getLineno_R_int])(ctx, (frame[1].o));
	init_rhino_Node_int_rhino_Node_int(ctx, sp[0].o, temp0, sp[1].o, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformForInLoop_rhino_ast_ForInLoop_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformForInLoop", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (120));
	LINE_NUMBER(446);
	jint temp0 = (jint)((func_rhino_ast_ForInLoop_isForEach_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ForInLoop_isForEach_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"each "_j))));
	}
label_8:;
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_rhino_ast_ForInLoop_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ForInLoop_setType_int_R_rhino_Node])(ctx, (frame[1].o), (133));
	LINE_NUMBER(451);
	((func_rhino_IRFactory_pushScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_pushScope_rhino_ast_Scope])(ctx, (frame[0].o), (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(453);
	frame[2].i = (jint(-1));
	LINE_NUMBER(454);
	sp[0].o = (jobject)((func_rhino_ast_ForInLoop_getIterator_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ForInLoop_getIterator_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(455);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_ast_VariableDeclaration)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(456);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[3].o));
	frame[2].i = temp0;
	}
label_14:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, (frame[0].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(459);
	jint temp0 = (jint)((func_rhino_ast_ForInLoop_isForOf_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ForInLoop_isForOf_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(460);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"of "_j))));
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (52));
	}
label_19:;
	{
	LINE_NUMBER(464);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ForInLoop_getIteratedObject_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ForInLoop_getIteratedObject_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(465);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	LINE_NUMBER(466);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (86));
	LINE_NUMBER(467);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ForInLoop_getBody_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ForInLoop_getBody_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(468);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (87));
	LINE_NUMBER(469);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = frame[5].o;
	sp[4].o = frame[6].o;
	sp[5].o = frame[1].o;
	LINE_NUMBER(470);
	jint temp1 = (jint)((func_rhino_ast_ForInLoop_isForEach_R_boolean) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_rhino_ast_ForInLoop_isForEach_R_boolean])(ctx, sp[5].o);
	jint temp2 = (jint)((func_rhino_ast_ForInLoop_isForOf_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ForInLoop_isForOf_R_boolean])(ctx, (frame[1].o));
	LINE_NUMBER(469);
	sp[0].o = (jobject)M_rhino_IRFactory_createForIn_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_boolean_boolean_R_rhino_Node(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp1, temp2);
	frame[7].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(472);
	((func_rhino_IRFactory_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(472);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	((func_rhino_IRFactory_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(473);
	throwException(ctx, (frame[8].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformForLoop_rhino_ast_ForLoop_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformForLoop", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (120));
	LINE_NUMBER(478);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(479);
	sp[0].o = (jobject)((func_rhino_ast_ForLoop_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ForLoop_setType_int_R_rhino_Node])(ctx, (frame[1].o), (133));
	LINE_NUMBER(482);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope;
	frame[2].o = sp[0].o;
	LINE_NUMBER(483);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope = (jref) (frame[1].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(485);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ForLoop_getInitializer_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ForLoop_getInitializer_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(486);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (83));
	LINE_NUMBER(487);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ForLoop_getCondition_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ForLoop_getCondition_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(488);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (83));
	LINE_NUMBER(489);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ForLoop_getIncrement_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ForLoop_getIncrement_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(490);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	LINE_NUMBER(491);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (86));
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ForLoop_getBody_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ForLoop_getBody_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(493);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (87));
	LINE_NUMBER(494);
	sp[0].o = (jobject)M_rhino_IRFactory_createFor_rhino_ast_Scope_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[4].o), (frame[5].o), (frame[6].o));
	frame[7].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(496);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope = (jref) (frame[2].o);
	LINE_NUMBER(494);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(496);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope = (jref) (frame[2].o);
	LINE_NUMBER(497);
	throwException(ctx, (frame[8].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformFunction_rhino_ast_FunctionNode_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformFunction", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(501);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_getFunctionType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionType_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(502);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	jint temp1 = (jint)((func_rhino_Decompiler_markFunctionStart_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_markFunctionStart_int_R_int])(ctx, sp[0].o, (frame[2].i));
	frame[3].i = temp1;
	LINE_NUMBER(503);
	sp[0].o = (jobject)((func_rhino_IRFactory_decompileFunctionHeader_rhino_ast_FunctionNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_decompileFunctionHeader_rhino_ast_FunctionNode_R_rhino_Node])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(504);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	jint temp2 = (jint)((func_rhino_ast_ScriptNode_addFunction_rhino_ast_FunctionNode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_addFunction_rhino_ast_FunctionNode_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[5].i = temp2;
	LINE_NUMBER(506);
	clinit_rhino_Parser$PerFunctionVariables(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Parser$PerFunctionVariables);
	init_rhino_Parser$PerFunctionVariables_rhino_Parser_rhino_ast_FunctionNode(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	frame[6].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(510);
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getProp_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getProp_int_R_java_lang_Object])(ctx, (frame[1].o), (23));
	frame[7].o = (checkCast(ctx, &class_rhino_Node, sp[0].o));
	LINE_NUMBER(511);
	((func_rhino_ast_FunctionNode_removeProp_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_removeProp_int])(ctx, (frame[1].o), (23));
	LINE_NUMBER(513);
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_rhino_ast_AstNode_getLineno_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_getLineno_R_int])(ctx, sp[0].o);
	frame[8].i = temp0;
	LINE_NUMBER(514);
	sp[0].o = frame[0].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction = (((jint)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction) + (jint(1)));
	LINE_NUMBER(515);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(517);
	jint temp1 = (jint)((func_rhino_ast_FunctionNode_isExpressionClosure_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_isExpressionClosure_R_boolean])(ctx, (frame[1].o));
	if (temp1 != 0) goto label_16;
	}
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (87));
	}
label_16:;
	{
	LINE_NUMBER(520);
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	jint temp1 = (jint)((func_rhino_Decompiler_markFunctionEnd_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Decompiler_markFunctionEnd_int_R_int])(ctx, sp[1].o, (frame[3].i));
	((func_rhino_ast_FunctionNode_setEncodedSourceBounds_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setEncodedSourceBounds_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(522);
	if ((frame[2].i) == (jint(2))) goto label_19;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_isExpressionClosure_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_isExpressionClosure_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_19;
	}
	{
	LINE_NUMBER(525);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (jint(1)));
	}
label_19:;
	{
	LINE_NUMBER(528);
	if ((frame[7].o) == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(529);
	sp[0].o = frame[9].o;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_int(ctx, sp[1].o, (134), (frame[7].o), (frame[8].i));
	((func_rhino_Node_addChildToFront_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToFront_rhino_Node])(ctx, sp[0].o, sp[1].o);
	}
label_21:;
	{
	LINE_NUMBER(533);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_getFunctionType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionType_R_int])(ctx, (frame[1].o));
	frame[10].i = temp0;
	LINE_NUMBER(534);
	sp[0].o = (jobject)M_rhino_IRFactory_initFunction_rhino_ast_FunctionNode_int_rhino_Node_int_R_rhino_Node(ctx, (frame[0].o), (frame[1].o), (frame[5].i), (frame[9].o), (frame[10].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(535);
	if ((frame[4].o) == nullptr) goto label_25;
	}
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)M_rhino_IRFactory_createAssignment_int_rhino_Node_rhino_Node_R_rhino_Node(ctx, (frame[0].o), (91), (frame[4].o), (frame[11].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(537);
	if ((frame[10].i) == (jint(2))) goto label_25;
	}
	{
	LINE_NUMBER(538);
	sp[0].o = frame[0].o;
	sp[1].o = frame[11].o;
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getLineno_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)M_rhino_IRFactory_createExprStatementNoReturn_rhino_Node_int_R_rhino_Node(ctx, sp[0].o, sp[1].o, temp0);
	frame[11].o = sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(541);
	frame[12].o = (frame[11].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(544);
	sp[0].o = frame[0].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction = (((jint)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction) - (jint(1)));
	LINE_NUMBER(545);
	((func_rhino_Parser$PerFunctionVariables_restore) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Parser$PerFunctionVariables_restore])(ctx, (frame[6].o));
	LINE_NUMBER(541);
	popStackFrame(ctx);
	return (frame[12].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(544);
	INST_ASTORE(13);
	popExceptionFrame(frameRef);
	{
	sp[0].o = frame[0].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction = (((jint)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction) - (jint(1)));
	LINE_NUMBER(545);
	((func_rhino_Parser$PerFunctionVariables_restore) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Parser$PerFunctionVariables_restore])(ctx, (frame[6].o));
	LINE_NUMBER(546);
	throwException(ctx, (frame[13].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformFunctionCall_rhino_ast_FunctionCall_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformFunctionCall", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(550);
	sp[0].o = frame[0].o;
	jint temp0 = 38;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_rhino_ast_FunctionCall_getTarget_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionCall_getTarget_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)M_rhino_IRFactory_createCallOrNew_int_rhino_Node_R_rhino_Node(ctx, sp[0].o, temp0, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(551);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)((func_rhino_ast_FunctionCall_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionCall_getLineno_R_int])(ctx, (frame[1].o));
	((func_rhino_Node_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_setLineno_int])(ctx, sp[0].o, temp1);
	LINE_NUMBER(552);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(553);
	sp[0].o = (jobject)((func_rhino_ast_FunctionCall_getArguments_R_java_util_List) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionCall_getArguments_R_java_util_List])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(554);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 >= temp1) goto label_6;
	}
	{
	LINE_NUMBER(555);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(556);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, (frame[0].o), (frame[5].o));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(557);
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 >= (temp1 - (jint(1)))) goto label_10;
	}
	{
	LINE_NUMBER(558);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (90));
	}
label_10:;
	{
	LINE_NUMBER(554);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformGenExpr_rhino_ast_GeneratorExpression_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformGenExpr", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(568);
	clinit_rhino_ast_FunctionNode(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_FunctionNode);
	init_rhino_ast_FunctionNode(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(569);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	sp[1].o = (jobject)((func_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String])(ctx, sp[1].o);
	((func_rhino_ast_FunctionNode_setSourceName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setSourceName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(570);
	((func_rhino_ast_FunctionNode_setIsGenerator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setIsGenerator])(ctx, (frame[3].o));
	LINE_NUMBER(571);
	((func_rhino_ast_FunctionNode_setFunctionType_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setFunctionType_int])(ctx, (frame[3].o), (jint(2)));
	LINE_NUMBER(572);
	((func_rhino_ast_FunctionNode_setRequiresActivation) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setRequiresActivation])(ctx, (frame[3].o));
	LINE_NUMBER(574);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_getFunctionType_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionType_R_int])(ctx, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(575);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	jint temp1 = (jint)((func_rhino_Decompiler_markFunctionStart_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_markFunctionStart_int_R_int])(ctx, sp[0].o, (frame[4].i));
	frame[5].i = temp1;
	LINE_NUMBER(576);
	sp[0].o = (jobject)((func_rhino_IRFactory_decompileFunctionHeader_rhino_ast_FunctionNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_decompileFunctionHeader_rhino_ast_FunctionNode_R_rhino_Node])(ctx, (frame[0].o), (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(577);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	jint temp2 = (jint)((func_rhino_ast_ScriptNode_addFunction_rhino_ast_FunctionNode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_addFunction_rhino_ast_FunctionNode_R_int])(ctx, sp[0].o, (frame[3].o));
	frame[7].i = temp2;
	LINE_NUMBER(579);
	clinit_rhino_Parser$PerFunctionVariables(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Parser$PerFunctionVariables);
	init_rhino_Parser$PerFunctionVariables_rhino_Parser_rhino_ast_FunctionNode(ctx, sp[0].o, (frame[0].o), (frame[3].o));
	frame[8].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getProp_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getProp_int_R_java_lang_Object])(ctx, (frame[3].o), (23));
	frame[9].o = (checkCast(ctx, &class_rhino_Node, sp[0].o));
	LINE_NUMBER(584);
	((func_rhino_ast_FunctionNode_removeProp_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_FunctionNode_removeProp_int])(ctx, (frame[3].o), (23));
	LINE_NUMBER(586);
	frame[10].i = ((jint)((rhino_Node *) NULL_CHECK((frame[1].o)))->F_lineno);
	LINE_NUMBER(587);
	sp[0].o = frame[0].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction = (((jint)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction) + (jint(1)));
	LINE_NUMBER(588);
	sp[0].o = (jobject)M_rhino_IRFactory_genExprTransformHelper_rhino_ast_GeneratorExpression_R_rhino_Node(ctx, (frame[0].o), (frame[1].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(590);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_isExpressionClosure_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_FunctionNode_isExpressionClosure_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_21;
	}
	{
	LINE_NUMBER(591);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (87));
	}
label_21:;
	{
	LINE_NUMBER(593);
	sp[0].o = frame[3].o;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	jint temp1 = (jint)((func_rhino_Decompiler_markFunctionEnd_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Decompiler_markFunctionEnd_int_R_int])(ctx, sp[1].o, (frame[5].i));
	((func_rhino_ast_FunctionNode_setEncodedSourceBounds_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_setEncodedSourceBounds_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(595);
	if ((frame[4].i) == (jint(2))) goto label_24;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_isExpressionClosure_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_FunctionNode_isExpressionClosure_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_24;
	}
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (jint(1)));
	}
label_24:;
	{
	LINE_NUMBER(601);
	if ((frame[9].o) == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(602);
	sp[0].o = frame[11].o;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_int(ctx, sp[1].o, (134), (frame[9].o), (frame[10].i));
	((func_rhino_Node_addChildToFront_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToFront_rhino_Node])(ctx, sp[0].o, sp[1].o);
	}
label_26:;
	{
	LINE_NUMBER(606);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_getFunctionType_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionType_R_int])(ctx, (frame[3].o));
	frame[12].i = temp0;
	LINE_NUMBER(607);
	sp[0].o = (jobject)M_rhino_IRFactory_initFunction_rhino_ast_FunctionNode_int_rhino_Node_int_R_rhino_Node(ctx, (frame[0].o), (frame[3].o), (frame[7].i), (frame[11].o), (frame[12].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(608);
	if ((frame[6].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(609);
	sp[0].o = (jobject)M_rhino_IRFactory_createAssignment_int_rhino_Node_rhino_Node_R_rhino_Node(ctx, (frame[0].o), (91), (frame[6].o), (frame[2].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(610);
	if ((frame[12].i) == (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(611);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_getLineno_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getLineno_R_int])(ctx, (frame[3].o));
	sp[0].o = (jobject)M_rhino_IRFactory_createExprStatementNoReturn_rhino_Node_int_R_rhino_Node(ctx, sp[0].o, sp[1].o, temp0);
	frame[2].o = sp[0].o;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(615);
	sp[0].o = frame[0].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction = (((jint)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction) - (jint(1)));
	LINE_NUMBER(616);
	((func_rhino_Parser$PerFunctionVariables_restore) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_Parser$PerFunctionVariables_restore])(ctx, (frame[8].o));
	LINE_NUMBER(617);
	goto label_35;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(615);
	INST_ASTORE(13);
	popExceptionFrame(frameRef);
	{
	sp[0].o = frame[0].o;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction = (((jint)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_nestingOfFunction) - (jint(1)));
	LINE_NUMBER(616);
	((func_rhino_Parser$PerFunctionVariables_restore) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_Parser$PerFunctionVariables_restore])(ctx, (frame[8].o));
	LINE_NUMBER(617);
	throwException(ctx, (frame[13].o));	}
label_35:;
	{
	LINE_NUMBER(619);
	sp[0].o = (jobject)M_rhino_IRFactory_createCallOrNew_int_rhino_Node_R_rhino_Node(ctx, (frame[0].o), (38), (frame[2].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(620);
	sp[0].o = frame[9].o;
	jint temp0 = (jint)((func_rhino_ast_GeneratorExpression_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_GeneratorExpression_getLineno_R_int])(ctx, (frame[1].o));
	((func_rhino_Node_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_setLineno_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(621);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(622);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	LINE_NUMBER(623);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_genExprTransformHelper_rhino_ast_GeneratorExpression_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:genExprTransformHelper", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(627);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(628);
	jint temp0 = (jint)((func_rhino_ast_GeneratorExpression_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_GeneratorExpression_getLineno_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(629);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_GeneratorExpression_getResult_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_GeneratorExpression_getResult_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(631);
	sp[0].o = (jobject)((func_rhino_ast_GeneratorExpression_getLoops_R_java_util_List) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_GeneratorExpression_getLoops_R_java_util_List])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(632);
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].i = temp1;
	LINE_NUMBER(635);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_Node, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(636);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_Node, (frame[5].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(638);
	frame[8].i = (jint(0));
	}
label_14:;
	{
	if ((frame[8].i) >= (frame[5].i)) goto label_15;
	}
	{
	LINE_NUMBER(639);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[8].i));
	frame[9].o = (checkCast(ctx, &class_rhino_ast_GeneratorExpressionLoop, sp[0].o));
	LINE_NUMBER(640);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(641);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (120));
	LINE_NUMBER(642);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(644);
	sp[0].o = (jobject)((func_rhino_ast_GeneratorExpressionLoop_getIterator_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_GeneratorExpressionLoop_getIterator_R_rhino_ast_AstNode])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(646);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[10].o));
	if (temp0 != (39)) goto label_22;
	}
	{
	LINE_NUMBER(647);
	sp[0].o = (jobject)((func_rhino_ast_AstNode_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_AstNode_getString_R_java_lang_String])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(648);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (frame[11].o));
	goto label_25;
	}
label_22:;
	{
	LINE_NUMBER(651);
	((func_rhino_IRFactory_decompile_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_decompile_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[10].o));
	LINE_NUMBER(652);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	sp[0].o = (jobject)((func_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(653);
	((func_rhino_IRFactory_defineSymbol_int_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_defineSymbol_int_java_lang_String_boolean])(ctx, (frame[0].o), (88), (frame[11].o), (jint(0)));
	LINE_NUMBER(654);
	sp[0].o = frame[0].o;
	jint temp0 = 90;
	sp[1].o = frame[0].o;
	jint temp1 = 91;
	sp[2].o = frame[10].o;
	sp[3].o = frame[0].o;
	sp[4].o = frame[11].o;
	LINE_NUMBER(657);
	sp[3].o = (jobject)((func_rhino_IRFactory_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_rhino_IRFactory_createName_java_lang_String_R_rhino_Node])(ctx, sp[3].o, sp[4].o);
	LINE_NUMBER(655);
	sp[1].o = (jobject)M_rhino_IRFactory_createAssignment_int_rhino_Node_rhino_Node_R_rhino_Node(ctx, sp[1].o, temp1, sp[2].o, sp[3].o);
	sp[2].o = frame[3].o;
	LINE_NUMBER(654);
	sp[0].o = (jobject)M_rhino_IRFactory_createBinary_int_rhino_Node_rhino_Node_R_rhino_Node(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(660);
	sp[0].o = (jobject)((func_rhino_IRFactory_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_createName_java_lang_String_R_rhino_Node])(ctx, (frame[0].o), (frame[11].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(663);
	((func_rhino_IRFactory_defineSymbol_int_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_defineSymbol_int_java_lang_String_boolean])(ctx, (frame[0].o), (154), (frame[11].o), (jint(0)));
	LINE_NUMBER(664);
	ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)) = (frame[12].o);
	LINE_NUMBER(666);
	jint temp0 = (jint)((func_rhino_ast_GeneratorExpressionLoop_isForOf_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_GeneratorExpressionLoop_isForOf_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_35;
	}
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"of "_j))));
	goto label_37;
	}
label_35:;
	{
	LINE_NUMBER(669);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (52));
	}
label_37:;
	{
	LINE_NUMBER(671);
	sp[0].o = frame[7].o;
	jint temp0 = frame[8].i;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_rhino_ast_GeneratorExpressionLoop_getIteratedObject_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_GeneratorExpressionLoop_getIteratedObject_R_rhino_ast_AstNode])(ctx, (frame[9].o));
	sp[1].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(672);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	LINE_NUMBER(638);
	INST_IINC(8, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(676);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 73;
	sp[1].o = frame[3].o;
	jint temp1 = (jint)((func_rhino_ast_GeneratorExpression_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_GeneratorExpression_getLineno_R_int])(ctx, (frame[1].o));
	init_rhino_Node_int_rhino_Node_int(ctx, sp[0].o, temp0, sp[1].o, temp1);
	frame[8].o = sp[0].o;
	LINE_NUMBER(678);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_int(ctx, sp[0].o, (134), (frame[8].o), (frame[2].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(680);
	sp[0].o = (jobject)((func_rhino_ast_GeneratorExpression_getFilter_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_GeneratorExpression_getFilter_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_42;
	}
	{
	LINE_NUMBER(681);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(682);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (113));
	LINE_NUMBER(683);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(684);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_rhino_ast_GeneratorExpression_getFilter_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_GeneratorExpression_getFilter_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)M_rhino_IRFactory_createIf_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node(ctx, sp[0].o, sp[1].o, (frame[9].o), (jobject(nullptr)), (frame[2].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(685);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	}
label_42:;
	{
	LINE_NUMBER(689);
	frame[10].i = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(691);
	frame[11].i = ((frame[5].i) - (jint(1)));
	}
label_48:;
	INST_ILOAD(11);
	if ((--sp)->i < 0) goto label_1;
	{
	LINE_NUMBER(692);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[11].i));
	frame[12].o = (checkCast(ctx, &class_rhino_ast_GeneratorExpressionLoop, sp[0].o));
	LINE_NUMBER(693);
	sp[0].o = frame[0].o;
	sp[1].o = jobject(nullptr);
	sp[2].o = frame[12].o;
	LINE_NUMBER(694);
	jint temp0 = (jint)((func_rhino_ast_GeneratorExpressionLoop_getLineno_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_ast_GeneratorExpressionLoop_getLineno_R_int])(ctx, sp[2].o);
	LINE_NUMBER(693);
	sp[0].o = (jobject)M_rhino_IRFactory_createLoopNode_rhino_Node_int_R_rhino_ast_Scope(ctx, sp[0].o, sp[1].o, temp0);
	frame[13].o = sp[0].o;
	LINE_NUMBER(695);
	((func_rhino_IRFactory_pushScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_pushScope_rhino_ast_Scope])(ctx, (frame[0].o), (frame[13].o));
	LINE_NUMBER(696);
	INST_IINC(10, 1);
	LINE_NUMBER(697);
	sp[0].o = frame[0].o;
	jint temp1 = 154;
	sp[1].o = frame[13].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[11].i));
	sp[3].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[11].i));
	sp[4].o = frame[9].o;
	sp[5].o = frame[12].o;
	LINE_NUMBER(702);
	jint temp2 = (jint)((func_rhino_ast_GeneratorExpressionLoop_isForEach_R_boolean) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_rhino_ast_GeneratorExpressionLoop_isForEach_R_boolean])(ctx, sp[5].o);
	sp[5].o = frame[12].o;
	LINE_NUMBER(703);
	jint temp3 = (jint)((func_rhino_ast_GeneratorExpressionLoop_isForOf_R_boolean) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_rhino_ast_GeneratorExpressionLoop_isForOf_R_boolean])(ctx, sp[5].o);
	LINE_NUMBER(697);
	sp[0].o = (jobject)M_rhino_IRFactory_createForIn_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_boolean_boolean_R_rhino_Node(ctx, sp[0].o, temp1, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp2, temp3);
	frame[9].o = sp[0].o;
	LINE_NUMBER(691);
	INST_IINC(11, -1);
	goto label_48;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(706);
	frame[11].i = (jint(0));
	}
label_60:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_61;
	}
	{
	LINE_NUMBER(707);
	((func_rhino_IRFactory_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(706);
	INST_IINC(11, 1);
	goto label_60;
	}
label_61:;
	LINE_NUMBER(709);
	goto label_64;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(706);
	INST_ASTORE(14);
	popExceptionFrame(frameRef);
	INST_ICONST(0);
	INST_ISTORE(15);
label_65:;
	{
	if ((frame[15].i) >= (frame[10].i)) goto label_66;
	}
	{
	LINE_NUMBER(707);
	((func_rhino_IRFactory_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(706);
	INST_IINC(15, 1);
	goto label_65;
	}
label_66:;
	{
	LINE_NUMBER(709);
	throwException(ctx, (frame[14].o));	}
label_64:;
	{
	LINE_NUMBER(711);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	LINE_NUMBER(713);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformIf_rhino_ast_IfStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformIf", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(717);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (113));
	LINE_NUMBER(718);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(719);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_IfStatement_getCondition_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_IfStatement_getCondition_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(720);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	LINE_NUMBER(721);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (86));
	LINE_NUMBER(722);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_IfStatement_getThenPart_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_IfStatement_getThenPart_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(723);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(724);
	sp[0].o = (jobject)((func_rhino_ast_IfStatement_getElsePart_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_IfStatement_getElsePart_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(725);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (87));
	LINE_NUMBER(726);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (114));
	LINE_NUMBER(727);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (86));
	LINE_NUMBER(728);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_IfStatement_getElsePart_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_IfStatement_getElsePart_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(730);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (87));
	LINE_NUMBER(731);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = frame[4].o;
	jint temp0 = (jint)((func_rhino_ast_IfStatement_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_IfStatement_getLineno_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)M_rhino_IRFactory_createIf_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformInfix_rhino_ast_InfixExpression_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformInfix", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(735);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_InfixExpression_getLeft_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_InfixExpression_getLeft_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(736);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	jint temp0 = (jint)((func_rhino_ast_InfixExpression_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_InfixExpression_getType_R_int])(ctx, (frame[1].o));
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(737);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_InfixExpression_getRight_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_InfixExpression_getRight_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(738);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_rhino_ast_InfixExpression_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_InfixExpression_getType_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)M_rhino_IRFactory_createBinary_int_rhino_Node_rhino_Node_R_rhino_Node(ctx, sp[0].o, temp1, (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformLabeledStatement_rhino_ast_LabeledStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformLabeledStatement", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(742);
	sp[0].o = (jobject)((func_rhino_ast_LabeledStatement_getFirstLabel_R_rhino_ast_Label) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_LabeledStatement_getFirstLabel_R_rhino_ast_Label])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(743);
	sp[0].o = (jobject)((func_rhino_ast_LabeledStatement_getLabels_R_java_util_List) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_LabeledStatement_getLabels_R_java_util_List])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(744);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	sp[1].o = (jobject)((func_rhino_ast_Label_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_Label_getName_R_java_lang_String])(ctx, (frame[2].o));
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(745);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 <= (jint(1))) goto label_4;
	}
	{
	LINE_NUMBER(747);
	sp[0].o = frame[3].o;
	jint temp0 = jint(1);
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[3].o)))(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_util_List_subList_int_int_R_java_util_List) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_subList_int_int_R_java_util_List, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_rhino_ast_Label, sp[0].o));
	LINE_NUMBER(748);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (104));
	LINE_NUMBER(749);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	sp[1].o = (jobject)((func_rhino_ast_Label_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_Label_getName_R_java_lang_String])(ctx, (frame[5].o));
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(750);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(752);
	sp[0].o = (jobject)((func_rhino_ast_LabeledStatement_getStatement_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_LabeledStatement_getStatement_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, sp[0].o);
	if (temp0 != (130)) goto label_10;
	}
	{
	LINE_NUMBER(754);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (67));
	LINE_NUMBER(755);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (86));
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(757);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (104));
	}
label_13:;
	{
	LINE_NUMBER(759);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_LabeledStatement_getStatement_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_LabeledStatement_getStatement_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(760);
	sp[0].o = (jobject)((func_rhino_ast_LabeledStatement_getStatement_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_LabeledStatement_getStatement_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, sp[0].o);
	if (temp0 != (130)) goto label_15;
	}
	{
	LINE_NUMBER(761);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (87));
	}
label_15:;
	{
	LINE_NUMBER(766);
	sp[0].o = (jobject)SM_rhino_Node_newTarget_R_rhino_Node(ctx);
	frame[5].o = sp[0].o;
	LINE_NUMBER(767);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node_rhino_Node(ctx, sp[0].o, (130), (frame[2].o), (frame[4].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(768);
	((rhino_ast_Jump *) NULL_CHECK((frame[2].o)))->F_target = (jref) (frame[5].o);
	LINE_NUMBER(770);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformLetNode_rhino_ast_LetNode_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformLetNode", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(774);
	((func_rhino_IRFactory_pushScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_pushScope_rhino_ast_Scope])(ctx, (frame[0].o), (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (154));
	LINE_NUMBER(777);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(778);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_LetNode_getVariables_R_rhino_ast_VariableDeclaration) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_LetNode_getVariables_R_rhino_ast_VariableDeclaration])(ctx, (frame[1].o));
	sp[0].o = (jobject)M_rhino_IRFactory_transformVariableInitializers_rhino_ast_VariableDeclaration_R_rhino_Node(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(779);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	LINE_NUMBER(780);
	((func_rhino_ast_LetNode_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_LetNode_addChildToBack_rhino_Node])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(781);
	jint temp0 = (jint)((func_rhino_ast_LetNode_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_LetNode_getType_R_int])(ctx, (frame[1].o));
	if (temp0 != (159)) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(782);
	sp[0].o = (jobject)((func_rhino_ast_LetNode_getBody_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_LetNode_getBody_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(783);
	if ((frame[3].i) == 0) goto label_17;
	}
	{
	LINE_NUMBER(784);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(786);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (86));
	}
label_19:;
	{
	LINE_NUMBER(788);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_rhino_ast_LetNode_getBody_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_LetNode_getBody_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[1].o, sp[2].o);
	((func_rhino_ast_LetNode_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_LetNode_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(789);
	if ((frame[3].i) != 0) goto label_15;
	}
	{
	LINE_NUMBER(790);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (87));
	}
label_15:;
	{
	LINE_NUMBER(793);
	frame[4].o = (frame[1].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(795);
	((func_rhino_IRFactory_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(793);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(795);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_rhino_IRFactory_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(796);
	throwException(ctx, (frame[5].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformLiteral_rhino_ast_AstNode_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformLiteral", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(800);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[1].o));
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(801);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformName_rhino_ast_Name_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(805);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	sp[1].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, (frame[1].o));
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(806);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformNewExpr_rhino_ast_NewExpression_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformNewExpr", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(810);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (30));
	LINE_NUMBER(811);
	sp[0].o = frame[0].o;
	jint temp0 = 30;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_rhino_ast_NewExpression_getTarget_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_NewExpression_getTarget_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)M_rhino_IRFactory_createCallOrNew_int_rhino_Node_R_rhino_Node(ctx, sp[0].o, temp0, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(812);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)((func_rhino_ast_NewExpression_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_NewExpression_getLineno_R_int])(ctx, (frame[1].o));
	((func_rhino_Node_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_setLineno_int])(ctx, sp[0].o, temp1);
	LINE_NUMBER(813);
	sp[0].o = (jobject)((func_rhino_ast_NewExpression_getArguments_R_java_util_List) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_NewExpression_getArguments_R_java_util_List])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(814);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(815);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 >= temp1) goto label_7;
	}
	{
	LINE_NUMBER(816);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(817);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, (frame[0].o), (frame[5].o));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(818);
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 >= (temp1 - (jint(1)))) goto label_11;
	}
	{
	LINE_NUMBER(819);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (90));
	}
label_11:;
	{
	LINE_NUMBER(815);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(822);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	LINE_NUMBER(823);
	sp[0].o = (jobject)((func_rhino_ast_NewExpression_getInitializer_R_rhino_ast_ObjectLiteral) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_NewExpression_getInitializer_R_rhino_ast_ObjectLiteral])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(824);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_rhino_ast_NewExpression_getInitializer_R_rhino_ast_ObjectLiteral) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_NewExpression_getInitializer_R_rhino_ast_ObjectLiteral])(ctx, (frame[1].o));
	sp[1].o = (jobject)M_rhino_IRFactory_transformObjectLiteral_rhino_ast_ObjectLiteral_R_rhino_Node(ctx, sp[1].o, sp[2].o);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	{
	LINE_NUMBER(826);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformNumber_rhino_ast_NumberLiteral_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformNumber", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(830);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	jdouble temp0 = (jdouble)((func_rhino_ast_NumberLiteral_getNumber_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_NumberLiteral_getNumber_R_double])(ctx, (frame[1].o));
	((func_rhino_Decompiler_addNumber_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addNumber_double])(ctx, sp[0].o, temp0);
	LINE_NUMBER(831);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformObjectLiteral_rhino_ast_ObjectLiteral_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformObjectLiteral", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(835);
	jint temp0 = (jint)((func_rhino_ast_ObjectLiteral_isDestructuring_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ObjectLiteral_isDestructuring_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(836);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(841);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (86));
	LINE_NUMBER(842);
	sp[0].o = (jobject)((func_rhino_ast_ObjectLiteral_getElements_R_java_util_List) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ObjectLiteral_getElements_R_java_util_List])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(843);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (67));
	frame[3].o = sp[0].o;
	LINE_NUMBER(845);
	jint temp0 = (jint)((func_java_util_List_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_isEmpty_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(846);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	frame[4].o = sp[0].o;
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(848);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	frame[5].i = temp0;
	frame[6].i = (jint(0));
	LINE_NUMBER(849);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[5].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(850);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[7].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_rhino_ast_ObjectProperty, sp[0].o));
	LINE_NUMBER(851);
	jint temp0 = (jint)((func_rhino_ast_ObjectProperty_isGetterMethod_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_isGetterMethod_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(852);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (152));
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(853);
	jint temp0 = (jint)((func_rhino_ast_ObjectProperty_isSetterMethod_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_isSetterMethod_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(854);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (153));
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(855);
	jint temp0 = (jint)((func_rhino_ast_ObjectProperty_isNormalMethod_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_isNormalMethod_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(856);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (164));
	}
label_17:;
	{
	LINE_NUMBER(859);
	sp[0].o = frame[4].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_rhino_ast_ObjectProperty_getLeft_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_getLeft_R_rhino_ast_AstNode])(ctx, (frame[8].o));
	sp[1].o = (jobject)M_rhino_IRFactory_getPropKey_rhino_Node_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(863);
	jint temp1 = (jint)((func_rhino_ast_ObjectProperty_isMethod_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_isMethod_R_boolean])(ctx, (frame[8].o));
	if (temp1 != 0) goto label_22;
	}
	{
	LINE_NUMBER(864);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (67));
	}
label_22:;
	{
	LINE_NUMBER(867);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ObjectProperty_getRight_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_getRight_R_rhino_ast_AstNode])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(868);
	jint temp0 = (jint)((func_rhino_ast_ObjectProperty_isGetterMethod_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_isGetterMethod_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(869);
	sp[0].o = (jobject)M_rhino_IRFactory_createUnary_int_rhino_Node_R_rhino_Node(ctx, (frame[0].o), (152), (frame[9].o));
	frame[9].o = sp[0].o;
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(870);
	jint temp0 = (jint)((func_rhino_ast_ObjectProperty_isSetterMethod_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_isSetterMethod_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(871);
	sp[0].o = (jobject)M_rhino_IRFactory_createUnary_int_rhino_Node_R_rhino_Node(ctx, (frame[0].o), (153), (frame[9].o));
	frame[9].o = sp[0].o;
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(872);
	jint temp0 = (jint)((func_rhino_ast_ObjectProperty_isNormalMethod_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_isNormalMethod_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(873);
	sp[0].o = (jobject)M_rhino_IRFactory_createUnary_int_rhino_Node_R_rhino_Node(ctx, (frame[0].o), (164), (frame[9].o));
	frame[9].o = sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(875);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[3].o), (frame[9].o));
	LINE_NUMBER(877);
	if ((frame[6].i) >= (frame[5].i)) goto label_32;
	}
	{
	LINE_NUMBER(878);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (90));
	}
label_32:;
	LINE_NUMBER(880);
	goto label_13;
label_9:;
	{
	LINE_NUMBER(882);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (87));
	LINE_NUMBER(883);
	((func_rhino_Node_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_putProp_int_java_lang_Object])(ctx, (frame[3].o), (12), (frame[4].o));
	LINE_NUMBER(884);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_getPropKey_rhino_Node_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:getPropKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(889);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_Name)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(890);
	sp[0].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[1].o))))->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[1].o))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(891);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(892);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getIndexObject_java_lang_String_R_java_lang_Object(ctx, (frame[3].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(893);
	goto label_6;
	}
label_1:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_StringLiteral)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(894);
	sp[0].o = (jobject)((func_rhino_ast_StringLiteral_getValue_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_StringLiteral, (frame[1].o))))->vtable)[VTABLE_rhino_ast_StringLiteral_getValue_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_StringLiteral, (frame[1].o))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(895);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addString_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addString_java_lang_String])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(896);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getIndexObject_java_lang_String_R_java_lang_Object(ctx, (frame[3].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(897);
	goto label_6;
	}
label_7:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_NumberLiteral)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(898);
	jdouble temp0 = (jdouble)((func_rhino_ast_NumberLiteral_getNumber_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_NumberLiteral, (frame[1].o))))->vtable)[VTABLE_rhino_ast_NumberLiteral_getNumber_R_double])(ctx, (checkCast(ctx, &class_rhino_ast_NumberLiteral, (frame[1].o))));
	frame[3].d = temp0;
	LINE_NUMBER(899);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addNumber_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addNumber_double])(ctx, sp[0].o, (frame[3].d));
	LINE_NUMBER(900);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getIndexObject_double_R_java_lang_Object(ctx, (frame[3].d));
	frame[2].o = sp[0].o;
	LINE_NUMBER(901);
	goto label_6;
	}
label_12:;
	{
	LINE_NUMBER(902);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(904);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformParenExpr_rhino_ast_ParenthesizedExpression_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformParenExpr", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(908);
	sp[0].o = (jobject)((func_rhino_ast_ParenthesizedExpression_getExpression_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ParenthesizedExpression_getExpression_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(909);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(910);
	frame[3].i = (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(911);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_ast_ParenthesizedExpression)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(912);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(913);
	INST_IINC(3, 1);
	LINE_NUMBER(914);
	sp[0].o = (jobject)((func_rhino_ast_ParenthesizedExpression_getExpression_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_ParenthesizedExpression, (frame[2].o))))->vtable)[VTABLE_rhino_ast_ParenthesizedExpression_getExpression_R_rhino_ast_AstNode])(ctx, (checkCast(ctx, &class_rhino_ast_ParenthesizedExpression, (frame[2].o))));
	frame[2].o = sp[0].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(916);
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, (frame[0].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(917);
	frame[5].i = (jint(0));
	}
label_9:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_10;
	}
	{
	LINE_NUMBER(918);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	LINE_NUMBER(917);
	INST_IINC(5, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(920);
	sp[0].o = frame[4].o;
	jint temp0 = 19;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	((func_rhino_Node_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_putProp_int_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(921);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformPropertyGet_rhino_ast_PropertyGet_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformPropertyGet", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(925);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_PropertyGet_getTarget_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_PropertyGet_getTarget_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(926);
	sp[0].o = (jobject)((func_rhino_ast_PropertyGet_getProperty_R_rhino_ast_Name) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_PropertyGet_getProperty_R_rhino_ast_Name])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(927);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (109));
	LINE_NUMBER(928);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(929);
	sp[0].o = (jobject)M_rhino_IRFactory_createPropertyGet_rhino_Node_java_lang_String_java_lang_String_int_R_rhino_Node(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[3].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformRegExp_rhino_ast_RegExpLiteral_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformRegExp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(933);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	sp[1].o = (jobject)((func_rhino_ast_RegExpLiteral_getValue_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_RegExpLiteral_getValue_R_java_lang_String])(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_rhino_ast_RegExpLiteral_getFlags_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_RegExpLiteral_getFlags_R_java_lang_String])(ctx, (frame[1].o));
	((func_rhino_Decompiler_addRegexp_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addRegexp_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(934);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScriptOrFn;
	((func_rhino_ast_ScriptNode_addRegExp_rhino_ast_RegExpLiteral) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_addRegExp_rhino_ast_RegExpLiteral])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(935);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformReturn_rhino_ast_ReturnStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformReturn", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(939);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	sp[1].o = (jobject)((func_rhino_ast_ReturnStatement_getProp_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ReturnStatement_getProp_int_R_java_lang_Object])(ctx, (frame[1].o), (25));
	jint temp0 = (jint)((func_java_lang_Boolean_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Boolean_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp0;
	LINE_NUMBER(940);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	sp[1].o = (jobject)((func_rhino_ast_ReturnStatement_getProp_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ReturnStatement_getProp_int_R_java_lang_Object])(ctx, (frame[1].o), (27));
	jint temp1 = (jint)((func_java_lang_Boolean_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Boolean_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[3].i = temp1;
	LINE_NUMBER(941);
	if ((frame[2].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(942);
	if ((frame[3].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(943);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(946);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (jint(4)));
	}
label_5:;
	{
	LINE_NUMBER(948);
	sp[0].o = (jobject)((func_rhino_ast_ReturnStatement_getReturnValue_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ReturnStatement_getReturnValue_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(949);
	if ((frame[4].o) != nullptr) goto label_8;
	}
	INST_ACONST_NULL();
	goto label_9;
label_8:;
	{
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, (frame[0].o), (frame[4].o));
	sp += 1;
	}
label_9:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(950);
	if ((frame[2].i) != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (83));
	}
label_11:;
	{
	LINE_NUMBER(951);
	if ((frame[4].o) != nullptr) goto label_12;
	}
	{
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = jint(4);
	sp[1].o = frame[1].o;
	LINE_NUMBER(952);
	jint temp1 = (jint)((func_rhino_ast_ReturnStatement_getLineno_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_ReturnStatement_getLineno_R_int])(ctx, sp[1].o);
	init_rhino_Node_int_int(ctx, sp[0].o, temp0, temp1);
	sp += 1;
	goto label_14;
	}
label_12:;
	{
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = jint(4);
	sp[1].o = frame[5].o;
	sp[2].o = frame[1].o;
	LINE_NUMBER(953);
	jint temp1 = (jint)((func_rhino_ast_ReturnStatement_getLineno_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_ast_ReturnStatement_getLineno_R_int])(ctx, sp[2].o);
	init_rhino_Node_int_rhino_Node_int(ctx, sp[0].o, temp0, sp[1].o, temp1);
	sp += 1;
	}
label_14:;
	LINE_NUMBER(951);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformScript_rhino_ast_ScriptNode_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformScript", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(957);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (137));
	LINE_NUMBER(958);
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope;
	if (sp[0].o == nullptr) goto label_2;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_2:;
	{
	LINE_NUMBER(959);
	((rhino_Parser *) NULL_CHECK((frame[0].o)))->F_currentScope = (jref) (frame[1].o);
	LINE_NUMBER(960);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (130));
	frame[2].o = sp[0].o;
	LINE_NUMBER(961);
	sp[0].o = (jobject)((func_rhino_ast_ScriptNode_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ScriptNode_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_rhino_Node, sp[0].o));
	LINE_NUMBER(962);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_AstNode, (frame[4].o))));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(963);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(964);
	((func_rhino_ast_ScriptNode_removeChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ScriptNode_removeChildren])(ctx, (frame[1].o));
	LINE_NUMBER(965);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(966);
	if ((frame[3].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(967);
	((func_rhino_ast_ScriptNode_addChildrenToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ScriptNode_addChildrenToBack_rhino_Node])(ctx, (frame[1].o), (frame[3].o));
	}
label_11:;
	{
	LINE_NUMBER(969);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformString_rhino_ast_StringLiteral_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(973);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	sp[1].o = (jobject)((func_rhino_ast_StringLiteral_getValue_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_StringLiteral_getValue_R_java_lang_String])(ctx, (frame[1].o));
	((func_rhino_Decompiler_addString_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addString_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(974);
	sp[0].o = (jobject)((func_rhino_ast_StringLiteral_getValue_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_StringLiteral_getValue_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_rhino_Node_newString_java_lang_String_R_rhino_Node(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformSwitch_rhino_ast_SwitchStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformSwitch", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1017);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (115));
	LINE_NUMBER(1018);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(1019);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_SwitchStatement_getExpression_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_SwitchStatement_getExpression_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1020);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	LINE_NUMBER(1021);
	((func_rhino_ast_SwitchStatement_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_SwitchStatement_addChildToBack_rhino_Node])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(1023);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 130;
	sp[1].o = frame[1].o;
	jint temp1 = (jint)((func_rhino_ast_SwitchStatement_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_SwitchStatement_getLineno_R_int])(ctx, (frame[1].o));
	init_rhino_Node_int_rhino_Node_int(ctx, sp[0].o, temp0, sp[1].o, temp1);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1024);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (86));
	LINE_NUMBER(1026);
	sp[0].o = (jobject)((func_rhino_ast_SwitchStatement_getCases_R_java_util_List) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_SwitchStatement_getCases_R_java_util_List])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_rhino_ast_SwitchCase, sp[0].o));
	LINE_NUMBER(1027);
	sp[0].o = (jobject)((func_rhino_ast_SwitchCase_getExpression_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_SwitchCase_getExpression_R_rhino_ast_AstNode])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1028);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(1030);
	if ((frame[6].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(1031);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (116));
	LINE_NUMBER(1032);
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, (frame[0].o), (frame[6].o));
	frame[7].o = sp[0].o;
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(1034);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (117));
	}
label_16:;
	{
	LINE_NUMBER(1036);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (104));
	LINE_NUMBER(1038);
	sp[0].o = (jobject)((func_rhino_ast_SwitchCase_getStatements_R_java_util_List) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_SwitchCase_getStatements_R_java_util_List])(ctx, (frame[5].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1039);
	clinit_rhino_ast_CodeBlock(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_CodeBlock);
	init_rhino_ast_CodeBlock(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(1040);
	if ((frame[8].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(1041);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[8].o)))(ctx, (frame[8].o));
	frame[10].o = sp[0].o;
	}
label_22:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(1042);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, (frame[0].o), (frame[11].o));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1043);
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(1045);
	M_rhino_IRFactory_addSwitchCase_rhino_Node_rhino_Node_rhino_Node(ctx, (frame[0].o), (frame[3].o), (frame[7].o), (frame[9].o));
	LINE_NUMBER(1046);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(1047);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (87));
	LINE_NUMBER(1048);
	M_rhino_IRFactory_closeSwitch_rhino_Node(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(1049);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformThrow_rhino_ast_ThrowStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformThrow", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1053);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (50));
	LINE_NUMBER(1054);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ThrowStatement_getExpression_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ThrowStatement_getExpression_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1055);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (83));
	LINE_NUMBER(1056);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 50;
	sp[1].o = frame[2].o;
	jint temp1 = (jint)((func_rhino_ast_ThrowStatement_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ThrowStatement_getLineno_R_int])(ctx, (frame[1].o));
	init_rhino_Node_int_rhino_Node_int(ctx, sp[0].o, temp0, sp[1].o, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformTry_rhino_ast_TryStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformTry", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1060);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (82));
	LINE_NUMBER(1061);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (86));
	LINE_NUMBER(1062);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_TryStatement_getTryBlock_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_TryStatement_getTryBlock_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1063);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (87));
	LINE_NUMBER(1065);
	clinit_rhino_ast_CodeBlock(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_CodeBlock);
	init_rhino_ast_CodeBlock(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1066);
	sp[0].o = (jobject)((func_rhino_ast_TryStatement_getCatchClauses_R_java_util_List) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_TryStatement_getCatchClauses_R_java_util_List])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_rhino_ast_CatchClause, sp[0].o));
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (125));
	LINE_NUMBER(1068);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(1070);
	sp[0].o = (jobject)((func_rhino_ast_CatchClause_getVarName_R_rhino_ast_Name) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_CatchClause_getVarName_R_rhino_ast_Name])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1071);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(1074);
	sp[0].o = (jobject)((func_rhino_ast_CatchClause_getCatchCondition_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_CatchClause_getCatchCondition_R_rhino_ast_AstNode])(ctx, (frame[5].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1075);
	if ((frame[8].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(1076);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(1077);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (113));
	LINE_NUMBER(1078);
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, (frame[0].o), (frame[8].o));
	frame[7].o = sp[0].o;
	goto label_19;
	}
label_14:;
	{
	LINE_NUMBER(1080);
	clinit_rhino_ast_EmptyExpression(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_EmptyExpression);
	init_rhino_ast_EmptyExpression(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(1082);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	LINE_NUMBER(1083);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (86));
	LINE_NUMBER(1085);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_CatchClause_getBody_R_rhino_ast_CodeBlock) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_CatchClause_getBody_R_rhino_ast_CodeBlock])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(1086);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (87));
	LINE_NUMBER(1088);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[6].o;
	sp[3].o = frame[7].o;
	sp[4].o = frame[9].o;
	sp[5].o = frame[5].o;
	LINE_NUMBER(1089);
	jint temp0 = (jint)((func_rhino_ast_CatchClause_getLineno_R_int) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_rhino_ast_CatchClause_getLineno_R_int])(ctx, sp[5].o);
	LINE_NUMBER(1088);
	sp[1].o = (jobject)M_rhino_IRFactory_createCatch_java_lang_String_rhino_Node_rhino_Node_int_R_rhino_Node(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1090);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1091);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(1092);
	sp[0].o = (jobject)((func_rhino_ast_TryStatement_getFinallyBlock_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_TryStatement_getFinallyBlock_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	LINE_NUMBER(1093);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (126));
	LINE_NUMBER(1094);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (86));
	LINE_NUMBER(1095);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_TryStatement_getFinallyBlock_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_TryStatement_getFinallyBlock_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1096);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (87));
	}
label_28:;
	{
	LINE_NUMBER(1098);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = frame[4].o;
	sp[4].o = frame[1].o;
	LINE_NUMBER(1099);
	jint temp0 = (jint)((func_rhino_ast_TryStatement_getLineno_R_int) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_rhino_ast_TryStatement_getLineno_R_int])(ctx, sp[4].o);
	LINE_NUMBER(1098);
	sp[0].o = (jobject)M_rhino_IRFactory_createTryCatchFinally_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformUnary_rhino_ast_UnaryExpression_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformUnary", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1103);
	jint temp0 = (jint)((func_rhino_ast_UnaryExpression_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_UnaryExpression_getType_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(1104);
	jint temp1 = (jint)((func_rhino_ast_UnaryExpression_isPrefix_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_UnaryExpression_isPrefix_R_boolean])(ctx, (frame[1].o));
	if (temp1 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1105);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (frame[2].i));
	}
label_2:;
	{
	LINE_NUMBER(1107);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_UnaryExpression_getOperand_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_UnaryExpression_getOperand_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1108);
	jint temp0 = (jint)((func_rhino_ast_UnaryExpression_isPostfix_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_UnaryExpression_isPostfix_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1109);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (frame[2].i));
	}
label_5:;
	{
	LINE_NUMBER(1111);
	if ((frame[2].i) == (107)) goto label_7;
	}
	{
	if ((frame[2].i) != (108)) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(1112);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_rhino_ast_UnaryExpression_isPostfix_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_UnaryExpression_isPostfix_R_boolean])(ctx, (frame[1].o));
	sp[0].o = (jobject)M_rhino_IRFactory_createIncDec_int_boolean_rhino_Node_R_rhino_Node(ctx, sp[0].o, temp0, temp1, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(1114);
	sp[0].o = (jobject)M_rhino_IRFactory_createUnary_int_rhino_Node_R_rhino_Node(ctx, (frame[0].o), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformVariables_rhino_ast_VariableDeclaration_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformVariables", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1118);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	jint temp0 = (jint)((func_rhino_ast_VariableDeclaration_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_VariableDeclaration_getType_R_int])(ctx, (frame[1].o));
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1119);
	sp[0].o = (jobject)M_rhino_IRFactory_transformVariableInitializers_rhino_ast_VariableDeclaration_R_rhino_Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1123);
	sp[0].o = (jobject)((func_rhino_ast_VariableDeclaration_getParent_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_VariableDeclaration_getParent_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1124);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_ast_Loop)) != 0) goto label_4;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_rhino_ast_LetNode)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(1126);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (83));
	}
label_4:;
	{
	LINE_NUMBER(1128);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformVariableInitializers_rhino_ast_VariableDeclaration_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformVariableInitializers", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1132);
	sp[0].o = (jobject)((func_rhino_ast_VariableDeclaration_getVariables_R_java_util_List) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_VariableDeclaration_getVariables_R_java_util_List])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1133);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].i = temp0;
	frame[4].i = (jint(0));
	LINE_NUMBER(1134);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_rhino_ast_VariableInitializer, sp[0].o));
	LINE_NUMBER(1135);
	sp[0].o = (jobject)((func_rhino_ast_VariableInitializer_getTarget_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_VariableInitializer_getTarget_R_rhino_ast_AstNode])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1136);
	sp[0].o = (jobject)((func_rhino_ast_VariableInitializer_getInitializer_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_VariableInitializer_getInitializer_R_rhino_ast_AstNode])(ctx, (frame[6].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1139);
	jint temp0 = (jint)((func_rhino_ast_VariableInitializer_isDestructuring_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_VariableInitializer_isDestructuring_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(1140);
	((func_rhino_IRFactory_decompile_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_decompile_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[7].o));
	LINE_NUMBER(1141);
	frame[9].o = (frame[7].o);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(1143);
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, (frame[0].o), (frame[7].o));
	frame[9].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(1146);
	frame[10].o = (jobject(nullptr));
	LINE_NUMBER(1147);
	if ((frame[8].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(1148);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (91));
	LINE_NUMBER(1149);
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, (frame[0].o), (frame[8].o));
	frame[10].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(1152);
	jint temp0 = (jint)((func_rhino_ast_VariableInitializer_isDestructuring_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_VariableInitializer_isDestructuring_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(1153);
	if ((frame[10].o) != nullptr) goto label_20;
	}
	{
	LINE_NUMBER(1154);
	((func_rhino_ast_VariableDeclaration_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_VariableDeclaration_addChildToBack_rhino_Node])(ctx, (frame[1].o), (frame[9].o));
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(1156);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_rhino_ast_VariableDeclaration_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_VariableDeclaration_getType_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node])(ctx, sp[0].o, temp0, (frame[9].o), (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1158);
	((func_rhino_ast_VariableDeclaration_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_VariableDeclaration_addChildToBack_rhino_Node])(ctx, (frame[1].o), (frame[11].o));
	LINE_NUMBER(1159);
	goto label_22;
	}
label_18:;
	{
	LINE_NUMBER(1161);
	if ((frame[10].o) == nullptr) goto label_25;
	}
	{
	LINE_NUMBER(1162);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[9].o), (frame[10].o));
	}
label_25:;
	{
	LINE_NUMBER(1164);
	((func_rhino_ast_VariableDeclaration_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_VariableDeclaration_addChildToBack_rhino_Node])(ctx, (frame[1].o), (frame[9].o));
	}
label_22:;
	{
	LINE_NUMBER(1166);
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	if (temp0 >= ((frame[3].i) - (jint(1)))) goto label_27;
	}
	{
	LINE_NUMBER(1167);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (90));
	}
label_27:;
	LINE_NUMBER(1169);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(1170);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformWhileLoop_rhino_ast_WhileLoop_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformWhileLoop", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1174);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (118));
	LINE_NUMBER(1175);
	sp[0].o = (jobject)((func_rhino_ast_WhileLoop_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_WhileLoop_setType_int_R_rhino_Node])(ctx, (frame[1].o), (133));
	LINE_NUMBER(1176);
	((func_rhino_IRFactory_pushScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_pushScope_rhino_ast_Scope])(ctx, (frame[0].o), (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1178);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(1179);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_WhileLoop_getCondition_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_WhileLoop_getCondition_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1180);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	LINE_NUMBER(1181);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (86));
	LINE_NUMBER(1182);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_WhileLoop_getBody_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_WhileLoop_getBody_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1183);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (87));
	LINE_NUMBER(1184);
	sp[0].o = (jobject)M_rhino_IRFactory_createLoop_rhino_ast_Jump_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(ctx, (frame[0].o), (frame[1].o), (jint(1)), (frame[3].o), (frame[2].o), (jobject(nullptr)), (jobject(nullptr)));
	frame[4].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1186);
	((func_rhino_IRFactory_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(1184);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1186);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_rhino_IRFactory_popScope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_popScope])(ctx, (frame[0].o));
	LINE_NUMBER(1187);
	throwException(ctx, (frame[5].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformWith_rhino_ast_WithStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformWith", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1191);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (124));
	LINE_NUMBER(1192);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	LINE_NUMBER(1193);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_WithStatement_getExpression_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_WithStatement_getExpression_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1194);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	LINE_NUMBER(1195);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (86));
	LINE_NUMBER(1196);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_WithStatement_getStatement_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_WithStatement_getStatement_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1197);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (87));
	LINE_NUMBER(1198);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	jint temp0 = (jint)((func_rhino_ast_WithStatement_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_WithStatement_getLineno_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)M_rhino_IRFactory_createWith_rhino_Node_rhino_Node_int_R_rhino_Node(ctx, sp[0].o, sp[1].o, sp[2].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_transformYield_rhino_ast_Yield_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:transformYield", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1202);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	jint temp0 = (jint)((func_rhino_ast_Yield_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Yield_getType_R_int])(ctx, (frame[1].o));
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1203);
	sp[0].o = (jobject)((func_rhino_ast_Yield_getValue_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Yield_getValue_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_Yield_getValue_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Yield_getValue_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1204);
	if ((frame[2].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1205);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = (jint)((func_rhino_ast_Yield_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Yield_getType_R_int])(ctx, (frame[1].o));
	sp[1].o = frame[2].o;
	jint temp1 = (jint)((func_rhino_ast_Yield_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Yield_getLineno_R_int])(ctx, (frame[1].o));
	init_rhino_Node_int_rhino_Node_int(ctx, sp[0].o, temp0, sp[1].o, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1206);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = (jint)((func_rhino_ast_Yield_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Yield_getType_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_rhino_ast_Yield_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Yield_getLineno_R_int])(ctx, (frame[1].o));
	init_rhino_Node_int_int(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_IRFactory_addSwitchCase_rhino_Node_rhino_Node_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:addSwitchCase", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1214);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[1].o));
	if (temp0 == (130)) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_1:;
	{
	LINE_NUMBER(1215);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_rhino_ast_Jump, sp[0].o));
	LINE_NUMBER(1216);
	jint temp0 = (jint)((func_rhino_ast_Jump_getType_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_Jump_getType_R_int])(ctx, (frame[4].o));
	if (temp0 == (115)) goto label_3;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_3:;
	{
	LINE_NUMBER(1218);
	sp[0].o = (jobject)SM_rhino_Node_newTarget_R_rhino_Node(ctx);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1219);
	if ((frame[2].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1220);
	clinit_rhino_ast_Jump(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Jump);
	init_rhino_ast_Jump_int_rhino_Node(ctx, sp[0].o, (116), (frame[2].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1221);
	((rhino_ast_Jump *) NULL_CHECK((frame[6].o)))->F_target = (jref) (frame[5].o);
	LINE_NUMBER(1222);
	((func_rhino_ast_Jump_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_Jump_addChildToBack_rhino_Node])(ctx, (frame[4].o), (frame[6].o));
	LINE_NUMBER(1223);
	goto label_10;
	}
label_5:;
	{
	LINE_NUMBER(1224);
	((func_rhino_ast_Jump_setDefault_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_Jump_setDefault_rhino_Node])(ctx, (frame[4].o), (frame[5].o));
	}
label_10:;
	{
	LINE_NUMBER(1226);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[1].o), (frame[5].o));
	LINE_NUMBER(1227);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(1228);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_IRFactory_closeSwitch_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:closeSwitch", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1231);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[1].o));
	if (temp0 == (130)) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_1:;
	{
	LINE_NUMBER(1232);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_rhino_ast_Jump, sp[0].o));
	LINE_NUMBER(1233);
	jint temp0 = (jint)((func_rhino_ast_Jump_getType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_Jump_getType_R_int])(ctx, (frame[2].o));
	if (temp0 == (115)) goto label_3;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_3:;
	{
	LINE_NUMBER(1235);
	sp[0].o = (jobject)SM_rhino_Node_newTarget_R_rhino_Node(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1238);
	((rhino_ast_Jump *) NULL_CHECK((frame[2].o)))->F_target = (jref) (frame[3].o);
	LINE_NUMBER(1240);
	sp[0].o = (jobject)((func_rhino_ast_Jump_getDefault_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_Jump_getDefault_R_rhino_Node])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1241);
	if ((frame[4].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1242);
	frame[4].o = (frame[3].o);
	}
label_7:;
	{
	LINE_NUMBER(1245);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)M_rhino_IRFactory_makeJump_int_rhino_Node_R_rhino_ast_Jump(ctx, (frame[0].o), (jint(5)), (frame[4].o));
	((func_rhino_Node_addChildAfter_rhino_Node_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildAfter_rhino_Node_rhino_Node])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(1247);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(1248);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createExprStatementNoReturn_rhino_Node_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createExprStatementNoReturn", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1251);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_int(ctx, sp[0].o, (134), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createString_java_lang_String_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1255);
	sp[0].o = (jobject)SM_rhino_Node_newString_java_lang_String_R_rhino_Node(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createCatch_java_lang_String_rhino_Node_rhino_Node_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createCatch", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1268);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1269);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (129));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1271);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 125;
	sp[1].o = (jobject)((func_rhino_IRFactory_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_createName_java_lang_String_R_rhino_Node])(ctx, (frame[0].o), (frame[1].o));
	init_rhino_Node_int_rhino_Node_rhino_Node_rhino_Node_int(ctx, sp[0].o, temp0, sp[1].o, (frame[2].o), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_initFunction_rhino_ast_FunctionNode_int_rhino_Node_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:initFunction", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1277);
	((func_rhino_ast_FunctionNode_setFunctionType_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setFunctionType_int])(ctx, (frame[1].o), (frame[4].i));
	LINE_NUMBER(1278);
	((func_rhino_ast_FunctionNode_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_addChildToBack_rhino_Node])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(1280);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_getFunctionCount_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionCount_R_int])(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(1281);
	if ((frame[5].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1283);
	((func_rhino_ast_FunctionNode_setRequiresActivation) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setRequiresActivation])(ctx, (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(1286);
	if ((frame[4].i) != (jint(2))) goto label_6;
	}
	{
	LINE_NUMBER(1287);
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name])(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1288);
	if ((frame[6].o) == nullptr) goto label_6;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_Name_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_Name_length_R_int])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[6].o;
	LINE_NUMBER(1289);
	sp[1].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getSymbol_java_lang_String_R_rhino_ast_Symbol) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_getSymbol_java_lang_String_R_rhino_ast_Symbol])(ctx, sp[0].o, sp[1].o);
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1297);
	sp[0].o = frame[1].o;
	clinit_rhino_ast_Symbol(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ast_Symbol);
	jint temp0 = 110;
	sp[2].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, (frame[6].o));
	init_rhino_ast_Symbol_int_java_lang_String(ctx, sp[1].o, temp0, sp[2].o);
	((func_rhino_ast_FunctionNode_putSymbol_rhino_ast_Symbol) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_putSymbol_rhino_ast_Symbol])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1298);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp1 = 134;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp2 = 8;
	jint temp3 = 49;
	sp[2].o = frame[6].o;
	LINE_NUMBER(1301);
	sp[2].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, sp[2].o);
	LINE_NUMBER(1300);
	sp[2].o = (jobject)SM_rhino_Node_newString_int_java_lang_String_R_rhino_Node(ctx, temp3, sp[2].o);
	clinit_rhino_Node(ctx);
	sp[3].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[3].o, (64));
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[1].o, temp2, sp[2].o, sp[3].o);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, temp1, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1303);
	((func_rhino_Node_addChildrenToFront_rhino_Node) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_addChildrenToFront_rhino_Node])(ctx, (frame[3].o), (frame[7].o));
	}
label_6:;
	{
	LINE_NUMBER(1308);
	sp[0].o = (jobject)((func_rhino_Node_getLastChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_getLastChild_R_rhino_Node])(ctx, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1309);
	if ((frame[6].o) == nullptr) goto label_16;
	}
	{
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[6].o));
	if (temp0 == (jint(4))) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(1310);
	sp[0].o = frame[3].o;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[1].o, (jint(4)));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	}
label_17:;
	{
	LINE_NUMBER(1313);
	jint temp0 = 110;
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_rhino_Node_newString_int_java_lang_String_R_rhino_Node(ctx, temp0, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1314);
	((func_rhino_Node_putIntProp_int_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_Node_putIntProp_int_int])(ctx, (frame[7].o), (jint(1)), (frame[2].i));
	LINE_NUMBER(1315);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createLoopNode_rhino_Node_int_R_rhino_ast_Scope(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createLoopNode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1324);
	sp[0].o = (jobject)((func_rhino_IRFactory_createScopeNode_int_int_R_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_createScopeNode_int_int_R_rhino_ast_Scope])(ctx, (frame[0].o), (133), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1325);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1326);
	((func_rhino_ast_Jump_setLoop_rhino_ast_Jump) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Jump, (frame[1].o))))->vtable)[VTABLE_rhino_ast_Jump_setLoop_rhino_ast_Jump])(ctx, (checkCast(ctx, &class_rhino_ast_Jump, (frame[1].o))), (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(1328);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createFor_rhino_ast_Scope_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createFor", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(1333);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[2].o));
	if (temp0 != (154)) goto label_1;
	}
	{
	LINE_NUMBER(1337);
	sp[0].o = (jobject)SM_rhino_ast_Scope_splitScope_rhino_ast_Scope_R_rhino_ast_Scope(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1338);
	sp[0].o = (jobject)((func_rhino_ast_Scope_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_Scope_setType_int_R_rhino_Node])(ctx, (frame[6].o), (154));
	LINE_NUMBER(1339);
	((func_rhino_ast_Scope_addChildrenToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_Scope_addChildrenToBack_rhino_Node])(ctx, (frame[6].o), (frame[2].o));
	LINE_NUMBER(1340);
	sp[0].o = frame[6].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	jint temp0 = jint(2);
	sp[3].o = frame[5].o;
	sp[4].o = frame[3].o;
	clinit_rhino_Node(ctx);
	sp[5].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[5].o, (129));
	sp[1].o = (jobject)M_rhino_IRFactory_createLoop_rhino_ast_Jump_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(ctx, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, sp[5].o, (frame[4].o));
	((func_rhino_ast_Scope_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Scope_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1342);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_1:;
	{
	LINE_NUMBER(1344);
	sp[0].o = (jobject)M_rhino_IRFactory_createLoop_rhino_ast_Jump_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(ctx, (frame[0].o), (frame[1].o), (jint(2)), (frame[5].o), (frame[3].o), (frame[2].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createLoop_rhino_ast_Jump_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createLoop", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(1349);
	sp[0].o = (jobject)SM_rhino_Node_newTarget_R_rhino_Node(ctx);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1350);
	sp[0].o = (jobject)SM_rhino_Node_newTarget_R_rhino_Node(ctx);
	frame[8].o = sp[0].o;
	LINE_NUMBER(1351);
	if ((frame[2].i) != (jint(2))) goto label_3;
	}
	{
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[4].o));
	if (temp0 != (129)) goto label_3;
	}
	{
	LINE_NUMBER(1352);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (45));
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1354);
	clinit_rhino_ast_Jump(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Jump);
	init_rhino_ast_Jump_int_rhino_Node(ctx, sp[0].o, (6), (frame[4].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1355);
	((rhino_ast_Jump *) NULL_CHECK((frame[9].o)))->F_target = (jref) (frame[7].o);
	LINE_NUMBER(1356);
	sp[0].o = (jobject)SM_rhino_Node_newTarget_R_rhino_Node(ctx);
	frame[10].o = sp[0].o;
	LINE_NUMBER(1358);
	((func_rhino_ast_Jump_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Jump_addChildToBack_rhino_Node])(ctx, (frame[1].o), (frame[7].o));
	LINE_NUMBER(1359);
	((func_rhino_ast_Jump_addChildrenToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Jump_addChildrenToBack_rhino_Node])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(1360);
	if ((frame[2].i) == (jint(1))) goto label_10;
	}
	{
	if ((frame[2].i) != (jint(2))) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(1362);
	sp[0].o = frame[1].o;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 129;
	jint temp1 = (jint)((func_rhino_ast_Jump_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Jump_getLineno_R_int])(ctx, (frame[1].o));
	init_rhino_Node_int_int(ctx, sp[1].o, temp0, temp1);
	((func_rhino_ast_Jump_addChildrenToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Jump_addChildrenToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(1364);
	((func_rhino_ast_Jump_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Jump_addChildToBack_rhino_Node])(ctx, (frame[1].o), (frame[8].o));
	LINE_NUMBER(1365);
	((func_rhino_ast_Jump_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Jump_addChildToBack_rhino_Node])(ctx, (frame[1].o), (frame[9].o));
	LINE_NUMBER(1366);
	((func_rhino_ast_Jump_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Jump_addChildToBack_rhino_Node])(ctx, (frame[1].o), (frame[10].o));
	LINE_NUMBER(1368);
	((rhino_ast_Jump *) NULL_CHECK((frame[1].o)))->F_target = (jref) (frame[10].o);
	LINE_NUMBER(1369);
	frame[11].o = (frame[8].o);
	LINE_NUMBER(1371);
	if ((frame[2].i) == (jint(1))) goto label_17;
	}
	{
	if ((frame[2].i) != (jint(2))) goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(1373);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)M_rhino_IRFactory_makeJump_int_rhino_Node_R_rhino_ast_Jump(ctx, (frame[0].o), (jint(5)), (frame[8].o));
	((func_rhino_ast_Jump_addChildToFront_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Jump_addChildToFront_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1375);
	if ((frame[2].i) != (jint(2))) goto label_18;
	}
	{
	LINE_NUMBER(1376);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[5].o));
	frame[12].i = temp0;
	LINE_NUMBER(1377);
	if ((frame[12].i) == (129)) goto label_22;
	}
	{
	LINE_NUMBER(1378);
	if ((frame[12].i) == (123)) goto label_24;
	}
	{
	if ((frame[12].i) == (154)) goto label_24;
	}
	{
	LINE_NUMBER(1379);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (134), (frame[5].o));
	frame[5].o = sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(1381);
	((func_rhino_ast_Jump_addChildToFront_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Jump_addChildToFront_rhino_Node])(ctx, (frame[1].o), (frame[5].o));
	}
label_22:;
	{
	LINE_NUMBER(1383);
	sp[0].o = (jobject)SM_rhino_Node_newTarget_R_rhino_Node(ctx);
	frame[13].o = sp[0].o;
	LINE_NUMBER(1384);
	((func_rhino_ast_Jump_addChildAfter_rhino_Node_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Jump_addChildAfter_rhino_Node_rhino_Node])(ctx, (frame[1].o), (frame[13].o), (frame[3].o));
	LINE_NUMBER(1385);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[6].o));
	if (temp0 == (129)) goto label_28;
	}
	{
	LINE_NUMBER(1386);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (134), (frame[6].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1387);
	((func_rhino_ast_Jump_addChildAfter_rhino_Node_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Jump_addChildAfter_rhino_Node_rhino_Node])(ctx, (frame[1].o), (frame[6].o), (frame[13].o));
	}
label_28:;
	{
	LINE_NUMBER(1389);
	frame[11].o = (frame[13].o);
	}
label_18:;
	{
	LINE_NUMBER(1393);
	((func_rhino_ast_Jump_setContinue_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Jump_setContinue_rhino_Node])(ctx, (frame[1].o), (frame[11].o));
	LINE_NUMBER(1394);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createForIn_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_boolean_boolean_R_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3, jobject param4, jbool param5, jbool param6) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createForIn", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(1402);
	frame[8].i = (jint(-1));
	LINE_NUMBER(1403);
	frame[9].i = (jint(0));
	LINE_NUMBER(1405);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[3].o));
	frame[11].i = temp0;
	LINE_NUMBER(1406);
	if ((frame[11].i) == (123)) goto label_4;
	}
	{
	if ((frame[11].i) != (154)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(1407);
	sp[0].o = (jobject)((func_rhino_Node_getLastChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_getLastChild_R_rhino_Node])(ctx, (frame[3].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1408);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[12].o));
	frame[13].i = temp0;
	LINE_NUMBER(1409);
	if ((frame[13].i) == (66)) goto label_8;
	}
	{
	if ((frame[13].i) != (67)) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(1410);
	jint temp0 = frame[13].i;
	frame[8].i = temp0;
	frame[11].i = temp0;
	LINE_NUMBER(1411);
	frame[10].o = (frame[12].o);
	LINE_NUMBER(1412);
	frame[9].i = (jint(0));
	LINE_NUMBER(1413);
	if ((isInstance(ctx, (frame[12].o), &class_rhino_ast_ArrayLiteral)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(1414);
	jint temp0 = (jint)((func_rhino_ast_ArrayLiteral_getDestructuringLength_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_ArrayLiteral, (frame[12].o))))->vtable)[VTABLE_rhino_ast_ArrayLiteral_getDestructuringLength_R_int])(ctx, (checkCast(ctx, &class_rhino_ast_ArrayLiteral, (frame[12].o))));
	frame[9].i = temp0;
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(1415);
	if ((frame[13].i) != (39)) goto label_15;
	}
	{
	LINE_NUMBER(1416);
	jint temp0 = 39;
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[12].o));
	sp[0].o = (jobject)SM_rhino_Node_newString_int_java_lang_String_R_rhino_Node(ctx, temp0, sp[0].o);
	frame[10].o = sp[0].o;
	goto label_13;
	}
label_15:;
	{
	LINE_NUMBER(1418);
	((func_rhino_IRFactory_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.for.in.lhs"_j))));
	LINE_NUMBER(1419);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_13:;
	LINE_NUMBER(1421);
	goto label_19;
label_5:;
	{
	if ((frame[11].i) == (66)) goto label_20;
	}
	{
	if ((frame[11].i) != (67)) goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(1422);
	frame[8].i = (frame[11].i);
	LINE_NUMBER(1423);
	frame[10].o = (frame[3].o);
	LINE_NUMBER(1424);
	frame[9].i = (jint(0));
	LINE_NUMBER(1425);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_ast_ArrayLiteral)) == 0) goto label_19;
	}
	{
	LINE_NUMBER(1426);
	jint temp0 = (jint)((func_rhino_ast_ArrayLiteral_getDestructuringLength_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_ArrayLiteral, (frame[3].o))))->vtable)[VTABLE_rhino_ast_ArrayLiteral_getDestructuringLength_R_int])(ctx, (checkCast(ctx, &class_rhino_ast_ArrayLiteral, (frame[3].o))));
	frame[9].i = temp0;
	goto label_19;
	}
label_21:;
	{
	LINE_NUMBER(1428);
	sp[0].o = (jobject)M_rhino_IRFactory_makeReference_rhino_Node_R_rhino_Node(ctx, (frame[0].o), (frame[3].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1429);
	if ((frame[10].o) != nullptr) goto label_19;
	}
	{
	LINE_NUMBER(1430);
	((func_rhino_IRFactory_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.for.in.lhs"_j))));
	LINE_NUMBER(1431);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_19:;
	{
	LINE_NUMBER(1435);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (142));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1436);
	if ((frame[6].i) == 0) goto label_30;
	}
	INST_BIPUSH(59);
	goto label_31;
label_30:;
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_32;
	INST_BIPUSH(61);
	goto label_31;
label_32:;
	{
	if ((frame[8].i) == (jint(-1))) goto label_33;
	}
	INST_BIPUSH(60);
	goto label_31;
label_33:;
	INST_BIPUSH(58);
label_31:;
	{
	sp -= 1;
	frame[13].i = sp[0].i;
	LINE_NUMBER(1441);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (frame[13].i), (frame[4].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(1442);
	((func_rhino_Node_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_Node_putProp_int_java_lang_Object])(ctx, (frame[14].o), (jint(3)), (frame[12].o));
	LINE_NUMBER(1443);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (62));
	frame[15].o = sp[0].o;
	LINE_NUMBER(1444);
	((func_rhino_Node_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_rhino_Node_putProp_int_java_lang_Object])(ctx, (frame[15].o), (jint(3)), (frame[12].o));
	LINE_NUMBER(1445);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (63));
	frame[16].o = sp[0].o;
	LINE_NUMBER(1446);
	((func_rhino_Node_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_rhino_Node_putProp_int_java_lang_Object])(ctx, (frame[16].o), (jint(3)), (frame[12].o));
	LINE_NUMBER(1448);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (130));
	frame[17].o = sp[0].o;
	LINE_NUMBER(1450);
	if ((frame[8].i) == (jint(-1))) goto label_42;
	}
	{
	LINE_NUMBER(1451);
	sp[0].o = (jobject)((func_rhino_IRFactory_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node])(ctx, (frame[0].o), (frame[1].i), (frame[10].o), (frame[16].o));
	frame[18].o = sp[0].o;
	LINE_NUMBER(1452);
	if ((frame[6].i) != 0) goto label_45;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_45;
	{
	if ((frame[8].i) == (67)) goto label_46;
	}
	{
	if ((frame[9].i) == (jint(2))) goto label_45;
	}
label_46:;
	{
	LINE_NUMBER(1457);
	((func_rhino_IRFactory_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.for.in.destruct"_j))));
	goto label_45;
	}
label_42:;
	{
	LINE_NUMBER(1460);
	sp[0].o = (jobject)((func_rhino_IRFactory_simpleAssignment_rhino_Node_rhino_Node_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_simpleAssignment_rhino_Node_rhino_Node_R_rhino_Node])(ctx, (frame[0].o), (frame[10].o), (frame[16].o));
	frame[18].o = sp[0].o;
	LINE_NUMBER(1461);
	if ((frame[1].i) == (123)) goto label_48;
	}
	{
	if ((frame[1].i) != (154)) goto label_45;
	}
label_48:;
	{
	LINE_NUMBER(1467);
	((func_rhino_Node_putIntProp_int_int) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_rhino_Node_putIntProp_int_int])(ctx, (frame[18].o), (28), (jint(1)));
	}
label_45:;
	{
	LINE_NUMBER(1470);
	sp[0].o = frame[17].o;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[1].o, (134), (frame[18].o));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1471);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[17].o), (frame[5].o));
	LINE_NUMBER(1473);
	sp[0].o = (jobject)M_rhino_IRFactory_createLoop_rhino_ast_Jump_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_Jump, (frame[2].o))), (jint(1)), (frame[17].o), (frame[15].o), (jobject(nullptr)), (jobject(nullptr)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1474);
	((func_rhino_Node_addChildToFront_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_addChildToFront_rhino_Node])(ctx, (frame[2].o), (frame[14].o));
	LINE_NUMBER(1475);
	if ((frame[11].i) == (123)) goto label_53;
	}
	{
	if ((frame[11].i) != (154)) goto label_54;
	}
label_53:;
	{
	LINE_NUMBER(1476);
	((func_rhino_Node_addChildToFront_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_addChildToFront_rhino_Node])(ctx, (frame[2].o), (frame[3].o));
	}
label_54:;
	{
	LINE_NUMBER(1477);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[12].o), (frame[2].o));
	LINE_NUMBER(1479);
	popStackFrame(ctx);
	return (frame[12].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createTryCatchFinally_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createTryCatchFinally", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1499);
	if ((frame[3].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[3].o;
	LINE_NUMBER(1500);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, sp[0].o);
	if (temp0 != (130)) goto label_3;
	}
	{
	sp[0].o = frame[3].o;
	LINE_NUMBER(1501);
	jint temp0 = (jint)((func_rhino_Node_hasChildren_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_hasChildren_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_1:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(1504);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[1].o));
	if (temp0 != (130)) goto label_7;
	}
	{
	jint temp0 = (jint)((func_rhino_Node_hasChildren_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_hasChildren_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_7;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_7;
	{
	LINE_NUMBER(1506);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_7:;
	{
	LINE_NUMBER(1509);
	jint temp0 = (jint)((func_rhino_Node_hasChildren_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_hasChildren_R_boolean])(ctx, (frame[2].o));
	frame[6].i = temp0;
	LINE_NUMBER(1512);
	if ((frame[5].i) != 0) goto label_10;
	}
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_10;
	{
	LINE_NUMBER(1514);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_10:;
	{
	LINE_NUMBER(1517);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (142));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1518);
	clinit_rhino_ast_Jump(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Jump);
	init_rhino_ast_Jump_int_rhino_Node_int(ctx, sp[0].o, (82), (frame[1].o), (frame[4].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1519);
	((func_rhino_ast_Jump_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_Jump_putProp_int_java_lang_Object])(ctx, (frame[8].o), (jint(3)), (frame[7].o));
	LINE_NUMBER(1521);
	if ((frame[6].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(1523);
	sp[0].o = (jobject)SM_rhino_Node_newTarget_R_rhino_Node(ctx);
	frame[9].o = sp[0].o;
	LINE_NUMBER(1524);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)M_rhino_IRFactory_makeJump_int_rhino_Node_R_rhino_ast_Jump(ctx, (frame[0].o), (jint(5)), (frame[9].o));
	((func_rhino_ast_Jump_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Jump_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1527);
	sp[0].o = (jobject)SM_rhino_Node_newTarget_R_rhino_Node(ctx);
	frame[10].o = sp[0].o;
	LINE_NUMBER(1528);
	((rhino_ast_Jump *) NULL_CHECK((frame[8].o)))->F_target = (jref) (frame[10].o);
	LINE_NUMBER(1530);
	((func_rhino_ast_Jump_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_Jump_addChildToBack_rhino_Node])(ctx, (frame[8].o), (frame[10].o));
	LINE_NUMBER(1580);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (142));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1583);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[2].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1584);
	frame[13].i = (jint(0));
	LINE_NUMBER(1585);
	frame[14].i = (jint(0));
	}
label_25:;
	{
	LINE_NUMBER(1586);
	if ((frame[12].o) == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(1587);
	jint temp0 = (jint)((func_rhino_Node_getLineno_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_getLineno_R_int])(ctx, (frame[12].o));
	frame[15].i = temp0;
	LINE_NUMBER(1589);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[12].o));
	frame[16].o = sp[0].o;
	LINE_NUMBER(1590);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[16].o));
	frame[17].o = sp[0].o;
	LINE_NUMBER(1591);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[17].o));
	frame[18].o = sp[0].o;
	LINE_NUMBER(1592);
	((func_rhino_Node_removeChild_rhino_Node) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_removeChild_rhino_Node])(ctx, (frame[12].o), (frame[16].o));
	LINE_NUMBER(1593);
	((func_rhino_Node_removeChild_rhino_Node) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_removeChild_rhino_Node])(ctx, (frame[12].o), (frame[17].o));
	LINE_NUMBER(1594);
	((func_rhino_Node_removeChild_rhino_Node) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_removeChild_rhino_Node])(ctx, (frame[12].o), (frame[18].o));
	LINE_NUMBER(1600);
	sp[0].o = frame[18].o;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[1].o, (jint(3)));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1601);
	sp[0].o = frame[18].o;
	sp[1].o = (jobject)M_rhino_IRFactory_makeJump_int_rhino_Node_R_rhino_ast_Jump(ctx, (frame[0].o), (jint(5)), (frame[9].o));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1605);
	jint temp1 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[17].o));
	if (temp1 != (129)) goto label_37;
	}
	{
	LINE_NUMBER(1606);
	frame[19].o = (frame[18].o);
	LINE_NUMBER(1607);
	frame[13].i = (jint(1));
	goto label_40;
	}
label_37:;
	{
	LINE_NUMBER(1609);
	sp[0].o = (jobject)M_rhino_IRFactory_createIf_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node(ctx, (frame[0].o), (frame[17].o), (frame[18].o), (jobject(nullptr)), (frame[15].i));
	frame[19].o = sp[0].o;
	}
label_40:;
	{
	LINE_NUMBER(1615);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 57;
	sp[1].o = frame[16].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[7].o;
	LINE_NUMBER(1616);
	sp[2].o = (jobject)M_rhino_IRFactory_createUseLocal_rhino_Node_R_rhino_Node(ctx, sp[2].o, sp[3].o);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	frame[20].o = sp[0].o;
	LINE_NUMBER(1617);
	((func_rhino_Node_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_rhino_Node_putProp_int_java_lang_Object])(ctx, (frame[20].o), (jint(3)), (frame[11].o));
	LINE_NUMBER(1618);
	((func_rhino_Node_putIntProp_int_int) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_rhino_Node_putIntProp_int_int])(ctx, (frame[20].o), (14), (frame[14].i));
	LINE_NUMBER(1619);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[11].o), (frame[20].o));
	LINE_NUMBER(1622);
	sp[0].o = frame[11].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[11].o;
	LINE_NUMBER(1623);
	sp[2].o = (jobject)M_rhino_IRFactory_createUseLocal_rhino_Node_R_rhino_Node(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)M_rhino_IRFactory_createWith_rhino_Node_rhino_Node_int_R_rhino_Node(ctx, sp[1].o, sp[2].o, (frame[19].o), (frame[15].i));
	LINE_NUMBER(1622);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1627);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[12].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1628);
	INST_IINC(14, 1);
	LINE_NUMBER(1629);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(1630);
	((func_rhino_ast_Jump_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_Jump_addChildToBack_rhino_Node])(ctx, (frame[8].o), (frame[11].o));
	LINE_NUMBER(1631);
	if ((frame[13].i) != 0) goto label_52;
	}
	{
	LINE_NUMBER(1633);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (51));
	frame[15].o = sp[0].o;
	LINE_NUMBER(1634);
	((func_rhino_Node_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_rhino_Node_putProp_int_java_lang_Object])(ctx, (frame[15].o), (jint(3)), (frame[7].o));
	LINE_NUMBER(1635);
	((func_rhino_ast_Jump_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_Jump_addChildToBack_rhino_Node])(ctx, (frame[8].o), (frame[15].o));
	}
label_52:;
	{
	LINE_NUMBER(1638);
	((func_rhino_ast_Jump_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_Jump_addChildToBack_rhino_Node])(ctx, (frame[8].o), (frame[9].o));
	}
label_15:;
	{
	LINE_NUMBER(1641);
	if ((frame[5].i) == 0) goto label_56;
	}
	{
	LINE_NUMBER(1642);
	sp[0].o = (jobject)SM_rhino_Node_newTarget_R_rhino_Node(ctx);
	frame[9].o = sp[0].o;
	LINE_NUMBER(1643);
	((func_rhino_ast_Jump_setFinally_rhino_Node) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_Jump_setFinally_rhino_Node])(ctx, (frame[8].o), (frame[9].o));
	LINE_NUMBER(1646);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)M_rhino_IRFactory_makeJump_int_rhino_Node_R_rhino_ast_Jump(ctx, (frame[0].o), (136), (frame[9].o));
	((func_rhino_ast_Jump_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Jump_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1649);
	sp[0].o = (jobject)SM_rhino_Node_newTarget_R_rhino_Node(ctx);
	frame[10].o = sp[0].o;
	LINE_NUMBER(1650);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)M_rhino_IRFactory_makeJump_int_rhino_Node_R_rhino_ast_Jump(ctx, (frame[0].o), (jint(5)), (frame[10].o));
	((func_rhino_ast_Jump_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Jump_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1652);
	((func_rhino_ast_Jump_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_Jump_addChildToBack_rhino_Node])(ctx, (frame[8].o), (frame[9].o));
	LINE_NUMBER(1653);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (126), (frame[3].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1654);
	((func_rhino_Node_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_putProp_int_java_lang_Object])(ctx, (frame[11].o), (jint(3)), (frame[7].o));
	LINE_NUMBER(1655);
	((func_rhino_ast_Jump_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_Jump_addChildToBack_rhino_Node])(ctx, (frame[8].o), (frame[11].o));
	LINE_NUMBER(1657);
	((func_rhino_ast_Jump_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_Jump_addChildToBack_rhino_Node])(ctx, (frame[8].o), (frame[10].o));
	}
label_56:;
	{
	LINE_NUMBER(1659);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[7].o), (frame[8].o));
	LINE_NUMBER(1660);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createWith_rhino_Node_rhino_Node_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createWith", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1664);
	((func_rhino_IRFactory_setRequiresActivation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_setRequiresActivation])(ctx, (frame[0].o));
	LINE_NUMBER(1665);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_int(ctx, sp[0].o, (130), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1666);
	sp[0].o = frame[4].o;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[1].o, (jint(2)), (frame[1].o));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1667);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_int(ctx, sp[0].o, (124), (frame[2].o), (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1668);
	((func_rhino_Node_addChildrenToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_addChildrenToBack_rhino_Node])(ctx, (frame[4].o), (frame[5].o));
	LINE_NUMBER(1669);
	sp[0].o = frame[4].o;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[1].o, (jint(3)));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1670);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createIf_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createIf", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1674);
	jint temp0 = (jint)SM_rhino_IRFactory_isAlwaysDefinedBoolean_rhino_Node_R_int(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(1675);
	if ((frame[5].i) != (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(1676);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	LINE_NUMBER(1677);
	if ((frame[5].i) != (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(1678);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1679);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_6:;
	{
	LINE_NUMBER(1682);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_int(ctx, sp[0].o, (130), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1685);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_int(ctx, sp[0].o, (130), (frame[4].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1686);
	sp[0].o = (jobject)SM_rhino_Node_newTarget_R_rhino_Node(ctx);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1687);
	clinit_rhino_ast_Jump(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Jump);
	init_rhino_ast_Jump_int_rhino_Node(ctx, sp[0].o, (7), (frame[1].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1688);
	((rhino_ast_Jump *) NULL_CHECK((frame[8].o)))->F_target = (jref) (frame[7].o);
	LINE_NUMBER(1690);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[6].o), (frame[8].o));
	LINE_NUMBER(1691);
	((func_rhino_Node_addChildrenToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_addChildrenToBack_rhino_Node])(ctx, (frame[6].o), (frame[2].o));
	LINE_NUMBER(1693);
	if ((frame[3].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(1694);
	sp[0].o = (jobject)SM_rhino_Node_newTarget_R_rhino_Node(ctx);
	frame[9].o = sp[0].o;
	LINE_NUMBER(1695);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)M_rhino_IRFactory_makeJump_int_rhino_Node_R_rhino_ast_Jump(ctx, (frame[0].o), (jint(5)), (frame[9].o));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1696);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[6].o), (frame[7].o));
	LINE_NUMBER(1697);
	((func_rhino_Node_addChildrenToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_addChildrenToBack_rhino_Node])(ctx, (frame[6].o), (frame[3].o));
	LINE_NUMBER(1698);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[6].o), (frame[9].o));
	LINE_NUMBER(1699);
	goto label_21;
	}
label_14:;
	{
	LINE_NUMBER(1700);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[6].o), (frame[7].o));
	}
label_21:;
	{
	LINE_NUMBER(1703);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createCondExpr_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createCondExpr", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1707);
	jint temp0 = (jint)SM_rhino_IRFactory_isAlwaysDefinedBoolean_rhino_Node_R_int(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(1708);
	if ((frame[4].i) != (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(1709);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	LINE_NUMBER(1710);
	if ((frame[4].i) != (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(1711);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_4:;
	{
	LINE_NUMBER(1713);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node_rhino_Node(ctx, sp[0].o, (103), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createUnary_int_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createUnary", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1717);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(1718);
	switch((frame[1].i)) {
		case 26: goto label_2;
		case 27: goto label_3;
		case 28: goto label_4;
		case 29: goto label_5;
		case 30: goto label_4;
		case 31: goto label_6;
		case 32: goto label_7;
		default: goto label_4;
	}
	}
label_6:;
	{
	LINE_NUMBER(1721);
	if ((frame[3].i) != (39)) goto label_8;
	}
	{
	LINE_NUMBER(1724);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[2].o), (49));
	LINE_NUMBER(1725);
	frame[5].o = (frame[2].o);
	LINE_NUMBER(1726);
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_rhino_Node_newString_java_lang_String_R_rhino_Node(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1727);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, (frame[1].i), (frame[5].o), (frame[6].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1728);
	goto label_14;
	}
label_8:;
	{
	if ((frame[3].i) == (33)) goto label_15;
	}
	{
	if ((frame[3].i) != (36)) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(1730);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1731);
	sp[0].o = (jobject)((func_rhino_Node_getLastChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getLastChild_R_rhino_Node])(ctx, (frame[2].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1732);
	((func_rhino_Node_removeChild_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_removeChild_rhino_Node])(ctx, (frame[2].o), (frame[5].o));
	LINE_NUMBER(1733);
	((func_rhino_Node_removeChild_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_removeChild_rhino_Node])(ctx, (frame[2].o), (frame[6].o));
	LINE_NUMBER(1734);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, (frame[1].i), (frame[5].o), (frame[6].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1735);
	goto label_14;
	}
label_16:;
	{
	if ((frame[3].i) != (68)) goto label_22;
	}
	{
	LINE_NUMBER(1736);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1737);
	((func_rhino_Node_removeChild_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_removeChild_rhino_Node])(ctx, (frame[2].o), (frame[5].o));
	LINE_NUMBER(1738);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (70), (frame[5].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1739);
	goto label_14;
	}
label_22:;
	{
	LINE_NUMBER(1741);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = frame[1].i;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[1].o, (45));
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, temp0, sp[1].o, (frame[2].o));
	frame[4].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(1743);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_7:;
	{
	LINE_NUMBER(1746);
	if ((frame[3].i) != (39)) goto label_4;
	}
	{
	LINE_NUMBER(1747);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[2].o), (138));
	LINE_NUMBER(1748);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_3:;
	{
	LINE_NUMBER(1752);
	if ((frame[3].i) != (40)) goto label_4;
	}
	{
	LINE_NUMBER(1753);
	jdouble temp0 = (jdouble)((func_rhino_Node_getDouble_R_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getDouble_R_double])(ctx, (frame[2].o));
	jint temp1 = (jint)SM_rhino_ScriptRuntime_toInt32_double_R_int(ctx, temp0);
	frame[4].i = temp1;
	LINE_NUMBER(1754);
	((func_rhino_Node_setDouble_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_setDouble_double])(ctx, (frame[2].o), (jdouble(((frame[4].i) ^ (jint(-1))))));
	LINE_NUMBER(1755);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_5:;
	{
	LINE_NUMBER(1759);
	if ((frame[3].i) != (40)) goto label_4;
	}
	{
	LINE_NUMBER(1760);
	sp[0].o = frame[2].o;
	jdouble temp0 = (jdouble)((func_rhino_Node_getDouble_R_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getDouble_R_double])(ctx, (frame[2].o));
	((func_rhino_Node_setDouble_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_setDouble_double])(ctx, sp[0].o, (-temp0));
	LINE_NUMBER(1761);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	LINE_NUMBER(1765);
	jint temp0 = (jint)SM_rhino_IRFactory_isAlwaysDefinedBoolean_rhino_Node_R_int(ctx, (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(1766);
	if ((frame[4].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1768);
	if ((frame[4].i) != (jint(1))) goto label_36;
	}
	{
	LINE_NUMBER(1769);
	frame[5].i = (44);
	goto label_39;
	}
label_36:;
	{
	LINE_NUMBER(1771);
	frame[5].i = (45);
	}
label_39:;
	{
	LINE_NUMBER(1773);
	if ((frame[3].i) == (45)) goto label_40;
	}
	{
	if ((frame[3].i) != (44)) goto label_41;
	}
label_40:;
	{
	LINE_NUMBER(1774);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[2].o), (frame[5].i));
	LINE_NUMBER(1775);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_41:;
	{
	LINE_NUMBER(1777);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1782);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createCallOrNew_int_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createCallOrNew", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1786);
	frame[3].i = (jint(0));
	LINE_NUMBER(1787);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[2].o));
	if (temp0 != (39)) goto label_2;
	}
	{
	LINE_NUMBER(1788);
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1789);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"eval"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1790);
	frame[3].i = (jint(1));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(1791);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"With"_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(1792);
	frame[3].i = (jint(2));
	}
label_7:;
	LINE_NUMBER(1794);
	goto label_9;
label_2:;
	{
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[2].o));
	if (temp0 != (33)) goto label_9;
	}
	{
	LINE_NUMBER(1795);
	sp[0].o = (jobject)((func_rhino_Node_getLastChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getLastChild_R_rhino_Node])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1796);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"eval"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(1797);
	frame[3].i = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(1800);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1801);
	if ((frame[3].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(1803);
	((func_rhino_IRFactory_setRequiresActivation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_setRequiresActivation])(ctx, (frame[0].o));
	LINE_NUMBER(1804);
	((func_rhino_Node_putIntProp_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_putIntProp_int_int])(ctx, (frame[4].o), (10), (frame[3].i));
	}
label_14:;
	{
	LINE_NUMBER(1806);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createIncDec_int_boolean_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jint param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createIncDec", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1810);
	sp[0].o = (jobject)M_rhino_IRFactory_makeReference_rhino_Node_R_rhino_Node(ctx, (frame[0].o), (frame[3].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1811);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(1813);
	switch((frame[4].i)) {
		case 33: goto label_3;
		case 36: goto label_3;
		case 39: goto label_3;
		case 68: goto label_3;
		default: goto label_4;
	}
	}
label_3:;
	{
	LINE_NUMBER(1818);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (frame[1].i), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1819);
	frame[6].i = (jint(0));
	LINE_NUMBER(1820);
	if ((frame[1].i) != (108)) goto label_7;
	}
	{
	LINE_NUMBER(1821);
	frame[6].i = ((frame[6].i) | (jint(1)));
	}
label_7:;
	{
	LINE_NUMBER(1823);
	if ((frame[2].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(1824);
	frame[6].i = ((frame[6].i) | (jint(2)));
	}
label_9:;
	{
	LINE_NUMBER(1826);
	((func_rhino_Node_putIntProp_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_Node_putIntProp_int_int])(ctx, (frame[5].o), (13), (frame[6].i));
	LINE_NUMBER(1827);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_4:;
	{
	LINE_NUMBER(1830);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createPropertyGet_rhino_Node_java_lang_String_java_lang_String_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createPropertyGet", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1835);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_1;
	{
	LINE_NUMBER(1836);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1837);
	sp[0].o = (jobject)((func_rhino_IRFactory_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_createName_java_lang_String_R_rhino_Node])(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1839);
	((func_rhino_IRFactory_checkActivationName_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_checkActivationName_java_lang_String_int])(ctx, (frame[0].o), (frame[3].o), (33));
	LINE_NUMBER(1840);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSpecialProperty_java_lang_String_R_boolean(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1841);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (72), (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1842);
	((func_rhino_Node_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_Node_putProp_int_java_lang_Object])(ctx, (frame[5].o), (17), (frame[3].o));
	LINE_NUMBER(1843);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (68), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(1845);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 33;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_rhino_Node_newString_java_lang_String_R_rhino_Node(ctx, (frame[3].o));
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1847);
	sp[0].o = (jobject)SM_rhino_Node_newString_java_lang_String_R_rhino_Node(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1848);
	frame[4].i = ((frame[4].i) | (jint(1)));
	LINE_NUMBER(1849);
	sp[0].o = (jobject)M_rhino_IRFactory_createMemberRefGet_rhino_Node_java_lang_String_rhino_Node_int_R_rhino_Node(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[5].o), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createElementGet_rhino_Node_java_lang_String_rhino_Node_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createElementGet", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1862);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_1;
	{
	LINE_NUMBER(1865);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_3:;
	{
	LINE_NUMBER(1866);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, (36), (frame[1].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1868);
	sp[0].o = (jobject)M_rhino_IRFactory_createMemberRefGet_rhino_Node_java_lang_String_rhino_Node_int_R_rhino_Node(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createMemberRefGet_rhino_Node_java_lang_String_rhino_Node_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createMemberRefGet", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1873);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(1874);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1876);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"*"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1877);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (42));
	frame[5].o = sp[0].o;
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(1879);
	sp[0].o = (jobject)((func_rhino_IRFactory_createName_java_lang_String_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_createName_java_lang_String_R_rhino_Node])(ctx, (frame[0].o), (frame[2].o));
	frame[5].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1883);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1884);
	if ((frame[2].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1885);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (80), (frame[3].o));
	frame[6].o = sp[0].o;
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(1887);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, (81), (frame[5].o), (frame[3].o));
	frame[6].o = sp[0].o;
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(1890);
	if ((frame[2].o) != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(1891);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, (78), (frame[1].o), (frame[3].o));
	frame[6].o = sp[0].o;
	goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(1893);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node_rhino_Node(ctx, sp[0].o, (79), (frame[1].o), (frame[5].o), (frame[3].o));
	frame[6].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(1896);
	if ((frame[4].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(1897);
	((func_rhino_Node_putIntProp_int_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_putIntProp_int_int])(ctx, (frame[6].o), (16), (frame[4].i));
	}
label_16:;
	{
	LINE_NUMBER(1899);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (68), (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createBinary_int_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createBinary", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1903);
	switch((frame[1].i)) {
		case 21: goto label_1;
		case 22: goto label_2;
		case 23: goto label_3;
		case 24: goto label_4;
		case 105: goto label_5;
		case 106: goto label_6;
		default: goto label_7;
	}
	}
label_1:;
	{
	LINE_NUMBER(1907);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[2].o)))->F_type) != (41)) goto label_8;
	}
	{
	LINE_NUMBER(1909);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[3].o)))->F_type) != (41)) goto label_10;
	}
	{
	LINE_NUMBER(1910);
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(1911);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[3].o)))->F_type) != (40)) goto label_7;
	}
	{
	LINE_NUMBER(1912);
	jdouble temp0 = (jdouble)((func_rhino_Node_getDouble_R_double) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_getDouble_R_double])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_numberToString_double_int_R_java_lang_String(ctx, temp0, (10));
	frame[4].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(1916);
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1917);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_lang_String_concat_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_concat_java_lang_String_R_java_lang_String])(ctx, (frame[5].o), (frame[4].o));
	((func_rhino_Node_setString_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_setString_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1918);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_8:;
	{
	LINE_NUMBER(1919);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[2].o)))->F_type) != (40)) goto label_7;
	}
	{
	LINE_NUMBER(1920);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[3].o)))->F_type) != (40)) goto label_18;
	}
	{
	LINE_NUMBER(1921);
	sp[0].o = frame[2].o;
	jdouble temp0 = (jdouble)((func_rhino_Node_getDouble_R_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getDouble_R_double])(ctx, (frame[2].o));
	jdouble temp1 = (jdouble)((func_rhino_Node_getDouble_R_double) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_getDouble_R_double])(ctx, (frame[3].o));
	((func_rhino_Node_setDouble_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_setDouble_double])(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(1922);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_18:;
	{
	LINE_NUMBER(1923);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[3].o)))->F_type) != (41)) goto label_7;
	}
	{
	LINE_NUMBER(1925);
	jdouble temp0 = (jdouble)((func_rhino_Node_getDouble_R_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getDouble_R_double])(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_numberToString_double_int_R_java_lang_String(ctx, temp0, (10));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1926);
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1927);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_lang_String_concat_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_concat_java_lang_String_R_java_lang_String])(ctx, (frame[4].o), (frame[5].o));
	((func_rhino_Node_setString_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_setString_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1928);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(1938);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[2].o)))->F_type) != (40)) goto label_25;
	}
	{
	LINE_NUMBER(1939);
	jdouble temp0 = (jdouble)((func_rhino_Node_getDouble_R_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getDouble_R_double])(ctx, (frame[2].o));
	frame[4].d = temp0;
	LINE_NUMBER(1940);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[3].o)))->F_type) != (40)) goto label_28;
	}
	{
	LINE_NUMBER(1942);
	sp[0].o = frame[2].o;
	jdouble temp0 = frame[4].d;
	jdouble temp1 = (jdouble)((func_rhino_Node_getDouble_R_double) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_getDouble_R_double])(ctx, (frame[3].o));
	((func_rhino_Node_setDouble_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_setDouble_double])(ctx, sp[0].o, (temp0 - temp1));
	LINE_NUMBER(1943);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_28:;
	{
	LINE_NUMBER(1944);
	if ((doubleCompare((frame[4].d), (jdouble(0)), -1)) != 0) goto label_31;
	}
	{
	LINE_NUMBER(1946);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (29), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_31:;
	LINE_NUMBER(1948);
	goto label_7;
label_25:;
	{
	if (((jint)((rhino_Node *) NULL_CHECK((frame[3].o)))->F_type) != (40)) goto label_7;
	}
	{
	LINE_NUMBER(1949);
	jdouble temp0 = (jdouble)((func_rhino_Node_getDouble_R_double) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_getDouble_R_double])(ctx, (frame[3].o));
	if ((doubleCompare(temp0, (jdouble(0)), -1)) != 0) goto label_7;
	}
	{
	LINE_NUMBER(1952);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (28), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1959);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[2].o)))->F_type) != (40)) goto label_35;
	}
	{
	LINE_NUMBER(1960);
	jdouble temp0 = (jdouble)((func_rhino_Node_getDouble_R_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getDouble_R_double])(ctx, (frame[2].o));
	frame[4].d = temp0;
	LINE_NUMBER(1961);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[3].o)))->F_type) != (40)) goto label_38;
	}
	{
	LINE_NUMBER(1963);
	sp[0].o = frame[2].o;
	jdouble temp0 = frame[4].d;
	jdouble temp1 = (jdouble)((func_rhino_Node_getDouble_R_double) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_getDouble_R_double])(ctx, (frame[3].o));
	((func_rhino_Node_setDouble_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_setDouble_double])(ctx, sp[0].o, (temp0 * temp1));
	LINE_NUMBER(1964);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_38:;
	{
	LINE_NUMBER(1965);
	if ((doubleCompare((frame[4].d), (jdouble(1)), -1)) != 0) goto label_41;
	}
	{
	LINE_NUMBER(1967);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (28), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_41:;
	LINE_NUMBER(1969);
	goto label_7;
label_35:;
	{
	if (((jint)((rhino_Node *) NULL_CHECK((frame[3].o)))->F_type) != (40)) goto label_7;
	}
	{
	LINE_NUMBER(1970);
	jdouble temp0 = (jdouble)((func_rhino_Node_getDouble_R_double) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_getDouble_R_double])(ctx, (frame[3].o));
	if ((doubleCompare(temp0, (jdouble(1)), -1)) != 0) goto label_7;
	}
	{
	LINE_NUMBER(1973);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (28), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1981);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[3].o)))->F_type) != (40)) goto label_7;
	}
	{
	LINE_NUMBER(1982);
	jdouble temp0 = (jdouble)((func_rhino_Node_getDouble_R_double) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_getDouble_R_double])(ctx, (frame[3].o));
	frame[4].d = temp0;
	LINE_NUMBER(1983);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[2].o)))->F_type) != (40)) goto label_47;
	}
	{
	LINE_NUMBER(1985);
	sp[0].o = frame[2].o;
	jdouble temp0 = (jdouble)((func_rhino_Node_getDouble_R_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getDouble_R_double])(ctx, (frame[2].o));
	((func_rhino_Node_setDouble_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_setDouble_double])(ctx, sp[0].o, (temp0 / (frame[4].d)));
	LINE_NUMBER(1986);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_47:;
	{
	LINE_NUMBER(1987);
	if ((doubleCompare((frame[4].d), (jdouble(1)), -1)) != 0) goto label_50;
	}
	{
	LINE_NUMBER(1990);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (28), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_50:;
	LINE_NUMBER(1992);
	goto label_7;
label_6:;
	{
	LINE_NUMBER(2000);
	jint temp0 = (jint)SM_rhino_IRFactory_isAlwaysDefinedBoolean_rhino_Node_R_int(ctx, (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(2001);
	if ((frame[4].i) != (jint(-1))) goto label_53;
	}
	{
	LINE_NUMBER(2003);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_53:;
	{
	LINE_NUMBER(2004);
	if ((frame[4].i) != (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(2006);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_5:;
	{
	LINE_NUMBER(2016);
	jint temp0 = (jint)SM_rhino_IRFactory_isAlwaysDefinedBoolean_rhino_Node_R_int(ctx, (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(2017);
	if ((frame[4].i) != (jint(1))) goto label_57;
	}
	{
	LINE_NUMBER(2019);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_57:;
	{
	LINE_NUMBER(2020);
	if ((frame[4].i) != (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(2022);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_7:;
	{
	LINE_NUMBER(2028);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, (frame[1].i), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createAssignment_int_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createAssignment", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2032);
	sp[0].o = (jobject)M_rhino_IRFactory_makeReference_rhino_Node_R_rhino_Node(ctx, (frame[0].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2033);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2034);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[2].o));
	if (temp0 == (66)) goto label_4;
	}
	{
	sp[0].o = frame[2].o;
	LINE_NUMBER(2035);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, sp[0].o);
	if (temp0 != (67)) goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(2036);
	if ((frame[1].i) == (91)) goto label_7;
	}
	{
	LINE_NUMBER(2037);
	((func_rhino_IRFactory_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.destruct.op"_j))));
	LINE_NUMBER(2038);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_7:;
	{
	LINE_NUMBER(2040);
	sp[0].o = (jobject)((func_rhino_IRFactory_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node])(ctx, (frame[0].o), (jint(-1)), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(2042);
	((func_rhino_IRFactory_reportError_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_reportError_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"msg.bad.assign.left"_j))));
	LINE_NUMBER(2043);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(2045);
	frame[2].o = (frame[4].o);
	LINE_NUMBER(2048);
	switch((frame[1].i)) {
		case 91: goto label_12;
		case 92: goto label_13;
		case 93: goto label_14;
		case 94: goto label_15;
		case 95: goto label_16;
		case 96: goto label_17;
		case 97: goto label_18;
		case 98: goto label_19;
		case 99: goto label_20;
		case 100: goto label_21;
		case 101: goto label_22;
		case 102: goto label_23;
		default: goto label_24;
	}
	}
label_12:;
	{
	LINE_NUMBER(2050);
	sp[0].o = (jobject)((func_rhino_IRFactory_simpleAssignment_rhino_Node_rhino_Node_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_simpleAssignment_rhino_Node_rhino_Node_R_rhino_Node])(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(2052);
	frame[5].i = (9);
	LINE_NUMBER(2053);
	goto label_26;
	}
label_14:;
	{
	LINE_NUMBER(2055);
	frame[5].i = (10);
	LINE_NUMBER(2056);
	goto label_26;
	}
label_15:;
	{
	LINE_NUMBER(2058);
	frame[5].i = (11);
	LINE_NUMBER(2059);
	goto label_26;
	}
label_16:;
	{
	LINE_NUMBER(2061);
	frame[5].i = (18);
	LINE_NUMBER(2062);
	goto label_26;
	}
label_17:;
	{
	LINE_NUMBER(2064);
	frame[5].i = (19);
	LINE_NUMBER(2065);
	goto label_26;
	}
label_18:;
	{
	LINE_NUMBER(2067);
	frame[5].i = (20);
	LINE_NUMBER(2068);
	goto label_26;
	}
label_19:;
	{
	LINE_NUMBER(2070);
	frame[5].i = (21);
	LINE_NUMBER(2071);
	goto label_26;
	}
label_20:;
	{
	LINE_NUMBER(2073);
	frame[5].i = (22);
	LINE_NUMBER(2074);
	goto label_26;
	}
label_21:;
	{
	LINE_NUMBER(2076);
	frame[5].i = (23);
	LINE_NUMBER(2077);
	goto label_26;
	}
label_22:;
	{
	LINE_NUMBER(2079);
	frame[5].i = (24);
	LINE_NUMBER(2080);
	goto label_26;
	}
label_23:;
	{
	LINE_NUMBER(2082);
	frame[5].i = (25);
	LINE_NUMBER(2083);
	goto label_26;
	}
label_24:;
	{
	LINE_NUMBER(2085);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_26:;
	{
	LINE_NUMBER(2088);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[2].o));
	frame[6].i = temp0;
	LINE_NUMBER(2089);
	switch((frame[6].i)) {
		case 33: goto label_38;
		case 36: goto label_38;
		case 39: goto label_39;
		case 68: goto label_40;
		default: goto label_41;
	}
	}
label_39:;
	{
	LINE_NUMBER(2091);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, (frame[5].i), (frame[2].o), (frame[3].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2092);
	jint temp0 = 49;
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_rhino_Node_newString_int_java_lang_String_R_rhino_Node(ctx, temp0, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(2093);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, (8), (frame[8].o), (frame[7].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_38:;
	{
	LINE_NUMBER(2097);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[2].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2098);
	sp[0].o = (jobject)((func_rhino_Node_getLastChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getLastChild_R_rhino_Node])(ctx, (frame[2].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2100);
	if ((frame[6].i) != (33)) goto label_46;
	}
	INST_SIPUSH(140);
	goto label_47;
label_46:;
	INST_SIPUSH(141);
label_47:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(2104);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (139));
	frame[10].o = sp[0].o;
	LINE_NUMBER(2105);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, (frame[5].i), (frame[10].o), (frame[3].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(2106);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node_rhino_Node(ctx, sp[0].o, (frame[9].i), (frame[7].o), (frame[8].o), (frame[11].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_40:;
	{
	LINE_NUMBER(2109);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2110);
	((func_rhino_IRFactory_checkMutableReference_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_checkMutableReference_rhino_Node])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(2111);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (139));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2112);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, (frame[5].i), (frame[7].o), (frame[3].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2113);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, (143), (frame[4].o), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_41:;
	{
	LINE_NUMBER(2117);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_createUseLocal_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:createUseLocal", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2121);
	jint temp0 = 142;
	jint temp1 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[1].o));
	if (temp0 == temp1) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_1:;
	{
	LINE_NUMBER(2122);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (54));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2123);
	((func_rhino_Node_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_putProp_int_java_lang_Object])(ctx, (frame[2].o), (jint(3)), (frame[1].o));
	LINE_NUMBER(2124);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_makeJump_int_rhino_Node_R_rhino_ast_Jump(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:makeJump", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2128);
	clinit_rhino_ast_Jump(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Jump);
	init_rhino_ast_Jump_int(ctx, sp[0].o, (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2129);
	((rhino_ast_Jump *) NULL_CHECK((frame[3].o)))->F_target = (jref) (frame[2].o);
	LINE_NUMBER(2130);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_makeReference_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:makeReference", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2134);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(2135);
	switch((frame[2].i)) {
		case 33: goto label_2;
		case 36: goto label_2;
		case 38: goto label_3;
		case 39: goto label_2;
		case 68: goto label_2;
		default: goto label_4;
	}
	}
label_2:;
	{
	LINE_NUMBER(2140);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_3:;
	{
	LINE_NUMBER(2142);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[1].o), (71));
	LINE_NUMBER(2143);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (68), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(2146);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint SM_rhino_IRFactory_isAlwaysDefinedBoolean_rhino_Node_R_int(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:isAlwaysDefinedBoolean", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_IRFactory(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2151);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[0].o));
	switch(temp0) {
		case 40: goto label_1;
		case 41: goto label_2;
		case 42: goto label_3;
		case 43: goto label_2;
		case 44: goto label_3;
		case 45: goto label_4;
		default: goto label_2;
	}
	}
label_3:;
	{
	LINE_NUMBER(2154);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_4:;
	{
	LINE_NUMBER(2156);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(2158);
	jdouble temp0 = (jdouble)((func_rhino_Node_getDouble_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_getDouble_R_double])(ctx, (frame[0].o));
	frame[1].d = temp0;
	LINE_NUMBER(2159);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[1].d));
	if (temp1 != 0) goto label_6;
	}
	{
	if ((doubleCompare((frame[1].d), (jdouble(0)), -1)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(2160);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(2162);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_2:;
	{
	LINE_NUMBER(2165);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_rhino_IRFactory_isDestructuring_rhino_Node_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:isDestructuring", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2170);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_DestructuringForm)) == 0) goto label_1;
	}
	{
	sp[0].o = checkCast(ctx, &class_rhino_ast_DestructuringForm, (frame[1].o));
	LINE_NUMBER(2171);
	jint temp0 = (jint)((func_rhino_ast_DestructuringForm_isDestructuring_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ast_DestructuringForm, INDEX_rhino_ast_DestructuringForm_isDestructuring_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(2170);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_rhino_IRFactory_decompileFunctionHeader_rhino_ast_FunctionNode_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:decompileFunctionHeader", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2175);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(2176);
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2177);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	sp[1].o = (jobject)((func_rhino_ast_FunctionNode_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getName_R_java_lang_String])(ctx, (frame[1].o));
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(2178);
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getMemberExprNode_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getMemberExprNode_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(2179);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_FunctionNode_getMemberExprNode_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getMemberExprNode_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(2181);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_getFunctionType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionType_R_int])(ctx, (frame[1].o));
	if (temp0 != (jint(4))) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(2182);
	if ((frame[3].i) == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_getLp_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getLp_R_int])(ctx, (frame[1].o));
	if (temp0 != (jint(-1))) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(2183);
	if ((frame[4].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(2184);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (88));
	}
label_12:;
	{
	LINE_NUMBER(2186);
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getParams_R_java_util_List) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getParams_R_java_util_List])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2187);
	frame[6].i = (jint(0));
	}
label_15:;
	{
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 >= temp1) goto label_16;
	}
	{
	LINE_NUMBER(2188);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[6].i));
	((func_rhino_IRFactory_decompile_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_decompile_rhino_ast_AstNode])(ctx, sp[0].o, (checkCast(ctx, &class_rhino_ast_AstNode, sp[1].o)));
	LINE_NUMBER(2189);
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 >= (temp1 - (jint(1)))) goto label_19;
	}
	{
	LINE_NUMBER(2190);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (90));
	}
label_19:;
	{
	LINE_NUMBER(2187);
	INST_IINC(6, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(2193);
	if ((frame[4].i) != 0) goto label_21;
	}
	{
	LINE_NUMBER(2194);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (89));
	}
label_21:;
	{
	LINE_NUMBER(2196);
	if ((frame[3].i) == 0) goto label_23;
	}
	{
	LINE_NUMBER(2197);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (165));
	}
label_23:;
	{
	LINE_NUMBER(2199);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_isExpressionClosure_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_isExpressionClosure_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_25;
	}
	{
	LINE_NUMBER(2200);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addEOL_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addEOL_int])(ctx, sp[0].o, (86));
	}
label_25:;
	{
	LINE_NUMBER(2202);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_rhino_IRFactory_decompile_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:decompile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2206);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case 33: goto label_1;
		case 36: goto label_2;
		case 39: goto label_3;
		case 40: goto label_4;
		case 41: goto label_5;
		case 43: goto label_6;
		case 66: goto label_7;
		case 67: goto label_8;
		case 129: goto label_9;
		default: goto label_10;
	}
	}
label_7:;
	{
	LINE_NUMBER(2208);
	((func_rhino_IRFactory_decompileArrayLiteral_rhino_ast_ArrayLiteral) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_decompileArrayLiteral_rhino_ast_ArrayLiteral])(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ArrayLiteral, (frame[1].o))));
	LINE_NUMBER(2209);
	goto label_12;
	}
label_8:;
	{
	LINE_NUMBER(2211);
	((func_rhino_IRFactory_decompileObjectLiteral_rhino_ast_ObjectLiteral) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_decompileObjectLiteral_rhino_ast_ObjectLiteral])(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ObjectLiteral, (frame[1].o))));
	LINE_NUMBER(2212);
	goto label_12;
	}
label_5:;
	{
	LINE_NUMBER(2214);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	sp[1].o = (jobject)((func_rhino_ast_StringLiteral_getValue_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_StringLiteral, (frame[1].o))))->vtable)[VTABLE_rhino_ast_StringLiteral_getValue_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_StringLiteral, (frame[1].o))));
	((func_rhino_Decompiler_addString_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addString_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2215);
	goto label_12;
	}
label_3:;
	{
	LINE_NUMBER(2217);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	sp[1].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[1].o))))->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[1].o))));
	((func_rhino_Decompiler_addName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2218);
	goto label_12;
	}
label_4:;
	{
	LINE_NUMBER(2220);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	jdouble temp0 = (jdouble)((func_rhino_ast_NumberLiteral_getNumber_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_NumberLiteral, (frame[1].o))))->vtable)[VTABLE_rhino_ast_NumberLiteral_getNumber_R_double])(ctx, (checkCast(ctx, &class_rhino_ast_NumberLiteral, (frame[1].o))));
	((func_rhino_Decompiler_addNumber_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addNumber_double])(ctx, sp[0].o, temp0);
	LINE_NUMBER(2221);
	goto label_12;
	}
label_1:;
	{
	LINE_NUMBER(2223);
	((func_rhino_IRFactory_decompilePropertyGet_rhino_ast_PropertyGet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_decompilePropertyGet_rhino_ast_PropertyGet])(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_PropertyGet, (frame[1].o))));
	LINE_NUMBER(2224);
	goto label_12;
	}
label_9:;
	LINE_NUMBER(2226);
	goto label_12;
label_2:;
	{
	LINE_NUMBER(2228);
	((func_rhino_IRFactory_decompileElementGet_rhino_ast_ElementGet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_decompileElementGet_rhino_ast_ElementGet])(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_ElementGet, (frame[1].o))));
	LINE_NUMBER(2229);
	goto label_12;
	}
label_6:;
	{
	LINE_NUMBER(2231);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[1].o));
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(2232);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(2234);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unexpected token: "_j))));
	sp[1].o = frame[1].o;
	LINE_NUMBER(2235);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_rhino_Token_typeToName_int_R_java_lang_String(ctx, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(2234);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_java_lang_String_R_java_lang_RuntimeException(ctx, sp[0].o);
	}
label_12:;
	LINE_NUMBER(2237);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_IRFactory_decompileArrayLiteral_rhino_ast_ArrayLiteral(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:decompileArrayLiteral", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2241);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (84));
	LINE_NUMBER(2242);
	sp[0].o = (jobject)((func_rhino_ast_ArrayLiteral_getElements_R_java_util_List) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ArrayLiteral_getElements_R_java_util_List])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2243);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(2244);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(2245);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(2246);
	((func_rhino_IRFactory_decompile_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IRFactory_decompile_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(2247);
	if ((frame[4].i) >= ((frame[3].i) - (jint(1)))) goto label_9;
	}
	{
	LINE_NUMBER(2248);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (90));
	}
label_9:;
	{
	LINE_NUMBER(2244);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2251);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (85));
	LINE_NUMBER(2252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_IRFactory_decompileObjectLiteral_rhino_ast_ObjectLiteral(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:decompileObjectLiteral", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2256);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (86));
	LINE_NUMBER(2257);
	sp[0].o = (jobject)((func_rhino_ast_ObjectLiteral_getElements_R_java_util_List) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ObjectLiteral_getElements_R_java_util_List])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2258);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(2259);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(2260);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_rhino_ast_ObjectProperty, sp[0].o));
	LINE_NUMBER(2261);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	sp[1].o = frame[5].o;
	jint temp0 = 26;
	LINE_NUMBER(2262);
	sp[1].o = (jobject)((func_rhino_ast_ObjectProperty_getProp_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_ObjectProperty_getProp_int_R_java_lang_Object])(ctx, sp[1].o, temp0);
	jint temp1 = (jint)((func_java_lang_Boolean_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Boolean_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[6].i = temp1;
	LINE_NUMBER(2263);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ObjectProperty_getLeft_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_getLeft_R_rhino_ast_AstNode])(ctx, (frame[5].o));
	((func_rhino_IRFactory_decompile_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_decompile_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2264);
	if ((frame[6].i) != 0) goto label_11;
	}
	{
	LINE_NUMBER(2265);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (104));
	LINE_NUMBER(2266);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ObjectProperty_getRight_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_getRight_R_rhino_ast_AstNode])(ctx, (frame[5].o));
	((func_rhino_IRFactory_decompile_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_decompile_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(2268);
	if ((frame[4].i) >= ((frame[3].i) - (jint(1)))) goto label_14;
	}
	{
	LINE_NUMBER(2269);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (90));
	}
label_14:;
	{
	LINE_NUMBER(2259);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2272);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (87));
	LINE_NUMBER(2273);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_IRFactory_decompilePropertyGet_rhino_ast_PropertyGet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:decompilePropertyGet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2277);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_PropertyGet_getTarget_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_PropertyGet_getTarget_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	((func_rhino_IRFactory_decompile_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_decompile_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2278);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (109));
	LINE_NUMBER(2279);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_PropertyGet_getProperty_R_rhino_ast_Name) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_PropertyGet_getProperty_R_rhino_ast_Name])(ctx, (frame[1].o));
	((func_rhino_IRFactory_decompile_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_decompile_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2280);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_IRFactory_decompileElementGet_rhino_ast_ElementGet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IRFactory:decompileElementGet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2284);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ElementGet_getTarget_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ElementGet_getTarget_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	((func_rhino_IRFactory_decompile_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_decompile_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2285);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (84));
	LINE_NUMBER(2286);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ElementGet_getElement_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ElementGet_getElement_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	((func_rhino_IRFactory_decompile_rhino_ast_AstNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IRFactory_decompile_rhino_ast_AstNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2287);
	sp[0].o = (jobject)((rhino_IRFactory *) NULL_CHECK((frame[0].o)))->F_decompiler;
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, sp[0].o, (85));
	LINE_NUMBER(2288);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_IRFactory[] {
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
	(void *) M_rhino_IRFactory_transformTree_rhino_ast_AstRoot_R_rhino_ast_ScriptNode,
	(void *) M_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformArrayComp_rhino_ast_ArrayComprehension_R_rhino_Node,
	(void *) M_rhino_IRFactory_arrayCompTransformHelper_rhino_ast_ArrayComprehension_java_lang_String_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformArrayLiteral_rhino_ast_ArrayLiteral_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformAssignment_rhino_ast_Assignment_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformBlock_rhino_ast_AstNode_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformBreak_rhino_ast_BreakStatement_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformCondExpr_rhino_ast_ConditionalExpression_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformContinue_rhino_ast_ContinueStatement_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformDoLoop_rhino_ast_DoLoop_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformElementGet_rhino_ast_ElementGet_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformExprStmt_rhino_ast_ExpressionStatement_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformForInLoop_rhino_ast_ForInLoop_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformForLoop_rhino_ast_ForLoop_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformFunction_rhino_ast_FunctionNode_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformFunctionCall_rhino_ast_FunctionCall_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformGenExpr_rhino_ast_GeneratorExpression_R_rhino_Node,
	(void *) M_rhino_IRFactory_genExprTransformHelper_rhino_ast_GeneratorExpression_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformIf_rhino_ast_IfStatement_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformInfix_rhino_ast_InfixExpression_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformLabeledStatement_rhino_ast_LabeledStatement_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformLetNode_rhino_ast_LetNode_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformLiteral_rhino_ast_AstNode_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformName_rhino_ast_Name_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformNewExpr_rhino_ast_NewExpression_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformNumber_rhino_ast_NumberLiteral_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformObjectLiteral_rhino_ast_ObjectLiteral_R_rhino_Node,
	(void *) M_rhino_IRFactory_getPropKey_rhino_Node_R_java_lang_Object,
	(void *) M_rhino_IRFactory_transformParenExpr_rhino_ast_ParenthesizedExpression_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformPropertyGet_rhino_ast_PropertyGet_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformRegExp_rhino_ast_RegExpLiteral_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformReturn_rhino_ast_ReturnStatement_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformScript_rhino_ast_ScriptNode_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformString_rhino_ast_StringLiteral_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformSwitch_rhino_ast_SwitchStatement_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformThrow_rhino_ast_ThrowStatement_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformTry_rhino_ast_TryStatement_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformUnary_rhino_ast_UnaryExpression_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformVariables_rhino_ast_VariableDeclaration_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformVariableInitializers_rhino_ast_VariableDeclaration_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformWhileLoop_rhino_ast_WhileLoop_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformWith_rhino_ast_WithStatement_R_rhino_Node,
	(void *) M_rhino_IRFactory_transformYield_rhino_ast_Yield_R_rhino_Node,
	(void *) M_rhino_IRFactory_addSwitchCase_rhino_Node_rhino_Node_rhino_Node,
	(void *) M_rhino_IRFactory_closeSwitch_rhino_Node,
	(void *) M_rhino_IRFactory_createExprStatementNoReturn_rhino_Node_int_R_rhino_Node,
	(void *) M_rhino_IRFactory_createString_java_lang_String_R_rhino_Node,
	(void *) M_rhino_IRFactory_createCatch_java_lang_String_rhino_Node_rhino_Node_int_R_rhino_Node,
	(void *) M_rhino_IRFactory_initFunction_rhino_ast_FunctionNode_int_rhino_Node_int_R_rhino_Node,
	(void *) M_rhino_IRFactory_createLoopNode_rhino_Node_int_R_rhino_ast_Scope,
	(void *) M_rhino_IRFactory_createFor_rhino_ast_Scope_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node,
	(void *) M_rhino_IRFactory_createLoop_rhino_ast_Jump_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node,
	(void *) M_rhino_IRFactory_createForIn_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_boolean_boolean_R_rhino_Node,
	(void *) M_rhino_IRFactory_createTryCatchFinally_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node,
	(void *) M_rhino_IRFactory_createWith_rhino_Node_rhino_Node_int_R_rhino_Node,
	(void *) M_rhino_IRFactory_createIf_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node,
	(void *) M_rhino_IRFactory_createCondExpr_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node,
	(void *) M_rhino_IRFactory_createUnary_int_rhino_Node_R_rhino_Node,
	(void *) M_rhino_IRFactory_createCallOrNew_int_rhino_Node_R_rhino_Node,
	(void *) M_rhino_IRFactory_createIncDec_int_boolean_rhino_Node_R_rhino_Node,
	(void *) M_rhino_IRFactory_createPropertyGet_rhino_Node_java_lang_String_java_lang_String_int_R_rhino_Node,
	(void *) M_rhino_IRFactory_createElementGet_rhino_Node_java_lang_String_rhino_Node_int_R_rhino_Node,
	(void *) M_rhino_IRFactory_createMemberRefGet_rhino_Node_java_lang_String_rhino_Node_int_R_rhino_Node,
	(void *) M_rhino_IRFactory_createBinary_int_rhino_Node_rhino_Node_R_rhino_Node,
	(void *) M_rhino_IRFactory_createAssignment_int_rhino_Node_rhino_Node_R_rhino_Node,
	(void *) M_rhino_IRFactory_createUseLocal_rhino_Node_R_rhino_Node,
	(void *) M_rhino_IRFactory_makeJump_int_rhino_Node_R_rhino_ast_Jump,
	(void *) M_rhino_IRFactory_makeReference_rhino_Node_R_rhino_Node,
	(void *) M_rhino_IRFactory_isDestructuring_rhino_Node_R_boolean,
	(void *) M_rhino_IRFactory_decompileFunctionHeader_rhino_ast_FunctionNode_R_rhino_Node,
	(void *) M_rhino_IRFactory_decompile_rhino_ast_AstNode,
	(void *) M_rhino_IRFactory_decompileArrayLiteral_rhino_ast_ArrayLiteral,
	(void *) M_rhino_IRFactory_decompileObjectLiteral_rhino_ast_ObjectLiteral,
	(void *) M_rhino_IRFactory_decompilePropertyGet_rhino_ast_PropertyGet,
	(void *) M_rhino_IRFactory_decompileElementGet_rhino_ast_ElementGet,
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
	{ "transformTree", "(Lrhino/ast/AstRoot;)Lrhino/ast/ScriptNode;" },
	{ "transform", "(Lrhino/ast/AstNode;)Lrhino/Node;" },
	{ "transformArrayComp", "(Lrhino/ast/ArrayComprehension;)Lrhino/Node;" },
	{ "arrayCompTransformHelper", "(Lrhino/ast/ArrayComprehension;Ljava/lang/String;)Lrhino/Node;" },
	{ "transformArrayLiteral", "(Lrhino/ast/ArrayLiteral;)Lrhino/Node;" },
	{ "transformAssignment", "(Lrhino/ast/Assignment;)Lrhino/Node;" },
	{ "transformBlock", "(Lrhino/ast/AstNode;)Lrhino/Node;" },
	{ "transformBreak", "(Lrhino/ast/BreakStatement;)Lrhino/Node;" },
	{ "transformCondExpr", "(Lrhino/ast/ConditionalExpression;)Lrhino/Node;" },
	{ "transformContinue", "(Lrhino/ast/ContinueStatement;)Lrhino/Node;" },
	{ "transformDoLoop", "(Lrhino/ast/DoLoop;)Lrhino/Node;" },
	{ "transformElementGet", "(Lrhino/ast/ElementGet;)Lrhino/Node;" },
	{ "transformExprStmt", "(Lrhino/ast/ExpressionStatement;)Lrhino/Node;" },
	{ "transformForInLoop", "(Lrhino/ast/ForInLoop;)Lrhino/Node;" },
	{ "transformForLoop", "(Lrhino/ast/ForLoop;)Lrhino/Node;" },
	{ "transformFunction", "(Lrhino/ast/FunctionNode;)Lrhino/Node;" },
	{ "transformFunctionCall", "(Lrhino/ast/FunctionCall;)Lrhino/Node;" },
	{ "transformGenExpr", "(Lrhino/ast/GeneratorExpression;)Lrhino/Node;" },
	{ "genExprTransformHelper", "(Lrhino/ast/GeneratorExpression;)Lrhino/Node;" },
	{ "transformIf", "(Lrhino/ast/IfStatement;)Lrhino/Node;" },
	{ "transformInfix", "(Lrhino/ast/InfixExpression;)Lrhino/Node;" },
	{ "transformLabeledStatement", "(Lrhino/ast/LabeledStatement;)Lrhino/Node;" },
	{ "transformLetNode", "(Lrhino/ast/LetNode;)Lrhino/Node;" },
	{ "transformLiteral", "(Lrhino/ast/AstNode;)Lrhino/Node;" },
	{ "transformName", "(Lrhino/ast/Name;)Lrhino/Node;" },
	{ "transformNewExpr", "(Lrhino/ast/NewExpression;)Lrhino/Node;" },
	{ "transformNumber", "(Lrhino/ast/NumberLiteral;)Lrhino/Node;" },
	{ "transformObjectLiteral", "(Lrhino/ast/ObjectLiteral;)Lrhino/Node;" },
	{ "getPropKey", "(Lrhino/Node;)Ljava/lang/Object;" },
	{ "transformParenExpr", "(Lrhino/ast/ParenthesizedExpression;)Lrhino/Node;" },
	{ "transformPropertyGet", "(Lrhino/ast/PropertyGet;)Lrhino/Node;" },
	{ "transformRegExp", "(Lrhino/ast/RegExpLiteral;)Lrhino/Node;" },
	{ "transformReturn", "(Lrhino/ast/ReturnStatement;)Lrhino/Node;" },
	{ "transformScript", "(Lrhino/ast/ScriptNode;)Lrhino/Node;" },
	{ "transformString", "(Lrhino/ast/StringLiteral;)Lrhino/Node;" },
	{ "transformSwitch", "(Lrhino/ast/SwitchStatement;)Lrhino/Node;" },
	{ "transformThrow", "(Lrhino/ast/ThrowStatement;)Lrhino/Node;" },
	{ "transformTry", "(Lrhino/ast/TryStatement;)Lrhino/Node;" },
	{ "transformUnary", "(Lrhino/ast/UnaryExpression;)Lrhino/Node;" },
	{ "transformVariables", "(Lrhino/ast/VariableDeclaration;)Lrhino/Node;" },
	{ "transformVariableInitializers", "(Lrhino/ast/VariableDeclaration;)Lrhino/Node;" },
	{ "transformWhileLoop", "(Lrhino/ast/WhileLoop;)Lrhino/Node;" },
	{ "transformWith", "(Lrhino/ast/WithStatement;)Lrhino/Node;" },
	{ "transformYield", "(Lrhino/ast/Yield;)Lrhino/Node;" },
	{ "addSwitchCase", "(Lrhino/Node;Lrhino/Node;Lrhino/Node;)V" },
	{ "closeSwitch", "(Lrhino/Node;)V" },
	{ "createExprStatementNoReturn", "(Lrhino/Node;I)Lrhino/Node;" },
	{ "createString", "(Ljava/lang/String;)Lrhino/Node;" },
	{ "createCatch", "(Ljava/lang/String;Lrhino/Node;Lrhino/Node;I)Lrhino/Node;" },
	{ "initFunction", "(Lrhino/ast/FunctionNode;ILrhino/Node;I)Lrhino/Node;" },
	{ "createLoopNode", "(Lrhino/Node;I)Lrhino/ast/Scope;" },
	{ "createFor", "(Lrhino/ast/Scope;Lrhino/Node;Lrhino/Node;Lrhino/Node;Lrhino/Node;)Lrhino/Node;" },
	{ "createLoop", "(Lrhino/ast/Jump;ILrhino/Node;Lrhino/Node;Lrhino/Node;Lrhino/Node;)Lrhino/Node;" },
	{ "createForIn", "(ILrhino/Node;Lrhino/Node;Lrhino/Node;Lrhino/Node;ZZ)Lrhino/Node;" },
	{ "createTryCatchFinally", "(Lrhino/Node;Lrhino/Node;Lrhino/Node;I)Lrhino/Node;" },
	{ "createWith", "(Lrhino/Node;Lrhino/Node;I)Lrhino/Node;" },
	{ "createIf", "(Lrhino/Node;Lrhino/Node;Lrhino/Node;I)Lrhino/Node;" },
	{ "createCondExpr", "(Lrhino/Node;Lrhino/Node;Lrhino/Node;)Lrhino/Node;" },
	{ "createUnary", "(ILrhino/Node;)Lrhino/Node;" },
	{ "createCallOrNew", "(ILrhino/Node;)Lrhino/Node;" },
	{ "createIncDec", "(IZLrhino/Node;)Lrhino/Node;" },
	{ "createPropertyGet", "(Lrhino/Node;Ljava/lang/String;Ljava/lang/String;I)Lrhino/Node;" },
	{ "createElementGet", "(Lrhino/Node;Ljava/lang/String;Lrhino/Node;I)Lrhino/Node;" },
	{ "createMemberRefGet", "(Lrhino/Node;Ljava/lang/String;Lrhino/Node;I)Lrhino/Node;" },
	{ "createBinary", "(ILrhino/Node;Lrhino/Node;)Lrhino/Node;" },
	{ "createAssignment", "(ILrhino/Node;Lrhino/Node;)Lrhino/Node;" },
	{ "createUseLocal", "(Lrhino/Node;)Lrhino/Node;" },
	{ "makeJump", "(ILrhino/Node;)Lrhino/ast/Jump;" },
	{ "makeReference", "(Lrhino/Node;)Lrhino/Node;" },
	{ "isDestructuring", "(Lrhino/Node;)Z" },
	{ "decompileFunctionHeader", "(Lrhino/ast/FunctionNode;)Lrhino/Node;" },
	{ "decompile", "(Lrhino/ast/AstNode;)V" },
	{ "decompileArrayLiteral", "(Lrhino/ast/ArrayLiteral;)V" },
	{ "decompileObjectLiteral", "(Lrhino/ast/ObjectLiteral;)V" },
	{ "decompilePropertyGet", "(Lrhino/ast/PropertyGet;)V" },
	{ "decompileElementGet", "(Lrhino/ast/ElementGet;)V" },
};

static FieldMetadata fields[] {
	{ "LOOP_DO_WHILE", &class_int, (intptr_t) &SF_rhino_IRFactory_LOOP_DO_WHILE, "I", 26 },
	{ "LOOP_WHILE", &class_int, (intptr_t) &SF_rhino_IRFactory_LOOP_WHILE, "I", 26 },
	{ "LOOP_FOR", &class_int, (intptr_t) &SF_rhino_IRFactory_LOOP_FOR, "I", 26 },
	{ "ALWAYS_TRUE_BOOLEAN", &class_int, (intptr_t) &SF_rhino_IRFactory_ALWAYS_TRUE_BOOLEAN, "I", 26 },
	{ "ALWAYS_FALSE_BOOLEAN", &class_int, (intptr_t) &SF_rhino_IRFactory_ALWAYS_FALSE_BOOLEAN, "I", 26 },
	{ "decompiler", &class_rhino_Decompiler, offsetof(rhino_IRFactory, F_decompiler), "Lrhino/Decompiler;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_IRFactory, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_IRFactory_rhino_CompilerEnvirons, 0, "(Lrhino/CompilerEnvirons;)V", 1 },
	{ "<init>", (intptr_t) init_rhino_IRFactory_rhino_CompilerEnvirons_rhino_ErrorReporter, 0, "(Lrhino/CompilerEnvirons;Lrhino/ErrorReporter;)V", 1 },
	{ "transformTree", (intptr_t) M_rhino_IRFactory_transformTree_rhino_ast_AstRoot_R_rhino_ast_ScriptNode, VTABLE_rhino_IRFactory_transformTree_rhino_ast_AstRoot_R_rhino_ast_ScriptNode, "(Lrhino/ast/AstRoot;)Lrhino/ast/ScriptNode;", 1 },
	{ "transform", (intptr_t) M_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node, VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node, "(Lrhino/ast/AstNode;)Lrhino/Node;", 1 },
	{ "transformArrayComp", (intptr_t) M_rhino_IRFactory_transformArrayComp_rhino_ast_ArrayComprehension_R_rhino_Node, VTABLE_rhino_IRFactory_transformArrayComp_rhino_ast_ArrayComprehension_R_rhino_Node, "(Lrhino/ast/ArrayComprehension;)Lrhino/Node;", 2 },
	{ "arrayCompTransformHelper", (intptr_t) M_rhino_IRFactory_arrayCompTransformHelper_rhino_ast_ArrayComprehension_java_lang_String_R_rhino_Node, VTABLE_rhino_IRFactory_arrayCompTransformHelper_rhino_ast_ArrayComprehension_java_lang_String_R_rhino_Node, "(Lrhino/ast/ArrayComprehension;Ljava/lang/String;)Lrhino/Node;", 2 },
	{ "transformArrayLiteral", (intptr_t) M_rhino_IRFactory_transformArrayLiteral_rhino_ast_ArrayLiteral_R_rhino_Node, VTABLE_rhino_IRFactory_transformArrayLiteral_rhino_ast_ArrayLiteral_R_rhino_Node, "(Lrhino/ast/ArrayLiteral;)Lrhino/Node;", 2 },
	{ "transformAssignment", (intptr_t) M_rhino_IRFactory_transformAssignment_rhino_ast_Assignment_R_rhino_Node, VTABLE_rhino_IRFactory_transformAssignment_rhino_ast_Assignment_R_rhino_Node, "(Lrhino/ast/Assignment;)Lrhino/Node;", 2 },
	{ "transformBlock", (intptr_t) M_rhino_IRFactory_transformBlock_rhino_ast_AstNode_R_rhino_Node, VTABLE_rhino_IRFactory_transformBlock_rhino_ast_AstNode_R_rhino_Node, "(Lrhino/ast/AstNode;)Lrhino/Node;", 2 },
	{ "transformBreak", (intptr_t) M_rhino_IRFactory_transformBreak_rhino_ast_BreakStatement_R_rhino_Node, VTABLE_rhino_IRFactory_transformBreak_rhino_ast_BreakStatement_R_rhino_Node, "(Lrhino/ast/BreakStatement;)Lrhino/Node;", 2 },
	{ "transformCondExpr", (intptr_t) M_rhino_IRFactory_transformCondExpr_rhino_ast_ConditionalExpression_R_rhino_Node, VTABLE_rhino_IRFactory_transformCondExpr_rhino_ast_ConditionalExpression_R_rhino_Node, "(Lrhino/ast/ConditionalExpression;)Lrhino/Node;", 2 },
	{ "transformContinue", (intptr_t) M_rhino_IRFactory_transformContinue_rhino_ast_ContinueStatement_R_rhino_Node, VTABLE_rhino_IRFactory_transformContinue_rhino_ast_ContinueStatement_R_rhino_Node, "(Lrhino/ast/ContinueStatement;)Lrhino/Node;", 2 },
	{ "transformDoLoop", (intptr_t) M_rhino_IRFactory_transformDoLoop_rhino_ast_DoLoop_R_rhino_Node, VTABLE_rhino_IRFactory_transformDoLoop_rhino_ast_DoLoop_R_rhino_Node, "(Lrhino/ast/DoLoop;)Lrhino/Node;", 2 },
	{ "transformElementGet", (intptr_t) M_rhino_IRFactory_transformElementGet_rhino_ast_ElementGet_R_rhino_Node, VTABLE_rhino_IRFactory_transformElementGet_rhino_ast_ElementGet_R_rhino_Node, "(Lrhino/ast/ElementGet;)Lrhino/Node;", 2 },
	{ "transformExprStmt", (intptr_t) M_rhino_IRFactory_transformExprStmt_rhino_ast_ExpressionStatement_R_rhino_Node, VTABLE_rhino_IRFactory_transformExprStmt_rhino_ast_ExpressionStatement_R_rhino_Node, "(Lrhino/ast/ExpressionStatement;)Lrhino/Node;", 2 },
	{ "transformForInLoop", (intptr_t) M_rhino_IRFactory_transformForInLoop_rhino_ast_ForInLoop_R_rhino_Node, VTABLE_rhino_IRFactory_transformForInLoop_rhino_ast_ForInLoop_R_rhino_Node, "(Lrhino/ast/ForInLoop;)Lrhino/Node;", 2 },
	{ "transformForLoop", (intptr_t) M_rhino_IRFactory_transformForLoop_rhino_ast_ForLoop_R_rhino_Node, VTABLE_rhino_IRFactory_transformForLoop_rhino_ast_ForLoop_R_rhino_Node, "(Lrhino/ast/ForLoop;)Lrhino/Node;", 2 },
	{ "transformFunction", (intptr_t) M_rhino_IRFactory_transformFunction_rhino_ast_FunctionNode_R_rhino_Node, VTABLE_rhino_IRFactory_transformFunction_rhino_ast_FunctionNode_R_rhino_Node, "(Lrhino/ast/FunctionNode;)Lrhino/Node;", 2 },
	{ "transformFunctionCall", (intptr_t) M_rhino_IRFactory_transformFunctionCall_rhino_ast_FunctionCall_R_rhino_Node, VTABLE_rhino_IRFactory_transformFunctionCall_rhino_ast_FunctionCall_R_rhino_Node, "(Lrhino/ast/FunctionCall;)Lrhino/Node;", 2 },
	{ "transformGenExpr", (intptr_t) M_rhino_IRFactory_transformGenExpr_rhino_ast_GeneratorExpression_R_rhino_Node, VTABLE_rhino_IRFactory_transformGenExpr_rhino_ast_GeneratorExpression_R_rhino_Node, "(Lrhino/ast/GeneratorExpression;)Lrhino/Node;", 2 },
	{ "genExprTransformHelper", (intptr_t) M_rhino_IRFactory_genExprTransformHelper_rhino_ast_GeneratorExpression_R_rhino_Node, VTABLE_rhino_IRFactory_genExprTransformHelper_rhino_ast_GeneratorExpression_R_rhino_Node, "(Lrhino/ast/GeneratorExpression;)Lrhino/Node;", 2 },
	{ "transformIf", (intptr_t) M_rhino_IRFactory_transformIf_rhino_ast_IfStatement_R_rhino_Node, VTABLE_rhino_IRFactory_transformIf_rhino_ast_IfStatement_R_rhino_Node, "(Lrhino/ast/IfStatement;)Lrhino/Node;", 2 },
	{ "transformInfix", (intptr_t) M_rhino_IRFactory_transformInfix_rhino_ast_InfixExpression_R_rhino_Node, VTABLE_rhino_IRFactory_transformInfix_rhino_ast_InfixExpression_R_rhino_Node, "(Lrhino/ast/InfixExpression;)Lrhino/Node;", 2 },
	{ "transformLabeledStatement", (intptr_t) M_rhino_IRFactory_transformLabeledStatement_rhino_ast_LabeledStatement_R_rhino_Node, VTABLE_rhino_IRFactory_transformLabeledStatement_rhino_ast_LabeledStatement_R_rhino_Node, "(Lrhino/ast/LabeledStatement;)Lrhino/Node;", 2 },
	{ "transformLetNode", (intptr_t) M_rhino_IRFactory_transformLetNode_rhino_ast_LetNode_R_rhino_Node, VTABLE_rhino_IRFactory_transformLetNode_rhino_ast_LetNode_R_rhino_Node, "(Lrhino/ast/LetNode;)Lrhino/Node;", 2 },
	{ "transformLiteral", (intptr_t) M_rhino_IRFactory_transformLiteral_rhino_ast_AstNode_R_rhino_Node, VTABLE_rhino_IRFactory_transformLiteral_rhino_ast_AstNode_R_rhino_Node, "(Lrhino/ast/AstNode;)Lrhino/Node;", 2 },
	{ "transformName", (intptr_t) M_rhino_IRFactory_transformName_rhino_ast_Name_R_rhino_Node, VTABLE_rhino_IRFactory_transformName_rhino_ast_Name_R_rhino_Node, "(Lrhino/ast/Name;)Lrhino/Node;", 2 },
	{ "transformNewExpr", (intptr_t) M_rhino_IRFactory_transformNewExpr_rhino_ast_NewExpression_R_rhino_Node, VTABLE_rhino_IRFactory_transformNewExpr_rhino_ast_NewExpression_R_rhino_Node, "(Lrhino/ast/NewExpression;)Lrhino/Node;", 2 },
	{ "transformNumber", (intptr_t) M_rhino_IRFactory_transformNumber_rhino_ast_NumberLiteral_R_rhino_Node, VTABLE_rhino_IRFactory_transformNumber_rhino_ast_NumberLiteral_R_rhino_Node, "(Lrhino/ast/NumberLiteral;)Lrhino/Node;", 2 },
	{ "transformObjectLiteral", (intptr_t) M_rhino_IRFactory_transformObjectLiteral_rhino_ast_ObjectLiteral_R_rhino_Node, VTABLE_rhino_IRFactory_transformObjectLiteral_rhino_ast_ObjectLiteral_R_rhino_Node, "(Lrhino/ast/ObjectLiteral;)Lrhino/Node;", 2 },
	{ "getPropKey", (intptr_t) M_rhino_IRFactory_getPropKey_rhino_Node_R_java_lang_Object, VTABLE_rhino_IRFactory_getPropKey_rhino_Node_R_java_lang_Object, "(Lrhino/Node;)Ljava/lang/Object;", 2 },
	{ "transformParenExpr", (intptr_t) M_rhino_IRFactory_transformParenExpr_rhino_ast_ParenthesizedExpression_R_rhino_Node, VTABLE_rhino_IRFactory_transformParenExpr_rhino_ast_ParenthesizedExpression_R_rhino_Node, "(Lrhino/ast/ParenthesizedExpression;)Lrhino/Node;", 2 },
	{ "transformPropertyGet", (intptr_t) M_rhino_IRFactory_transformPropertyGet_rhino_ast_PropertyGet_R_rhino_Node, VTABLE_rhino_IRFactory_transformPropertyGet_rhino_ast_PropertyGet_R_rhino_Node, "(Lrhino/ast/PropertyGet;)Lrhino/Node;", 2 },
	{ "transformRegExp", (intptr_t) M_rhino_IRFactory_transformRegExp_rhino_ast_RegExpLiteral_R_rhino_Node, VTABLE_rhino_IRFactory_transformRegExp_rhino_ast_RegExpLiteral_R_rhino_Node, "(Lrhino/ast/RegExpLiteral;)Lrhino/Node;", 2 },
	{ "transformReturn", (intptr_t) M_rhino_IRFactory_transformReturn_rhino_ast_ReturnStatement_R_rhino_Node, VTABLE_rhino_IRFactory_transformReturn_rhino_ast_ReturnStatement_R_rhino_Node, "(Lrhino/ast/ReturnStatement;)Lrhino/Node;", 2 },
	{ "transformScript", (intptr_t) M_rhino_IRFactory_transformScript_rhino_ast_ScriptNode_R_rhino_Node, VTABLE_rhino_IRFactory_transformScript_rhino_ast_ScriptNode_R_rhino_Node, "(Lrhino/ast/ScriptNode;)Lrhino/Node;", 2 },
	{ "transformString", (intptr_t) M_rhino_IRFactory_transformString_rhino_ast_StringLiteral_R_rhino_Node, VTABLE_rhino_IRFactory_transformString_rhino_ast_StringLiteral_R_rhino_Node, "(Lrhino/ast/StringLiteral;)Lrhino/Node;", 2 },
	{ "transformSwitch", (intptr_t) M_rhino_IRFactory_transformSwitch_rhino_ast_SwitchStatement_R_rhino_Node, VTABLE_rhino_IRFactory_transformSwitch_rhino_ast_SwitchStatement_R_rhino_Node, "(Lrhino/ast/SwitchStatement;)Lrhino/Node;", 2 },
	{ "transformThrow", (intptr_t) M_rhino_IRFactory_transformThrow_rhino_ast_ThrowStatement_R_rhino_Node, VTABLE_rhino_IRFactory_transformThrow_rhino_ast_ThrowStatement_R_rhino_Node, "(Lrhino/ast/ThrowStatement;)Lrhino/Node;", 2 },
	{ "transformTry", (intptr_t) M_rhino_IRFactory_transformTry_rhino_ast_TryStatement_R_rhino_Node, VTABLE_rhino_IRFactory_transformTry_rhino_ast_TryStatement_R_rhino_Node, "(Lrhino/ast/TryStatement;)Lrhino/Node;", 2 },
	{ "transformUnary", (intptr_t) M_rhino_IRFactory_transformUnary_rhino_ast_UnaryExpression_R_rhino_Node, VTABLE_rhino_IRFactory_transformUnary_rhino_ast_UnaryExpression_R_rhino_Node, "(Lrhino/ast/UnaryExpression;)Lrhino/Node;", 2 },
	{ "transformVariables", (intptr_t) M_rhino_IRFactory_transformVariables_rhino_ast_VariableDeclaration_R_rhino_Node, VTABLE_rhino_IRFactory_transformVariables_rhino_ast_VariableDeclaration_R_rhino_Node, "(Lrhino/ast/VariableDeclaration;)Lrhino/Node;", 2 },
	{ "transformVariableInitializers", (intptr_t) M_rhino_IRFactory_transformVariableInitializers_rhino_ast_VariableDeclaration_R_rhino_Node, VTABLE_rhino_IRFactory_transformVariableInitializers_rhino_ast_VariableDeclaration_R_rhino_Node, "(Lrhino/ast/VariableDeclaration;)Lrhino/Node;", 2 },
	{ "transformWhileLoop", (intptr_t) M_rhino_IRFactory_transformWhileLoop_rhino_ast_WhileLoop_R_rhino_Node, VTABLE_rhino_IRFactory_transformWhileLoop_rhino_ast_WhileLoop_R_rhino_Node, "(Lrhino/ast/WhileLoop;)Lrhino/Node;", 2 },
	{ "transformWith", (intptr_t) M_rhino_IRFactory_transformWith_rhino_ast_WithStatement_R_rhino_Node, VTABLE_rhino_IRFactory_transformWith_rhino_ast_WithStatement_R_rhino_Node, "(Lrhino/ast/WithStatement;)Lrhino/Node;", 2 },
	{ "transformYield", (intptr_t) M_rhino_IRFactory_transformYield_rhino_ast_Yield_R_rhino_Node, VTABLE_rhino_IRFactory_transformYield_rhino_ast_Yield_R_rhino_Node, "(Lrhino/ast/Yield;)Lrhino/Node;", 2 },
	{ "addSwitchCase", (intptr_t) M_rhino_IRFactory_addSwitchCase_rhino_Node_rhino_Node_rhino_Node, VTABLE_rhino_IRFactory_addSwitchCase_rhino_Node_rhino_Node_rhino_Node, "(Lrhino/Node;Lrhino/Node;Lrhino/Node;)V", 2 },
	{ "closeSwitch", (intptr_t) M_rhino_IRFactory_closeSwitch_rhino_Node, VTABLE_rhino_IRFactory_closeSwitch_rhino_Node, "(Lrhino/Node;)V", 2 },
	{ "createExprStatementNoReturn", (intptr_t) M_rhino_IRFactory_createExprStatementNoReturn_rhino_Node_int_R_rhino_Node, VTABLE_rhino_IRFactory_createExprStatementNoReturn_rhino_Node_int_R_rhino_Node, "(Lrhino/Node;I)Lrhino/Node;", 2 },
	{ "createString", (intptr_t) M_rhino_IRFactory_createString_java_lang_String_R_rhino_Node, VTABLE_rhino_IRFactory_createString_java_lang_String_R_rhino_Node, "(Ljava/lang/String;)Lrhino/Node;", 2 },
	{ "createCatch", (intptr_t) M_rhino_IRFactory_createCatch_java_lang_String_rhino_Node_rhino_Node_int_R_rhino_Node, VTABLE_rhino_IRFactory_createCatch_java_lang_String_rhino_Node_rhino_Node_int_R_rhino_Node, "(Ljava/lang/String;Lrhino/Node;Lrhino/Node;I)Lrhino/Node;", 2 },
	{ "initFunction", (intptr_t) M_rhino_IRFactory_initFunction_rhino_ast_FunctionNode_int_rhino_Node_int_R_rhino_Node, VTABLE_rhino_IRFactory_initFunction_rhino_ast_FunctionNode_int_rhino_Node_int_R_rhino_Node, "(Lrhino/ast/FunctionNode;ILrhino/Node;I)Lrhino/Node;", 2 },
	{ "createLoopNode", (intptr_t) M_rhino_IRFactory_createLoopNode_rhino_Node_int_R_rhino_ast_Scope, VTABLE_rhino_IRFactory_createLoopNode_rhino_Node_int_R_rhino_ast_Scope, "(Lrhino/Node;I)Lrhino/ast/Scope;", 2 },
	{ "createFor", (intptr_t) M_rhino_IRFactory_createFor_rhino_ast_Scope_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node, VTABLE_rhino_IRFactory_createFor_rhino_ast_Scope_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node, "(Lrhino/ast/Scope;Lrhino/Node;Lrhino/Node;Lrhino/Node;Lrhino/Node;)Lrhino/Node;", 2 },
	{ "createLoop", (intptr_t) M_rhino_IRFactory_createLoop_rhino_ast_Jump_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node, VTABLE_rhino_IRFactory_createLoop_rhino_ast_Jump_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node, "(Lrhino/ast/Jump;ILrhino/Node;Lrhino/Node;Lrhino/Node;Lrhino/Node;)Lrhino/Node;", 2 },
	{ "createForIn", (intptr_t) M_rhino_IRFactory_createForIn_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_boolean_boolean_R_rhino_Node, VTABLE_rhino_IRFactory_createForIn_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_boolean_boolean_R_rhino_Node, "(ILrhino/Node;Lrhino/Node;Lrhino/Node;Lrhino/Node;ZZ)Lrhino/Node;", 2 },
	{ "createTryCatchFinally", (intptr_t) M_rhino_IRFactory_createTryCatchFinally_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node, VTABLE_rhino_IRFactory_createTryCatchFinally_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node, "(Lrhino/Node;Lrhino/Node;Lrhino/Node;I)Lrhino/Node;", 2 },
	{ "createWith", (intptr_t) M_rhino_IRFactory_createWith_rhino_Node_rhino_Node_int_R_rhino_Node, VTABLE_rhino_IRFactory_createWith_rhino_Node_rhino_Node_int_R_rhino_Node, "(Lrhino/Node;Lrhino/Node;I)Lrhino/Node;", 2 },
	{ "createIf", (intptr_t) M_rhino_IRFactory_createIf_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node, VTABLE_rhino_IRFactory_createIf_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node, "(Lrhino/Node;Lrhino/Node;Lrhino/Node;I)Lrhino/Node;", 2 },
	{ "createCondExpr", (intptr_t) M_rhino_IRFactory_createCondExpr_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node, VTABLE_rhino_IRFactory_createCondExpr_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node, "(Lrhino/Node;Lrhino/Node;Lrhino/Node;)Lrhino/Node;", 2 },
	{ "createUnary", (intptr_t) M_rhino_IRFactory_createUnary_int_rhino_Node_R_rhino_Node, VTABLE_rhino_IRFactory_createUnary_int_rhino_Node_R_rhino_Node, "(ILrhino/Node;)Lrhino/Node;", 2 },
	{ "createCallOrNew", (intptr_t) M_rhino_IRFactory_createCallOrNew_int_rhino_Node_R_rhino_Node, VTABLE_rhino_IRFactory_createCallOrNew_int_rhino_Node_R_rhino_Node, "(ILrhino/Node;)Lrhino/Node;", 2 },
	{ "createIncDec", (intptr_t) M_rhino_IRFactory_createIncDec_int_boolean_rhino_Node_R_rhino_Node, VTABLE_rhino_IRFactory_createIncDec_int_boolean_rhino_Node_R_rhino_Node, "(IZLrhino/Node;)Lrhino/Node;", 2 },
	{ "createPropertyGet", (intptr_t) M_rhino_IRFactory_createPropertyGet_rhino_Node_java_lang_String_java_lang_String_int_R_rhino_Node, VTABLE_rhino_IRFactory_createPropertyGet_rhino_Node_java_lang_String_java_lang_String_int_R_rhino_Node, "(Lrhino/Node;Ljava/lang/String;Ljava/lang/String;I)Lrhino/Node;", 2 },
	{ "createElementGet", (intptr_t) M_rhino_IRFactory_createElementGet_rhino_Node_java_lang_String_rhino_Node_int_R_rhino_Node, VTABLE_rhino_IRFactory_createElementGet_rhino_Node_java_lang_String_rhino_Node_int_R_rhino_Node, "(Lrhino/Node;Ljava/lang/String;Lrhino/Node;I)Lrhino/Node;", 2 },
	{ "createMemberRefGet", (intptr_t) M_rhino_IRFactory_createMemberRefGet_rhino_Node_java_lang_String_rhino_Node_int_R_rhino_Node, VTABLE_rhino_IRFactory_createMemberRefGet_rhino_Node_java_lang_String_rhino_Node_int_R_rhino_Node, "(Lrhino/Node;Ljava/lang/String;Lrhino/Node;I)Lrhino/Node;", 2 },
	{ "createBinary", (intptr_t) M_rhino_IRFactory_createBinary_int_rhino_Node_rhino_Node_R_rhino_Node, VTABLE_rhino_IRFactory_createBinary_int_rhino_Node_rhino_Node_R_rhino_Node, "(ILrhino/Node;Lrhino/Node;)Lrhino/Node;", 2 },
	{ "createAssignment", (intptr_t) M_rhino_IRFactory_createAssignment_int_rhino_Node_rhino_Node_R_rhino_Node, VTABLE_rhino_IRFactory_createAssignment_int_rhino_Node_rhino_Node_R_rhino_Node, "(ILrhino/Node;Lrhino/Node;)Lrhino/Node;", 2 },
	{ "createUseLocal", (intptr_t) M_rhino_IRFactory_createUseLocal_rhino_Node_R_rhino_Node, VTABLE_rhino_IRFactory_createUseLocal_rhino_Node_R_rhino_Node, "(Lrhino/Node;)Lrhino/Node;", 2 },
	{ "makeJump", (intptr_t) M_rhino_IRFactory_makeJump_int_rhino_Node_R_rhino_ast_Jump, VTABLE_rhino_IRFactory_makeJump_int_rhino_Node_R_rhino_ast_Jump, "(ILrhino/Node;)Lrhino/ast/Jump;", 2 },
	{ "makeReference", (intptr_t) M_rhino_IRFactory_makeReference_rhino_Node_R_rhino_Node, VTABLE_rhino_IRFactory_makeReference_rhino_Node_R_rhino_Node, "(Lrhino/Node;)Lrhino/Node;", 2 },
	{ "isAlwaysDefinedBoolean", (intptr_t) SM_rhino_IRFactory_isAlwaysDefinedBoolean_rhino_Node_R_int, 0, "(Lrhino/Node;)I", 10 },
	{ "isDestructuring", (intptr_t) M_rhino_IRFactory_isDestructuring_rhino_Node_R_boolean, VTABLE_rhino_IRFactory_isDestructuring_rhino_Node_R_boolean, "(Lrhino/Node;)Z", 0 },
	{ "decompileFunctionHeader", (intptr_t) M_rhino_IRFactory_decompileFunctionHeader_rhino_ast_FunctionNode_R_rhino_Node, VTABLE_rhino_IRFactory_decompileFunctionHeader_rhino_ast_FunctionNode_R_rhino_Node, "(Lrhino/ast/FunctionNode;)Lrhino/Node;", 0 },
	{ "decompile", (intptr_t) M_rhino_IRFactory_decompile_rhino_ast_AstNode, VTABLE_rhino_IRFactory_decompile_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 0 },
	{ "decompileArrayLiteral", (intptr_t) M_rhino_IRFactory_decompileArrayLiteral_rhino_ast_ArrayLiteral, VTABLE_rhino_IRFactory_decompileArrayLiteral_rhino_ast_ArrayLiteral, "(Lrhino/ast/ArrayLiteral;)V", 0 },
	{ "decompileObjectLiteral", (intptr_t) M_rhino_IRFactory_decompileObjectLiteral_rhino_ast_ObjectLiteral, VTABLE_rhino_IRFactory_decompileObjectLiteral_rhino_ast_ObjectLiteral, "(Lrhino/ast/ObjectLiteral;)V", 0 },
	{ "decompilePropertyGet", (intptr_t) M_rhino_IRFactory_decompilePropertyGet_rhino_ast_PropertyGet, VTABLE_rhino_IRFactory_decompilePropertyGet_rhino_ast_PropertyGet, "(Lrhino/ast/PropertyGet;)V", 0 },
	{ "decompileElementGet", (intptr_t) M_rhino_IRFactory_decompileElementGet_rhino_ast_ElementGet, VTABLE_rhino_IRFactory_decompileElementGet_rhino_ast_ElementGet, "(Lrhino/ast/ElementGet;)V", 0 },
};

Class class_rhino_IRFactory{
		.nativeName = (intptr_t) "rhino/IRFactory",
		.parentClass = (intptr_t) &class_rhino_Parser,
		.size = sizeof(rhino_IRFactory),
		.classVtable = (intptr_t) vtable_rhino_IRFactory,
		.staticInitializer = (intptr_t) clinit_rhino_IRFactory,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_IRFactory,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 80,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 226,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_IRFactory = registerClass(&class_rhino_IRFactory);

}
