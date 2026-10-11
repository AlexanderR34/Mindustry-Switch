#include "mindustry/logic/LogicScript.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LAssembler.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "arc/util/Time.h"
#include "mindustry/logic/LogicScript.h"
#include "mindustry/logic/LExecutor.h"

extern "C" {

jint SF_mindustry_logic_LogicScript_defaultTimeoutMs;
jint SF_mindustry_logic_LogicScript_maxTimeoutMs;

void mark_mindustry_logic_LogicScript(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LogicScript *) object;
	if (self->F_executor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_executor)->clazz)->markFunction)((jobject) self->F_executor, mark, depth + 1);
	if (self->F_script)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_script)->clazz)->markFunction)((jobject) self->F_script, mark, depth + 1);
}

void clinit_mindustry_logic_LogicScript(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_logic_LogicScript_defaultTimeoutMs = jint(200);
	SF_mindustry_logic_LogicScript_maxTimeoutMs = jint(2000);
}

void init_mindustry_logic_LogicScript_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicScript:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicScript(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(10);
	((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_timeout = (jint(0));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LExecutor(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor);
	init_mindustry_logic_LExecutor(ctx, sp[1].o);
	((mindustry_logic_LogicScript *) NULL_CHECK(sp[0].o))->F_executor = (jref) sp[1].o;
	LINE_NUMBER(12);
	((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_resetVars = (jint(0));
	LINE_NUMBER(13);
	((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_script = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(16);
	((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_script = (jref) (frame[1].o);
	LINE_NUMBER(17);
	sp[0].o = (jobject)SM_mindustry_logic_LAssembler_assemble_java_lang_String_boolean_R_mindustry_logic_LAssembler(ctx, (frame[1].o), (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(18);
	sp[0].o = (jobject)((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_executor;
	((func_mindustry_logic_LExecutor_load_mindustry_logic_LAssembler) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LExecutor_load_mindustry_logic_LAssembler])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LogicScript(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicScript:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicScript(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(10);
	((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_timeout = (jint(0));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LExecutor(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor);
	init_mindustry_logic_LExecutor(ctx, sp[1].o);
	((mindustry_logic_LogicScript *) NULL_CHECK(sp[0].o))->F_executor = (jref) sp[1].o;
	LINE_NUMBER(12);
	((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_resetVars = (jint(0));
	LINE_NUMBER(13);
	((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_script = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LogicScript_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicScript:run", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	if (((jint)((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_resetVars) == 0) goto label_1;
	}
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_vars;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_1;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(28);
	((mindustry_logic_LVar *) NULL_CHECK((frame[4].o)))->F_isobj = (jint(1));
	LINE_NUMBER(29);
	((mindustry_logic_LVar *) NULL_CHECK((frame[4].o)))->F_objval = (jref) (jobject(nullptr));
	LINE_NUMBER(27);
	INST_IINC(3, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_counter;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(0)));
	LINE_NUMBER(34);
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(35);
	frame[3].i = (jint(0));
	LINE_NUMBER(37);
	sp[0].o = (jobject)((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_counter;
	frame[4].o = sp[0].o;
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_instructions;
	frame[5].o = sp[0].o;
	LINE_NUMBER(39);
	if (((jint)((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_timeout) > 0) goto label_12;
	}
	INST_SIPUSH(200);
	goto label_13;
label_12:;
	INST_ALOAD(0);
	sp[-1].i = ((mindustry_logic_LogicScript *) NULL_CHECK(sp[-1].o))->F_timeout;
label_13:;
	INST_ISTORE(6);
label_14:;
	{
	LINE_NUMBER(41);
	if ((doubleCompare(((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[4].o)))->F_numval), (jdouble(0)), -1)) < 0) goto label_15;
	}
	{
	jdouble temp0 = (jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[4].o)))->F_numval;
	sp[0].o = (jobject)((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_instructions;
	if ((doubleCompare(temp0, (jdouble((((jarray) nullCheck(ctx, sp[0].o))->length))), 1)) >= 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_executor;
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_stop) != 0) goto label_15;
	}
	{
	LINE_NUMBER(42);
	((mindustry_logic_LVar *) NULL_CHECK((frame[4].o)))->F_isobj = (jint(0));
	LINE_NUMBER(43);
	sp[0].o = frame[5].o;
	sp[1].o = frame[4].o;
	jdouble temp0 = (jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[1].o))->F_numval;
	((mindustry_logic_LVar *) NULL_CHECK(sp[1].o))->F_numval = (temp0 + (jdouble(1)));
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(temp0))));
	LINE_NUMBER(44);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_logic_LogicScript *) NULL_CHECK((frame[0].o)))->F_executor;
	((func_mindustry_logic_LExecutor$LInstruction_run_mindustry_logic_LExecutor) resolveInterfaceMethod(ctx, &class_mindustry_logic_LExecutor$LInstruction, INDEX_mindustry_logic_LExecutor$LInstruction_run_mindustry_logic_LExecutor, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(47);
	INST_IINC(3, 1);
	if ((frame[3].i) < (100)) goto label_20;
	}
	{
	LINE_NUMBER(48);
	frame[3].i = (jint(0));
	LINE_NUMBER(49);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, (frame[1].l));
	if ((longCompare(temp0, (jlong((frame[6].i))))) <= 0) goto label_20;
	}
	LINE_NUMBER(51);
	goto label_15;
label_20:;
	LINE_NUMBER(54);
	goto label_14;
label_15:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LogicScript[] {
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
	(void *) M_mindustry_logic_LogicScript_run,
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
	{ "run", "()V" },
};

static FieldMetadata fields[] {
	{ "defaultTimeoutMs", &class_int, (intptr_t) &SF_mindustry_logic_LogicScript_defaultTimeoutMs, "I", 25 },
	{ "maxTimeoutMs", &class_int, (intptr_t) &SF_mindustry_logic_LogicScript_maxTimeoutMs, "I", 25 },
	{ "timeout", &class_int, offsetof(mindustry_logic_LogicScript, F_timeout), "I", 0 },
	{ "executor", &class_mindustry_logic_LExecutor, offsetof(mindustry_logic_LogicScript, F_executor), "Lmindustry/logic/LExecutor;", 0 },
	{ "resetVars", &class_boolean, offsetof(mindustry_logic_LogicScript, F_resetVars), "Z", 0 },
	{ "script", &class_java_lang_String, offsetof(mindustry_logic_LogicScript, F_script), "Ljava/lang/String;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LogicScript_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LogicScript, 0, "()V", 0 },
	{ "run", (intptr_t) M_mindustry_logic_LogicScript_run, VTABLE_mindustry_logic_LogicScript_run, "()V", 1 },
};

Class class_mindustry_logic_LogicScript{
		.nativeName = (intptr_t) "mindustry/logic/LogicScript",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LogicScript),
		.classVtable = (intptr_t) vtable_mindustry_logic_LogicScript,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LogicScript,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LogicScript,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LogicScript = registerClass(&class_mindustry_logic_LogicScript);

}
