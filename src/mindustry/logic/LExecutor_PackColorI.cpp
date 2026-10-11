#include "mindustry/logic/LExecutor_PackColorI.h"
#include "arc/math/Mathf.h"
#include "mindustry/logic/LExecutor_PackColorI.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "arc/graphics/Color.h"
#include "mindustry/logic/LExecutor.h"

extern "C" {


void mark_mindustry_logic_LExecutor$PackColorI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$PackColorI *) object;
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
	if (self->F_r)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_r)->clazz)->markFunction)((jobject) self->F_r, mark, depth + 1);
	if (self->F_g)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_g)->clazz)->markFunction)((jobject) self->F_g, mark, depth + 1);
	if (self->F_b)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_b)->clazz)->markFunction)((jobject) self->F_b, mark, depth + 1);
	if (self->F_a)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_a)->clazz)->markFunction)((jobject) self->F_a, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$PackColorI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$PackColorI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PackColorI:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$PackColorI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(1295);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1296);
	((mindustry_logic_LExecutor$PackColorI *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[1].o);
	LINE_NUMBER(1297);
	((mindustry_logic_LExecutor$PackColorI *) NULL_CHECK((frame[0].o)))->F_r = (jref) (frame[2].o);
	LINE_NUMBER(1298);
	((mindustry_logic_LExecutor$PackColorI *) NULL_CHECK((frame[0].o)))->F_g = (jref) (frame[3].o);
	LINE_NUMBER(1299);
	((mindustry_logic_LExecutor$PackColorI *) NULL_CHECK((frame[0].o)))->F_b = (jref) (frame[4].o);
	LINE_NUMBER(1300);
	((mindustry_logic_LExecutor$PackColorI *) NULL_CHECK((frame[0].o)))->F_a = (jref) (frame[5].o);
	LINE_NUMBER(1301);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$PackColorI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PackColorI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$PackColorI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1303);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$PackColorI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PackColorI:run", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1307);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$PackColorI *) NULL_CHECK((frame[0].o)))->F_result;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$PackColorI *) NULL_CHECK((frame[0].o)))->F_r;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp0);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$PackColorI *) NULL_CHECK((frame[0].o)))->F_g;
	jfloat temp2 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp2);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$PackColorI *) NULL_CHECK((frame[0].o)))->F_b;
	jfloat temp4 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp4);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$PackColorI *) NULL_CHECK((frame[0].o)))->F_a;
	jfloat temp6 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp6);
	jdouble temp8 = (jdouble)SM_arc_graphics_Color_toDoubleBits_float_float_float_float_R_double(ctx, temp1, temp3, temp5, temp7);
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, temp8);
	LINE_NUMBER(1308);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$PackColorI[] {
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
	(void *) M_mindustry_logic_LExecutor$PackColorI_run_mindustry_logic_LExecutor,
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
	{ "result", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PackColorI, F_result), "Lmindustry/logic/LVar;", 1 },
	{ "r", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PackColorI, F_r), "Lmindustry/logic/LVar;", 1 },
	{ "g", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PackColorI, F_g), "Lmindustry/logic/LVar;", 1 },
	{ "b", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PackColorI, F_b), "Lmindustry/logic/LVar;", 1 },
	{ "a", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PackColorI, F_a), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$PackColorI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$PackColorI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$PackColorI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$PackColorI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$PackColorI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$PackColorI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$PackColorI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$PackColorI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$PackColorI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$PackColorI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$PackColorI = registerClass(&class_mindustry_logic_LExecutor$PackColorI);

}

