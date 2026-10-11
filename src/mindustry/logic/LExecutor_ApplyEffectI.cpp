#include "mindustry/logic/LExecutor_ApplyEffectI.h"
#include "mindustry/net/Net.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/Vars.h"
#include "mindustry/logic/LExecutor_ApplyEffectI.h"

extern "C" {


void mark_mindustry_logic_LExecutor$ApplyEffectI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$ApplyEffectI *) object;
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_duration)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_duration)->clazz)->markFunction)((jobject) self->F_duration, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$ApplyEffectI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$ApplyEffectI_boolean_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jbool param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$ApplyEffectI:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$ApplyEffectI(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1755);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1756);
	((mindustry_logic_LExecutor$ApplyEffectI *) NULL_CHECK((frame[0].o)))->F_clear = (frame[1].i);
	LINE_NUMBER(1757);
	((mindustry_logic_LExecutor$ApplyEffectI *) NULL_CHECK((frame[0].o)))->F_effect = (jref) (frame[2].o);
	LINE_NUMBER(1758);
	((mindustry_logic_LExecutor$ApplyEffectI *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[3].o);
	LINE_NUMBER(1759);
	((mindustry_logic_LExecutor$ApplyEffectI *) NULL_CHECK((frame[0].o)))->F_duration = (jref) (frame[4].o);
	LINE_NUMBER(1760);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$ApplyEffectI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$ApplyEffectI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$ApplyEffectI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1762);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1763);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$ApplyEffectI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$ApplyEffectI:run", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1767);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1769);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ApplyEffectI *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_gen_Unit)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[4].o)));
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ApplyEffectI *) NULL_CHECK((frame[0].o)))->F_effect;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_type_StatusEffect)) == 0) goto label_2;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, (frame[4].o)));
	LINE_NUMBER(1770);
	if (((jint)((mindustry_logic_LExecutor$ApplyEffectI *) NULL_CHECK((frame[0].o)))->F_clear) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1771);
	((func_mindustry_gen_Unit_unapply_mindustry_type_StatusEffect) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_unapply_mindustry_type_StatusEffect])(ctx, (frame[2].o), (frame[3].o));
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(1773);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$ApplyEffectI *) NULL_CHECK((frame[0].o)))->F_duration;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[2].o);
	((func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, (temp0 * (jfloat(60.0f))));
	}
label_2:;
	LINE_NUMBER(1776);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$ApplyEffectI[] {
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
	(void *) M_mindustry_logic_LExecutor$ApplyEffectI_run_mindustry_logic_LExecutor,
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
	{ "clear", &class_boolean, offsetof(mindustry_logic_LExecutor$ApplyEffectI, F_clear), "Z", 1 },
	{ "effect", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ApplyEffectI, F_effect), "Lmindustry/logic/LVar;", 1 },
	{ "unit", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ApplyEffectI, F_unit), "Lmindustry/logic/LVar;", 1 },
	{ "duration", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ApplyEffectI, F_duration), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$ApplyEffectI_boolean_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(ZLmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$ApplyEffectI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$ApplyEffectI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$ApplyEffectI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$ApplyEffectI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$ApplyEffectI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$ApplyEffectI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$ApplyEffectI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$ApplyEffectI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$ApplyEffectI,
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
static bool registered_mindustry_logic_LExecutor$ApplyEffectI = registerClass(&class_mindustry_logic_LExecutor$ApplyEffectI);

}

