#include "mindustry/logic/LExecutor_WaitI.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LExecutor_WaitI.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "arc/util/Time.h"
#include "mindustry/logic/LExecutor.h"

extern "C" {


void mark_mindustry_logic_LExecutor$WaitI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$WaitI *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$WaitI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$WaitI_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$WaitI:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$WaitI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1236);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1237);
	((mindustry_logic_LExecutor$WaitI *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(1238);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$WaitI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$WaitI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$WaitI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1240);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$WaitI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$WaitI:run", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1245);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$WaitI *) NULL_CHECK((frame[0].o)))->F_value;
	jdouble temp0 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[0].o);
	if ((doubleCompare(temp0, (jdouble(0)), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(1247);
	((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_yield = (jint(1));
	LINE_NUMBER(1249);
	((mindustry_logic_LExecutor$WaitI *) NULL_CHECK((frame[0].o)))->F_curTime = (jfloat(0));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(1250);
	jdouble temp0 = jdouble(((jfloat)((mindustry_logic_LExecutor$WaitI *) NULL_CHECK((frame[0].o)))->F_curTime));
	sp[0].o = (jobject)((mindustry_logic_LExecutor$WaitI *) NULL_CHECK((frame[0].o)))->F_value;
	jdouble temp1 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[0].o);
	if ((doubleCompare(temp0, temp1, -1)) < 0) goto label_5;
	}
	{
	LINE_NUMBER(1251);
	((mindustry_logic_LExecutor$WaitI *) NULL_CHECK((frame[0].o)))->F_curTime = (jfloat(0));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1254);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_counter;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = (((jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval) - (jdouble(1)));
	LINE_NUMBER(1255);
	((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_yield = (jint(1));
	LINE_NUMBER(1256);
	sp[0].o = frame[0].o;
	((mindustry_logic_LExecutor$WaitI *) NULL_CHECK(sp[0].o))->F_curTime = (((jfloat)((mindustry_logic_LExecutor$WaitI *) NULL_CHECK(sp[0].o))->F_curTime) + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(60.0f))));
	}
label_4:;
	LINE_NUMBER(1258);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$WaitI[] {
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
	(void *) M_mindustry_logic_LExecutor$WaitI_run_mindustry_logic_LExecutor,
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
	{ "value", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$WaitI, F_value), "Lmindustry/logic/LVar;", 1 },
	{ "curTime", &class_float, offsetof(mindustry_logic_LExecutor$WaitI, F_curTime), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$WaitI_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$WaitI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$WaitI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$WaitI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$WaitI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$WaitI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$WaitI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$WaitI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$WaitI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$WaitI,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$WaitI = registerClass(&class_mindustry_logic_LExecutor$WaitI);

}

