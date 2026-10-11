#include "mindustry/logic/LExecutor_ClientDataI.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_ClientDataI.h"
#include "mindustry/logic/LExecutor.h"
#include "java/lang/Double.h"
#include "mindustry/gen/Call.h"

extern "C" {


void mark_mindustry_logic_LExecutor$ClientDataI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$ClientDataI *) object;
	if (self->F_channel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_channel)->clazz)->markFunction)((jobject) self->F_channel, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
	if (self->F_reliable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_reliable)->clazz)->markFunction)((jobject) self->F_reliable, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$ClientDataI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$ClientDataI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$ClientDataI:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$ClientDataI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2087);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2088);
	((mindustry_logic_LExecutor$ClientDataI *) NULL_CHECK((frame[0].o)))->F_channel = (jref) (frame[1].o);
	LINE_NUMBER(2089);
	((mindustry_logic_LExecutor$ClientDataI *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[2].o);
	LINE_NUMBER(2090);
	((mindustry_logic_LExecutor$ClientDataI *) NULL_CHECK((frame[0].o)))->F_reliable = (jref) (frame[3].o);
	LINE_NUMBER(2091);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$ClientDataI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$ClientDataI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$ClientDataI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2093);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2094);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$ClientDataI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$ClientDataI:run", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2098);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ClientDataI *) NULL_CHECK((frame[0].o)))->F_channel;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_String)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_java_lang_String, (frame[3].o)));
	LINE_NUMBER(2099);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ClientDataI *) NULL_CHECK((frame[0].o)))->F_value;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_isobj) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ClientDataI *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_objval;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ClientDataI *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval));
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2100);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ClientDataI *) NULL_CHECK((frame[0].o)))->F_reliable;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(2101);
	SM_mindustry_gen_Call_clientLogicDataReliable_java_lang_String_java_lang_Object(ctx, (frame[2].o), (frame[3].o));
	goto label_1;
	}
label_6:;
	{
	LINE_NUMBER(2103);
	SM_mindustry_gen_Call_clientLogicDataUnreliable_java_lang_String_java_lang_Object(ctx, (frame[2].o), (frame[3].o));
	}
label_1:;
	LINE_NUMBER(2106);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$ClientDataI[] {
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
	(void *) M_mindustry_logic_LExecutor$ClientDataI_run_mindustry_logic_LExecutor,
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
	{ "channel", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ClientDataI, F_channel), "Lmindustry/logic/LVar;", 1 },
	{ "value", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ClientDataI, F_value), "Lmindustry/logic/LVar;", 1 },
	{ "reliable", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ClientDataI, F_reliable), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$ClientDataI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$ClientDataI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$ClientDataI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$ClientDataI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$ClientDataI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$ClientDataI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$ClientDataI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$ClientDataI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$ClientDataI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$ClientDataI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$ClientDataI = registerClass(&class_mindustry_logic_LExecutor$ClientDataI);

}

