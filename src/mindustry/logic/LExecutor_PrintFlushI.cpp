#include "mindustry/logic/LExecutor_PrintFlushI.h"
#include "mindustry/logic/LPrintable.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LExecutor_PrintFlushI.h"
#include "java/lang/StringBuilder.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_logic_LExecutor$PrintFlushI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$PrintFlushI *) object;
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$PrintFlushI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$PrintFlushI_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PrintFlushI:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$PrintFlushI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1170);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1171);
	((mindustry_logic_LExecutor$PrintFlushI *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[1].o);
	LINE_NUMBER(1172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$PrintFlushI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PrintFlushI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$PrintFlushI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1174);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$PrintFlushI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PrintFlushI:run", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1180);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$PrintFlushI *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_building_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_building_R_mindustry_gen_Building])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_logic_LPrintable)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_logic_LPrintable, (frame[3].o)));
	jint temp0 = (jint)((func_mindustry_logic_LPrintable_printable_mindustry_logic_LExecutor_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_logic_LPrintable, INDEX_mindustry_logic_LPrintable_printable_mindustry_logic_LExecutor_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1181);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	((func_mindustry_logic_LPrintable_print_java_lang_StringBuilder) resolveInterfaceMethod(ctx, &class_mindustry_logic_LPrintable, INDEX_mindustry_logic_LPrintable_print_java_lang_StringBuilder, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(1183);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(1185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$PrintFlushI[] {
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
	(void *) M_mindustry_logic_LExecutor$PrintFlushI_run_mindustry_logic_LExecutor,
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
	{ "target", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PrintFlushI, F_target), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$PrintFlushI_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$PrintFlushI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$PrintFlushI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$PrintFlushI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$PrintFlushI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$PrintFlushI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$PrintFlushI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$PrintFlushI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$PrintFlushI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$PrintFlushI,
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
static bool registered_mindustry_logic_LExecutor$PrintFlushI = registerClass(&class_mindustry_logic_LExecutor$PrintFlushI);

}

