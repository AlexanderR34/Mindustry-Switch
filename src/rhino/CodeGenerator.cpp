#include "rhino/CodeGenerator.h"
#include "rhino/ast/AstNode.h"
#include "rhino/ast/Jump.h"
#include "rhino/InterpreterData.h"
#include "rhino/ast/CodeBlock.h"
#include "rhino/ast/FunctionNode.h"
#include "rhino/Kit.h"
#include "rhino/ast/ScriptNode.h"
#include "java/lang/String.h"
#include "rhino/ObjToIntMap.h"
#include "rhino/NodeTransformer.h"
#include "rhino/Icode.h"
#include "rhino/UintMap.h"
#include "rhino/ast/AstRoot.h"
#include "rhino/ast/Name.h"
#include "rhino/ast/VariableInitializer.h"
#include "rhino/Context.h"
#include "rhino/ObjToIntMap_Iterator.h"
#include "rhino/CodeGenerator.h"
#include "rhino/ObjArray.h"
#include "rhino/ast/Scope.h"
#include "rhino/RegExpProxy.h"
#include "rhino/Node.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/CompilerEnvirons.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/System.h"

extern "C" {

jint SF_rhino_CodeGenerator_MIN_LABEL_TABLE_SIZE;
jint SF_rhino_CodeGenerator_MIN_FIXUP_TABLE_SIZE;
jint SF_rhino_CodeGenerator_ECF_TAIL;

void mark_rhino_CodeGenerator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_Icode(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_CodeGenerator *) object;
	if (self->F_compilerEnv)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_compilerEnv)->clazz)->markFunction)((jobject) self->F_compilerEnv, mark, depth + 1);
	if (self->F_itsData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsData)->clazz)->markFunction)((jobject) self->F_itsData, mark, depth + 1);
	if (self->F_scriptOrFn)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scriptOrFn)->clazz)->markFunction)((jobject) self->F_scriptOrFn, mark, depth + 1);
	if (self->F_strings)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strings)->clazz)->markFunction)((jobject) self->F_strings, mark, depth + 1);
	if (self->F_labelTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_labelTable)->clazz)->markFunction)((jobject) self->F_labelTable, mark, depth + 1);
	if (self->F_fixupTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fixupTable)->clazz)->markFunction)((jobject) self->F_fixupTable, mark, depth + 1);
	if (self->F_literalIds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_literalIds)->clazz)->markFunction)((jobject) self->F_literalIds, mark, depth + 1);
}

void clinit_rhino_CodeGenerator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_Icode(ctx);
	SF_rhino_CodeGenerator_MIN_LABEL_TABLE_SIZE = jint(32);
	SF_rhino_CodeGenerator_MIN_FIXUP_TABLE_SIZE = jint(40);
	SF_rhino_CodeGenerator_ECF_TAIL = jint(1);
}

void init_rhino_CodeGenerator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_CodeGenerator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_rhino_Icode(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjToIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjToIntMap);
	init_rhino_ObjToIntMap_int(ctx, sp[1].o, (20));
	((rhino_CodeGenerator *) NULL_CHECK(sp[0].o))->F_strings = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjArray);
	init_rhino_ObjArray(ctx, sp[1].o);
	((rhino_CodeGenerator *) NULL_CHECK(sp[0].o))->F_literalIds = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_CodeGenerator_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_rhino_InterpreterData(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:compile", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(45);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_compilerEnv = (jref) (frame[1].o);
	LINE_NUMBER(52);
	clinit_rhino_NodeTransformer(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NodeTransformer);
	init_rhino_NodeTransformer(ctx, sp[0].o);
	((func_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_rhino_CompilerEnvirons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_rhino_CompilerEnvirons])(ctx, sp[0].o, (frame[2].o), (frame[1].o));
	LINE_NUMBER(59);
	if ((frame[4].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode])(ctx, (frame[2].o), (jint(0)));
	((rhino_CodeGenerator *) NULL_CHECK(sp[0].o))->F_scriptOrFn = (jref) sp[1].o;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(62);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn = (jref) (frame[2].o);
	}
label_5:;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_rhino_InterpreterData(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_InterpreterData);
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, (frame[1].o));
	sp[2].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	LINE_NUMBER(66);
	sp[2].o = (jobject)((func_rhino_ast_ScriptNode_getSourceName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getSourceName_R_java_lang_String])(ctx, sp[2].o);
	sp[3].o = frame[3].o;
	sp[4].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	LINE_NUMBER(68);
	jint temp1 = (jint)((func_rhino_ast_ScriptNode_isInStrictMode_R_boolean) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_rhino_ast_ScriptNode_isInStrictMode_R_boolean])(ctx, sp[4].o);
	init_rhino_InterpreterData_int_java_lang_String_java_lang_String_boolean(ctx, sp[1].o, temp0, sp[2].o, sp[3].o, temp1);
	((rhino_CodeGenerator *) NULL_CHECK(sp[0].o))->F_itsData = (jref) sp[1].o;
	LINE_NUMBER(69);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_topLevel = (jint(1));
	LINE_NUMBER(71);
	if ((frame[4].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(72);
	M_rhino_CodeGenerator_generateFunctionICode(ctx, (frame[0].o));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	M_rhino_CodeGenerator_generateICodeFromTree_rhino_Node(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_generateFunctionICode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:generateFunctionICode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsInFunctionFlag = (jint(1));
	LINE_NUMBER(82);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	frame[1].o = (checkCast(ctx, &class_rhino_ast_FunctionNode, sp[0].o));
	LINE_NUMBER(84);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_getFunctionType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionType_R_int])(ctx, (frame[1].o));
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsFunctionType = temp0;
	LINE_NUMBER(85);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	jint temp1 = (jint)((func_rhino_ast_FunctionNode_requiresActivation_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_requiresActivation_R_boolean])(ctx, (frame[1].o));
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsNeedsActivation = temp1;
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[1].o = (jobject)((func_rhino_ast_FunctionNode_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getName_R_java_lang_String])(ctx, (frame[1].o));
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsName = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_isGenerator_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_isGenerator_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(90);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-62));
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_getBaseLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getBaseLineno_R_int])(ctx, (frame[1].o));
	M_rhino_CodeGenerator_addUint16_int(ctx, sp[0].o, (temp0 & (jint(65535))));
	}
label_7:;
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_isInStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_isInStrictMode_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_isStrict = (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(96);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_isES6Generator_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_isES6Generator_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_isES6Generator = (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[1].o = (jobject)((func_rhino_ast_FunctionNode_getParent_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getParent_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_declaredAsVar = (isInstance(ctx, sp[1].o, &class_rhino_ast_VariableInitializer));
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ast_FunctionNode_getLastChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getLastChild_R_rhino_Node])(ctx, (frame[1].o));
	M_rhino_CodeGenerator_generateICodeFromTree_rhino_Node(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_generateICodeFromTree_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:generateICodeFromTree", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	M_rhino_CodeGenerator_generateNestedFunctions(ctx, (frame[0].o));
	LINE_NUMBER(108);
	M_rhino_CodeGenerator_generateRegExpLiterals(ctx, (frame[0].o));
	LINE_NUMBER(110);
	M_rhino_CodeGenerator_visitStatement_rhino_Node_int(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(111);
	M_rhino_CodeGenerator_fixLabelGotos(ctx, (frame[0].o));
	LINE_NUMBER(113);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	if (((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsFunctionType) != 0) goto label_5;
	}
	{
	LINE_NUMBER(114);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (65));
	}
label_5:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsICode;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop)) goto label_7;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop));
	frame[2].o = sp[0].o;
	LINE_NUMBER(121);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsICode;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsICode = (jref) (frame[2].o);
	}
label_7:;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_strings;
	jint temp0 = (jint)((func_rhino_ObjToIntMap_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_size_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsStringTable = (jref) (jobject(nullptr));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[1].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_strings;
	jint temp0 = (jint)((func_rhino_ObjToIntMap_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ObjToIntMap_size_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, temp0);
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsStringTable = (jref) sp[1].o;
	LINE_NUMBER(128);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_strings;
	sp[0].o = (jobject)((func_rhino_ObjToIntMap_newIterator_R_rhino_ObjToIntMap$Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_newIterator_R_rhino_ObjToIntMap$Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(129);
	((func_rhino_ObjToIntMap$Iterator_start) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_start])(ctx, (frame[2].o));
	}
label_16:;
	{
	jint temp0 = (jint)((func_rhino_ObjToIntMap$Iterator_done_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_done_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((func_rhino_ObjToIntMap$Iterator_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_getKey_R_java_lang_Object])(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(131);
	jint temp0 = (jint)((func_rhino_ObjToIntMap$Iterator_getValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_getValue_R_int])(ctx, (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(132);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsStringTable;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))) == nullptr) goto label_20;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_20:;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsStringTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[3].o);
	LINE_NUMBER(129);
	((func_rhino_ObjToIntMap$Iterator_next) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_next])(ctx, (frame[2].o));
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(136);
	if (((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_doubleTableTop) != 0) goto label_22;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsDoubleTable = (jref) (jobject(nullptr));
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsDoubleTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_doubleTableTop)) goto label_24;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject) createArray(ctx, &class_double, ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_doubleTableTop));
	frame[2].o = sp[0].o;
	LINE_NUMBER(140);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsDoubleTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_doubleTableTop));
	LINE_NUMBER(142);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsDoubleTable = (jref) (frame[2].o);
	}
label_24:;
	{
	LINE_NUMBER(144);
	if (((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_exceptionTableTop) == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsExceptionTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_exceptionTableTop)) goto label_28;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_exceptionTableTop));
	frame[2].o = sp[0].o;
	LINE_NUMBER(147);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsExceptionTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_exceptionTableTop));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsExceptionTable = (jref) (frame[2].o);
	}
label_28:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[1].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	jint temp0 = (jint)((func_rhino_ast_ScriptNode_getParamAndVarCount_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getParamAndVarCount_R_int])(ctx, sp[1].o);
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsMaxVars = temp0;
	LINE_NUMBER(155);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[1].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	jint temp1 = (jint)((rhino_InterpreterData *) NULL_CHECK(sp[1].o))->F_itsMaxVars;
	sp[1].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	jint temp2 = temp1 + ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[1].o))->F_itsMaxLocals);
	sp[1].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsMaxFrameArray = (temp2 + ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[1].o))->F_itsMaxStack));
	LINE_NUMBER(159);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[1].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	sp[1].o = (jobject)((func_rhino_ast_ScriptNode_getParamAndVarNames_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getParamAndVarNames_R_Array1_java_lang_String])(ctx, sp[1].o);
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_argNames = (jref) sp[1].o;
	LINE_NUMBER(160);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[1].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	sp[1].o = (jobject)((func_rhino_ast_ScriptNode_getParamAndVarConst_R_Array1_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getParamAndVarConst_R_Array1_boolean])(ctx, sp[1].o);
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_argIsConst = (jref) sp[1].o;
	LINE_NUMBER(161);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[1].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	jint temp3 = (jint)((func_rhino_ast_ScriptNode_getParamCount_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getParamCount_R_int])(ctx, sp[1].o);
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_argCount = temp3;
	LINE_NUMBER(163);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[1].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	jint temp4 = (jint)((func_rhino_ast_ScriptNode_getEncodedSourceStart_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getEncodedSourceStart_R_int])(ctx, sp[1].o);
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_encodedSourceStart = temp4;
	LINE_NUMBER(164);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[1].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	jint temp5 = (jint)((func_rhino_ast_ScriptNode_getEncodedSourceEnd_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getEncodedSourceEnd_R_int])(ctx, sp[1].o);
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_encodedSourceEnd = temp5;
	LINE_NUMBER(166);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_literalIds;
	jint temp6 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	if (temp6 == 0) goto label_39;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[1].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_literalIds;
	sp[1].o = (jobject)((func_rhino_ObjArray_toArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ObjArray_toArray_R_Array1_java_lang_Object])(ctx, sp[1].o);
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_literalIds = (jref) sp[1].o;
	}
label_39:;
	LINE_NUMBER(171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_generateNestedFunctions(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:generateNestedFunctions", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	jint temp0 = (jint)((func_rhino_ast_ScriptNode_getFunctionCount_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getFunctionCount_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(175);
	if ((frame[1].i) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_InterpreterData, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(178);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) == (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	sp[0].o = (jobject)((func_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(180);
	clinit_rhino_CodeGenerator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_CodeGenerator);
	init_rhino_CodeGenerator(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(181);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	((rhino_CodeGenerator *) NULL_CHECK(sp[0].o))->F_compilerEnv = (jref) sp[1].o;
	LINE_NUMBER(182);
	((rhino_CodeGenerator *) NULL_CHECK((frame[5].o)))->F_scriptOrFn = (jref) (frame[4].o);
	LINE_NUMBER(183);
	sp[0].o = frame[5].o;
	clinit_rhino_InterpreterData(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_InterpreterData);
	sp[2].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	init_rhino_InterpreterData_rhino_InterpreterData(ctx, sp[1].o, sp[2].o);
	((rhino_CodeGenerator *) NULL_CHECK(sp[0].o))->F_itsData = (jref) sp[1].o;
	LINE_NUMBER(184);
	M_rhino_CodeGenerator_generateFunctionICode(ctx, (frame[5].o));
	LINE_NUMBER(185);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[5].o)))->F_itsData;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(187);
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getParent_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getParent_R_rhino_ast_AstNode])(ctx, (frame[4].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(188);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_ast_AstRoot)) != 0) goto label_15;
	}
	{
	if ((isInstance(ctx, (frame[6].o), &class_rhino_ast_Scope)) != 0) goto label_15;
	}
	{
	if ((isInstance(ctx, (frame[6].o), &class_rhino_ast_CodeBlock)) != 0) goto label_15;
	}
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[5].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_declaredAsFunctionExpression = (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(178);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsNestedFunctions = (jref) (frame[2].o);
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_generateRegExpLiterals(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:generateRegExpLiterals", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	jint temp0 = (jint)((func_rhino_ast_ScriptNode_getRegexpCount_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getRegexpCount_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(199);
	if ((frame[1].i) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(202);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_checkRegExpProxy_rhino_Context_R_rhino_RegExpProxy(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(203);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(204);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) == (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	sp[0].o = (jobject)((func_rhino_ast_ScriptNode_getRegexpString_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getRegexpString_int_R_java_lang_String])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(206);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	sp[0].o = (jobject)((func_rhino_ast_ScriptNode_getRegexpFlags_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getRegexpFlags_int_R_java_lang_String])(ctx, sp[0].o, (frame[5].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(207);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((func_rhino_RegExpProxy_compileRegExp_rhino_Context_java_lang_String_java_lang_String_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_RegExpProxy, INDEX_rhino_RegExpProxy_compileRegExp_rhino_Context_java_lang_String_java_lang_String_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[2].o), (frame[6].o), (frame[7].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(204);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsRegExpLiterals = (jref) (frame[4].o);
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_updateLineNumber_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:updateLineNumber", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(213);
	jint temp0 = (jint)((func_rhino_Node_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getLineno_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(214);
	if ((frame[2].i) == ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_lineNumber)) goto label_2;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_2;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	if (((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_firstLinePC) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_firstLinePC = (frame[2].i);
	}
label_4:;
	{
	LINE_NUMBER(218);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_lineNumber = (frame[2].i);
	LINE_NUMBER(219);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-26));
	LINE_NUMBER(220);
	M_rhino_CodeGenerator_addUint16_int(ctx, (frame[0].o), ((frame[2].i) & (jint(65535))));
	}
label_2:;
	LINE_NUMBER(222);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_CodeGenerator_badTree_rhino_Node_R_java_lang_RuntimeException(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:badTree", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(225);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)((func_rhino_Node_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_toString_R_java_lang_String])(ctx, (frame[1].o));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_visitStatement_rhino_Node_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:visitStatement", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(229);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(230);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(231);
	switch((frame[3].i)) {
		case -62: goto label_3;
		case 2: goto label_4;
		case 3: goto label_5;
		case 4: goto label_6;
		case 5: goto label_7;
		case 6: goto label_8;
		case 7: goto label_8;
		case 50: goto label_9;
		case 51: goto label_10;
		case 57: goto label_11;
		case 58: goto label_12;
		case 59: goto label_12;
		case 60: goto label_12;
		case 61: goto label_12;
		case 65: goto label_13;
		case 82: goto label_14;
		case 110: goto label_15;
		case 115: goto label_16;
		case 124: goto label_17;
		case 126: goto label_18;
		case 129: goto label_17;
		case 130: goto label_17;
		case 131: goto label_17;
		case 132: goto label_19;
		case 133: goto label_17;
		case 134: goto label_20;
		case 135: goto label_20;
		case 136: goto label_21;
		case 137: goto label_22;
		case 142: goto label_23;
		case 161: goto label_24;
		default: goto label_25;
	}
	}
label_15:;
	{
	LINE_NUMBER(234);
	jint temp0 = (jint)((func_rhino_Node_getExistingIntProp_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getExistingIntProp_int_R_int])(ctx, (frame[1].o), (jint(1)));
	frame[5].i = temp0;
	LINE_NUMBER(235);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	sp[0].o = (jobject)((func_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(236);
	jint temp1 = (jint)((func_rhino_ast_FunctionNode_getFunctionType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionType_R_int])(ctx, sp[0].o);
	frame[6].i = temp1;
	LINE_NUMBER(243);
	if ((frame[6].i) != (jint(3))) goto label_29;
	}
	{
	LINE_NUMBER(244);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (-20), (frame[5].i));
	goto label_31;
	}
label_29:;
	{
	LINE_NUMBER(246);
	if ((frame[6].i) == (jint(1))) goto label_31;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_31:;
	{
	LINE_NUMBER(255);
	if (((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsInFunctionFlag) != 0) goto label_33;
	}
	{
	LINE_NUMBER(256);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (-19), (frame[5].i));
	LINE_NUMBER(257);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(258);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-5));
	LINE_NUMBER(259);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	}
label_33:;
	LINE_NUMBER(262);
	goto label_38;
label_17:;
	{
	LINE_NUMBER(269);
	M_rhino_CodeGenerator_updateLineNumber_rhino_Node(ctx, (frame[0].o), (frame[1].o));
	}
label_22:;
	{
	LINE_NUMBER(272);
	if ((frame[4].o) == nullptr) goto label_38;
	}
	{
	LINE_NUMBER(273);
	M_rhino_CodeGenerator_visitStatement_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (frame[2].i));
	LINE_NUMBER(274);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	goto label_22;
	}
label_4:;
	{
	LINE_NUMBER(279);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(280);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (jint(2)));
	LINE_NUMBER(281);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(282);
	goto label_38;
	}
label_5:;
	{
	LINE_NUMBER(285);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (jint(3)));
	LINE_NUMBER(286);
	goto label_38;
	}
label_23:;
	{
	LINE_NUMBER(289);
	jint temp0 = (jint)M_rhino_CodeGenerator_allocLocal_R_int(ctx, (frame[0].o));
	frame[5].i = temp0;
	LINE_NUMBER(290);
	((func_rhino_Node_putIntProp_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_putIntProp_int_int])(ctx, (frame[1].o), (jint(2)), (frame[5].i));
	LINE_NUMBER(291);
	M_rhino_CodeGenerator_updateLineNumber_rhino_Node(ctx, (frame[0].o), (frame[1].o));
	}
label_47:;
	{
	LINE_NUMBER(292);
	if ((frame[4].o) == nullptr) goto label_48;
	}
	{
	LINE_NUMBER(293);
	M_rhino_CodeGenerator_visitStatement_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (frame[2].i));
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	goto label_47;
	}
label_48:;
	{
	LINE_NUMBER(296);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (-56), (frame[5].i));
	LINE_NUMBER(297);
	M_rhino_CodeGenerator_releaseLocal_int(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(299);
	goto label_38;
	}
label_24:;
	{
	LINE_NUMBER(302);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-64));
	LINE_NUMBER(303);
	goto label_38;
	}
label_16:;
	{
	LINE_NUMBER(306);
	M_rhino_CodeGenerator_updateLineNumber_rhino_Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(310);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(311);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_rhino_ast_Jump, sp[0].o));
	}
label_56:;
	{
	LINE_NUMBER(312);
	if ((frame[5].o) == nullptr) goto label_57;
	}
	{
	LINE_NUMBER(314);
	jint temp0 = (jint)((func_rhino_ast_Jump_getType_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_Jump_getType_R_int])(ctx, (frame[5].o));
	if (temp0 == (116)) goto label_59;
	}
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)M_rhino_CodeGenerator_badTree_rhino_Node_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_59:;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((func_rhino_ast_Jump_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_Jump_getFirstChild_R_rhino_Node])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(317);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(318);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(319);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[6].o), (jint(0)));
	LINE_NUMBER(320);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (46));
	LINE_NUMBER(321);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(324);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((frame[5].o)))->F_target;
	M_rhino_CodeGenerator_addGoto_rhino_Node_int(ctx, sp[0].o, sp[1].o, (-6));
	LINE_NUMBER(325);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(313);
	sp[0].o = (jobject)((func_rhino_ast_Jump_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_Jump_getNext_R_rhino_Node])(ctx, (frame[5].o));
	frame[5].o = (checkCast(ctx, &class_rhino_ast_Jump, sp[0].o));
	goto label_56;
	}
label_57:;
	{
	LINE_NUMBER(327);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-4));
	LINE_NUMBER(328);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(330);
	goto label_38;
	}
label_19:;
	{
	LINE_NUMBER(333);
	M_rhino_CodeGenerator_markTargetLabel_rhino_Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(334);
	goto label_38;
	}
label_8:;
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((checkCast(ctx, &class_rhino_ast_Jump, (frame[1].o)))))->F_target;
	frame[5].o = sp[0].o;
	LINE_NUMBER(339);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(340);
	M_rhino_CodeGenerator_addGoto_rhino_Node_int(ctx, (frame[0].o), (frame[5].o), (frame[3].i));
	LINE_NUMBER(341);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(343);
	goto label_38;
	}
label_7:;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((checkCast(ctx, &class_rhino_ast_Jump, (frame[1].o)))))->F_target;
	frame[5].o = sp[0].o;
	LINE_NUMBER(347);
	M_rhino_CodeGenerator_addGoto_rhino_Node_int(ctx, (frame[0].o), (frame[5].o), (frame[3].i));
	LINE_NUMBER(349);
	goto label_38;
	}
label_21:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((checkCast(ctx, &class_rhino_ast_Jump, (frame[1].o)))))->F_target;
	frame[5].o = sp[0].o;
	LINE_NUMBER(353);
	M_rhino_CodeGenerator_addGoto_rhino_Node_int(ctx, (frame[0].o), (frame[5].o), (-23));
	LINE_NUMBER(355);
	goto label_38;
	}
label_18:;
	{
	LINE_NUMBER(359);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(360);
	jint temp0 = (jint)M_rhino_CodeGenerator_getLocalBlockRef_rhino_Node_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(361);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (-24), (frame[5].i));
	LINE_NUMBER(362);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	}
label_83:;
	{
	LINE_NUMBER(363);
	if ((frame[4].o) == nullptr) goto label_84;
	}
	{
	LINE_NUMBER(364);
	M_rhino_CodeGenerator_visitStatement_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (frame[2].i));
	LINE_NUMBER(365);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	goto label_83;
	}
label_84:;
	{
	LINE_NUMBER(367);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (-25), (frame[5].i));
	LINE_NUMBER(369);
	goto label_38;
	}
label_20:;
	{
	LINE_NUMBER(373);
	M_rhino_CodeGenerator_updateLineNumber_rhino_Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(374);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(375);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[3].i) != (134)) goto label_90;
	}
	INST_BIPUSH(-4);
	goto label_91;
label_90:;
	INST_BIPUSH(-5);
label_91:;
	{
	sp -= 2;
	M_rhino_CodeGenerator_addIcode_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(376);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(377);
	goto label_38;
	}
label_14:;
	{
	LINE_NUMBER(380);
	frame[5].o = (checkCast(ctx, &class_rhino_ast_Jump, (frame[1].o)));
	LINE_NUMBER(381);
	jint temp0 = (jint)M_rhino_CodeGenerator_getLocalBlockRef_rhino_Node_R_int(ctx, (frame[0].o), (frame[5].o));
	frame[6].i = temp0;
	LINE_NUMBER(382);
	jint temp1 = (jint)M_rhino_CodeGenerator_allocLocal_R_int(ctx, (frame[0].o));
	frame[7].i = temp1;
	LINE_NUMBER(384);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (-13), (frame[7].i));
	LINE_NUMBER(386);
	frame[8].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop);
	LINE_NUMBER(387);
	frame[9].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsInTryFlag);
	LINE_NUMBER(388);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsInTryFlag = (jint(1));
	}
label_100:;
	{
	LINE_NUMBER(389);
	if ((frame[4].o) == nullptr) goto label_101;
	}
	{
	LINE_NUMBER(390);
	M_rhino_CodeGenerator_visitStatement_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (frame[2].i));
	LINE_NUMBER(391);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	goto label_100;
	}
label_101:;
	{
	LINE_NUMBER(393);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsInTryFlag = (frame[9].i);
	LINE_NUMBER(395);
	sp[0].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((frame[5].o)))->F_target;
	frame[10].o = sp[0].o;
	LINE_NUMBER(396);
	if ((frame[10].o) == nullptr) goto label_106;
	}
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_labelTable;
	sp[1].o = frame[0].o;
	sp[2].o = frame[10].o;
	LINE_NUMBER(398);
	jint temp0 = (jint)M_rhino_CodeGenerator_getTargetLabel_rhino_Node_R_int(ctx, sp[1].o, sp[2].o);
	frame[11].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	LINE_NUMBER(399);
	M_rhino_CodeGenerator_addExceptionHandler_int_int_int_boolean_int_int(ctx, (frame[0].o), (frame[8].i), (frame[11].i), (frame[11].i), (jint(0)), (frame[6].i), (frame[7].i));
	}
label_106:;
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((func_rhino_ast_Jump_getFinally_R_rhino_Node) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_Jump_getFinally_R_rhino_Node])(ctx, (frame[5].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(404);
	if ((frame[11].o) == nullptr) goto label_111;
	}
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_labelTable;
	sp[1].o = frame[0].o;
	sp[2].o = frame[11].o;
	LINE_NUMBER(406);
	jint temp0 = (jint)M_rhino_CodeGenerator_getTargetLabel_rhino_Node_R_int(ctx, sp[1].o, sp[2].o);
	frame[12].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	LINE_NUMBER(407);
	M_rhino_CodeGenerator_addExceptionHandler_int_int_int_boolean_int_int(ctx, (frame[0].o), (frame[8].i), (frame[12].i), (frame[12].i), (jint(1)), (frame[6].i), (frame[7].i));
	}
label_111:;
	{
	LINE_NUMBER(412);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (-56), (frame[7].i));
	LINE_NUMBER(413);
	M_rhino_CodeGenerator_releaseLocal_int(ctx, (frame[0].o), (frame[7].i));
	LINE_NUMBER(415);
	goto label_38;
	}
label_11:;
	{
	LINE_NUMBER(418);
	jint temp0 = (jint)M_rhino_CodeGenerator_getLocalBlockRef_rhino_Node_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(419);
	jint temp1 = (jint)((func_rhino_Node_getExistingIntProp_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getExistingIntProp_int_R_int])(ctx, (frame[1].o), (14));
	frame[6].i = temp1;
	LINE_NUMBER(420);
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[4].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(421);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(422);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(423);
	M_rhino_CodeGenerator_addStringPrefix_java_lang_String(ctx, (frame[0].o), (frame[7].o));
	LINE_NUMBER(424);
	M_rhino_CodeGenerator_addIndexPrefix_int(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(425);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (57));
	LINE_NUMBER(426);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_125;
	}
	INST_ICONST(1);
	goto label_126;
label_125:;
	INST_ICONST(0);
label_126:;
	{
	sp -= 2;
	M_rhino_CodeGenerator_addUint8_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(427);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(429);
	goto label_38;
	}
label_9:;
	{
	LINE_NUMBER(432);
	M_rhino_CodeGenerator_updateLineNumber_rhino_Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(433);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(434);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (50));
	LINE_NUMBER(435);
	M_rhino_CodeGenerator_addUint16_int(ctx, (frame[0].o), (((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_lineNumber) & (jint(65535))));
	LINE_NUMBER(436);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(437);
	goto label_38;
	}
label_10:;
	{
	LINE_NUMBER(440);
	M_rhino_CodeGenerator_updateLineNumber_rhino_Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(441);
	sp[0].o = frame[0].o;
	jint temp0 = 51;
	jint temp1 = (jint)M_rhino_CodeGenerator_getLocalBlockRef_rhino_Node_R_int(ctx, (frame[0].o), (frame[1].o));
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(442);
	goto label_38;
	}
label_6:;
	{
	LINE_NUMBER(445);
	M_rhino_CodeGenerator_updateLineNumber_rhino_Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(446);
	jint temp0 = (jint)((func_rhino_Node_getIntProp_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getIntProp_int_int_R_int])(ctx, (frame[1].o), (20), (jint(0)));
	if (temp0 == 0) goto label_137;
	}
	{
	LINE_NUMBER(447);
	if ((frame[4].o) == nullptr) goto label_139;
	}
	{
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	LINE_NUMBER(448);
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 >= (200)) goto label_141;
	}
label_139:;
	{
	LINE_NUMBER(451);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-63));
	LINE_NUMBER(452);
	M_rhino_CodeGenerator_addUint16_int(ctx, (frame[0].o), (((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_lineNumber) & (jint(65535))));
	goto label_38;
	}
label_141:;
	{
	LINE_NUMBER(454);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(1)));
	LINE_NUMBER(455);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-65));
	LINE_NUMBER(456);
	M_rhino_CodeGenerator_addUint16_int(ctx, (frame[0].o), (((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_lineNumber) & (jint(65535))));
	LINE_NUMBER(457);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	goto label_38;
	}
label_137:;
	{
	LINE_NUMBER(461);
	if ((frame[4].o) != nullptr) goto label_146;
	}
	{
	LINE_NUMBER(462);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-22));
	goto label_38;
	}
label_146:;
	{
	LINE_NUMBER(464);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(1)));
	LINE_NUMBER(465);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (jint(4)));
	LINE_NUMBER(466);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(469);
	goto label_38;
	}
label_13:;
	{
	LINE_NUMBER(472);
	M_rhino_CodeGenerator_updateLineNumber_rhino_Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(473);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (65));
	LINE_NUMBER(474);
	goto label_38;
	}
label_12:;
	{
	LINE_NUMBER(480);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(481);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)M_rhino_CodeGenerator_getLocalBlockRef_rhino_Node_R_int(ctx, (frame[0].o), (frame[1].o));
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(482);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(483);
	goto label_38;
	}
label_3:;
	LINE_NUMBER(486);
	goto label_38;
label_25:;
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)M_rhino_CodeGenerator_badTree_rhino_Node_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_38:;
	{
	LINE_NUMBER(492);
	if (((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_stackDepth) == (frame[2].i)) goto label_156;
	}
	{
	LINE_NUMBER(493);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_156:;
	LINE_NUMBER(495);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_visitExpression_rhino_Node_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:visitExpression", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(498);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(499);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(500);
	frame[5].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_stackDepth);
	LINE_NUMBER(501);
	switch((frame[3].i)) {
		case 8: goto label_4;
		case 9: goto label_5;
		case 10: goto label_5;
		case 11: goto label_5;
		case 12: goto label_5;
		case 13: goto label_5;
		case 14: goto label_5;
		case 15: goto label_5;
		case 16: goto label_5;
		case 17: goto label_5;
		case 18: goto label_5;
		case 19: goto label_5;
		case 20: goto label_5;
		case 21: goto label_5;
		case 22: goto label_5;
		case 23: goto label_5;
		case 24: goto label_5;
		case 25: goto label_5;
		case 26: goto label_6;
		case 27: goto label_6;
		case 28: goto label_6;
		case 29: goto label_6;
		case 30: goto label_7;
		case 31: goto label_8;
		case 32: goto label_6;
		case 33: goto label_9;
		case 34: goto label_9;
		case 35: goto label_10;
		case 36: goto label_5;
		case 37: goto label_11;
		case 38: goto label_7;
		case 39: goto label_12;
		case 40: goto label_13;
		case 41: goto label_12;
		case 42: goto label_14;
		case 43: goto label_14;
		case 44: goto label_14;
		case 45: goto label_14;
		case 46: goto label_5;
		case 47: goto label_5;
		case 48: goto label_15;
		case 49: goto label_12;
		case 50: goto label_16;
		case 51: goto label_16;
		case 52: goto label_5;
		case 53: goto label_5;
		case 54: goto label_17;
		case 55: goto label_18;
		case 56: goto label_19;
		case 57: goto label_16;
		case 58: goto label_16;
		case 59: goto label_16;
		case 60: goto label_16;
		case 61: goto label_16;
		case 62: goto label_20;
		case 63: goto label_20;
		case 64: goto label_14;
		case 65: goto label_16;
		case 66: goto label_21;
		case 67: goto label_21;
		case 68: goto label_22;
		case 69: goto label_23;
		case 70: goto label_22;
		case 71: goto label_7;
		case 72: goto label_24;
		case 73: goto label_25;
		case 74: goto label_4;
		case 75: goto label_16;
		case 76: goto label_16;
		case 77: goto label_16;
		case 78: goto label_16;
		case 79: goto label_16;
		case 80: goto label_16;
		case 81: goto label_16;
		case 82: goto label_16;
		case 83: goto label_16;
		case 84: goto label_16;
		case 85: goto label_16;
		case 86: goto label_16;
		case 87: goto label_16;
		case 88: goto label_16;
		case 89: goto label_16;
		case 90: goto label_26;
		case 91: goto label_16;
		case 92: goto label_16;
		case 93: goto label_16;
		case 94: goto label_16;
		case 95: goto label_16;
		case 96: goto label_16;
		case 97: goto label_16;
		case 98: goto label_16;
		case 99: goto label_16;
		case 100: goto label_16;
		case 101: goto label_16;
		case 102: goto label_16;
		case 103: goto label_27;
		case 104: goto label_16;
		case 105: goto label_28;
		case 106: goto label_28;
		case 107: goto label_29;
		case 108: goto label_29;
		case 109: goto label_16;
		case 110: goto label_30;
		case 111: goto label_16;
		case 112: goto label_16;
		case 113: goto label_16;
		case 114: goto label_16;
		case 115: goto label_16;
		case 116: goto label_16;
		case 117: goto label_16;
		case 118: goto label_16;
		case 119: goto label_16;
		case 120: goto label_16;
		case 121: goto label_16;
		case 122: goto label_16;
		case 123: goto label_16;
		case 124: goto label_16;
		case 125: goto label_16;
		case 126: goto label_16;
		case 127: goto label_6;
		case 128: goto label_16;
		case 129: goto label_16;
		case 130: goto label_16;
		case 131: goto label_16;
		case 132: goto label_16;
		case 133: goto label_16;
		case 134: goto label_16;
		case 135: goto label_16;
		case 136: goto label_16;
		case 137: goto label_16;
		case 138: goto label_31;
		case 139: goto label_32;
		case 140: goto label_10;
		case 141: goto label_11;
		case 142: goto label_16;
		case 143: goto label_23;
		case 144: goto label_16;
		case 145: goto label_16;
		case 146: goto label_16;
		case 147: goto label_16;
		case 148: goto label_16;
		case 149: goto label_16;
		case 150: goto label_16;
		case 151: goto label_16;
		case 152: goto label_16;
		case 153: goto label_16;
		case 154: goto label_16;
		case 155: goto label_16;
		case 156: goto label_33;
		case 157: goto label_34;
		case 158: goto label_35;
		case 159: goto label_16;
		case 160: goto label_36;
		case 161: goto label_16;
		case 162: goto label_16;
		case 163: goto label_16;
		case 164: goto label_16;
		case 165: goto label_16;
		case 166: goto label_25;
		default: goto label_16;
	}
	}
label_30:;
	{
	LINE_NUMBER(504);
	jint temp0 = (jint)((func_rhino_Node_getExistingIntProp_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getExistingIntProp_int_R_int])(ctx, (frame[1].o), (jint(1)));
	frame[6].i = temp0;
	LINE_NUMBER(505);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	sp[0].o = (jobject)((func_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode])(ctx, sp[0].o, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(507);
	jint temp1 = (jint)((func_rhino_ast_FunctionNode_getFunctionType_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionType_R_int])(ctx, (frame[7].o));
	if (temp1 == (jint(2))) goto label_39;
	}
	{
	sp[0].o = frame[7].o;
	LINE_NUMBER(508);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_getFunctionType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionType_R_int])(ctx, sp[0].o);
	if (temp0 == (jint(4))) goto label_39;
	}
	{
	LINE_NUMBER(509);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_39:;
	{
	LINE_NUMBER(511);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (-19), (frame[6].i));
	LINE_NUMBER(512);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(514);
	goto label_44;
	}
label_17:;
	{
	LINE_NUMBER(517);
	jint temp0 = (jint)M_rhino_CodeGenerator_getLocalBlockRef_rhino_Node_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(518);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (54), (frame[6].i));
	LINE_NUMBER(519);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(521);
	goto label_44;
	}
label_26:;
	{
	LINE_NUMBER(524);
	sp[0].o = (jobject)((func_rhino_Node_getLastChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getLastChild_R_rhino_Node])(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	}
label_48:;
	{
	LINE_NUMBER(525);
	if ((frame[4].o) == (frame[6].o)) goto label_49;
	}
	{
	LINE_NUMBER(526);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(527);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-4));
	LINE_NUMBER(528);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(529);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	goto label_48;
	}
label_49:;
	{
	LINE_NUMBER(532);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), ((frame[2].i) & (jint(1))));
	LINE_NUMBER(534);
	goto label_44;
	}
label_32:;
	{
	LINE_NUMBER(539);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(540);
	goto label_44;
	}
label_7:;
	{
	LINE_NUMBER(545);
	if ((frame[3].i) != (30)) goto label_56;
	}
	{
	LINE_NUMBER(546);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	goto label_58;
	}
label_56:;
	{
	LINE_NUMBER(548);
	M_rhino_CodeGenerator_generateCallFunAndThis_rhino_Node(ctx, (frame[0].o), (frame[4].o));
	}
label_58:;
	{
	LINE_NUMBER(550);
	frame[6].i = (jint(0));
	}
label_59:;
	{
	LINE_NUMBER(551);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_60;
	}
	{
	LINE_NUMBER(552);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(553);
	INST_IINC(6, 1);
	goto label_59;
	}
label_60:;
	{
	LINE_NUMBER(555);
	jint temp0 = (jint)((func_rhino_Node_getIntProp_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getIntProp_int_int_R_int])(ctx, (frame[1].o), (10), (jint(0)));
	frame[7].i = temp0;
	LINE_NUMBER(557);
	if ((frame[3].i) == (71)) goto label_64;
	}
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_64;
	{
	LINE_NUMBER(559);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (-21), (frame[6].i));
	LINE_NUMBER(560);
	M_rhino_CodeGenerator_addUint8_int(ctx, (frame[0].o), (frame[7].i));
	LINE_NUMBER(561);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[3].i) != (30)) goto label_68;
	}
	INST_ICONST(1);
	goto label_69;
label_68:;
	INST_ICONST(0);
label_69:;
	{
	sp -= 2;
	M_rhino_CodeGenerator_addUint8_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(562);
	M_rhino_CodeGenerator_addUint16_int(ctx, (frame[0].o), (((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_lineNumber) & (jint(65535))));
	goto label_71;
	}
label_64:;
	{
	LINE_NUMBER(567);
	if ((frame[3].i) != (38)) goto label_72;
	}
	{
	if (((frame[2].i) & (jint(1))) == 0) goto label_72;
	}
	{
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_compilerEnv;
	LINE_NUMBER(568);
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isGenerateDebugInfo_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isGenerateDebugInfo_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_72;
	}
	{
	if (((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsInTryFlag) != 0) goto label_72;
	}
	{
	LINE_NUMBER(569);
	frame[3].i = (-55);
	}
label_72:;
	{
	LINE_NUMBER(571);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (frame[3].i), (frame[6].i));
	}
label_71:;
	{
	LINE_NUMBER(574);
	if ((frame[3].i) != (30)) goto label_75;
	}
	{
	LINE_NUMBER(576);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (-(frame[6].i)));
	goto label_77;
	}
label_75:;
	{
	LINE_NUMBER(580);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), ((jint(-1)) - (frame[6].i)));
	}
label_77:;
	{
	LINE_NUMBER(582);
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	if (temp0 <= ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsMaxCalleeArgs)) goto label_78;
	}
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsMaxCalleeArgs = (frame[6].i);
	}
label_78:;
	LINE_NUMBER(586);
	goto label_44;
label_28:;
	{
	LINE_NUMBER(590);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(591);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(592);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(593);
	frame[6].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop);
	LINE_NUMBER(594);
	if ((frame[3].i) != (106)) goto label_84;
	}
	INST_BIPUSH(7);
	goto label_85;
label_84:;
	INST_BIPUSH(6);
label_85:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(595);
	M_rhino_CodeGenerator_addGotoOp_int(ctx, (frame[0].o), (frame[7].i));
	LINE_NUMBER(596);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(597);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-4));
	LINE_NUMBER(598);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(599);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(601);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), ((frame[2].i) & (jint(1))));
	LINE_NUMBER(602);
	M_rhino_CodeGenerator_resolveForwardGoto_int(ctx, (frame[0].o), (frame[6].i));
	LINE_NUMBER(604);
	goto label_44;
	}
label_27:;
	{
	LINE_NUMBER(607);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(608);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(609);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(610);
	frame[8].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop);
	LINE_NUMBER(611);
	M_rhino_CodeGenerator_addGotoOp_int(ctx, (frame[0].o), (7));
	LINE_NUMBER(612);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(614);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[6].o), ((frame[2].i) & (jint(1))));
	LINE_NUMBER(615);
	frame[9].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop);
	LINE_NUMBER(616);
	M_rhino_CodeGenerator_addGotoOp_int(ctx, (frame[0].o), (jint(5)));
	LINE_NUMBER(617);
	M_rhino_CodeGenerator_resolveForwardGoto_int(ctx, (frame[0].o), (frame[8].i));
	LINE_NUMBER(618);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_stackDepth = (frame[5].i);
	LINE_NUMBER(620);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[7].o), ((frame[2].i) & (jint(1))));
	LINE_NUMBER(621);
	M_rhino_CodeGenerator_resolveForwardGoto_int(ctx, (frame[0].o), (frame[9].i));
	LINE_NUMBER(623);
	goto label_44;
	}
label_9:;
	{
	LINE_NUMBER(627);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(628);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(629);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[4].o));
	M_rhino_CodeGenerator_addStringOp_int_java_lang_String(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(630);
	goto label_44;
	}
label_8:;
	{
	LINE_NUMBER(633);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[4].o));
	if (temp0 != (49)) goto label_110;
	}
	INST_ICONST(1);
	goto label_111;
label_110:;
	INST_ICONST(0);
label_111:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(634);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(635);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(636);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(637);
	if ((frame[6].i) == 0) goto label_116;
	}
	{
	LINE_NUMBER(639);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (jint(0)));
	goto label_118;
	}
label_116:;
	{
	LINE_NUMBER(641);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (31));
	}
label_118:;
	{
	LINE_NUMBER(643);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(644);
	goto label_44;
	}
label_5:;
	{
	LINE_NUMBER(668);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(669);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(670);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(671);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(672);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(673);
	goto label_44;
	}
label_6:;
	{
	LINE_NUMBER(681);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(682);
	if ((frame[3].i) != (127)) goto label_126;
	}
	{
	LINE_NUMBER(683);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-4));
	LINE_NUMBER(684);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-50));
	goto label_44;
	}
label_126:;
	{
	LINE_NUMBER(686);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(688);
	goto label_44;
	}
label_22:;
	{
	LINE_NUMBER(692);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(693);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(694);
	goto label_44;
	}
label_10:;
	{
	LINE_NUMBER(698);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(699);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(700);
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[4].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(701);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(702);
	if ((frame[3].i) != (140)) goto label_136;
	}
	{
	LINE_NUMBER(703);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(704);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(705);
	M_rhino_CodeGenerator_addStringOp_int_java_lang_String(ctx, (frame[0].o), (33), (frame[7].o));
	LINE_NUMBER(707);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	}
label_136:;
	{
	LINE_NUMBER(709);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(710);
	M_rhino_CodeGenerator_addStringOp_int_java_lang_String(ctx, (frame[0].o), (35), (frame[7].o));
	LINE_NUMBER(711);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(713);
	goto label_44;
	}
label_11:;
	{
	LINE_NUMBER(717);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(718);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(719);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(720);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(721);
	if ((frame[3].i) != (141)) goto label_148;
	}
	{
	LINE_NUMBER(722);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-2));
	LINE_NUMBER(723);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(2)));
	LINE_NUMBER(724);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (36));
	LINE_NUMBER(725);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(727);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	}
label_148:;
	{
	LINE_NUMBER(729);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(730);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (37));
	LINE_NUMBER(731);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (-2));
	LINE_NUMBER(732);
	goto label_44;
	}
label_23:;
	{
	LINE_NUMBER(736);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(737);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(738);
	if ((frame[3].i) != (143)) goto label_159;
	}
	{
	LINE_NUMBER(739);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(740);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(741);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (68));
	LINE_NUMBER(743);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	}
label_159:;
	{
	LINE_NUMBER(745);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(746);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (69));
	LINE_NUMBER(747);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(748);
	goto label_44;
	}
label_4:;
	{
	LINE_NUMBER(752);
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[4].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(753);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(754);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(755);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(756);
	M_rhino_CodeGenerator_addStringOp_int_java_lang_String(ctx, (frame[0].o), (frame[3].i), (frame[7].o));
	LINE_NUMBER(757);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(759);
	goto label_44;
	}
label_33:;
	{
	LINE_NUMBER(762);
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[4].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(763);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(764);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(765);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(766);
	M_rhino_CodeGenerator_addStringOp_int_java_lang_String(ctx, (frame[0].o), (-59), (frame[7].o));
	LINE_NUMBER(767);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(769);
	goto label_44;
	}
label_31:;
	{
	LINE_NUMBER(772);
	frame[7].i = (jint(-1));
	LINE_NUMBER(775);
	if (((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsInFunctionFlag) == 0) goto label_180;
	}
	{
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	if (((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsNeedsActivation) != 0) goto label_180;
	}
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	jint temp0 = (jint)((func_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[7].i = temp0;
	}
label_180:;
	{
	LINE_NUMBER(777);
	if ((frame[7].i) != (jint(-1))) goto label_182;
	}
	{
	LINE_NUMBER(778);
	sp[0].o = frame[0].o;
	jint temp0 = -14;
	sp[1].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[1].o));
	M_rhino_CodeGenerator_addStringOp_int_java_lang_String(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(779);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	goto label_185;
	}
label_182:;
	{
	LINE_NUMBER(781);
	M_rhino_CodeGenerator_addVarOp_int_int(ctx, (frame[0].o), (55), (frame[7].i));
	LINE_NUMBER(782);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(783);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (32));
	}
label_185:;
	LINE_NUMBER(786);
	goto label_44;
label_12:;
	{
	LINE_NUMBER(791);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[1].o));
	M_rhino_CodeGenerator_addStringOp_int_java_lang_String(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(792);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(793);
	goto label_44;
	}
label_29:;
	{
	LINE_NUMBER(797);
	M_rhino_CodeGenerator_visitIncDec_rhino_Node_rhino_Node(ctx, (frame[0].o), (frame[1].o), (frame[4].o));
	LINE_NUMBER(798);
	goto label_44;
	}
label_13:;
	{
	LINE_NUMBER(801);
	jdouble temp0 = (jdouble)((func_rhino_Node_getDouble_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getDouble_R_double])(ctx, (frame[1].o));
	frame[7].d = temp0;
	LINE_NUMBER(802);
	frame[9].i = (jint((frame[7].d)));
	LINE_NUMBER(803);
	if ((doubleCompare((jdouble((frame[9].i))), (frame[7].d), -1)) != 0) goto label_193;
	}
	{
	LINE_NUMBER(804);
	if ((frame[9].i) != 0) goto label_195;
	}
	{
	LINE_NUMBER(805);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-51));
	LINE_NUMBER(807);
	if ((doubleCompare(((jdouble(1)) / (frame[7].d)), (jdouble(0)), 1)) >= 0) goto label_198;
	}
	{
	LINE_NUMBER(808);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (29));
	goto label_198;
	}
label_195:;
	{
	LINE_NUMBER(810);
	if ((frame[9].i) != (jint(1))) goto label_200;
	}
	{
	LINE_NUMBER(811);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-52));
	goto label_198;
	}
label_200:;
	{
	LINE_NUMBER(812);
	if ((jshort((frame[9].i))) != (frame[9].i)) goto label_202;
	}
	{
	LINE_NUMBER(813);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-27));
	LINE_NUMBER(815);
	M_rhino_CodeGenerator_addUint16_int(ctx, (frame[0].o), ((frame[9].i) & (jint(65535))));
	goto label_198;
	}
label_202:;
	{
	LINE_NUMBER(817);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-28));
	LINE_NUMBER(818);
	M_rhino_CodeGenerator_addInt_int(ctx, (frame[0].o), (frame[9].i));
	goto label_198;
	}
label_193:;
	{
	LINE_NUMBER(821);
	jint temp0 = (jint)M_rhino_CodeGenerator_getDoubleIndex_double_R_int(ctx, (frame[0].o), (frame[7].d));
	frame[10].i = temp0;
	LINE_NUMBER(822);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (40), (frame[10].i));
	}
label_198:;
	{
	LINE_NUMBER(824);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(826);
	goto label_44;
	}
label_18:;
	{
	LINE_NUMBER(829);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	if (((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsNeedsActivation) == 0) goto label_208;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_208:;
	{
	LINE_NUMBER(830);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	jint temp0 = (jint)((func_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[7].i = temp0;
	LINE_NUMBER(831);
	M_rhino_CodeGenerator_addVarOp_int_int(ctx, (frame[0].o), (55), (frame[7].i));
	LINE_NUMBER(832);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(834);
	goto label_44;
	}
label_19:;
	{
	LINE_NUMBER(837);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	if (((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsNeedsActivation) == 0) goto label_212;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_212:;
	{
	LINE_NUMBER(838);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	jint temp0 = (jint)((func_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int])(ctx, sp[0].o, (frame[4].o));
	frame[7].i = temp0;
	LINE_NUMBER(839);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(840);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(841);
	M_rhino_CodeGenerator_addVarOp_int_int(ctx, (frame[0].o), (56), (frame[7].i));
	LINE_NUMBER(843);
	goto label_44;
	}
label_34:;
	{
	LINE_NUMBER(846);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	if (((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsNeedsActivation) == 0) goto label_217;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_217:;
	{
	LINE_NUMBER(847);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	jint temp0 = (jint)((func_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int])(ctx, sp[0].o, (frame[4].o));
	frame[7].i = temp0;
	LINE_NUMBER(848);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(849);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(850);
	M_rhino_CodeGenerator_addVarOp_int_int(ctx, (frame[0].o), (157), (frame[7].i));
	LINE_NUMBER(852);
	goto label_44;
	}
label_14:;
	{
	LINE_NUMBER(859);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(860);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(861);
	goto label_44;
	}
label_20:;
	{
	LINE_NUMBER(865);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)M_rhino_CodeGenerator_getLocalBlockRef_rhino_Node_R_int(ctx, (frame[0].o), (frame[1].o));
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(866);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(867);
	goto label_44;
	}
label_15:;
	{
	LINE_NUMBER(870);
	jint temp0 = (jint)((func_rhino_Node_getExistingIntProp_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getExistingIntProp_int_R_int])(ctx, (frame[1].o), (jint(4)));
	frame[7].i = temp0;
	LINE_NUMBER(871);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (48), (frame[7].i));
	LINE_NUMBER(872);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(874);
	goto label_44;
	}
label_21:;
	{
	LINE_NUMBER(878);
	M_rhino_CodeGenerator_visitLiteral_rhino_Node_rhino_Node(ctx, (frame[0].o), (frame[1].o), (frame[4].o));
	LINE_NUMBER(879);
	goto label_44;
	}
label_35:;
	{
	LINE_NUMBER(882);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[4].o));
	M_rhino_CodeGenerator_visitArrayComprehension_rhino_Node_rhino_Node_rhino_Node(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(883);
	goto label_44;
	}
label_24:;
	{
	LINE_NUMBER(886);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(887);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((func_rhino_Node_getProp_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getProp_int_R_java_lang_Object])(ctx, (frame[1].o), (17));
	M_rhino_CodeGenerator_addStringOp_int_java_lang_String(ctx, sp[0].o, temp0, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(888);
	goto label_44;
	}
label_25:;
	{
	LINE_NUMBER(892);
	if ((frame[4].o) == nullptr) goto label_233;
	}
	{
	LINE_NUMBER(893);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	goto label_235;
	}
label_233:;
	{
	LINE_NUMBER(895);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-50));
	LINE_NUMBER(896);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	}
label_235:;
	{
	LINE_NUMBER(898);
	if ((frame[3].i) != (73)) goto label_237;
	}
	{
	LINE_NUMBER(899);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (73));
	goto label_239;
	}
label_237:;
	{
	LINE_NUMBER(901);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-66));
	}
label_239:;
	{
	LINE_NUMBER(903);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_rhino_Node_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getLineno_R_int])(ctx, (frame[1].o));
	M_rhino_CodeGenerator_addUint16_int(ctx, sp[0].o, (temp0 & (jint(65535))));
	LINE_NUMBER(904);
	goto label_44;
	}
label_36:;
	{
	LINE_NUMBER(907);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(908);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(909);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[7].o));
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(910);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (jint(2)));
	LINE_NUMBER(911);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(912);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[8].o));
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(913);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (jint(3)));
	LINE_NUMBER(914);
	goto label_44;
	}
label_16:;
	{
	LINE_NUMBER(918);
	sp[0].o = (jobject)M_rhino_CodeGenerator_badTree_rhino_Node_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_44:;
	{
	LINE_NUMBER(920);
	if (((frame[5].i) + (jint(1))) == ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_stackDepth)) goto label_248;
	}
	{
	LINE_NUMBER(921);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_248:;
	LINE_NUMBER(923);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_generateCallFunAndThis_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:generateCallFunAndThis", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(927);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(928);
	switch((frame[2].i)) {
		case 33: goto label_2;
		case 36: goto label_2;
		case 39: goto label_3;
		default: goto label_4;
	}
	}
label_3:;
	{
	LINE_NUMBER(930);
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(932);
	M_rhino_CodeGenerator_addStringOp_int_java_lang_String(ctx, (frame[0].o), (-15), (frame[3].o));
	LINE_NUMBER(933);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(2)));
	LINE_NUMBER(934);
	goto label_8;
	}
label_2:;
	{
	LINE_NUMBER(938);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(939);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[3].o), (jint(0)));
	LINE_NUMBER(940);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(941);
	if ((frame[2].i) != (33)) goto label_12;
	}
	{
	LINE_NUMBER(942);
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(944);
	M_rhino_CodeGenerator_addStringOp_int_java_lang_String(ctx, (frame[0].o), (-16), (frame[5].o));
	LINE_NUMBER(945);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(946);
	goto label_8;
	}
label_12:;
	{
	LINE_NUMBER(947);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(949);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-17));
	LINE_NUMBER(951);
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(955);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(957);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-18));
	LINE_NUMBER(958);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	}
label_8:;
	LINE_NUMBER(961);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_visitIncDec_rhino_Node_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:visitIncDec", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(965);
	jint temp0 = (jint)((func_rhino_Node_getExistingIntProp_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getExistingIntProp_int_R_int])(ctx, (frame[1].o), (13));
	frame[3].i = temp0;
	LINE_NUMBER(966);
	jint temp1 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[2].o));
	frame[4].i = temp1;
	LINE_NUMBER(967);
	switch((frame[4].i)) {
		case 33: goto label_3;
		case 36: goto label_4;
		case 39: goto label_5;
		case 55: goto label_6;
		case 68: goto label_7;
		default: goto label_8;
	}
	}
label_6:;
	{
	LINE_NUMBER(969);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	if (((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsNeedsActivation) == 0) goto label_9;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_9:;
	{
	LINE_NUMBER(970);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_scriptOrFn;
	jint temp0 = (jint)((func_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int])(ctx, sp[0].o, (frame[2].o));
	frame[5].i = temp0;
	LINE_NUMBER(971);
	M_rhino_CodeGenerator_addVarOp_int_int(ctx, (frame[0].o), (-7), (frame[5].i));
	LINE_NUMBER(972);
	M_rhino_CodeGenerator_addUint8_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(973);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(974);
	goto label_14;
	}
label_5:;
	{
	LINE_NUMBER(977);
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(978);
	M_rhino_CodeGenerator_addStringOp_int_java_lang_String(ctx, (frame[0].o), (-8), (frame[5].o));
	LINE_NUMBER(979);
	M_rhino_CodeGenerator_addUint8_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(980);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(981);
	goto label_14;
	}
label_3:;
	{
	LINE_NUMBER(984);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(985);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[5].o), (jint(0)));
	LINE_NUMBER(986);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(987);
	M_rhino_CodeGenerator_addStringOp_int_java_lang_String(ctx, (frame[0].o), (-9), (frame[6].o));
	LINE_NUMBER(988);
	M_rhino_CodeGenerator_addUint8_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(989);
	goto label_14;
	}
label_4:;
	{
	LINE_NUMBER(992);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(993);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[5].o), (jint(0)));
	LINE_NUMBER(994);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(995);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[6].o), (jint(0)));
	LINE_NUMBER(996);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-10));
	LINE_NUMBER(997);
	M_rhino_CodeGenerator_addUint8_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(998);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(999);
	goto label_14;
	}
label_7:;
	{
	LINE_NUMBER(1002);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1003);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[5].o), (jint(0)));
	LINE_NUMBER(1004);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-11));
	LINE_NUMBER(1005);
	M_rhino_CodeGenerator_addUint8_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(1006);
	goto label_14;
	}
label_8:;
	{
	LINE_NUMBER(1009);
	sp[0].o = (jobject)M_rhino_CodeGenerator_badTree_rhino_Node_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_14:;
	LINE_NUMBER(1012);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_visitLiteral_rhino_Node_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:visitLiteral", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1015);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(1017);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(1018);
	if ((frame[3].i) != (66)) goto label_3;
	}
	{
	LINE_NUMBER(1019);
	frame[4].i = (jint(0));
	LINE_NUMBER(1020);
	frame[6].o = (frame[2].o);
	}
label_6:;
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_7;
	{
	LINE_NUMBER(1021);
	INST_IINC(4, 1);
	LINE_NUMBER(1020);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[6].o));
	frame[6].o = sp[0].o;
	goto label_6;
	}
label_7:;
	goto label_10;
label_3:;
	{
	LINE_NUMBER(1023);
	if ((frame[3].i) != (67)) goto label_11;
	}
	{
	LINE_NUMBER(1024);
	sp[0].o = (jobject)((func_rhino_Node_getProp_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getProp_int_R_java_lang_Object])(ctx, (frame[1].o), (12));
	frame[5].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o))));
	LINE_NUMBER(1025);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(1027);
	sp[0].o = (jobject)M_rhino_CodeGenerator_badTree_rhino_Node_R_java_lang_RuntimeException(ctx, (frame[0].o), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(1029);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (-29), (frame[4].i));
	LINE_NUMBER(1030);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(2)));
	}
label_16:;
	{
	LINE_NUMBER(1031);
	if ((frame[2].o) == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(1032);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[2].o));
	frame[6].i = temp0;
	LINE_NUMBER(1033);
	if ((frame[6].i) != (152)) goto label_20;
	}
	{
	LINE_NUMBER(1034);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[2].o));
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(1035);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-57));
	goto label_23;
	}
label_20:;
	{
	LINE_NUMBER(1036);
	if ((frame[6].i) != (153)) goto label_24;
	}
	{
	LINE_NUMBER(1037);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[2].o));
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(1038);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-58));
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(1039);
	if ((frame[6].i) != (164)) goto label_27;
	}
	{
	LINE_NUMBER(1040);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[2].o));
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(1041);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-30));
	goto label_23;
	}
label_27:;
	{
	LINE_NUMBER(1043);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(1044);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-30));
	}
label_23:;
	{
	LINE_NUMBER(1046);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(1047);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[2].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1048);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(1049);
	if ((frame[3].i) != (66)) goto label_33;
	}
	{
	LINE_NUMBER(1050);
	sp[0].o = (jobject)((func_rhino_Node_getProp_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getProp_int_R_java_lang_Object])(ctx, (frame[1].o), (11));
	frame[6].o = (checkCast(ctx, getArrayClass(&class_int, 1), (checkCast(ctx, getArrayClass(&class_int, 1), sp[0].o))));
	LINE_NUMBER(1051);
	if ((frame[6].o) != nullptr) goto label_36;
	}
	{
	LINE_NUMBER(1052);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (66));
	goto label_38;
	}
label_36:;
	{
	LINE_NUMBER(1054);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_literalIds;
	jint temp0 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	frame[7].i = temp0;
	LINE_NUMBER(1055);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_literalIds;
	((func_rhino_ObjArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_add_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(1056);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (-31), (frame[7].i));
	}
label_38:;
	LINE_NUMBER(1058);
	goto label_41;
label_33:;
	{
	LINE_NUMBER(1059);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_literalIds;
	jint temp0 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	frame[6].i = temp0;
	LINE_NUMBER(1060);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_literalIds;
	((func_rhino_ObjArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_add_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(1061);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (67), (frame[6].i));
	}
label_41:;
	{
	LINE_NUMBER(1063);
	M_rhino_CodeGenerator_stackChange_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(1064);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_visitArrayComprehension_rhino_Node_rhino_Node_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:visitArrayComprehension", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1072);
	M_rhino_CodeGenerator_visitStatement_rhino_Node_int(ctx, (frame[0].o), (frame[2].o), ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_stackDepth));
	LINE_NUMBER(1073);
	M_rhino_CodeGenerator_visitExpression_rhino_Node_int(ctx, (frame[0].o), (frame[3].o), (jint(0)));
	LINE_NUMBER(1074);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_CodeGenerator_getLocalBlockRef_rhino_Node_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:getLocalBlockRef", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1077);
	sp[0].o = (jobject)((func_rhino_Node_getProp_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getProp_int_R_java_lang_Object])(ctx, (frame[1].o), (jint(3)));
	frame[2].o = (checkCast(ctx, &class_rhino_Node, sp[0].o));
	LINE_NUMBER(1078);
	jint temp0 = (jint)((func_rhino_Node_getExistingIntProp_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getExistingIntProp_int_R_int])(ctx, (frame[2].o), (jint(2)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_rhino_CodeGenerator_getTargetLabel_rhino_Node_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:getTargetLabel", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1082);
	jint temp0 = (jint)((func_rhino_Node_labelId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_labelId_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(1083);
	if ((frame[2].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(1084);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_2:;
	{
	LINE_NUMBER(1086);
	frame[2].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_labelTableTop);
	LINE_NUMBER(1087);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_labelTable;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_labelTable;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(1088);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_labelTable;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1089);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (32));
	((rhino_CodeGenerator *) NULL_CHECK(sp[0].o))->F_labelTable = (jref) sp[1].o;
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1091);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_labelTable;
	sp[0].o = (jobject) createArray(ctx, &class_int, ((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1092);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_labelTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[3].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(1093);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_labelTable = (jref) (frame[3].o);
	}
label_6:;
	{
	LINE_NUMBER(1096);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_labelTableTop = ((frame[2].i) + (jint(1)));
	LINE_NUMBER(1097);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_labelTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (jint(-1));
	LINE_NUMBER(1099);
	((func_rhino_Node_labelId_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_labelId_int])(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(1100);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_markTargetLabel_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:markTargetLabel", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1104);
	jint temp0 = (jint)M_rhino_CodeGenerator_getTargetLabel_rhino_Node_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(1105);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_labelTable;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(1107);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_2:;
	{
	LINE_NUMBER(1109);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_labelTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop);
	LINE_NUMBER(1110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_addGoto_rhino_Node_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:addGoto", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1113);
	jint temp0 = (jint)M_rhino_CodeGenerator_getTargetLabel_rhino_Node_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(1114);
	if ((frame[3].i) < ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_labelTableTop)) goto label_2;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_2:;
	{
	LINE_NUMBER(1115);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_labelTable;
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)));
	LINE_NUMBER(1117);
	if ((frame[4].i) == (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(1118);
	M_rhino_CodeGenerator_addBackwardGoto_int_int(ctx, (frame[0].o), (frame[2].i), (frame[4].i));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(1120);
	frame[5].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop);
	LINE_NUMBER(1121);
	M_rhino_CodeGenerator_addGotoOp_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(1122);
	frame[6].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_fixupTableTop);
	LINE_NUMBER(1123);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_fixupTable;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_fixupTable;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(1124);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_fixupTable;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(1125);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_long, (40));
	((rhino_CodeGenerator *) NULL_CHECK(sp[0].o))->F_fixupTable = (jref) sp[1].o;
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(1127);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_fixupTable;
	sp[0].o = (jobject) createArray(ctx, &class_long, ((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1128);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_fixupTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[7].o), (jint(0)), (frame[6].i));
	LINE_NUMBER(1129);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_fixupTable = (jref) (frame[7].o);
	}
label_11:;
	{
	LINE_NUMBER(1132);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_fixupTableTop = ((frame[6].i) + (jint(1)));
	LINE_NUMBER(1133);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_fixupTable;
	ARRAY_ACCESS(jlong, sp[0].o, (frame[6].i)) = (((jlong((frame[3].i))) << (32)) | (jlong((frame[5].i))));
	}
label_6:;
	LINE_NUMBER(1135);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_fixLabelGotos(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:fixLabelGotos", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1138);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	if ((frame[1].i) >= ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_fixupTableTop)) goto label_2;
	}
	{
	LINE_NUMBER(1139);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_fixupTable;
	frame[2].l = ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[1].i)));
	LINE_NUMBER(1140);
	frame[4].i = (jint(((frame[2].l) >> (32))));
	LINE_NUMBER(1141);
	frame[5].i = (jint((frame[2].l)));
	LINE_NUMBER(1142);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_labelTable;
	frame[6].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)));
	LINE_NUMBER(1143);
	if ((frame[6].i) != (jint(-1))) goto label_8;
	}
	{
	LINE_NUMBER(1145);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(1147);
	M_rhino_CodeGenerator_resolveGoto_int_int(ctx, (frame[0].o), (frame[5].i), (frame[6].i));
	LINE_NUMBER(1138);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1149);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_fixupTableTop = (jint(0));
	LINE_NUMBER(1150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_addBackwardGoto_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:addBackwardGoto", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1153);
	frame[3].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop);
	LINE_NUMBER(1155);
	if ((frame[3].i) > (frame[2].i)) goto label_2;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_2:;
	{
	LINE_NUMBER(1156);
	M_rhino_CodeGenerator_addGotoOp_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1157);
	M_rhino_CodeGenerator_resolveGoto_int_int(ctx, (frame[0].o), (frame[3].i), (frame[2].i));
	LINE_NUMBER(1158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_resolveForwardGoto_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:resolveForwardGoto", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1162);
	if (((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop) >= ((frame[1].i) + (jint(3)))) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_1:;
	{
	LINE_NUMBER(1163);
	M_rhino_CodeGenerator_resolveGoto_int_int(ctx, (frame[0].o), (frame[1].i), ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop));
	LINE_NUMBER(1164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_resolveGoto_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:resolveGoto", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1167);
	frame[3].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(1169);
	if ((jint(0)) > (frame[3].i)) goto label_2;
	}
	{
	if ((frame[3].i) > (jint(2))) goto label_2;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_2:;
	{
	LINE_NUMBER(1170);
	frame[4].i = ((frame[1].i) + (jint(1)));
	LINE_NUMBER(1171);
	if ((frame[3].i) == (jshort((frame[3].i)))) goto label_4;
	}
	{
	LINE_NUMBER(1172);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_longJumps;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1173);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	clinit_rhino_UintMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_UintMap);
	init_rhino_UintMap(ctx, sp[1].o);
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_longJumps = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(1175);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_longJumps;
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, sp[0].o, (frame[4].i), (frame[2].i));
	LINE_NUMBER(1176);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1178);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsICode;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1179);
	ARRAY_ACCESS(jbyte, (frame[5].o), (frame[4].i)) = (jbyte(((frame[3].i) >> (8))));
	LINE_NUMBER(1180);
	ARRAY_ACCESS(jbyte, (frame[5].o), ((frame[4].i) + (jint(1)))) = (jbyte((frame[3].i)));
	LINE_NUMBER(1181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_addToken_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:addToken", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1184);
	jint temp0 = (jint)SM_rhino_Icode_validTokenCode_int_R_boolean(ctx, (frame[1].i));
	if (temp0 != 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_1:;
	{
	LINE_NUMBER(1185);
	M_rhino_CodeGenerator_addUint8_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1186);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_addIcode_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:addIcode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1189);
	jint temp0 = (jint)SM_rhino_Icode_validIcode_int_R_boolean(ctx, (frame[1].i));
	if (temp0 != 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_1:;
	{
	LINE_NUMBER(1191);
	M_rhino_CodeGenerator_addUint8_int(ctx, (frame[0].o), ((frame[1].i) & (255)));
	LINE_NUMBER(1192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_addUint8_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:addUint8", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1195);
	if (((frame[1].i) & (-256)) == 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_1:;
	{
	LINE_NUMBER(1196);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsICode;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1197);
	frame[3].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop);
	LINE_NUMBER(1198);
	if ((frame[3].i) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(1199);
	sp[0].o = (jobject)M_rhino_CodeGenerator_increaseICodeCapacity_int_R_Array1_byte(ctx, (frame[0].o), (jint(1)));
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1201);
	ARRAY_ACCESS(jbyte, (frame[2].o), (frame[3].i)) = (jbyte((frame[1].i)));
	LINE_NUMBER(1202);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop = ((frame[3].i) + (jint(1)));
	LINE_NUMBER(1203);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_addUint16_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:addUint16", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1206);
	if (((frame[1].i) & (jint(-65536))) == 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_1:;
	{
	LINE_NUMBER(1207);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsICode;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1208);
	frame[3].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop);
	LINE_NUMBER(1209);
	if (((frame[3].i) + (jint(2))) <= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(1210);
	sp[0].o = (jobject)M_rhino_CodeGenerator_increaseICodeCapacity_int_R_Array1_byte(ctx, (frame[0].o), (jint(2)));
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1212);
	ARRAY_ACCESS(jbyte, (frame[2].o), (frame[3].i)) = (jbyte((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (8)))));
	LINE_NUMBER(1213);
	ARRAY_ACCESS(jbyte, (frame[2].o), ((frame[3].i) + (jint(1)))) = (jbyte((frame[1].i)));
	LINE_NUMBER(1214);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop = ((frame[3].i) + (jint(2)));
	LINE_NUMBER(1215);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_addInt_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:addInt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1218);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsICode;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1219);
	frame[3].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop);
	LINE_NUMBER(1220);
	if (((frame[3].i) + (jint(4))) <= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(1221);
	sp[0].o = (jobject)M_rhino_CodeGenerator_increaseICodeCapacity_int_R_Array1_byte(ctx, (frame[0].o), (jint(4)));
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1223);
	ARRAY_ACCESS(jbyte, (frame[2].o), (frame[3].i)) = (jbyte((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (24)))));
	LINE_NUMBER(1224);
	ARRAY_ACCESS(jbyte, (frame[2].o), ((frame[3].i) + (jint(1)))) = (jbyte((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (16)))));
	LINE_NUMBER(1225);
	ARRAY_ACCESS(jbyte, (frame[2].o), ((frame[3].i) + (jint(2)))) = (jbyte((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (8)))));
	LINE_NUMBER(1226);
	ARRAY_ACCESS(jbyte, (frame[2].o), ((frame[3].i) + (jint(3)))) = (jbyte((frame[1].i)));
	LINE_NUMBER(1227);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop = ((frame[3].i) + (jint(4)));
	LINE_NUMBER(1228);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_CodeGenerator_getDoubleIndex_double_R_int(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:getDoubleIndex", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(1231);
	frame[3].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_doubleTableTop);
	LINE_NUMBER(1232);
	if ((frame[3].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(1233);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[1].o = (jobject) createArray(ctx, &class_double, (64));
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsDoubleTable = (jref) sp[1].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1234);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsDoubleTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(1235);
	sp[0].o = (jobject) createArray(ctx, &class_double, ((frame[3].i) * (jint(2))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1236);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsDoubleTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[4].o), (jint(0)), (frame[3].i));
	LINE_NUMBER(1237);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsDoubleTable = (jref) (frame[4].o);
	}
label_4:;
	{
	LINE_NUMBER(1239);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsDoubleTable;
	ARRAY_ACCESS(jdouble, sp[0].o, (frame[3].i)) = (frame[1].d);
	LINE_NUMBER(1240);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_doubleTableTop = ((frame[3].i) + (jint(1)));
	LINE_NUMBER(1241);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_addGotoOp_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:addGotoOp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1245);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsICode;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1246);
	frame[3].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop);
	LINE_NUMBER(1247);
	if (((frame[3].i) + (jint(3))) <= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(1248);
	sp[0].o = (jobject)M_rhino_CodeGenerator_increaseICodeCapacity_int_R_Array1_byte(ctx, (frame[0].o), (jint(3)));
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1250);
	ARRAY_ACCESS(jbyte, (frame[2].o), (frame[3].i)) = (jbyte((frame[1].i)));
	LINE_NUMBER(1252);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop = (((frame[3].i) + (jint(1))) + (jint(2)));
	LINE_NUMBER(1253);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_addVarOp_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:addVarOp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1256);
	switch((frame[1].i)) {
		case -7: goto label_1;
		case 55: goto label_2;
		case 56: goto label_2;
		case 157: goto label_3;
		default: goto label_4;
	}
	}
label_3:;
	{
	LINE_NUMBER(1258);
	if ((frame[2].i) >= (128)) goto label_5;
	}
	{
	LINE_NUMBER(1259);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-61));
	LINE_NUMBER(1260);
	M_rhino_CodeGenerator_addUint8_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(1261);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(1263);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (-60), (frame[2].i));
	LINE_NUMBER(1264);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(1267);
	if ((frame[2].i) >= (128)) goto label_1;
	}
	{
	LINE_NUMBER(1268);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) != (55)) goto label_11;
	}
	INST_BIPUSH(-48);
	goto label_12;
label_11:;
	INST_BIPUSH(-49);
label_12:;
	{
	sp -= 2;
	M_rhino_CodeGenerator_addIcode_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1269);
	M_rhino_CodeGenerator_addUint8_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(1270);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(1274);
	M_rhino_CodeGenerator_addIndexOp_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(1275);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(1277);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_addStringOp_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:addStringOp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1281);
	M_rhino_CodeGenerator_addStringPrefix_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(1282);
	jint temp0 = (jint)SM_rhino_Icode_validIcode_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1283);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (frame[1].i));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1285);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (frame[1].i));
	}
label_4:;
	LINE_NUMBER(1287);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_addIndexOp_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:addIndexOp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1290);
	M_rhino_CodeGenerator_addIndexPrefix_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(1291);
	jint temp0 = (jint)SM_rhino_Icode_validIcode_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1292);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (frame[1].i));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1294);
	M_rhino_CodeGenerator_addToken_int(ctx, (frame[0].o), (frame[1].i));
	}
label_4:;
	LINE_NUMBER(1296);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_addStringPrefix_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:addStringPrefix", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1299);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_strings;
	jint temp0 = (jint)((func_rhino_ObjToIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(-1)));
	frame[2].i = temp0;
	LINE_NUMBER(1300);
	if ((frame[2].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(1301);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_strings;
	jint temp0 = (jint)((func_rhino_ObjToIntMap_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_size_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(1302);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_strings;
	((func_rhino_ObjToIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	}
label_2:;
	{
	LINE_NUMBER(1304);
	if ((frame[2].i) >= (jint(4))) goto label_5;
	}
	{
	LINE_NUMBER(1305);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), ((-41) - (frame[2].i)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(1306);
	if ((frame[2].i) > (255)) goto label_8;
	}
	{
	LINE_NUMBER(1307);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-45));
	LINE_NUMBER(1308);
	M_rhino_CodeGenerator_addUint8_int(ctx, (frame[0].o), (frame[2].i));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(1309);
	if ((frame[2].i) > (jint(65535))) goto label_11;
	}
	{
	LINE_NUMBER(1310);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-46));
	LINE_NUMBER(1311);
	M_rhino_CodeGenerator_addUint16_int(ctx, (frame[0].o), (frame[2].i));
	goto label_7;
	}
label_11:;
	{
	LINE_NUMBER(1313);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-47));
	LINE_NUMBER(1314);
	M_rhino_CodeGenerator_addInt_int(ctx, (frame[0].o), (frame[2].i));
	}
label_7:;
	LINE_NUMBER(1316);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_addIndexPrefix_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:addIndexPrefix", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1319);
	if ((frame[1].i) >= 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(1320);
	if ((frame[1].i) >= (6)) goto label_2;
	}
	{
	LINE_NUMBER(1321);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), ((-32) - (frame[1].i)));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1322);
	if ((frame[1].i) > (255)) goto label_5;
	}
	{
	LINE_NUMBER(1323);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-38));
	LINE_NUMBER(1324);
	M_rhino_CodeGenerator_addUint8_int(ctx, (frame[0].o), (frame[1].i));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1325);
	if ((frame[1].i) > (jint(65535))) goto label_8;
	}
	{
	LINE_NUMBER(1326);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-39));
	LINE_NUMBER(1327);
	M_rhino_CodeGenerator_addUint16_int(ctx, (frame[0].o), (frame[1].i));
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(1329);
	M_rhino_CodeGenerator_addIcode_int(ctx, (frame[0].o), (-40));
	LINE_NUMBER(1330);
	M_rhino_CodeGenerator_addInt_int(ctx, (frame[0].o), (frame[1].i));
	}
label_4:;
	LINE_NUMBER(1332);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_addExceptionHandler_int_int_int_boolean_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:addExceptionHandler", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(1337);
	frame[7].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_exceptionTableTop);
	LINE_NUMBER(1338);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsExceptionTable;
	frame[8].o = sp[0].o;
	LINE_NUMBER(1339);
	if ((frame[8].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1340);
	if ((frame[7].i) == 0) goto label_5;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_5:;
	{
	LINE_NUMBER(1341);
	sp[0].o = (jobject) createArray(ctx, &class_int, (12));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1342);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsExceptionTable = (jref) (frame[8].o);
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(1343);
	if ((((jarray) nullCheck(ctx, (frame[8].o)))->length) != (frame[7].i)) goto label_7;
	}
	{
	LINE_NUMBER(1344);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((((jarray) nullCheck(ctx, (frame[8].o)))->length) * (jint(2))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1345);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsExceptionTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[8].o), (jint(0)), (frame[7].i));
	LINE_NUMBER(1346);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsExceptionTable = (jref) (frame[8].o);
	}
label_7:;
	{
	LINE_NUMBER(1348);
	ARRAY_ACCESS(jint, (frame[8].o), ((frame[7].i) + (jint(0)))) = (frame[1].i);
	LINE_NUMBER(1349);
	ARRAY_ACCESS(jint, (frame[8].o), ((frame[7].i) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(1350);
	ARRAY_ACCESS(jint, (frame[8].o), ((frame[7].i) + (jint(2)))) = (frame[3].i);
	LINE_NUMBER(1351);
	sp[0].o = frame[8].o;
	jint temp0 = (frame[7].i) + (jint(3));
	sp[1].i = temp0;
	sp += 2;
	if ((frame[4].i) == 0) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 3;
	ARRAY_ACCESS(jint, sp[0].o, sp[1].i) = sp[2].i;
	LINE_NUMBER(1352);
	ARRAY_ACCESS(jint, (frame[8].o), ((frame[7].i) + (jint(4)))) = (frame[5].i);
	LINE_NUMBER(1353);
	ARRAY_ACCESS(jint, (frame[8].o), ((frame[7].i) + (jint(5)))) = (frame[6].i);
	LINE_NUMBER(1355);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_exceptionTableTop = ((frame[7].i) + (6));
	LINE_NUMBER(1356);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_CodeGenerator_increaseICodeCapacity_int_R_Array1_byte(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:increaseICodeCapacity", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1359);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsICode;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(1360);
	frame[3].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_iCodeTop);
	LINE_NUMBER(1361);
	if (((frame[3].i) + (frame[1].i)) > (frame[2].i)) goto label_3;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_3:;
	{
	LINE_NUMBER(1362);
	frame[2].i = ((frame[2].i) * (jint(2)));
	LINE_NUMBER(1363);
	if (((frame[3].i) + (frame[1].i)) <= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(1364);
	frame[2].i = ((frame[3].i) + (frame[1].i));
	}
label_5:;
	{
	LINE_NUMBER(1366);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1367);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsICode;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[4].o), (jint(0)), (frame[3].i));
	LINE_NUMBER(1368);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsICode = (jref) (frame[4].o);
	LINE_NUMBER(1369);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_stackChange_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:stackChange", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1373);
	if ((frame[1].i) > 0) goto label_1;
	}
	{
	LINE_NUMBER(1374);
	sp[0].o = frame[0].o;
	((rhino_CodeGenerator *) NULL_CHECK(sp[0].o))->F_stackDepth = (((jint)((rhino_CodeGenerator *) NULL_CHECK(sp[0].o))->F_stackDepth) + (frame[1].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1376);
	frame[2].i = (((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_stackDepth) + (frame[1].i));
	LINE_NUMBER(1377);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	if (temp0 <= ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsMaxStack)) goto label_5;
	}
	{
	LINE_NUMBER(1378);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsMaxStack = (frame[2].i);
	}
label_5:;
	{
	LINE_NUMBER(1380);
	((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_stackDepth = (frame[2].i);
	}
label_3:;
	LINE_NUMBER(1382);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_rhino_CodeGenerator_allocLocal_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:allocLocal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1385);
	frame[1].i = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_localTop);
	LINE_NUMBER(1386);
	sp[0].o = frame[0].o;
	((rhino_CodeGenerator *) NULL_CHECK(sp[0].o))->F_localTop = (((jint)((rhino_CodeGenerator *) NULL_CHECK(sp[0].o))->F_localTop) + (jint(1)));
	LINE_NUMBER(1387);
	jint temp0 = (jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_localTop;
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	if (temp0 <= ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsMaxLocals)) goto label_3;
	}
	{
	LINE_NUMBER(1388);
	sp[0].o = (jobject)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_itsData;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsMaxLocals = ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_localTop);
	}
label_3:;
	{
	LINE_NUMBER(1390);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void M_rhino_CodeGenerator_releaseLocal_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/CodeGenerator:releaseLocal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1394);
	sp[0].o = frame[0].o;
	((rhino_CodeGenerator *) NULL_CHECK(sp[0].o))->F_localTop = (((jint)((rhino_CodeGenerator *) NULL_CHECK(sp[0].o))->F_localTop) - (jint(1)));
	LINE_NUMBER(1395);
	if ((frame[1].i) == ((jint)((rhino_CodeGenerator *) NULL_CHECK((frame[0].o)))->F_localTop)) goto label_2;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_2:;
	LINE_NUMBER(1396);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_CodeGenerator[] {
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
	(void *) M_rhino_CodeGenerator_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_rhino_InterpreterData,
	(void *) M_rhino_CodeGenerator_generateFunctionICode,
	(void *) M_rhino_CodeGenerator_generateICodeFromTree_rhino_Node,
	(void *) M_rhino_CodeGenerator_generateNestedFunctions,
	(void *) M_rhino_CodeGenerator_generateRegExpLiterals,
	(void *) M_rhino_CodeGenerator_updateLineNumber_rhino_Node,
	(void *) M_rhino_CodeGenerator_badTree_rhino_Node_R_java_lang_RuntimeException,
	(void *) M_rhino_CodeGenerator_visitStatement_rhino_Node_int,
	(void *) M_rhino_CodeGenerator_visitExpression_rhino_Node_int,
	(void *) M_rhino_CodeGenerator_generateCallFunAndThis_rhino_Node,
	(void *) M_rhino_CodeGenerator_visitIncDec_rhino_Node_rhino_Node,
	(void *) M_rhino_CodeGenerator_visitLiteral_rhino_Node_rhino_Node,
	(void *) M_rhino_CodeGenerator_visitArrayComprehension_rhino_Node_rhino_Node_rhino_Node,
	(void *) M_rhino_CodeGenerator_getLocalBlockRef_rhino_Node_R_int,
	(void *) M_rhino_CodeGenerator_getTargetLabel_rhino_Node_R_int,
	(void *) M_rhino_CodeGenerator_markTargetLabel_rhino_Node,
	(void *) M_rhino_CodeGenerator_addGoto_rhino_Node_int,
	(void *) M_rhino_CodeGenerator_fixLabelGotos,
	(void *) M_rhino_CodeGenerator_addBackwardGoto_int_int,
	(void *) M_rhino_CodeGenerator_resolveForwardGoto_int,
	(void *) M_rhino_CodeGenerator_resolveGoto_int_int,
	(void *) M_rhino_CodeGenerator_addToken_int,
	(void *) M_rhino_CodeGenerator_addIcode_int,
	(void *) M_rhino_CodeGenerator_addUint8_int,
	(void *) M_rhino_CodeGenerator_addUint16_int,
	(void *) M_rhino_CodeGenerator_addInt_int,
	(void *) M_rhino_CodeGenerator_getDoubleIndex_double_R_int,
	(void *) M_rhino_CodeGenerator_addGotoOp_int,
	(void *) M_rhino_CodeGenerator_addVarOp_int_int,
	(void *) M_rhino_CodeGenerator_addStringOp_int_java_lang_String,
	(void *) M_rhino_CodeGenerator_addIndexOp_int_int,
	(void *) M_rhino_CodeGenerator_addStringPrefix_java_lang_String,
	(void *) M_rhino_CodeGenerator_addIndexPrefix_int,
	(void *) M_rhino_CodeGenerator_addExceptionHandler_int_int_int_boolean_int_int,
	(void *) M_rhino_CodeGenerator_increaseICodeCapacity_int_R_Array1_byte,
	(void *) M_rhino_CodeGenerator_stackChange_int,
	(void *) M_rhino_CodeGenerator_allocLocal_R_int,
	(void *) M_rhino_CodeGenerator_releaseLocal_int,
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
	{ "compile", "(Lrhino/CompilerEnvirons;Lrhino/ast/ScriptNode;Ljava/lang/String;Z)Lrhino/InterpreterData;" },
	{ "generateFunctionICode", "()V" },
	{ "generateICodeFromTree", "(Lrhino/Node;)V" },
	{ "generateNestedFunctions", "()V" },
	{ "generateRegExpLiterals", "()V" },
	{ "updateLineNumber", "(Lrhino/Node;)V" },
	{ "badTree", "(Lrhino/Node;)Ljava/lang/RuntimeException;" },
	{ "visitStatement", "(Lrhino/Node;I)V" },
	{ "visitExpression", "(Lrhino/Node;I)V" },
	{ "generateCallFunAndThis", "(Lrhino/Node;)V" },
	{ "visitIncDec", "(Lrhino/Node;Lrhino/Node;)V" },
	{ "visitLiteral", "(Lrhino/Node;Lrhino/Node;)V" },
	{ "visitArrayComprehension", "(Lrhino/Node;Lrhino/Node;Lrhino/Node;)V" },
	{ "getLocalBlockRef", "(Lrhino/Node;)I" },
	{ "getTargetLabel", "(Lrhino/Node;)I" },
	{ "markTargetLabel", "(Lrhino/Node;)V" },
	{ "addGoto", "(Lrhino/Node;I)V" },
	{ "fixLabelGotos", "()V" },
	{ "addBackwardGoto", "(II)V" },
	{ "resolveForwardGoto", "(I)V" },
	{ "resolveGoto", "(II)V" },
	{ "addToken", "(I)V" },
	{ "addIcode", "(I)V" },
	{ "addUint8", "(I)V" },
	{ "addUint16", "(I)V" },
	{ "addInt", "(I)V" },
	{ "getDoubleIndex", "(D)I" },
	{ "addGotoOp", "(I)V" },
	{ "addVarOp", "(II)V" },
	{ "addStringOp", "(ILjava/lang/String;)V" },
	{ "addIndexOp", "(II)V" },
	{ "addStringPrefix", "(Ljava/lang/String;)V" },
	{ "addIndexPrefix", "(I)V" },
	{ "addExceptionHandler", "(IIIZII)V" },
	{ "increaseICodeCapacity", "(I)[B" },
	{ "stackChange", "(I)V" },
	{ "allocLocal", "()I" },
	{ "releaseLocal", "(I)V" },
};

static FieldMetadata fields[] {
	{ "MIN_LABEL_TABLE_SIZE", &class_int, (intptr_t) &SF_rhino_CodeGenerator_MIN_LABEL_TABLE_SIZE, "I", 26 },
	{ "MIN_FIXUP_TABLE_SIZE", &class_int, (intptr_t) &SF_rhino_CodeGenerator_MIN_FIXUP_TABLE_SIZE, "I", 26 },
	{ "compilerEnv", &class_rhino_CompilerEnvirons, offsetof(rhino_CodeGenerator, F_compilerEnv), "Lrhino/CompilerEnvirons;", 2 },
	{ "itsInFunctionFlag", &class_boolean, offsetof(rhino_CodeGenerator, F_itsInFunctionFlag), "Z", 2 },
	{ "itsInTryFlag", &class_boolean, offsetof(rhino_CodeGenerator, F_itsInTryFlag), "Z", 2 },
	{ "itsData", &class_rhino_InterpreterData, offsetof(rhino_CodeGenerator, F_itsData), "Lrhino/InterpreterData;", 2 },
	{ "scriptOrFn", &class_rhino_ast_ScriptNode, offsetof(rhino_CodeGenerator, F_scriptOrFn), "Lrhino/ast/ScriptNode;", 2 },
	{ "iCodeTop", &class_int, offsetof(rhino_CodeGenerator, F_iCodeTop), "I", 2 },
	{ "stackDepth", &class_int, offsetof(rhino_CodeGenerator, F_stackDepth), "I", 2 },
	{ "lineNumber", &class_int, offsetof(rhino_CodeGenerator, F_lineNumber), "I", 2 },
	{ "doubleTableTop", &class_int, offsetof(rhino_CodeGenerator, F_doubleTableTop), "I", 2 },
	{ "strings", &class_rhino_ObjToIntMap, offsetof(rhino_CodeGenerator, F_strings), "Lrhino/ObjToIntMap;", 18 },
	{ "localTop", &class_int, offsetof(rhino_CodeGenerator, F_localTop), "I", 2 },
	{ "labelTable", getArrayClass(&class_int, 1), offsetof(rhino_CodeGenerator, F_labelTable), "[I", 2 },
	{ "labelTableTop", &class_int, offsetof(rhino_CodeGenerator, F_labelTableTop), "I", 2 },
	{ "fixupTable", getArrayClass(&class_long, 1), offsetof(rhino_CodeGenerator, F_fixupTable), "[J", 2 },
	{ "fixupTableTop", &class_int, offsetof(rhino_CodeGenerator, F_fixupTableTop), "I", 2 },
	{ "literalIds", &class_rhino_ObjArray, offsetof(rhino_CodeGenerator, F_literalIds), "Lrhino/ObjArray;", 18 },
	{ "exceptionTableTop", &class_int, offsetof(rhino_CodeGenerator, F_exceptionTableTop), "I", 2 },
	{ "ECF_TAIL", &class_int, (intptr_t) &SF_rhino_CodeGenerator_ECF_TAIL, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_CodeGenerator, 0, "()V", 0 },
	{ "compile", (intptr_t) M_rhino_CodeGenerator_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_rhino_InterpreterData, VTABLE_rhino_CodeGenerator_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_rhino_InterpreterData, "(Lrhino/CompilerEnvirons;Lrhino/ast/ScriptNode;Ljava/lang/String;Z)Lrhino/InterpreterData;", 1 },
	{ "generateFunctionICode", (intptr_t) M_rhino_CodeGenerator_generateFunctionICode, VTABLE_rhino_CodeGenerator_generateFunctionICode, "()V", 2 },
	{ "generateICodeFromTree", (intptr_t) M_rhino_CodeGenerator_generateICodeFromTree_rhino_Node, VTABLE_rhino_CodeGenerator_generateICodeFromTree_rhino_Node, "(Lrhino/Node;)V", 2 },
	{ "generateNestedFunctions", (intptr_t) M_rhino_CodeGenerator_generateNestedFunctions, VTABLE_rhino_CodeGenerator_generateNestedFunctions, "()V", 2 },
	{ "generateRegExpLiterals", (intptr_t) M_rhino_CodeGenerator_generateRegExpLiterals, VTABLE_rhino_CodeGenerator_generateRegExpLiterals, "()V", 2 },
	{ "updateLineNumber", (intptr_t) M_rhino_CodeGenerator_updateLineNumber_rhino_Node, VTABLE_rhino_CodeGenerator_updateLineNumber_rhino_Node, "(Lrhino/Node;)V", 2 },
	{ "badTree", (intptr_t) M_rhino_CodeGenerator_badTree_rhino_Node_R_java_lang_RuntimeException, VTABLE_rhino_CodeGenerator_badTree_rhino_Node_R_java_lang_RuntimeException, "(Lrhino/Node;)Ljava/lang/RuntimeException;", 2 },
	{ "visitStatement", (intptr_t) M_rhino_CodeGenerator_visitStatement_rhino_Node_int, VTABLE_rhino_CodeGenerator_visitStatement_rhino_Node_int, "(Lrhino/Node;I)V", 2 },
	{ "visitExpression", (intptr_t) M_rhino_CodeGenerator_visitExpression_rhino_Node_int, VTABLE_rhino_CodeGenerator_visitExpression_rhino_Node_int, "(Lrhino/Node;I)V", 2 },
	{ "generateCallFunAndThis", (intptr_t) M_rhino_CodeGenerator_generateCallFunAndThis_rhino_Node, VTABLE_rhino_CodeGenerator_generateCallFunAndThis_rhino_Node, "(Lrhino/Node;)V", 2 },
	{ "visitIncDec", (intptr_t) M_rhino_CodeGenerator_visitIncDec_rhino_Node_rhino_Node, VTABLE_rhino_CodeGenerator_visitIncDec_rhino_Node_rhino_Node, "(Lrhino/Node;Lrhino/Node;)V", 2 },
	{ "visitLiteral", (intptr_t) M_rhino_CodeGenerator_visitLiteral_rhino_Node_rhino_Node, VTABLE_rhino_CodeGenerator_visitLiteral_rhino_Node_rhino_Node, "(Lrhino/Node;Lrhino/Node;)V", 2 },
	{ "visitArrayComprehension", (intptr_t) M_rhino_CodeGenerator_visitArrayComprehension_rhino_Node_rhino_Node_rhino_Node, VTABLE_rhino_CodeGenerator_visitArrayComprehension_rhino_Node_rhino_Node_rhino_Node, "(Lrhino/Node;Lrhino/Node;Lrhino/Node;)V", 2 },
	{ "getLocalBlockRef", (intptr_t) M_rhino_CodeGenerator_getLocalBlockRef_rhino_Node_R_int, VTABLE_rhino_CodeGenerator_getLocalBlockRef_rhino_Node_R_int, "(Lrhino/Node;)I", 2 },
	{ "getTargetLabel", (intptr_t) M_rhino_CodeGenerator_getTargetLabel_rhino_Node_R_int, VTABLE_rhino_CodeGenerator_getTargetLabel_rhino_Node_R_int, "(Lrhino/Node;)I", 2 },
	{ "markTargetLabel", (intptr_t) M_rhino_CodeGenerator_markTargetLabel_rhino_Node, VTABLE_rhino_CodeGenerator_markTargetLabel_rhino_Node, "(Lrhino/Node;)V", 2 },
	{ "addGoto", (intptr_t) M_rhino_CodeGenerator_addGoto_rhino_Node_int, VTABLE_rhino_CodeGenerator_addGoto_rhino_Node_int, "(Lrhino/Node;I)V", 2 },
	{ "fixLabelGotos", (intptr_t) M_rhino_CodeGenerator_fixLabelGotos, VTABLE_rhino_CodeGenerator_fixLabelGotos, "()V", 2 },
	{ "addBackwardGoto", (intptr_t) M_rhino_CodeGenerator_addBackwardGoto_int_int, VTABLE_rhino_CodeGenerator_addBackwardGoto_int_int, "(II)V", 2 },
	{ "resolveForwardGoto", (intptr_t) M_rhino_CodeGenerator_resolveForwardGoto_int, VTABLE_rhino_CodeGenerator_resolveForwardGoto_int, "(I)V", 2 },
	{ "resolveGoto", (intptr_t) M_rhino_CodeGenerator_resolveGoto_int_int, VTABLE_rhino_CodeGenerator_resolveGoto_int_int, "(II)V", 2 },
	{ "addToken", (intptr_t) M_rhino_CodeGenerator_addToken_int, VTABLE_rhino_CodeGenerator_addToken_int, "(I)V", 2 },
	{ "addIcode", (intptr_t) M_rhino_CodeGenerator_addIcode_int, VTABLE_rhino_CodeGenerator_addIcode_int, "(I)V", 2 },
	{ "addUint8", (intptr_t) M_rhino_CodeGenerator_addUint8_int, VTABLE_rhino_CodeGenerator_addUint8_int, "(I)V", 2 },
	{ "addUint16", (intptr_t) M_rhino_CodeGenerator_addUint16_int, VTABLE_rhino_CodeGenerator_addUint16_int, "(I)V", 2 },
	{ "addInt", (intptr_t) M_rhino_CodeGenerator_addInt_int, VTABLE_rhino_CodeGenerator_addInt_int, "(I)V", 2 },
	{ "getDoubleIndex", (intptr_t) M_rhino_CodeGenerator_getDoubleIndex_double_R_int, VTABLE_rhino_CodeGenerator_getDoubleIndex_double_R_int, "(D)I", 2 },
	{ "addGotoOp", (intptr_t) M_rhino_CodeGenerator_addGotoOp_int, VTABLE_rhino_CodeGenerator_addGotoOp_int, "(I)V", 2 },
	{ "addVarOp", (intptr_t) M_rhino_CodeGenerator_addVarOp_int_int, VTABLE_rhino_CodeGenerator_addVarOp_int_int, "(II)V", 2 },
	{ "addStringOp", (intptr_t) M_rhino_CodeGenerator_addStringOp_int_java_lang_String, VTABLE_rhino_CodeGenerator_addStringOp_int_java_lang_String, "(ILjava/lang/String;)V", 2 },
	{ "addIndexOp", (intptr_t) M_rhino_CodeGenerator_addIndexOp_int_int, VTABLE_rhino_CodeGenerator_addIndexOp_int_int, "(II)V", 2 },
	{ "addStringPrefix", (intptr_t) M_rhino_CodeGenerator_addStringPrefix_java_lang_String, VTABLE_rhino_CodeGenerator_addStringPrefix_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "addIndexPrefix", (intptr_t) M_rhino_CodeGenerator_addIndexPrefix_int, VTABLE_rhino_CodeGenerator_addIndexPrefix_int, "(I)V", 2 },
	{ "addExceptionHandler", (intptr_t) M_rhino_CodeGenerator_addExceptionHandler_int_int_int_boolean_int_int, VTABLE_rhino_CodeGenerator_addExceptionHandler_int_int_int_boolean_int_int, "(IIIZII)V", 2 },
	{ "increaseICodeCapacity", (intptr_t) M_rhino_CodeGenerator_increaseICodeCapacity_int_R_Array1_byte, VTABLE_rhino_CodeGenerator_increaseICodeCapacity_int_R_Array1_byte, "(I)[B", 2 },
	{ "stackChange", (intptr_t) M_rhino_CodeGenerator_stackChange_int, VTABLE_rhino_CodeGenerator_stackChange_int, "(I)V", 2 },
	{ "allocLocal", (intptr_t) M_rhino_CodeGenerator_allocLocal_R_int, VTABLE_rhino_CodeGenerator_allocLocal_R_int, "()I", 2 },
	{ "releaseLocal", (intptr_t) M_rhino_CodeGenerator_releaseLocal_int, VTABLE_rhino_CodeGenerator_releaseLocal_int, "(I)V", 2 },
};

Class class_rhino_CodeGenerator{
		.nativeName = (intptr_t) "rhino/CodeGenerator",
		.parentClass = (intptr_t) &class_rhino_Icode,
		.size = sizeof(rhino_CodeGenerator),
		.classVtable = (intptr_t) vtable_rhino_CodeGenerator,
		.staticInitializer = (intptr_t) clinit_rhino_CodeGenerator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_CodeGenerator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 20,
		.nativeFields = (intptr_t) fields,
		.methodCount = 39,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 49,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_CodeGenerator = registerClass(&class_rhino_CodeGenerator);

}
