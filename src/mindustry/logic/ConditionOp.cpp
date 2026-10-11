#include "mindustry/logic/ConditionOp.h"
#include "java/lang/Math.h"
#include "mindustry/logic/ConditionOp_CondOpLambda.h"
#include "mindustry/logic/LVar.h"
#include "arc/util/Structs.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/ConditionOp_invoke_mindustry_logic_ConditionOp_CondOpLambda_9.h"
#include "mindustry/logic/ConditionOp_invoke_mindustry_logic_ConditionOp_CondOpLambda_8.h"
#include "mindustry/logic/ConditionOp_invoke_mindustry_logic_ConditionOp_CondOpLambda_10.h"
#include "mindustry/logic/ConditionOp_invoke_mindustry_logic_ConditionOp_CondOpLambda_11.h"
#include "mindustry/logic/ConditionOp_CondObjOpLambda.h"
#include "java/lang/Object.h"
#include "mindustry/logic/ConditionOp_invoke_mindustry_logic_ConditionOp_CondOpLambda_12.h"
#include "java/lang/String.h"
#include "mindustry/logic/ConditionOp_invoke_mindustry_logic_ConditionOp_CondOpLambda_13.h"
#include "mindustry/logic/ConditionOp_invoke_mindustry_logic_ConditionOp_CondOpLambda_14.h"
#include "mindustry/logic/ConditionOp_invoke_mindustry_logic_ConditionOp_CondOpLambda_15.h"
#include "mindustry/logic/ConditionOp.h"
#include "java/lang/Class.h"
#include "mindustry/logic/ConditionOp_invoke_mindustry_logic_ConditionOp_CondObjOpLambda_3.h"
#include "mindustry/logic/ConditionOp_invoke_mindustry_logic_ConditionOp_CondObjOpLambda_2.h"

extern "C" {

jobject SF_mindustry_logic_ConditionOp_equal;
jobject SF_mindustry_logic_ConditionOp_notEqual;
jobject SF_mindustry_logic_ConditionOp_lessThan;
jobject SF_mindustry_logic_ConditionOp_lessThanEq;
jobject SF_mindustry_logic_ConditionOp_greaterThan;
jobject SF_mindustry_logic_ConditionOp_greaterThanEq;
jobject SF_mindustry_logic_ConditionOp_strictEqual;
jobject SF_mindustry_logic_ConditionOp_always;
jobject SF_mindustry_logic_ConditionOp_all;
jobject SF_mindustry_logic_ConditionOp_$VALUES;

void mark_mindustry_logic_ConditionOp(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_ConditionOp_equal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_ConditionOp_equal)->clazz)->markFunction)((jobject) SF_mindustry_logic_ConditionOp_equal, mark, depth + 1);
		if (SF_mindustry_logic_ConditionOp_notEqual)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_ConditionOp_notEqual)->clazz)->markFunction)((jobject) SF_mindustry_logic_ConditionOp_notEqual, mark, depth + 1);
		if (SF_mindustry_logic_ConditionOp_lessThan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_ConditionOp_lessThan)->clazz)->markFunction)((jobject) SF_mindustry_logic_ConditionOp_lessThan, mark, depth + 1);
		if (SF_mindustry_logic_ConditionOp_lessThanEq)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_ConditionOp_lessThanEq)->clazz)->markFunction)((jobject) SF_mindustry_logic_ConditionOp_lessThanEq, mark, depth + 1);
		if (SF_mindustry_logic_ConditionOp_greaterThan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_ConditionOp_greaterThan)->clazz)->markFunction)((jobject) SF_mindustry_logic_ConditionOp_greaterThan, mark, depth + 1);
		if (SF_mindustry_logic_ConditionOp_greaterThanEq)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_ConditionOp_greaterThanEq)->clazz)->markFunction)((jobject) SF_mindustry_logic_ConditionOp_greaterThanEq, mark, depth + 1);
		if (SF_mindustry_logic_ConditionOp_strictEqual)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_ConditionOp_strictEqual)->clazz)->markFunction)((jobject) SF_mindustry_logic_ConditionOp_strictEqual, mark, depth + 1);
		if (SF_mindustry_logic_ConditionOp_always)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_ConditionOp_always)->clazz)->markFunction)((jobject) SF_mindustry_logic_ConditionOp_always, mark, depth + 1);
		if (SF_mindustry_logic_ConditionOp_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_ConditionOp_all)->clazz)->markFunction)((jobject) SF_mindustry_logic_ConditionOp_all, mark, depth + 1);
		if (SF_mindustry_logic_ConditionOp_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_ConditionOp_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_logic_ConditionOp_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_logic_ConditionOp *) object;
	if (self->F_objFunction)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_objFunction)->clazz)->markFunction)((jobject) self->F_objFunction, mark, depth + 1);
	if (self->F_function)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_function)->clazz)->markFunction)((jobject) self->F_function, mark, depth + 1);
	if (self->F_symbol)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_symbol)->clazz)->markFunction)((jobject) self->F_symbol, mark, depth + 1);
}

jobject SM_mindustry_logic_ConditionOp_values_R_Array1_mindustry_logic_ConditionOp(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_ConditionOp(ctx);
	{
	LINE_NUMBER(5);
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_ConditionOp_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_logic_ConditionOp, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_ConditionOp_valueOf_java_lang_String_R_mindustry_logic_ConditionOp(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_ConditionOp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(5);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_logic_ConditionOp)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_ConditionOp, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_ConditionOp_java_lang_String_int_java_lang_String_mindustry_logic_ConditionOp$CondOpLambda(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_ConditionOp(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(22);
	init_mindustry_logic_ConditionOp_java_lang_String_int_java_lang_String_mindustry_logic_ConditionOp$CondOpLambda_mindustry_logic_ConditionOp$CondObjOpLambda(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].o), (jobject(nullptr)));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_ConditionOp_java_lang_String_int_java_lang_String_mindustry_logic_ConditionOp$CondOpLambda_mindustry_logic_ConditionOp$CondObjOpLambda(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_ConditionOp(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(25);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(26);
	((mindustry_logic_ConditionOp *) NULL_CHECK((frame[0].o)))->F_symbol = (jref) (frame[3].o);
	LINE_NUMBER(27);
	((mindustry_logic_ConditionOp *) NULL_CHECK((frame[0].o)))->F_function = (jref) (frame[4].o);
	LINE_NUMBER(28);
	((mindustry_logic_ConditionOp *) NULL_CHECK((frame[0].o)))->F_objFunction = (jref) (frame[5].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_ConditionOp_test_mindustry_logic_LVar_mindustry_logic_LVar_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:test", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_ConditionOp_strictEqual;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(33);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[1].o)))->F_isobj) != ((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[2].o)))->F_isobj)) goto label_3;
	}
	{
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[1].o)))->F_isobj) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[1].o)))->F_objval;
	sp[1].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[2].o)))->F_objval;
	jint temp0 = (jint)SM_arc_util_Structs_eq_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
label_4:;
	{
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[1].o)))->F_isobj) != 0) goto label_3;
	}
	{
	if ((doubleCompare(((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[1].o)))->F_numval), ((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[2].o)))->F_numval), -1)) != 0) goto label_3;
	}
label_5:;
	INST_ICONST(1);
	goto label_6;
label_3:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_logic_ConditionOp *) NULL_CHECK((frame[0].o)))->F_objFunction;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[1].o)))->F_isobj) == 0) goto label_7;
	}
	{
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[2].o)))->F_isobj) == 0) goto label_7;
	}
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((mindustry_logic_ConditionOp *) NULL_CHECK((frame[0].o)))->F_objFunction;
	sp[1].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_mindustry_logic_ConditionOp$CondObjOpLambda_get_java_lang_Object_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_logic_ConditionOp$CondObjOpLambda, INDEX_mindustry_logic_ConditionOp$CondObjOpLambda_get_java_lang_Object_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}
label_7:;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_logic_ConditionOp *) NULL_CHECK((frame[0].o)))->F_function;
	jdouble temp0 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, (frame[1].o));
	jdouble temp1 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, (frame[2].o));
	jint temp2 = (jint)((func_mindustry_logic_ConditionOp$CondOpLambda_get_double_double_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_logic_ConditionOp$CondOpLambda, INDEX_mindustry_logic_ConditionOp$CondOpLambda_get_double_double_R_boolean, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_ConditionOp_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_logic_ConditionOp *) NULL_CHECK((frame[0].o)))->F_symbol;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_ConditionOp_$values_R_Array1_mindustry_logic_ConditionOp(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_ConditionOp(ctx);
	{
	LINE_NUMBER(5);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_logic_ConditionOp, (8));
	jint temp0 = jint(0);
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_ConditionOp_equal;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_ConditionOp_notEqual;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_ConditionOp_lessThan;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_ConditionOp_lessThanEq;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_ConditionOp_greaterThan;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_ConditionOp_greaterThanEq;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_ConditionOp_strictEqual;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_ConditionOp_always;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_ConditionOp_lambda$static$8_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:lambda$static$8", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_ConditionOp(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_ConditionOp_lambda$static$7_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:lambda$static$7", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_ConditionOp(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_ConditionOp_lambda$static$6_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:lambda$static$6", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_ConditionOp(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(11);
	if ((doubleCompare((frame[0].d), (frame[2].d), -1)) < 0) goto label_1;
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

jbool SM_mindustry_logic_ConditionOp_lambda$static$5_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:lambda$static$5", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_ConditionOp(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(10);
	if ((doubleCompare((frame[0].d), (frame[2].d), -1)) <= 0) goto label_1;
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

jbool SM_mindustry_logic_ConditionOp_lambda$static$4_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:lambda$static$4", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_ConditionOp(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(9);
	if ((doubleCompare((frame[0].d), (frame[2].d), 1)) > 0) goto label_1;
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

jbool SM_mindustry_logic_ConditionOp_lambda$static$3_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:lambda$static$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_ConditionOp(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(8);
	if ((doubleCompare((frame[0].d), (frame[2].d), 1)) >= 0) goto label_1;
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

jbool SM_mindustry_logic_ConditionOp_lambda$static$2_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:lambda$static$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_ConditionOp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(7);
	jint temp0 = (jint)SM_arc_util_Structs_eq_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
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

jbool SM_mindustry_logic_ConditionOp_lambda$static$1_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:lambda$static$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_ConditionOp(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(7);
	jdouble temp0 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, ((frame[0].d) - (frame[2].d)));
	if ((doubleCompare(temp0, (jdouble(1,000000e-06)), -1)) < 0) goto label_1;
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

jbool SM_mindustry_logic_ConditionOp_lambda$static$0_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:lambda$static$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_ConditionOp(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(6);
	jdouble temp0 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, ((frame[0].d) - (frame[2].d)));
	if ((doubleCompare(temp0, (jdouble(1,000000e-06)), 1)) >= 0) goto label_1;
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

void clinit_mindustry_logic_ConditionOp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/ConditionOp:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_ConditionOp(ctx);
	{
	LINE_NUMBER(6);
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_ConditionOp);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"equal"_j));
	jint temp0 = jint(0);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"=="_j));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_8(ctx);
		auto proxy = (mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_8 *) gcAlloc(ctx, &class_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_8);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondObjOpLambda_2(ctx);
		auto proxy = (mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondObjOpLambda_2 *) gcAlloc(ctx, &class_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondObjOpLambda_2);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_logic_ConditionOp_java_lang_String_int_java_lang_String_mindustry_logic_ConditionOp$CondOpLambda_mindustry_logic_ConditionOp$CondObjOpLambda(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o, sp[4].o);
	clinit_mindustry_logic_ConditionOp(ctx);
	SF_mindustry_logic_ConditionOp_equal = sp[0].o;
	LINE_NUMBER(7);
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_ConditionOp);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"notEqual"_j));
	jint temp1 = jint(1);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"not"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_9(ctx);
		auto proxy = (mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_9 *) gcAlloc(ctx, &class_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_9);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondObjOpLambda_3(ctx);
		auto proxy = (mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondObjOpLambda_3 *) gcAlloc(ctx, &class_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondObjOpLambda_3);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_logic_ConditionOp_java_lang_String_int_java_lang_String_mindustry_logic_ConditionOp$CondOpLambda_mindustry_logic_ConditionOp$CondObjOpLambda(ctx, sp[0].o, sp[1].o, temp1, sp[2].o, sp[3].o, sp[4].o);
	clinit_mindustry_logic_ConditionOp(ctx);
	SF_mindustry_logic_ConditionOp_notEqual = sp[0].o;
	LINE_NUMBER(8);
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_ConditionOp);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lessThan"_j));
	jint temp2 = jint(2);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"<"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_10(ctx);
		auto proxy = (mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_10 *) gcAlloc(ctx, &class_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_10);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_logic_ConditionOp_java_lang_String_int_java_lang_String_mindustry_logic_ConditionOp$CondOpLambda(ctx, sp[0].o, sp[1].o, temp2, sp[2].o, sp[3].o);
	clinit_mindustry_logic_ConditionOp(ctx);
	SF_mindustry_logic_ConditionOp_lessThan = sp[0].o;
	LINE_NUMBER(9);
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_ConditionOp);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lessThanEq"_j));
	jint temp3 = jint(3);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"<="_j));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_11(ctx);
		auto proxy = (mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_11 *) gcAlloc(ctx, &class_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_11);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_logic_ConditionOp_java_lang_String_int_java_lang_String_mindustry_logic_ConditionOp$CondOpLambda(ctx, sp[0].o, sp[1].o, temp3, sp[2].o, sp[3].o);
	clinit_mindustry_logic_ConditionOp(ctx);
	SF_mindustry_logic_ConditionOp_lessThanEq = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_ConditionOp);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"greaterThan"_j));
	jint temp4 = jint(4);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8">"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_12(ctx);
		auto proxy = (mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_12 *) gcAlloc(ctx, &class_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_12);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_logic_ConditionOp_java_lang_String_int_java_lang_String_mindustry_logic_ConditionOp$CondOpLambda(ctx, sp[0].o, sp[1].o, temp4, sp[2].o, sp[3].o);
	clinit_mindustry_logic_ConditionOp(ctx);
	SF_mindustry_logic_ConditionOp_greaterThan = sp[0].o;
	LINE_NUMBER(11);
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_ConditionOp);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"greaterThanEq"_j));
	jint temp5 = jint(5);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8">="_j));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_13(ctx);
		auto proxy = (mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_13 *) gcAlloc(ctx, &class_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_13);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_logic_ConditionOp_java_lang_String_int_java_lang_String_mindustry_logic_ConditionOp$CondOpLambda(ctx, sp[0].o, sp[1].o, temp5, sp[2].o, sp[3].o);
	clinit_mindustry_logic_ConditionOp(ctx);
	SF_mindustry_logic_ConditionOp_greaterThanEq = sp[0].o;
	LINE_NUMBER(12);
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_ConditionOp);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"strictEqual"_j));
	jint temp6 = 6;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"==="_j));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_14(ctx);
		auto proxy = (mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_14 *) gcAlloc(ctx, &class_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_14);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_logic_ConditionOp_java_lang_String_int_java_lang_String_mindustry_logic_ConditionOp$CondOpLambda(ctx, sp[0].o, sp[1].o, temp6, sp[2].o, sp[3].o);
	clinit_mindustry_logic_ConditionOp(ctx);
	SF_mindustry_logic_ConditionOp_strictEqual = sp[0].o;
	LINE_NUMBER(13);
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_ConditionOp);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"always"_j));
	jint temp7 = 7;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"always"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_15(ctx);
		auto proxy = (mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_15 *) gcAlloc(ctx, &class_mindustry_logic_ConditionOp_invoke_mindustry_logic_ConditionOp$CondOpLambda_15);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_logic_ConditionOp_java_lang_String_int_java_lang_String_mindustry_logic_ConditionOp$CondOpLambda(ctx, sp[0].o, sp[1].o, temp7, sp[2].o, sp[3].o);
	clinit_mindustry_logic_ConditionOp(ctx);
	SF_mindustry_logic_ConditionOp_always = sp[0].o;
	LINE_NUMBER(5);
	sp[0].o = (jobject)SM_mindustry_logic_ConditionOp_$values_R_Array1_mindustry_logic_ConditionOp(ctx);
	clinit_mindustry_logic_ConditionOp(ctx);
	SF_mindustry_logic_ConditionOp_$VALUES = sp[0].o;
	LINE_NUMBER(15);
	sp[0].o = (jobject)SM_mindustry_logic_ConditionOp_values_R_Array1_mindustry_logic_ConditionOp(ctx);
	clinit_mindustry_logic_ConditionOp(ctx);
	SF_mindustry_logic_ConditionOp_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_ConditionOp[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_logic_ConditionOp_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
	(void *) M_mindustry_logic_ConditionOp_test_mindustry_logic_LVar_mindustry_logic_LVar_R_boolean,
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
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "test", "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)Z" },
};

static jclass innerClasses[] {
	&class_mindustry_logic_ConditionOp$CondOpLambda,
	&class_mindustry_logic_ConditionOp$CondObjOpLambda,
};

static FieldMetadata fields[] {
	{ "equal", &class_mindustry_logic_ConditionOp, (intptr_t) &SF_mindustry_logic_ConditionOp_equal, "Lmindustry/logic/ConditionOp;", 16409 },
	{ "notEqual", &class_mindustry_logic_ConditionOp, (intptr_t) &SF_mindustry_logic_ConditionOp_notEqual, "Lmindustry/logic/ConditionOp;", 16409 },
	{ "lessThan", &class_mindustry_logic_ConditionOp, (intptr_t) &SF_mindustry_logic_ConditionOp_lessThan, "Lmindustry/logic/ConditionOp;", 16409 },
	{ "lessThanEq", &class_mindustry_logic_ConditionOp, (intptr_t) &SF_mindustry_logic_ConditionOp_lessThanEq, "Lmindustry/logic/ConditionOp;", 16409 },
	{ "greaterThan", &class_mindustry_logic_ConditionOp, (intptr_t) &SF_mindustry_logic_ConditionOp_greaterThan, "Lmindustry/logic/ConditionOp;", 16409 },
	{ "greaterThanEq", &class_mindustry_logic_ConditionOp, (intptr_t) &SF_mindustry_logic_ConditionOp_greaterThanEq, "Lmindustry/logic/ConditionOp;", 16409 },
	{ "strictEqual", &class_mindustry_logic_ConditionOp, (intptr_t) &SF_mindustry_logic_ConditionOp_strictEqual, "Lmindustry/logic/ConditionOp;", 16409 },
	{ "always", &class_mindustry_logic_ConditionOp, (intptr_t) &SF_mindustry_logic_ConditionOp_always, "Lmindustry/logic/ConditionOp;", 16409 },
	{ "all", getArrayClass(&class_mindustry_logic_ConditionOp, 1), (intptr_t) &SF_mindustry_logic_ConditionOp_all, "[Lmindustry/logic/ConditionOp;", 25 },
	{ "objFunction", &class_mindustry_logic_ConditionOp$CondObjOpLambda, offsetof(mindustry_logic_ConditionOp, F_objFunction), "Lmindustry/logic/ConditionOp$CondObjOpLambda;", 17 },
	{ "function", &class_mindustry_logic_ConditionOp$CondOpLambda, offsetof(mindustry_logic_ConditionOp, F_function), "Lmindustry/logic/ConditionOp$CondOpLambda;", 17 },
	{ "symbol", &class_java_lang_String, offsetof(mindustry_logic_ConditionOp, F_symbol), "Ljava/lang/String;", 17 },
	{ "$VALUES", getArrayClass(&class_mindustry_logic_ConditionOp, 1), (intptr_t) &SF_mindustry_logic_ConditionOp_$VALUES, "[Lmindustry/logic/ConditionOp;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_logic_ConditionOp_values_R_Array1_mindustry_logic_ConditionOp, 0, "()[Lmindustry/logic/ConditionOp;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_logic_ConditionOp_valueOf_java_lang_String_R_mindustry_logic_ConditionOp, 0, "(Ljava/lang/String;)Lmindustry/logic/ConditionOp;", 9 },
	{ "<init>", (intptr_t) init_mindustry_logic_ConditionOp_java_lang_String_int_java_lang_String_mindustry_logic_ConditionOp$CondOpLambda, 0, "(Ljava/lang/String;ILjava/lang/String;Lmindustry/logic/ConditionOp$CondOpLambda;)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_logic_ConditionOp_java_lang_String_int_java_lang_String_mindustry_logic_ConditionOp$CondOpLambda_mindustry_logic_ConditionOp$CondObjOpLambda, 0, "(Ljava/lang/String;ILjava/lang/String;Lmindustry/logic/ConditionOp$CondOpLambda;Lmindustry/logic/ConditionOp$CondObjOpLambda;)V", 2 },
	{ "test", (intptr_t) M_mindustry_logic_ConditionOp_test_mindustry_logic_LVar_mindustry_logic_LVar_R_boolean, VTABLE_mindustry_logic_ConditionOp_test_mindustry_logic_LVar_mindustry_logic_LVar_R_boolean, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)Z", 1 },
	{ "toString", (intptr_t) M_mindustry_logic_ConditionOp_toString_R_java_lang_String, VTABLE_mindustry_logic_ConditionOp_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "$values", (intptr_t) SM_mindustry_logic_ConditionOp_$values_R_Array1_mindustry_logic_ConditionOp, 0, "()[Lmindustry/logic/ConditionOp;", 4106 },
	{ "lambda$static$8", (intptr_t) SM_mindustry_logic_ConditionOp_lambda$static$8_double_double_R_boolean, 0, "(DD)Z", 4106 },
	{ "lambda$static$7", (intptr_t) SM_mindustry_logic_ConditionOp_lambda$static$7_double_double_R_boolean, 0, "(DD)Z", 4106 },
	{ "lambda$static$6", (intptr_t) SM_mindustry_logic_ConditionOp_lambda$static$6_double_double_R_boolean, 0, "(DD)Z", 4106 },
	{ "lambda$static$5", (intptr_t) SM_mindustry_logic_ConditionOp_lambda$static$5_double_double_R_boolean, 0, "(DD)Z", 4106 },
	{ "lambda$static$4", (intptr_t) SM_mindustry_logic_ConditionOp_lambda$static$4_double_double_R_boolean, 0, "(DD)Z", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_logic_ConditionOp_lambda$static$3_double_double_R_boolean, 0, "(DD)Z", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_logic_ConditionOp_lambda$static$2_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_logic_ConditionOp_lambda$static$1_double_double_R_boolean, 0, "(DD)Z", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_logic_ConditionOp_lambda$static$0_double_double_R_boolean, 0, "(DD)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_ConditionOp, 0, "()V", 8 },
};

Class class_mindustry_logic_ConditionOp{
		.nativeName = (intptr_t) "mindustry/logic/ConditionOp",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_logic_ConditionOp),
		.classVtable = (intptr_t) vtable_mindustry_logic_ConditionOp,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_ConditionOp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_ConditionOp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_ConditionOp = registerClass(&class_mindustry_logic_ConditionOp);

}
