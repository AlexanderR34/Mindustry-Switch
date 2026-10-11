#include "mindustry/logic/LExecutor_OpI.h"
#include "mindustry/logic/LogicOp.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LogicOp_OpLambda2.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "arc/util/Structs.h"
#include "mindustry/logic/LogicOp_OpObjLambda2.h"
#include "mindustry/logic/LExecutor_OpI.h"
#include "mindustry/logic/LogicOp_OpLambda1.h"
#include "mindustry/logic/LExecutor.h"

extern "C" {


void mark_mindustry_logic_LExecutor$OpI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$OpI *) object;
	if (self->F_op)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_op)->clazz)->markFunction)((jobject) self->F_op, mark, depth + 1);
	if (self->F_a)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_a)->clazz)->markFunction)((jobject) self->F_a, mark, depth + 1);
	if (self->F_b)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_b)->clazz)->markFunction)((jobject) self->F_b, mark, depth + 1);
	if (self->F_dest)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dest)->clazz)->markFunction)((jobject) self->F_dest, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$OpI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$OpI_mindustry_logic_LogicOp_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$OpI:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$OpI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(853);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(850);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LogicOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicOp_add;
	((mindustry_logic_LExecutor$OpI *) NULL_CHECK(sp[0].o))->F_op = (jref) sp[1].o;
	LINE_NUMBER(854);
	((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_op = (jref) (frame[1].o);
	LINE_NUMBER(855);
	((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_a = (jref) (frame[2].o);
	LINE_NUMBER(856);
	((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_b = (jref) (frame[3].o);
	LINE_NUMBER(857);
	((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_dest = (jref) (frame[4].o);
	LINE_NUMBER(858);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$OpI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$OpI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$OpI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(860);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(850);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LogicOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicOp_add;
	((mindustry_logic_LExecutor$OpI *) NULL_CHECK(sp[0].o))->F_op = (jref) sp[1].o;
	LINE_NUMBER(860);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$OpI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$OpI:run", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(864);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_op;
	clinit_mindustry_logic_LogicOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicOp_strictEqual;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(865);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_dest;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_a;
	jint temp0 = (jint)((mindustry_logic_LVar *) NULL_CHECK(sp[1].o))->F_isobj;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_b;
	sp += 1;
	if (temp0 != ((jint)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_isobj)) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_a;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_isobj) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_a;
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_objval;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_b;
	sp[1].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK(sp[1].o))->F_objval;
	jint temp0 = (jint)SM_arc_util_Structs_eq_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_a;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_isobj) != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_a;
	jdouble temp0 = (jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_b;
	if ((doubleCompare(temp0, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval), -1)) != 0) goto label_3;
	}
label_5:;
	INST_DCONST(1);
	goto label_6;
label_3:;
	INST_DCONST(0);
label_6:;
	POP_N(2); // Pop method args
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, sp[1].d);
	goto label_7;
label_1:;
	{
	LINE_NUMBER(866);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_op;
	if (((jint)((mindustry_logic_LogicOp *) NULL_CHECK(sp[0].o))->F_unary) == 0) goto label_8;
	}
	{
	LINE_NUMBER(867);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_dest;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_op;
	sp[1].o = (jobject)((mindustry_logic_LogicOp *) NULL_CHECK(sp[1].o))->F_function1;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_a;
	jdouble temp0 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[2].o);
	jdouble temp1 = (jdouble)((func_mindustry_logic_LogicOp$OpLambda1_get_double_R_double) resolveInterfaceMethod(ctx, &class_mindustry_logic_LogicOp$OpLambda1, INDEX_mindustry_logic_LogicOp$OpLambda1_get_double_R_double, sp[1].o))(ctx, sp[1].o, temp0);
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, temp1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(869);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_op;
	sp[0].o = (jobject)((mindustry_logic_LogicOp *) NULL_CHECK(sp[0].o))->F_objFunction2;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_a;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_isobj) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_b;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_isobj) == 0) goto label_10;
	}
	{
	LINE_NUMBER(871);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_dest;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_op;
	sp[1].o = (jobject)((mindustry_logic_LogicOp *) NULL_CHECK(sp[1].o))->F_objFunction2;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_a;
	sp[2].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[2].o);
	sp[3].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_b;
	sp[3].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[3].o);
	jdouble temp0 = (jdouble)((func_mindustry_logic_LogicOp$OpObjLambda2_get_java_lang_Object_java_lang_Object_R_double) resolveInterfaceMethod(ctx, &class_mindustry_logic_LogicOp$OpObjLambda2, INDEX_mindustry_logic_LogicOp$OpObjLambda2_get_java_lang_Object_java_lang_Object_R_double, sp[1].o))(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, temp0);
	goto label_7;
	}
label_10:;
	{
	LINE_NUMBER(874);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_dest;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_op;
	sp[1].o = (jobject)((mindustry_logic_LogicOp *) NULL_CHECK(sp[1].o))->F_function2;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_a;
	jdouble temp0 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_logic_LExecutor$OpI *) NULL_CHECK((frame[0].o)))->F_b;
	jdouble temp1 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[2].o);
	jdouble temp2 = (jdouble)((func_mindustry_logic_LogicOp$OpLambda2_get_double_double_R_double) resolveInterfaceMethod(ctx, &class_mindustry_logic_LogicOp$OpLambda2, INDEX_mindustry_logic_LogicOp$OpLambda2_get_double_double_R_double, sp[1].o))(ctx, sp[1].o, temp0, temp1);
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, temp2);
	}
label_7:;
	LINE_NUMBER(878);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$OpI[] {
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
	(void *) M_mindustry_logic_LExecutor$OpI_run_mindustry_logic_LExecutor,
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
	{ "run", "(Lmindustry/logic/LExecutor;)V" },
};

static jclass interfaces[] { &class_mindustry_logic_LExecutor$LInstruction, };

static FieldMetadata fields[] {
	{ "op", &class_mindustry_logic_LogicOp, offsetof(mindustry_logic_LExecutor$OpI, F_op), "Lmindustry/logic/LogicOp;", 1 },
	{ "a", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$OpI, F_a), "Lmindustry/logic/LVar;", 1 },
	{ "b", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$OpI, F_b), "Lmindustry/logic/LVar;", 1 },
	{ "dest", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$OpI, F_dest), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$OpI_mindustry_logic_LogicOp_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LogicOp;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$OpI, 0, "()V", 0 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$OpI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$OpI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$OpI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$OpI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$OpI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$OpI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$OpI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$OpI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$OpI = registerClass(&class_mindustry_logic_LExecutor$OpI);

}

