#include "mindustry/logic/LExecutor_SyncI.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_SyncI.h"
#include "arc/util/Time.h"
#include "mindustry/logic/LExecutor.h"
#include "java/lang/Double.h"
#include "mindustry/gen/Call.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild.h"
#include "mindustry/gen/Building.h"

extern "C" {

jlong SF_mindustry_logic_LExecutor$SyncI_syncInterval;

void mark_mindustry_logic_LExecutor$SyncI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$SyncI *) object;
	if (self->F_variable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_variable)->clazz)->markFunction)((jobject) self->F_variable, mark, depth + 1);
}

void init_mindustry_logic_LExecutor$SyncI_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SyncI:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SyncI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2068);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2069);
	((mindustry_logic_LExecutor$SyncI *) NULL_CHECK((frame[0].o)))->F_variable = (jref) (frame[1].o);
	LINE_NUMBER(2070);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$SyncI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SyncI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SyncI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2072);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2073);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$SyncI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SyncI:run", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2077);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SyncI *) NULL_CHECK((frame[0].o)))->F_variable;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_constant) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SyncI *) NULL_CHECK((frame[0].o)))->F_variable;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_syncTime));
	if ((longCompare(temp0, (clinit_mindustry_logic_LExecutor$SyncI(ctx), (jlong)SF_mindustry_logic_LExecutor$SyncI_syncInterval))) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2078);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SyncI *) NULL_CHECK((frame[0].o)))->F_variable;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_syncTime = temp0;
	LINE_NUMBER(2079);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_build;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SyncI *) NULL_CHECK((frame[0].o)))->F_variable;
	jint temp1 = (jint)((mindustry_logic_LVar *) NULL_CHECK(sp[1].o))->F_id;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SyncI *) NULL_CHECK((frame[0].o)))->F_variable;
	jobject temp2 = sp[1].o;
	sp[1].i = temp1;
	sp += 2;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK(temp2))->F_isobj) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SyncI *) NULL_CHECK((frame[0].o)))->F_variable;
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_objval;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SyncI *) NULL_CHECK((frame[0].o)))->F_variable;
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval));
	sp += 1;
	}
label_5:;
	POP_N(3); // Pop method args
	SM_mindustry_gen_Call_syncVariable_mindustry_gen_Building_int_java_lang_Object(ctx, sp[0].o, sp[1].i, sp[2].o);
label_1:;
	LINE_NUMBER(2081);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_logic_LExecutor$SyncI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SyncI:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SyncI(ctx);
	{
	LINE_NUMBER(2064);
	clinit_mindustry_logic_LExecutor$SyncI(ctx);
	SF_mindustry_logic_LExecutor$SyncI_syncInterval = (jlong(50ll));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$SyncI[] {
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
	(void *) M_mindustry_logic_LExecutor$SyncI_run_mindustry_logic_LExecutor,
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
	{ "syncInterval", &class_long, (intptr_t) &SF_mindustry_logic_LExecutor$SyncI_syncInterval, "J", 9 },
	{ "variable", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SyncI, F_variable), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SyncI_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SyncI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$SyncI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$SyncI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_LExecutor$SyncI, 0, "()V", 8 },
};

Class class_mindustry_logic_LExecutor$SyncI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$SyncI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$SyncI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$SyncI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$SyncI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$SyncI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$SyncI = registerClass(&class_mindustry_logic_LExecutor$SyncI);

}

