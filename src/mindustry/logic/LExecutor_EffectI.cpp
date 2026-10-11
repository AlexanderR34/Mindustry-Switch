#include "mindustry/logic/LExecutor_EffectI.h"
#include "java/lang/Math.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LogicFx_EffectEntry.h"
#include "arc/util/Tmp.h"
#include "arc/graphics/Color.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/logic/LExecutor_EffectI.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_logic_LExecutor$EffectI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$EffectI *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_x)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_x)->clazz)->markFunction)((jobject) self->F_x, mark, depth + 1);
	if (self->F_y)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_y)->clazz)->markFunction)((jobject) self->F_y, mark, depth + 1);
	if (self->F_rotation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rotation)->clazz)->markFunction)((jobject) self->F_rotation, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$EffectI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$EffectI_mindustry_logic_LogicFx$EffectEntry_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$EffectI:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$EffectI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(1979);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1980);
	((mindustry_logic_LExecutor$EffectI *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(1981);
	((mindustry_logic_LExecutor$EffectI *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[2].o);
	LINE_NUMBER(1982);
	((mindustry_logic_LExecutor$EffectI *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[3].o);
	LINE_NUMBER(1983);
	((mindustry_logic_LExecutor$EffectI *) NULL_CHECK((frame[0].o)))->F_rotation = (jref) (frame[4].o);
	LINE_NUMBER(1984);
	((mindustry_logic_LExecutor$EffectI *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[5].o);
	LINE_NUMBER(1985);
	((mindustry_logic_LExecutor$EffectI *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[6].o);
	LINE_NUMBER(1986);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$EffectI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$EffectI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$EffectI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1988);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1989);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$EffectI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$EffectI:run", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1993);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$EffectI *) NULL_CHECK((frame[0].o)))->F_type;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1994);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$EffectI *) NULL_CHECK((frame[0].o)))->F_color;
	jdouble temp0 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[0].o);
	frame[2].d = temp0;
	LINE_NUMBER(1996);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$EffectI *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_logic_LogicFx$EffectEntry *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$EffectI *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(1997);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$EffectI *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[0].o);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (jfloat(1000.0f)));
	sp[0].f = temp1;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(1999);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$EffectI *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_logic_LogicFx$EffectEntry *) NULL_CHECK(sp[0].o))->F_effect;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$EffectI *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp0);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$EffectI *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp3 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp2);
	jfloat temp4 = frame[4].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((func_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color])(ctx, sp[1].o, (frame[2].d));
	sp[2].o = (jobject)((mindustry_logic_LExecutor$EffectI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[2].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[2].o);
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp1, temp3, temp4, sp[1].o, sp[2].o);
	}
label_1:;
	LINE_NUMBER(2001);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$EffectI[] {
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
	(void *) M_mindustry_logic_LExecutor$EffectI_run_mindustry_logic_LExecutor,
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
	{ "type", &class_mindustry_logic_LogicFx$EffectEntry, offsetof(mindustry_logic_LExecutor$EffectI, F_type), "Lmindustry/logic/LogicFx$EffectEntry;", 1 },
	{ "x", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$EffectI, F_x), "Lmindustry/logic/LVar;", 1 },
	{ "y", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$EffectI, F_y), "Lmindustry/logic/LVar;", 1 },
	{ "rotation", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$EffectI, F_rotation), "Lmindustry/logic/LVar;", 1 },
	{ "color", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$EffectI, F_color), "Lmindustry/logic/LVar;", 1 },
	{ "data", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$EffectI, F_data), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$EffectI_mindustry_logic_LogicFx$EffectEntry_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LogicFx$EffectEntry;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$EffectI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$EffectI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$EffectI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$EffectI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$EffectI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$EffectI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$EffectI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$EffectI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$EffectI,
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
static bool registered_mindustry_logic_LExecutor$EffectI = registerClass(&class_mindustry_logic_LExecutor$EffectI);

}

