#include "mindustry/logic/LExecutor_SetRateI.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_SetRateI.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild.h"
#include "mindustry/world/blocks/logic/LogicBlock.h"

extern "C" {


void mark_mindustry_logic_LExecutor$SetRateI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$SetRateI *) object;
	if (self->F_amount)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_amount)->clazz)->markFunction)((jobject) self->F_amount, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$SetRateI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$SetRateI_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetRateI:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SetRateI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1214);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1215);
	((mindustry_logic_LExecutor$SetRateI *) NULL_CHECK((frame[0].o)))->F_amount = (jref) (frame[1].o);
	LINE_NUMBER(1216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$SetRateI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetRateI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SetRateI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1218);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1219);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$SetRateI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetRateI:run", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1223);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1224);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_build;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRateI *) NULL_CHECK((frame[0].o)))->F_amount;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[1].o);
	jint temp1 = jint(1);
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_block;
	jobject temp2 = sp[1].o;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(temp2))->F_privileged) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	jint temp0 = (jint)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_logic_LogicBlock, sp[0].o))))->F_maxInstructionsPerTick;
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	jint temp0 = (jint)((mindustry_world_blocks_logic_LogicBlock *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_logic_LogicBlock, sp[0].o))))->F_instructionsPerTick;
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 4;
	jint temp0 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, sp[1].i, sp[2].i, sp[3].i);
	((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_ipt = temp0;
	LINE_NUMBER(1225);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_ipt;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1226);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_ipt;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_build;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = (jdouble(((jint)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[1].o))->F_ipt)));
	}
label_5:;
	LINE_NUMBER(1228);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$SetRateI[] {
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
	(void *) M_mindustry_logic_LExecutor$SetRateI_run_mindustry_logic_LExecutor,
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
	{ "amount", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetRateI, F_amount), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SetRateI_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SetRateI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$SetRateI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$SetRateI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$SetRateI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$SetRateI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$SetRateI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$SetRateI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$SetRateI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$SetRateI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$SetRateI = registerClass(&class_mindustry_logic_LExecutor$SetRateI);

}

