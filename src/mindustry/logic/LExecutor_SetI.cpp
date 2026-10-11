#include "mindustry/logic/LExecutor_SetI.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LExecutor_SetI.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor.h"

extern "C" {


void mark_mindustry_logic_LExecutor$SetI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$SetI *) object;
	if (self->F_from)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_from)->clazz)->markFunction)((jobject) self->F_from, mark, depth + 1);
	if (self->F_to)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_to)->clazz)->markFunction)((jobject) self->F_to, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$SetI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$SetI_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetI:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SetI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(836);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(837);
	((mindustry_logic_LExecutor$SetI *) NULL_CHECK((frame[0].o)))->F_from = (jref) (frame[1].o);
	LINE_NUMBER(838);
	((mindustry_logic_LExecutor$SetI *) NULL_CHECK((frame[0].o)))->F_to = (jref) (frame[2].o);
	LINE_NUMBER(839);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$SetI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SetI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(841);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$SetI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetI:run", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(845);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetI *) NULL_CHECK((frame[0].o)))->F_to;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_constant) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetI *) NULL_CHECK((frame[0].o)))->F_to;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetI *) NULL_CHECK((frame[0].o)))->F_from;
	((func_mindustry_logic_LVar_set_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_set_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(846);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$SetI[] {
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
	(void *) M_mindustry_logic_LExecutor$SetI_run_mindustry_logic_LExecutor,
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
	{ "from", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetI, F_from), "Lmindustry/logic/LVar;", 1 },
	{ "to", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetI, F_to), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SetI_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SetI, 0, "()V", 0 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$SetI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$SetI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$SetI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$SetI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$SetI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$SetI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$SetI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$SetI,
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
static bool registered_mindustry_logic_LExecutor$SetI = registerClass(&class_mindustry_logic_LExecutor$SetI);

}

