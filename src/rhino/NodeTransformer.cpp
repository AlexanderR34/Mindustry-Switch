#include "rhino/NodeTransformer.h"
#include "java/util/Iterator.h"
#include "rhino/ast/Jump.h"
#include "java/util/ArrayList.h"
#include "rhino/ast/FunctionNode.h"
#include "java/util/Map.h"
#include "rhino/ObjArray.h"
#include "rhino/ast/Scope.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "rhino/Node.h"
#include "java/util/Set.h"
#include "rhino/Kit.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/ast/ScriptNode.h"
#include "java/lang/String.h"
#include "rhino/CompilerEnvirons.h"
#include "java/lang/RuntimeException.h"
#include "rhino/NodeTransformer.h"
#include "java/util/List.h"

extern "C" {


void mark_rhino_NodeTransformer(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_NodeTransformer *) object;
	if (self->F_loops)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loops)->clazz)->markFunction)((jobject) self->F_loops, mark, depth + 1);
	if (self->F_loopEnds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loopEnds)->clazz)->markFunction)((jobject) self->F_loopEnds, mark, depth + 1);
}

void clinit_rhino_NodeTransformer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_NodeTransformer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NodeTransformer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NodeTransformer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_rhino_CompilerEnvirons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NodeTransformer:transform", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(19);
	((func_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_boolean_rhino_CompilerEnvirons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_boolean_rhino_CompilerEnvirons])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].o));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_boolean_rhino_CompilerEnvirons(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NodeTransformer:transform", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(23);
	frame[4].i = (frame[2].i);
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, (frame[3].o));
	if (temp0 < (200)) goto label_2;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_ScriptNode_isInStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ScriptNode_isInStrictMode_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(28);
	frame[4].i = (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(30);
	M_rhino_NodeTransformer_transformCompilationUnit_rhino_ast_ScriptNode_boolean(ctx, (frame[0].o), (frame[1].o), (frame[4].i));
	LINE_NUMBER(31);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_rhino_ast_ScriptNode_getFunctionCount_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ScriptNode_getFunctionCount_R_int])(ctx, (frame[1].o));
	if (temp0 == temp1) goto label_6;
	}
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode])(ctx, (frame[1].o), (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(33);
	((func_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_boolean_rhino_CompilerEnvirons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_boolean_rhino_CompilerEnvirons])(ctx, (frame[0].o), (frame[6].o), (frame[4].i), (frame[3].o));
	LINE_NUMBER(31);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_NodeTransformer_transformCompilationUnit_rhino_ast_ScriptNode_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NodeTransformer:transformCompilationUnit", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjArray);
	init_rhino_ObjArray(ctx, sp[1].o);
	((rhino_NodeTransformer *) NULL_CHECK(sp[0].o))->F_loops = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjArray);
	init_rhino_ObjArray(ctx, sp[1].o);
	((rhino_NodeTransformer *) NULL_CHECK(sp[0].o))->F_loopEnds = (jref) sp[1].o;
	LINE_NUMBER(42);
	((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_hasFinally = (jint(0));
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_rhino_ast_ScriptNode_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ScriptNode_getType_R_int])(ctx, (frame[1].o));
	if (temp0 != (110)) goto label_4;
	}
	{
	sp[0].o = checkCast(ctx, &class_rhino_ast_FunctionNode, (frame[1].o));
	LINE_NUMBER(46);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_requiresActivation_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_requiresActivation_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
label_4:;
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(47);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((frame[3].i) != 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 2;
	((func_rhino_ast_ScriptNode_flattenSymbolTable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_flattenSymbolTable_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(51);
	M_rhino_NodeTransformer_transformCompilationUnit_r_rhino_ast_ScriptNode_rhino_Node_rhino_ast_Scope_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[1].o), (frame[1].o), (frame[3].i), (frame[2].i));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_NodeTransformer_transformCompilationUnit_r_rhino_ast_ScriptNode_rhino_Node_rhino_ast_Scope_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NodeTransformer:transformCompilationUnit_r", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(60);
	frame[6].o = (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(63);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(64);
	if ((frame[6].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[2].o));
	frame[6].o = sp[0].o;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(67);
	frame[7].o = (frame[6].o);
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[6].o));
	frame[6].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(70);
	if ((frame[6].o) != nullptr) goto label_7;
	}
	LINE_NUMBER(71);
	goto label_9;
label_7:;
	{
	LINE_NUMBER(74);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[6].o));
	frame[8].i = temp0;
	LINE_NUMBER(75);
	if ((frame[4].i) == 0) goto label_11;
	}
	{
	if ((frame[8].i) == (130)) goto label_12;
	}
	{
	if ((frame[8].i) == (133)) goto label_12;
	}
	{
	if ((frame[8].i) != (158)) goto label_11;
	}
label_12:;
	{
	if ((isInstance(ctx, (frame[6].o), &class_rhino_ast_Scope)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(79);
	frame[9].o = (checkCast(ctx, &class_rhino_ast_Scope, (frame[6].o)));
	LINE_NUMBER(80);
	sp[0].o = (jobject)((func_rhino_ast_Scope_getSymbolTable_R_java_util_Map) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_Scope_getSymbolTable_R_java_util_Map])(ctx, (frame[9].o));
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(83);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[8].i) != (158)) goto label_16;
	}
	INST_SIPUSH(159);
	goto label_17;
label_16:;
	INST_SIPUSH(154);
label_17:;
	{
	sp -= 3;
	init_rhino_Node_int(ctx, sp[0].o, sp[2].i);
	frame[10].o = sp[0].o;
	LINE_NUMBER(85);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (154));
	frame[11].o = sp[0].o;
	LINE_NUMBER(86);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[10].o), (frame[11].o));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_rhino_ast_Scope_getSymbolTable_R_java_util_Map) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_Scope_getSymbolTable_R_java_util_Map])(ctx, (frame[9].o));
	sp[0].o = (jobject)((func_java_util_Map_keySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_keySet_R_java_util_Set, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	}
label_21:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[12].o)))(ctx, (frame[12].o));
	if (temp0 == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[12].o)))(ctx, (frame[12].o));
	frame[13].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(88);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)SM_rhino_Node_newString_int_java_lang_String_R_rhino_Node(ctx, (39), (frame[13].o));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(89);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(90);
	((func_rhino_ast_Scope_setSymbolTable_java_util_Map) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_Scope_setSymbolTable_java_util_Map])(ctx, (frame[9].o), (jobject(nullptr)));
	LINE_NUMBER(91);
	frame[12].o = (frame[6].o);
	LINE_NUMBER(92);
	sp[0].o = (jobject)SM_rhino_NodeTransformer_replaceCurrent_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(ctx, (frame[2].o), (frame[7].o), (frame[6].o), (frame[10].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(93);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[6].o));
	frame[8].i = temp0;
	LINE_NUMBER(94);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[10].o), (frame[12].o));
	}
label_11:;
	{
	LINE_NUMBER(98);
	switch((frame[8].i)) {
		case 3: goto label_29;
		case 4: goto label_30;
		case 7: goto label_31;
		case 8: goto label_32;
		case 30: goto label_33;
		case 31: goto label_34;
		case 32: goto label_31;
		case 38: goto label_35;
		case 39: goto label_34;
		case 73: goto label_36;
		case 82: goto label_37;
		case 115: goto label_38;
		case 121: goto label_39;
		case 122: goto label_39;
		case 123: goto label_40;
		case 124: goto label_41;
		case 131: goto label_38;
		case 132: goto label_29;
		case 133: goto label_38;
		case 138: goto label_42;
		case 154: goto label_43;
		case 155: goto label_40;
		case 156: goto label_34;
		case 159: goto label_43;
		case 166: goto label_36;
		default: goto label_44;
	}
	}
label_38:;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_loops;
	((func_rhino_ObjArray_push_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_push_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(104);
	sp[0].o = (jobject)((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_loopEnds;
	sp[1].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((checkCast(ctx, &class_rhino_ast_Jump, (frame[6].o)))))->F_target;
	((func_rhino_ObjArray_push_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_push_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(105);
	goto label_44;
	}
label_41:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_loops;
	((func_rhino_ObjArray_push_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_push_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[6].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(110);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[9].o));
	if (temp0 == (jint(3))) goto label_49;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_49:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_loopEnds;
	((func_rhino_ObjArray_push_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_push_java_lang_Object])(ctx, sp[0].o, (frame[9].o));
	LINE_NUMBER(114);
	goto label_44;
	}
label_37:;
	{
	LINE_NUMBER(118);
	frame[9].o = (checkCast(ctx, &class_rhino_ast_Jump, (frame[6].o)));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_rhino_ast_Jump_getFinally_R_rhino_Node) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_Jump_getFinally_R_rhino_Node])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(120);
	if ((frame[10].o) == nullptr) goto label_44;
	}
	{
	LINE_NUMBER(121);
	((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_hasFinally = (jint(1));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_loops;
	((func_rhino_ObjArray_push_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_push_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(123);
	sp[0].o = (jobject)((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_loopEnds;
	((func_rhino_ObjArray_push_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_push_java_lang_Object])(ctx, sp[0].o, (frame[10].o));
	goto label_44;
	}
label_29:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_loopEnds;
	jint temp0 = (jint)((func_rhino_ObjArray_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_44;
	}
	{
	sp[0].o = (jobject)((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_loopEnds;
	sp[0].o = (jobject)((func_rhino_ObjArray_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_peek_R_java_lang_Object])(ctx, sp[0].o);
	if (sp[0].o != (frame[6].o)) goto label_44;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_loopEnds;
	sp[0].o = (jobject)((func_rhino_ObjArray_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_pop_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(132);
	sp[0].o = (jobject)((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_loops;
	sp[0].o = (jobject)((func_rhino_ObjArray_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_pop_R_java_lang_Object])(ctx, sp[0].o);
	goto label_44;
	}
label_36:;
	{
	LINE_NUMBER(138);
	((func_rhino_ast_FunctionNode_addResumptionPoint_rhino_Node) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_FunctionNode, (frame[1].o))))->vtable)[VTABLE_rhino_ast_FunctionNode_addResumptionPoint_rhino_Node])(ctx, (checkCast(ctx, &class_rhino_ast_FunctionNode, (frame[1].o))), (frame[6].o));
	LINE_NUMBER(139);
	goto label_44;
	}
label_30:;
	{
	LINE_NUMBER(142);
	jint temp0 = (jint)((func_rhino_ast_ScriptNode_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ScriptNode_getType_R_int])(ctx, (frame[1].o));
	if (temp0 != (110)) goto label_60;
	}
	{
	sp[0].o = checkCast(ctx, &class_rhino_ast_FunctionNode, (frame[1].o));
	LINE_NUMBER(143);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_isGenerator_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_isGenerator_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_60;
	}
	INST_ICONST(1);
	goto label_62;
label_60:;
	INST_ICONST(0);
label_62:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(144);
	if ((frame[9].i) == 0) goto label_64;
	}
	{
	LINE_NUMBER(145);
	((func_rhino_Node_putIntProp_int_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_putIntProp_int_int])(ctx, (frame[6].o), (20), (jint(1)));
	}
label_64:;
	{
	LINE_NUMBER(154);
	if (((jint)((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_hasFinally) != 0) goto label_66;
	}
	LINE_NUMBER(155);
	goto label_44;
label_66:;
	{
	LINE_NUMBER(156);
	frame[10].o = (jobject(nullptr));
	LINE_NUMBER(157);
	sp[0].o = (jobject)((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_loops;
	jint temp0 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	frame[11].i = (temp0 - (jint(1)));
	}
label_69:;
	INST_ILOAD(11);
	if ((--sp)->i < 0) goto label_70;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_loops;
	sp[0].o = (jobject)((func_rhino_ObjArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[11].i));
	frame[12].o = (checkCast(ctx, &class_rhino_Node, sp[0].o));
	LINE_NUMBER(159);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[12].o));
	frame[13].i = temp0;
	LINE_NUMBER(160);
	if ((frame[13].i) == (82)) goto label_74;
	}
	{
	if ((frame[13].i) != (124)) goto label_75;
	}
label_74:;
	{
	LINE_NUMBER(162);
	if ((frame[13].i) != (82)) goto label_76;
	}
	{
	LINE_NUMBER(163);
	clinit_rhino_ast_Jump(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Jump);
	init_rhino_ast_Jump_int(ctx, sp[0].o, (136));
	frame[15].o = sp[0].o;
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_rhino_ast_Jump_getFinally_R_rhino_Node) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Jump, (frame[12].o))))->vtable)[VTABLE_rhino_ast_Jump_getFinally_R_rhino_Node])(ctx, (checkCast(ctx, &class_rhino_ast_Jump, (frame[12].o))));
	frame[16].o = sp[0].o;
	LINE_NUMBER(165);
	((rhino_ast_Jump *) NULL_CHECK((frame[15].o)))->F_target = (jref) (frame[16].o);
	LINE_NUMBER(166);
	frame[14].o = (frame[15].o);
	LINE_NUMBER(167);
	goto label_82;
	}
label_76:;
	{
	LINE_NUMBER(168);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (jint(3)));
	frame[14].o = sp[0].o;
	}
label_82:;
	{
	LINE_NUMBER(170);
	if ((frame[10].o) != nullptr) goto label_83;
	}
	{
	LINE_NUMBER(171);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 130;
	sp[1].o = frame[6].o;
	LINE_NUMBER(172);
	jint temp1 = (jint)((func_rhino_Node_getLineno_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Node_getLineno_R_int])(ctx, sp[1].o);
	init_rhino_Node_int_int(ctx, sp[0].o, temp0, temp1);
	frame[10].o = sp[0].o;
	}
label_83:;
	{
	LINE_NUMBER(174);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[10].o), (frame[14].o));
	}
label_75:;
	{
	LINE_NUMBER(157);
	INST_IINC(11, -1);
	goto label_69;
	}
label_70:;
	{
	LINE_NUMBER(177);
	if ((frame[10].o) == nullptr) goto label_44;
	}
	{
	LINE_NUMBER(178);
	frame[11].o = (frame[6].o);
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[11].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(180);
	sp[0].o = (jobject)SM_rhino_NodeTransformer_replaceCurrent_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(ctx, (frame[2].o), (frame[7].o), (frame[6].o), (frame[10].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(181);
	if ((frame[12].o) == nullptr) goto label_90;
	}
	INST_ILOAD(9);
	if ((--sp)->i == 0) goto label_91;
label_90:;
	{
	LINE_NUMBER(182);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[10].o), (frame[11].o));
	goto label_1;
	}
label_91:;
	{
	LINE_NUMBER(184);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (135), (frame[12].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(185);
	((func_rhino_Node_addChildToFront_rhino_Node) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_Node_addChildToFront_rhino_Node])(ctx, (frame[10].o), (frame[13].o));
	LINE_NUMBER(186);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (65));
	frame[11].o = sp[0].o;
	LINE_NUMBER(187);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[10].o), (frame[11].o));
	LINE_NUMBER(189);
	M_rhino_NodeTransformer_transformCompilationUnit_r_rhino_ast_ScriptNode_rhino_Node_rhino_ast_Scope_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[13].o), (frame[3].o), (frame[4].i), (frame[5].i));
	LINE_NUMBER(194);
	goto label_1;
	}
label_39:;
	{
	LINE_NUMBER(201);
	frame[9].o = (checkCast(ctx, &class_rhino_ast_Jump, (frame[6].o)));
	LINE_NUMBER(202);
	sp[0].o = (jobject)((func_rhino_ast_Jump_getJumpStatement_R_rhino_ast_Jump) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_Jump_getJumpStatement_R_rhino_ast_Jump])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(203);
	if ((frame[10].o) != nullptr) goto label_99;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_99:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_loops;
	jint temp0 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	frame[11].i = temp0;
	}
label_100:;
	{
	LINE_NUMBER(206);
	if ((frame[11].i) != 0) goto label_101;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_101:;
	{
	LINE_NUMBER(212);
	INST_IINC(11, -1);
	LINE_NUMBER(213);
	sp[0].o = (jobject)((rhino_NodeTransformer *) NULL_CHECK((frame[0].o)))->F_loops;
	sp[0].o = (jobject)((func_rhino_ObjArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[11].i));
	frame[12].o = (checkCast(ctx, &class_rhino_Node, sp[0].o));
	LINE_NUMBER(214);
	if ((frame[12].o) != (frame[10].o)) goto label_105;
	}
	LINE_NUMBER(215);
	goto label_107;
label_105:;
	{
	LINE_NUMBER(218);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[12].o));
	frame[13].i = temp0;
	LINE_NUMBER(219);
	if ((frame[13].i) != (124)) goto label_109;
	}
	{
	LINE_NUMBER(220);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (jint(3)));
	frame[14].o = sp[0].o;
	LINE_NUMBER(221);
	sp[0].o = (jobject)SM_rhino_NodeTransformer_addBeforeCurrent_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(ctx, (frame[2].o), (frame[7].o), (frame[6].o), (frame[14].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(223);
	goto label_113;
	}
label_109:;
	{
	if ((frame[13].i) != (82)) goto label_113;
	}
	{
	LINE_NUMBER(224);
	frame[14].o = (checkCast(ctx, &class_rhino_ast_Jump, (frame[12].o)));
	LINE_NUMBER(225);
	clinit_rhino_ast_Jump(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Jump);
	init_rhino_ast_Jump_int(ctx, sp[0].o, (136));
	frame[15].o = sp[0].o;
	LINE_NUMBER(226);
	sp[0].o = frame[15].o;
	sp[1].o = (jobject)((func_rhino_ast_Jump_getFinally_R_rhino_Node) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_ast_Jump_getFinally_R_rhino_Node])(ctx, (frame[14].o));
	((rhino_ast_Jump *) NULL_CHECK(sp[0].o))->F_target = (jref) sp[1].o;
	LINE_NUMBER(227);
	sp[0].o = (jobject)SM_rhino_NodeTransformer_addBeforeCurrent_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(ctx, (frame[2].o), (frame[7].o), (frame[6].o), (frame[15].o));
	frame[7].o = sp[0].o;
	}
label_113:;
	LINE_NUMBER(230);
	goto label_100;
label_107:;
	{
	LINE_NUMBER(232);
	if ((frame[8].i) != (121)) goto label_118;
	}
	{
	LINE_NUMBER(233);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((frame[10].o)))->F_target;
	((rhino_ast_Jump *) NULL_CHECK(sp[0].o))->F_target = (jref) sp[1].o;
	goto label_120;
	}
label_118:;
	{
	LINE_NUMBER(235);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((func_rhino_ast_Jump_getContinue_R_rhino_Node) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ast_Jump_getContinue_R_rhino_Node])(ctx, (frame[10].o));
	((rhino_ast_Jump *) NULL_CHECK(sp[0].o))->F_target = (jref) sp[1].o;
	}
label_120:;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((func_rhino_ast_Jump_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_Jump_setType_int_R_rhino_Node])(ctx, (frame[9].o), (jint(5)));
	LINE_NUMBER(239);
	goto label_44;
	}
label_35:;
	{
	LINE_NUMBER(243);
	((func_rhino_NodeTransformer_visitCall_rhino_Node_rhino_ast_ScriptNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NodeTransformer_visitCall_rhino_Node_rhino_ast_ScriptNode])(ctx, (frame[0].o), (frame[6].o), (frame[1].o));
	LINE_NUMBER(244);
	goto label_44;
	}
label_33:;
	{
	LINE_NUMBER(247);
	((func_rhino_NodeTransformer_visitNew_rhino_Node_rhino_ast_ScriptNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NodeTransformer_visitNew_rhino_Node_rhino_ast_ScriptNode])(ctx, (frame[0].o), (frame[6].o), (frame[1].o));
	LINE_NUMBER(248);
	goto label_44;
	}
label_43:;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[6].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(253);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[9].o));
	if (temp0 != (154)) goto label_40;
	}
	{
	LINE_NUMBER(256);
	jint temp0 = (jint)((func_rhino_ast_ScriptNode_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ScriptNode_getType_R_int])(ctx, (frame[1].o));
	if (temp0 != (110)) goto label_126;
	}
	{
	sp[0].o = checkCast(ctx, &class_rhino_ast_FunctionNode, (frame[1].o));
	LINE_NUMBER(257);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_requiresActivation_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_requiresActivation_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_128;
	}
label_126:;
	INST_ICONST(1);
	goto label_129;
label_128:;
	INST_ICONST(0);
label_129:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(258);
	sp[0].o = (jobject)((func_rhino_NodeTransformer_visitLet_boolean_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NodeTransformer_visitLet_boolean_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node])(ctx, (frame[0].o), (frame[10].i), (frame[2].o), (frame[7].o), (frame[6].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(259);
	goto label_44;
	}
label_40:;
	{
	LINE_NUMBER(266);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (130));
	frame[9].o = sp[0].o;
	LINE_NUMBER(267);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[6].o));
	frame[10].o = sp[0].o;
	}
label_133:;
	INST_ALOAD(10);
	if ((--sp)->o == nullptr) goto label_134;
	{
	LINE_NUMBER(270);
	frame[11].o = (frame[10].o);
	LINE_NUMBER(271);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[10].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(272);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[11].o));
	if (temp0 != (39)) goto label_138;
	}
	{
	LINE_NUMBER(273);
	jint temp0 = (jint)((func_rhino_Node_hasChildren_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_hasChildren_R_boolean])(ctx, (frame[11].o));
	if (temp0 != 0) goto label_140;
	}
	{
	LINE_NUMBER(274);
	if ((frame[8].i) != (154)) goto label_133;
	}
	{
	LINE_NUMBER(285);
	frame[12].o = (frame[11].o);
	LINE_NUMBER(286);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[12].o), (49));
	LINE_NUMBER(287);
	sp[0].o = (jobject)SM_rhino_Node_newString_int_java_lang_String_R_rhino_Node(ctx, (39), (((jobject) createStringLiteral(ctx, u8"undefined"_j))));
	frame[13].o = sp[0].o;
	LINE_NUMBER(288);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, (8), (frame[12].o), (frame[13].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(289);
	((func_rhino_Node_putIntProp_int_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_putIntProp_int_int])(ctx, (frame[11].o), (28), (jint(1)));
	LINE_NUMBER(290);
	goto label_148;
	}
label_140:;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[11].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(295);
	((func_rhino_Node_removeChild_rhino_Node) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_removeChild_rhino_Node])(ctx, (frame[11].o), (frame[12].o));
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[11].o), (49));
	LINE_NUMBER(297);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[8].i) != (155)) goto label_152;
	}
	INST_SIPUSH(156);
	goto label_153;
label_152:;
	INST_BIPUSH(8);
label_153:;
	{
	sp -= 3;
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, sp[2].i, (frame[11].o), (frame[12].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(307);
	((func_rhino_Node_putIntProp_int_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_putIntProp_int_int])(ctx, (frame[11].o), (28), (jint(1)));
	LINE_NUMBER(308);
	goto label_148;
	}
label_138:;
	{
	LINE_NUMBER(312);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[11].o));
	if (temp0 == (159)) goto label_148;
	}
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_148:;
	{
	LINE_NUMBER(315);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 134;
	sp[1].o = frame[11].o;
	jint temp1 = (jint)((func_rhino_Node_getLineno_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_getLineno_R_int])(ctx, (frame[6].o));
	init_rhino_Node_int_rhino_Node_int(ctx, sp[0].o, temp0, sp[1].o, temp1);
	frame[12].o = sp[0].o;
	LINE_NUMBER(316);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[9].o), (frame[12].o));
	LINE_NUMBER(317);
	goto label_133;
	}
label_134:;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)SM_rhino_NodeTransformer_replaceCurrent_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(ctx, (frame[2].o), (frame[7].o), (frame[6].o), (frame[9].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(319);
	goto label_44;
	}
label_42:;
	{
	LINE_NUMBER(323);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_rhino_ast_Scope_getDefiningScope_java_lang_String_R_rhino_ast_Scope) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Scope_getDefiningScope_java_lang_String_R_rhino_ast_Scope])(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(324);
	if ((frame[9].o) == nullptr) goto label_161;
	}
	{
	LINE_NUMBER(325);
	((func_rhino_Node_setScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_setScope_rhino_ast_Scope])(ctx, (frame[6].o), (frame[9].o));
	}
label_161:;
	LINE_NUMBER(328);
	goto label_44;
label_31:;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[6].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(337);
	if ((frame[8].i) != (7)) goto label_164;
	}
label_165:;
	{
	LINE_NUMBER(338);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[9].o));
	if (temp0 != (26)) goto label_166;
	}
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[9].o));
	frame[9].o = sp[0].o;
	goto label_165;
	}
label_166:;
	{
	LINE_NUMBER(341);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[9].o));
	if (temp0 == (12)) goto label_168;
	}
	{
	sp[0].o = frame[9].o;
	LINE_NUMBER(342);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, sp[0].o);
	if (temp0 != (13)) goto label_164;
	}
label_168:;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(344);
	sp[0].o = (jobject)((func_rhino_Node_getLastChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_getLastChild_R_rhino_Node])(ctx, (frame[9].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(345);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[10].o));
	if (temp0 != (39)) goto label_172;
	}
	{
	sp[0].o = frame[10].o;
	LINE_NUMBER(346);
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"undefined"_j))));
	if (temp0 == 0) goto label_172;
	}
	{
	LINE_NUMBER(347);
	frame[9].o = (frame[11].o);
	goto label_164;
	}
label_172:;
	{
	LINE_NUMBER(348);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[11].o));
	if (temp0 != (39)) goto label_164;
	}
	{
	sp[0].o = frame[11].o;
	LINE_NUMBER(349);
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"undefined"_j))));
	if (temp0 == 0) goto label_164;
	}
	{
	LINE_NUMBER(350);
	frame[9].o = (frame[10].o);
	}
label_164:;
	{
	LINE_NUMBER(354);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[9].o));
	if (temp0 != (33)) goto label_44;
	}
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[9].o), (34));
	goto label_44;
	}
label_32:;
	{
	LINE_NUMBER(361);
	if ((frame[5].i) == 0) goto label_34;
	}
	{
	jint temp0 = (jint)((func_rhino_Node_getIntProp_int_int_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_getIntProp_int_int_R_int])(ctx, (frame[6].o), (28), (jint(0)));
	if (temp0 != 0) goto label_34;
	}
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[6].o), (74));
	}
label_34:;
	{
	LINE_NUMBER(369);
	if ((frame[4].i) == 0) goto label_179;
	}
	LINE_NUMBER(370);
	goto label_44;
label_179:;
	{
	LINE_NUMBER(373);
	if ((frame[8].i) != (39)) goto label_181;
	}
	{
	LINE_NUMBER(374);
	frame[9].o = (frame[6].o);
	goto label_184;
	}
label_181:;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[6].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(377);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[9].o));
	if (temp0 == (49)) goto label_184;
	}
	{
	LINE_NUMBER(378);
	if ((frame[8].i) != (31)) goto label_187;
	}
	LINE_NUMBER(379);
	goto label_44;
label_187:;
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_184:;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((func_rhino_Node_getScope_R_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_getScope_R_rhino_ast_Scope])(ctx, (frame[9].o));
	if (sp[0].o == nullptr) goto label_189;
	}
	LINE_NUMBER(385);
	goto label_44;
label_189:;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(388);
	sp[0].o = (jobject)((func_rhino_ast_Scope_getDefiningScope_java_lang_String_R_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_Scope_getDefiningScope_java_lang_String_R_rhino_ast_Scope])(ctx, (frame[3].o), (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(389);
	if ((frame[11].o) == nullptr) goto label_193;
	}
	{
	LINE_NUMBER(390);
	frame[12].i = (jint(0));
	LINE_NUMBER(391);
	frame[13].o = (frame[11].o);
	}
label_196:;
	INST_ALOAD(13);
	if ((--sp)->o == nullptr) goto label_197;
	{
	LINE_NUMBER(392);
	if ((frame[13].o) != (frame[1].o)) goto label_199;
	}
	{
	LINE_NUMBER(393);
	frame[12].i = (jint(1));
	LINE_NUMBER(394);
	goto label_197;
	}
label_199:;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((func_rhino_ast_Scope_getParentScope_R_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_ast_Scope_getParentScope_R_rhino_ast_Scope])(ctx, (frame[13].o));
	frame[13].o = sp[0].o;
	goto label_196;
	}
label_197:;
	{
	LINE_NUMBER(397);
	if ((frame[12].i) != 0) goto label_193;
	}
	{
	LINE_NUMBER(398);
	frame[11].o = (jobject(nullptr));
	}
label_193:;
	{
	LINE_NUMBER(401);
	if ((frame[11].o) == nullptr) goto label_44;
	}
	{
	LINE_NUMBER(402);
	((func_rhino_Node_setScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_setScope_rhino_ast_Scope])(ctx, (frame[9].o), (frame[11].o));
	LINE_NUMBER(403);
	if ((frame[8].i) != (39)) goto label_205;
	}
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[6].o), (55));
	goto label_44;
	}
label_205:;
	{
	LINE_NUMBER(405);
	if ((frame[8].i) == (8)) goto label_207;
	}
	{
	if ((frame[8].i) != (74)) goto label_208;
	}
label_207:;
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[6].o), (56));
	LINE_NUMBER(408);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[9].o), (41));
	goto label_44;
	}
label_208:;
	{
	LINE_NUMBER(409);
	if ((frame[8].i) != (156)) goto label_210;
	}
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[6].o), (157));
	LINE_NUMBER(411);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[9].o), (41));
	goto label_44;
	}
label_210:;
	{
	LINE_NUMBER(412);
	if ((frame[8].i) != (31)) goto label_213;
	}
	{
	LINE_NUMBER(414);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (44));
	frame[12].o = sp[0].o;
	LINE_NUMBER(415);
	sp[0].o = (jobject)SM_rhino_NodeTransformer_replaceCurrent_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(ctx, (frame[2].o), (frame[7].o), (frame[6].o), (frame[12].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(416);
	goto label_44;
	}
label_213:;
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_44:;
	{
	LINE_NUMBER(424);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[6].o;
	sp += 3;
	if ((isInstance(ctx, (frame[6].o), &class_rhino_ast_Scope)) == 0) goto label_217;
	}
	{
	sp[0].o = checkCast(ctx, &class_rhino_ast_Scope, (frame[6].o));
	sp += 1;
	goto label_218;
	}
label_217:;
	INST_ALOAD(3);
label_218:;
	{
	sp -= 4;
	M_rhino_NodeTransformer_transformCompilationUnit_r_rhino_ast_ScriptNode_rhino_Node_rhino_ast_Scope_boolean_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[4].i), (frame[5].i));
	LINE_NUMBER(427);
	goto label_1;
	}
label_9:;
	LINE_NUMBER(428);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_NodeTransformer_visitNew_rhino_Node_rhino_ast_ScriptNode(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NodeTransformer:visitNew", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(431);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_NodeTransformer_visitCall_rhino_Node_rhino_ast_ScriptNode(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NodeTransformer:visitCall", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(434);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NodeTransformer_visitLet_boolean_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jbool param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NodeTransformer:visitLet", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(439);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(440);
	((func_rhino_Node_removeChild_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_removeChild_rhino_Node])(ctx, (frame[4].o), (frame[5].o));
	LINE_NUMBER(441);
	((func_rhino_Node_removeChild_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_removeChild_rhino_Node])(ctx, (frame[4].o), (frame[6].o));
	LINE_NUMBER(442);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[4].o));
	if (temp0 != (159)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(445);
	if ((frame[1].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(446);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[7].i) == 0) goto label_10;
	}
	INST_SIPUSH(160);
	goto label_11;
label_10:;
	INST_SIPUSH(130);
label_11:;
	{
	sp -= 3;
	init_rhino_Node_int(ctx, sp[0].o, sp[2].i);
	frame[8].o = sp[0].o;
	LINE_NUMBER(447);
	sp[0].o = (jobject)SM_rhino_NodeTransformer_replaceCurrent_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[8].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(448);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(449);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (67));
	frame[11].o = sp[0].o;
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[5].o));
	frame[12].o = sp[0].o;
	}
label_16:;
	INST_ALOAD(12);
	if ((--sp)->o == nullptr) goto label_17;
	{
	LINE_NUMBER(451);
	frame[13].o = (frame[12].o);
	LINE_NUMBER(452);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[13].o));
	if (temp0 != (159)) goto label_20;
	}
	{
	LINE_NUMBER(454);
	sp[0].o = frame[13].o;
	jint temp0 = 22;
	LINE_NUMBER(455);
	sp[0].o = (jobject)((func_rhino_Node_getProp_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_getProp_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[14].o = (checkCast(ctx, &class_java_util_List, sp[0].o));
	LINE_NUMBER(456);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[13].o));
	frame[15].o = sp[0].o;
	LINE_NUMBER(457);
	jint temp1 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[15].o));
	if (temp1 == (154)) goto label_25;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_25:;
	{
	LINE_NUMBER(459);
	if ((frame[7].i) == 0) goto label_26;
	}
	{
	LINE_NUMBER(460);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 90;
	sp[1].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[15].o));
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, temp0, sp[1].o, (frame[6].o));
	frame[6].o = sp[0].o;
	goto label_28;
	}
label_26:;
	{
	LINE_NUMBER(462);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 130;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp1 = 134;
	sp[2].o = frame[15].o;
	LINE_NUMBER(463);
	sp[2].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, sp[2].o);
	init_rhino_Node_int_rhino_Node(ctx, sp[1].o, temp1, sp[2].o);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, temp0, sp[1].o, (frame[6].o));
	frame[6].o = sp[0].o;
	}
label_28:;
	{
	LINE_NUMBER(468);
	if ((frame[14].o) == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(469);
	jint temp0 = (jint)((func_java_util_ArrayList_addAll_java_util_Collection_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_ArrayList_addAll_java_util_Collection_R_boolean])(ctx, (frame[10].o), (frame[14].o));
	LINE_NUMBER(470);
	frame[16].i = (jint(0));
	}
label_33:;
	{
	jint temp0 = frame[16].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[14].o)))(ctx, (frame[14].o));
	if (temp0 >= temp1) goto label_30;
	}
	{
	LINE_NUMBER(471);
	sp[0].o = frame[11].o;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 127;
	jdouble temp1 = jdouble(0);
	LINE_NUMBER(472);
	sp[2].o = (jobject)SM_rhino_Node_newNumber_double_R_rhino_Node(ctx, temp1);
	init_rhino_Node_int_rhino_Node(ctx, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(471);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(470);
	INST_IINC(16, 1);
	goto label_33;
	}
label_30:;
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[15].o));
	frame[13].o = sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(477);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[13].o));
	if (temp0 == (39)) goto label_38;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_38:;
	{
	LINE_NUMBER(478);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[13].o));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_getIndexObject_java_lang_String_R_java_lang_Object(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(479);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[13].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(480);
	if ((frame[14].o) != nullptr) goto label_41;
	}
	{
	LINE_NUMBER(481);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 127;
	sp[1].o = (jobject)SM_rhino_Node_newNumber_double_R_rhino_Node(ctx, (jdouble(0)));
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, temp0, sp[1].o);
	frame[14].o = sp[0].o;
	}
label_41:;
	{
	LINE_NUMBER(483);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[11].o), (frame[14].o));
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[12].o));
	frame[12].o = sp[0].o;
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(485);
	sp[0].o = frame[11].o;
	jint temp0 = 12;
	sp[1].o = (jobject)((func_java_util_ArrayList_toArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_ArrayList_toArray_R_Array1_java_lang_Object])(ctx, (frame[10].o));
	((func_rhino_Node_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_putProp_int_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(486);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, (jint(2)), (frame[11].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(487);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[8].o), (frame[9].o));
	LINE_NUMBER(488);
	sp[0].o = frame[8].o;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[1].o, (124), (frame[6].o));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(489);
	sp[0].o = frame[8].o;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[1].o, (jint(3)));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(490);
	goto label_49;
	}
label_8:;
	{
	LINE_NUMBER(491);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[7].i) == 0) goto label_50;
	}
	INST_BIPUSH(90);
	goto label_51;
label_50:;
	INST_SIPUSH(130);
label_51:;
	{
	sp -= 3;
	init_rhino_Node_int(ctx, sp[0].o, sp[2].i);
	frame[8].o = sp[0].o;
	LINE_NUMBER(492);
	sp[0].o = (jobject)SM_rhino_NodeTransformer_replaceCurrent_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[8].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(493);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (90));
	frame[9].o = sp[0].o;
	LINE_NUMBER(494);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[5].o));
	frame[10].o = sp[0].o;
	}
label_55:;
	INST_ALOAD(10);
	if ((--sp)->o == nullptr) goto label_56;
	{
	LINE_NUMBER(495);
	frame[11].o = (frame[10].o);
	LINE_NUMBER(496);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[11].o));
	if (temp0 != (159)) goto label_59;
	}
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[11].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(499);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[12].o));
	if (temp0 == (154)) goto label_62;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_62:;
	{
	LINE_NUMBER(501);
	if ((frame[7].i) == 0) goto label_63;
	}
	{
	LINE_NUMBER(502);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 90;
	sp[1].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[12].o));
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, temp0, sp[1].o, (frame[6].o));
	frame[6].o = sp[0].o;
	goto label_65;
	}
label_63:;
	{
	LINE_NUMBER(504);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 130;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp1 = 134;
	sp[2].o = frame[12].o;
	LINE_NUMBER(505);
	sp[2].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, sp[2].o);
	init_rhino_Node_int_rhino_Node(ctx, sp[1].o, temp1, sp[2].o);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[0].o, temp0, sp[1].o, (frame[6].o));
	frame[6].o = sp[0].o;
	}
label_65:;
	{
	LINE_NUMBER(509);
	SM_rhino_ast_Scope_joinScopes_rhino_ast_Scope_rhino_ast_Scope(ctx, (checkCast(ctx, &class_rhino_ast_Scope, (frame[11].o))), (checkCast(ctx, &class_rhino_ast_Scope, (frame[4].o))));
	LINE_NUMBER(511);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[12].o));
	frame[11].o = sp[0].o;
	}
label_59:;
	{
	LINE_NUMBER(513);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[11].o));
	if (temp0 == (39)) goto label_68;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_68:;
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((func_rhino_Node_getString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_getString_R_java_lang_String])(ctx, (frame[11].o));
	sp[0].o = (jobject)SM_rhino_Node_newString_java_lang_String_R_rhino_Node(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(515);
	((func_rhino_Node_setScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_Node_setScope_rhino_ast_Scope])(ctx, (frame[12].o), (checkCast(ctx, &class_rhino_ast_Scope, (frame[4].o))));
	LINE_NUMBER(516);
	sp[0].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[11].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(517);
	if ((frame[13].o) != nullptr) goto label_72;
	}
	{
	LINE_NUMBER(518);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	jint temp0 = 127;
	sp[1].o = (jobject)SM_rhino_Node_newNumber_double_R_rhino_Node(ctx, (jdouble(0)));
	init_rhino_Node_int_rhino_Node(ctx, sp[0].o, temp0, sp[1].o);
	frame[13].o = sp[0].o;
	}
label_72:;
	{
	LINE_NUMBER(520);
	sp[0].o = frame[9].o;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, sp[1].o, (56), (frame[12].o), (frame[13].o));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(494);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[10].o));
	frame[10].o = sp[0].o;
	goto label_55;
	}
label_56:;
	{
	LINE_NUMBER(522);
	if ((frame[7].i) == 0) goto label_75;
	}
	{
	LINE_NUMBER(523);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[8].o), (frame[9].o));
	LINE_NUMBER(524);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[4].o), (90));
	LINE_NUMBER(525);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[8].o), (frame[4].o));
	LINE_NUMBER(526);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[4].o), (frame[6].o));
	LINE_NUMBER(527);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_ast_Scope)) == 0) goto label_49;
	}
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)((func_rhino_ast_Scope_getParentScope_R_rhino_ast_Scope) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Scope, (frame[6].o))))->vtable)[VTABLE_rhino_ast_Scope_getParentScope_R_rhino_ast_Scope])(ctx, (checkCast(ctx, &class_rhino_ast_Scope, (frame[6].o))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(529);
	((func_rhino_ast_Scope_setParentScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Scope, (frame[6].o))))->vtable)[VTABLE_rhino_ast_Scope_setParentScope_rhino_ast_Scope])(ctx, (checkCast(ctx, &class_rhino_ast_Scope, (frame[6].o))), (checkCast(ctx, &class_rhino_ast_Scope, (frame[4].o))));
	LINE_NUMBER(530);
	((func_rhino_ast_Scope_setParentScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Scope, (frame[4].o))))->vtable)[VTABLE_rhino_ast_Scope_setParentScope_rhino_ast_Scope])(ctx, (checkCast(ctx, &class_rhino_ast_Scope, (frame[4].o))), (frame[10].o));
	LINE_NUMBER(531);
	goto label_49;
	}
label_75:;
	{
	LINE_NUMBER(533);
	sp[0].o = frame[8].o;
	clinit_rhino_Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int_rhino_Node(ctx, sp[1].o, (134), (frame[9].o));
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(534);
	sp[0].o = (jobject)((func_rhino_Node_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_setType_int_R_rhino_Node])(ctx, (frame[4].o), (130));
	LINE_NUMBER(535);
	((func_rhino_Node_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_Node_addChildToBack_rhino_Node])(ctx, (frame[8].o), (frame[4].o));
	LINE_NUMBER(536);
	((func_rhino_Node_addChildrenToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_addChildrenToBack_rhino_Node])(ctx, (frame[4].o), (frame[6].o));
	LINE_NUMBER(537);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_ast_Scope)) == 0) goto label_49;
	}
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)((func_rhino_ast_Scope_getParentScope_R_rhino_ast_Scope) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Scope, (frame[6].o))))->vtable)[VTABLE_rhino_ast_Scope_getParentScope_R_rhino_ast_Scope])(ctx, (checkCast(ctx, &class_rhino_ast_Scope, (frame[6].o))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(539);
	((func_rhino_ast_Scope_setParentScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Scope, (frame[6].o))))->vtable)[VTABLE_rhino_ast_Scope_setParentScope_rhino_ast_Scope])(ctx, (checkCast(ctx, &class_rhino_ast_Scope, (frame[6].o))), (checkCast(ctx, &class_rhino_ast_Scope, (frame[4].o))));
	LINE_NUMBER(540);
	((func_rhino_ast_Scope_setParentScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Scope, (frame[4].o))))->vtable)[VTABLE_rhino_ast_Scope_setParentScope_rhino_ast_Scope])(ctx, (checkCast(ctx, &class_rhino_ast_Scope, (frame[4].o))), (frame[10].o));
	}
label_49:;
	{
	LINE_NUMBER(544);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NodeTransformer_addBeforeCurrent_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NodeTransformer:addBeforeCurrent", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NodeTransformer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(549);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(550);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_3:;
	{
	LINE_NUMBER(551);
	((func_rhino_Node_addChildToFront_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_addChildToFront_rhino_Node])(ctx, (frame[0].o), (frame[3].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(553);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_5;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_5:;
	{
	LINE_NUMBER(554);
	((func_rhino_Node_addChildAfter_rhino_Node_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_addChildAfter_rhino_Node_rhino_Node])(ctx, (frame[0].o), (frame[3].o), (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(556);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NodeTransformer_replaceCurrent_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NodeTransformer:replaceCurrent", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NodeTransformer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(561);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(562);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_Node_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_getFirstChild_R_rhino_Node])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_3:;
	{
	LINE_NUMBER(563);
	((func_rhino_Node_replaceChild_rhino_Node_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_replaceChild_rhino_Node_rhino_Node])(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[1].o)))->F_next;
	if (sp[0].o != (frame[2].o)) goto label_5;
	}
	{
	LINE_NUMBER(567);
	((func_rhino_Node_replaceChildAfter_rhino_Node_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_replaceChildAfter_rhino_Node_rhino_Node])(ctx, (frame[0].o), (frame[1].o), (frame[3].o));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(569);
	((func_rhino_Node_replaceChild_rhino_Node_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_replaceChild_rhino_Node_rhino_Node])(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	}
label_4:;
	{
	LINE_NUMBER(571);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NodeTransformer[] {
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
	(void *) M_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_rhino_CompilerEnvirons,
	(void *) M_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_boolean_rhino_CompilerEnvirons,
	(void *) M_rhino_NodeTransformer_transformCompilationUnit_rhino_ast_ScriptNode_boolean,
	(void *) M_rhino_NodeTransformer_transformCompilationUnit_r_rhino_ast_ScriptNode_rhino_Node_rhino_ast_Scope_boolean_boolean,
	(void *) M_rhino_NodeTransformer_visitNew_rhino_Node_rhino_ast_ScriptNode,
	(void *) M_rhino_NodeTransformer_visitCall_rhino_Node_rhino_ast_ScriptNode,
	(void *) M_rhino_NodeTransformer_visitLet_boolean_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node,
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
	{ "transform", "(Lrhino/ast/ScriptNode;Lrhino/CompilerEnvirons;)V" },
	{ "transform", "(Lrhino/ast/ScriptNode;ZLrhino/CompilerEnvirons;)V" },
	{ "transformCompilationUnit", "(Lrhino/ast/ScriptNode;Z)V" },
	{ "transformCompilationUnit_r", "(Lrhino/ast/ScriptNode;Lrhino/Node;Lrhino/ast/Scope;ZZ)V" },
	{ "visitNew", "(Lrhino/Node;Lrhino/ast/ScriptNode;)V" },
	{ "visitCall", "(Lrhino/Node;Lrhino/ast/ScriptNode;)V" },
	{ "visitLet", "(ZLrhino/Node;Lrhino/Node;Lrhino/Node;)Lrhino/Node;" },
};

static FieldMetadata fields[] {
	{ "loops", &class_rhino_ObjArray, offsetof(rhino_NodeTransformer, F_loops), "Lrhino/ObjArray;", 2 },
	{ "loopEnds", &class_rhino_ObjArray, offsetof(rhino_NodeTransformer, F_loopEnds), "Lrhino/ObjArray;", 2 },
	{ "hasFinally", &class_boolean, offsetof(rhino_NodeTransformer, F_hasFinally), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NodeTransformer, 0, "()V", 1 },
	{ "transform", (intptr_t) M_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_rhino_CompilerEnvirons, VTABLE_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_rhino_CompilerEnvirons, "(Lrhino/ast/ScriptNode;Lrhino/CompilerEnvirons;)V", 17 },
	{ "transform", (intptr_t) M_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_boolean_rhino_CompilerEnvirons, VTABLE_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_boolean_rhino_CompilerEnvirons, "(Lrhino/ast/ScriptNode;ZLrhino/CompilerEnvirons;)V", 17 },
	{ "transformCompilationUnit", (intptr_t) M_rhino_NodeTransformer_transformCompilationUnit_rhino_ast_ScriptNode_boolean, VTABLE_rhino_NodeTransformer_transformCompilationUnit_rhino_ast_ScriptNode_boolean, "(Lrhino/ast/ScriptNode;Z)V", 2 },
	{ "transformCompilationUnit_r", (intptr_t) M_rhino_NodeTransformer_transformCompilationUnit_r_rhino_ast_ScriptNode_rhino_Node_rhino_ast_Scope_boolean_boolean, VTABLE_rhino_NodeTransformer_transformCompilationUnit_r_rhino_ast_ScriptNode_rhino_Node_rhino_ast_Scope_boolean_boolean, "(Lrhino/ast/ScriptNode;Lrhino/Node;Lrhino/ast/Scope;ZZ)V", 2 },
	{ "visitNew", (intptr_t) M_rhino_NodeTransformer_visitNew_rhino_Node_rhino_ast_ScriptNode, VTABLE_rhino_NodeTransformer_visitNew_rhino_Node_rhino_ast_ScriptNode, "(Lrhino/Node;Lrhino/ast/ScriptNode;)V", 4 },
	{ "visitCall", (intptr_t) M_rhino_NodeTransformer_visitCall_rhino_Node_rhino_ast_ScriptNode, VTABLE_rhino_NodeTransformer_visitCall_rhino_Node_rhino_ast_ScriptNode, "(Lrhino/Node;Lrhino/ast/ScriptNode;)V", 4 },
	{ "visitLet", (intptr_t) M_rhino_NodeTransformer_visitLet_boolean_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node, VTABLE_rhino_NodeTransformer_visitLet_boolean_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node, "(ZLrhino/Node;Lrhino/Node;Lrhino/Node;)Lrhino/Node;", 4 },
	{ "addBeforeCurrent", (intptr_t) SM_rhino_NodeTransformer_addBeforeCurrent_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node, 0, "(Lrhino/Node;Lrhino/Node;Lrhino/Node;Lrhino/Node;)Lrhino/Node;", 10 },
	{ "replaceCurrent", (intptr_t) SM_rhino_NodeTransformer_replaceCurrent_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node, 0, "(Lrhino/Node;Lrhino/Node;Lrhino/Node;Lrhino/Node;)Lrhino/Node;", 10 },
};

Class class_rhino_NodeTransformer{
		.nativeName = (intptr_t) "rhino/NodeTransformer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_NodeTransformer),
		.classVtable = (intptr_t) vtable_rhino_NodeTransformer,
		.staticInitializer = (intptr_t) clinit_rhino_NodeTransformer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NodeTransformer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NodeTransformer = registerClass(&class_rhino_NodeTransformer);

}
