#include "mindustry/logic/LExecutor_ControlI.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_ControlI.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_logic_LExecutor$ControlI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$ControlI *) object;
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_p1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p1)->clazz)->markFunction)((jobject) self->F_p1, mark, depth + 1);
	if (self->F_p2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p2)->clazz)->markFunction)((jobject) self->F_p2, mark, depth + 1);
	if (self->F_p3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p3)->clazz)->markFunction)((jobject) self->F_p3, mark, depth + 1);
	if (self->F_p4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p4)->clazz)->markFunction)((jobject) self->F_p4, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$ControlI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$ControlI_mindustry_logic_LAccess_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$ControlI:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$ControlI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(563);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(560);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_enabled;
	((mindustry_logic_LExecutor$ControlI *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(564);
	((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(565);
	((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[2].o);
	LINE_NUMBER(566);
	((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[3].o);
	LINE_NUMBER(567);
	((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (frame[4].o);
	LINE_NUMBER(568);
	((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_p3 = (jref) (frame[5].o);
	LINE_NUMBER(569);
	((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_p4 = (jref) (frame[6].o);
	LINE_NUMBER(570);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$ControlI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$ControlI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$ControlI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(572);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(560);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_enabled;
	((mindustry_logic_LExecutor$ControlI *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(572);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$ControlI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$ControlI:run", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(576);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(577);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Building)) == 0) goto label_2;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[2].o)));
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_privileged) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicBuild_validLink_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_enabled;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(580);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_p1;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(581);
	((func_mindustry_gen_Building_noSleep) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_noSleep])(ctx, (frame[3].o));
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(583);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_lastDisabler = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(587);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_logic_LAccess *) NULL_CHECK(sp[0].o))->F_isObj) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_p1;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_isobj) == 0) goto label_9;
	}
	{
	LINE_NUMBER(588);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_type;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_p1;
	sp[2].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[2].o);
	sp[3].o = (jobject)((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_p2;
	jdouble temp0 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[3].o);
	sp[3].o = (jobject)((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_p3;
	jdouble temp1 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[3].o);
	sp[3].o = (jobject)((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_p4;
	jdouble temp2 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[3].o);
	((func_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2);
	goto label_2;
	}
label_9:;
	{
	LINE_NUMBER(590);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_type;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_p1;
	jdouble temp0 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_p2;
	jdouble temp1 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_p3;
	jdouble temp2 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_logic_LExecutor$ControlI *) NULL_CHECK((frame[0].o)))->F_p4;
	jdouble temp3 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[2].o);
	((func_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	}
label_2:;
	LINE_NUMBER(593);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$ControlI[] {
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
	(void *) M_mindustry_logic_LExecutor$ControlI_run_mindustry_logic_LExecutor,
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
	{ "target", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ControlI, F_target), "Lmindustry/logic/LVar;", 1 },
	{ "type", &class_mindustry_logic_LAccess, offsetof(mindustry_logic_LExecutor$ControlI, F_type), "Lmindustry/logic/LAccess;", 1 },
	{ "p1", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ControlI, F_p1), "Lmindustry/logic/LVar;", 1 },
	{ "p2", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ControlI, F_p2), "Lmindustry/logic/LVar;", 1 },
	{ "p3", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ControlI, F_p3), "Lmindustry/logic/LVar;", 1 },
	{ "p4", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ControlI, F_p4), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$ControlI_mindustry_logic_LAccess_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LAccess;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$ControlI, 0, "()V", 0 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$ControlI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$ControlI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$ControlI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$ControlI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$ControlI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$ControlI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$ControlI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$ControlI,
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
static bool registered_mindustry_logic_LExecutor$ControlI = registerClass(&class_mindustry_logic_LExecutor$ControlI);

}

