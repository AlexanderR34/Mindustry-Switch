#include "mindustry/logic/LExecutor_JumpI.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/ConditionOp.h"
#include "mindustry/logic/LExecutor_JumpI.h"
#include "mindustry/logic/LExecutor.h"

extern "C" {


void mark_mindustry_logic_LExecutor$JumpI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$JumpI *) object;
	if (self->F_op)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_op)->clazz)->markFunction)((jobject) self->F_op, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
	if (self->F_compare)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_compare)->clazz)->markFunction)((jobject) self->F_compare, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$JumpI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$JumpI_mindustry_logic_ConditionOp_mindustry_logic_LVar_mindustry_logic_LVar_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$JumpI:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$JumpI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1193);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1189);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_ConditionOp_notEqual;
	((mindustry_logic_LExecutor$JumpI *) NULL_CHECK(sp[0].o))->F_op = (jref) sp[1].o;
	LINE_NUMBER(1194);
	((mindustry_logic_LExecutor$JumpI *) NULL_CHECK((frame[0].o)))->F_op = (jref) (frame[1].o);
	LINE_NUMBER(1195);
	((mindustry_logic_LExecutor$JumpI *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[2].o);
	LINE_NUMBER(1196);
	((mindustry_logic_LExecutor$JumpI *) NULL_CHECK((frame[0].o)))->F_compare = (jref) (frame[3].o);
	LINE_NUMBER(1197);
	((mindustry_logic_LExecutor$JumpI *) NULL_CHECK((frame[0].o)))->F_address = (frame[4].i);
	LINE_NUMBER(1198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$JumpI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$JumpI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$JumpI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1200);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1189);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_ConditionOp(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_ConditionOp_notEqual;
	((mindustry_logic_LExecutor$JumpI *) NULL_CHECK(sp[0].o))->F_op = (jref) sp[1].o;
	LINE_NUMBER(1201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$JumpI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$JumpI:run", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1205);
	if (((jint)((mindustry_logic_LExecutor$JumpI *) NULL_CHECK((frame[0].o)))->F_address) == (jint(-1))) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$JumpI *) NULL_CHECK((frame[0].o)))->F_op;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$JumpI *) NULL_CHECK((frame[0].o)))->F_value;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$JumpI *) NULL_CHECK((frame[0].o)))->F_compare;
	jint temp0 = (jint)((func_mindustry_logic_ConditionOp_test_mindustry_logic_LVar_mindustry_logic_LVar_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_ConditionOp_test_mindustry_logic_LVar_mindustry_logic_LVar_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1206);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_counter;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = (jdouble(((jint)((mindustry_logic_LExecutor$JumpI *) NULL_CHECK((frame[0].o)))->F_address)));
	}
label_1:;
	LINE_NUMBER(1208);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$JumpI[] {
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
	(void *) M_mindustry_logic_LExecutor$JumpI_run_mindustry_logic_LExecutor,
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
	{ "op", &class_mindustry_logic_ConditionOp, offsetof(mindustry_logic_LExecutor$JumpI, F_op), "Lmindustry/logic/ConditionOp;", 1 },
	{ "value", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$JumpI, F_value), "Lmindustry/logic/LVar;", 1 },
	{ "compare", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$JumpI, F_compare), "Lmindustry/logic/LVar;", 1 },
	{ "address", &class_int, offsetof(mindustry_logic_LExecutor$JumpI, F_address), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$JumpI_mindustry_logic_ConditionOp_mindustry_logic_LVar_mindustry_logic_LVar_int, 0, "(Lmindustry/logic/ConditionOp;Lmindustry/logic/LVar;Lmindustry/logic/LVar;I)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$JumpI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$JumpI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$JumpI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$JumpI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$JumpI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$JumpI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$JumpI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$JumpI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$JumpI,
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
static bool registered_mindustry_logic_LExecutor$JumpI = registerClass(&class_mindustry_logic_LExecutor$JumpI);

}

