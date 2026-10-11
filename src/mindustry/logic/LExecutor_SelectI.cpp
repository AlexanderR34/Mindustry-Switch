#include "mindustry/logic/LExecutor_SelectI.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/ConditionOp.h"
#include "mindustry/logic/LExecutor_SelectI.h"
#include "mindustry/logic/LExecutor.h"

extern "C" {


void mark_mindustry_logic_LExecutor$SelectI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$SelectI *) object;
	if (self->F_op)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_op)->clazz)->markFunction)((jobject) self->F_op, mark, depth + 1);
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
	if (self->F_comp0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_comp0)->clazz)->markFunction)((jobject) self->F_comp0, mark, depth + 1);
	if (self->F_comp1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_comp1)->clazz)->markFunction)((jobject) self->F_comp1, mark, depth + 1);
	if (self->F_a)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_a)->clazz)->markFunction)((jobject) self->F_a, mark, depth + 1);
	if (self->F_b)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_b)->clazz)->markFunction)((jobject) self->F_b, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$SelectI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$SelectI_mindustry_logic_ConditionOp_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SelectI:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SelectI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(885);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(882);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_ConditionOp_notEqual;
	((mindustry_logic_LExecutor$SelectI *) NULL_CHECK(sp[0].o))->F_op = (jref) sp[1].o;
	LINE_NUMBER(886);
	((mindustry_logic_LExecutor$SelectI *) NULL_CHECK((frame[0].o)))->F_op = (jref) (frame[1].o);
	LINE_NUMBER(887);
	((mindustry_logic_LExecutor$SelectI *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[2].o);
	LINE_NUMBER(888);
	((mindustry_logic_LExecutor$SelectI *) NULL_CHECK((frame[0].o)))->F_comp0 = (jref) (frame[3].o);
	LINE_NUMBER(889);
	((mindustry_logic_LExecutor$SelectI *) NULL_CHECK((frame[0].o)))->F_comp1 = (jref) (frame[4].o);
	LINE_NUMBER(890);
	((mindustry_logic_LExecutor$SelectI *) NULL_CHECK((frame[0].o)))->F_a = (jref) (frame[5].o);
	LINE_NUMBER(891);
	((mindustry_logic_LExecutor$SelectI *) NULL_CHECK((frame[0].o)))->F_b = (jref) (frame[6].o);
	LINE_NUMBER(892);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$SelectI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SelectI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SelectI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(894);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(882);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_ConditionOp_notEqual;
	((mindustry_logic_LExecutor$SelectI *) NULL_CHECK(sp[0].o))->F_op = (jref) sp[1].o;
	LINE_NUMBER(894);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$SelectI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SelectI:run", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(898);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SelectI *) NULL_CHECK((frame[0].o)))->F_result;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_constant) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(899);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SelectI *) NULL_CHECK((frame[0].o)))->F_result;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SelectI *) NULL_CHECK((frame[0].o)))->F_op;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$SelectI *) NULL_CHECK((frame[0].o)))->F_comp0;
	sp[3].o = (jobject)((mindustry_logic_LExecutor$SelectI *) NULL_CHECK((frame[0].o)))->F_comp1;
	jint temp0 = (jint)((func_mindustry_logic_ConditionOp_test_mindustry_logic_LVar_mindustry_logic_LVar_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_ConditionOp_test_mindustry_logic_LVar_mindustry_logic_LVar_R_boolean])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SelectI *) NULL_CHECK((frame[0].o)))->F_a;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_logic_LExecutor$SelectI *) NULL_CHECK(sp[-1].o))->F_b;
label_3:;
	{
	sp -= 2;
	((func_mindustry_logic_LVar_set_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_set_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(900);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$SelectI[] {
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
	(void *) M_mindustry_logic_LExecutor$SelectI_run_mindustry_logic_LExecutor,
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
	{ "op", &class_mindustry_logic_ConditionOp, offsetof(mindustry_logic_LExecutor$SelectI, F_op), "Lmindustry/logic/ConditionOp;", 1 },
	{ "result", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SelectI, F_result), "Lmindustry/logic/LVar;", 1 },
	{ "comp0", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SelectI, F_comp0), "Lmindustry/logic/LVar;", 1 },
	{ "comp1", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SelectI, F_comp1), "Lmindustry/logic/LVar;", 1 },
	{ "a", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SelectI, F_a), "Lmindustry/logic/LVar;", 1 },
	{ "b", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SelectI, F_b), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SelectI_mindustry_logic_ConditionOp_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/ConditionOp;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SelectI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$SelectI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$SelectI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$SelectI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$SelectI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$SelectI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$SelectI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$SelectI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$SelectI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$SelectI = registerClass(&class_mindustry_logic_LExecutor$SelectI);

}

