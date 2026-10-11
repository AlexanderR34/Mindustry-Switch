#include "mindustry/logic/LExecutor_CutsceneI.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/logic/CutsceneAction.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/logic/LExecutor_CutsceneI.h"
#include "mindustry/logic/LExecutor_1.h"
#include "java/lang/Object.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/core/Control.h"
#include "mindustry/Vars.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_logic_LExecutor$CutsceneI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$CutsceneI *) object;
	if (self->F_action)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_action)->clazz)->markFunction)((jobject) self->F_action, mark, depth + 1);
	if (self->F_p1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p1)->clazz)->markFunction)((jobject) self->F_p1, mark, depth + 1);
	if (self->F_p2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p2)->clazz)->markFunction)((jobject) self->F_p2, mark, depth + 1);
	if (self->F_p3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p3)->clazz)->markFunction)((jobject) self->F_p3, mark, depth + 1);
	if (self->F_p4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p4)->clazz)->markFunction)((jobject) self->F_p4, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$CutsceneI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$CutsceneI_mindustry_logic_CutsceneAction_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$CutsceneI:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$CutsceneI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(1338);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1335);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_CutsceneAction_stop;
	((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK(sp[0].o))->F_action = (jref) sp[1].o;
	LINE_NUMBER(1339);
	((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK((frame[0].o)))->F_action = (jref) (frame[1].o);
	LINE_NUMBER(1340);
	((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[2].o);
	LINE_NUMBER(1341);
	((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (frame[3].o);
	LINE_NUMBER(1342);
	((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK((frame[0].o)))->F_p3 = (jref) (frame[4].o);
	LINE_NUMBER(1343);
	((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK((frame[0].o)))->F_p4 = (jref) (frame[5].o);
	LINE_NUMBER(1344);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$CutsceneI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$CutsceneI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$CutsceneI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1346);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1335);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_CutsceneAction_stop;
	((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK(sp[0].o))->F_action = (jref) sp[1].o;
	LINE_NUMBER(1347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$CutsceneI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$CutsceneI:run", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1351);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1353);
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$CutsceneAction;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK((frame[0].o)))->F_action;
	jint temp0 = (jint)((func_mindustry_logic_CutsceneAction_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_CutsceneAction_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_5;
		case 5: goto label_6;
		case 6: goto label_7;
		case 7: goto label_8;
		default: goto label_9;
	}
	}
label_2:;
	{
	LINE_NUMBER(1354);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK((frame[0].o)))->F_p1;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_control;
	sp[1].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[1].o))->F_input;
	((func_mindustry_logic_LVar_setbool_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setbool_boolean])(ctx, sp[0].o, ((jint)((mindustry_input_InputHandler *) NULL_CHECK(sp[1].o))->F_logicCutscene));
	goto label_9;
	}
label_3:;
	{
	LINE_NUMBER(1356);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_logicCutscene = (jint(1));
	LINE_NUMBER(1357);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_logicCamPan;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK((frame[0].o)))->F_p1;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp0);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK((frame[0].o)))->F_p2;
	jfloat temp2 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp3 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp2);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, temp3);
	LINE_NUMBER(1358);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK((frame[0].o)))->F_p3;
	jfloat temp4 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_logicCamSpeed = temp4;
	LINE_NUMBER(1359);
	goto label_9;
	}
label_4:;
	{
	LINE_NUMBER(1361);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_logicCutscene = (jint(1));
	LINE_NUMBER(1362);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK((frame[0].o)))->F_p1;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp0);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_logicCutsceneZoom = temp1;
	LINE_NUMBER(1363);
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(1364);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_logicCutscene = (jint(0));
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(1365);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK((frame[0].o)))->F_p1;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK((frame[0].o)))->F_p2;
	jfloat temp1 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	((func_mindustry_core_Renderer_shake_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_shake_float_float])(ctx, sp[0].o, temp0, (temp1 * (jfloat(60.0f))));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(1366);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK((frame[0].o)))->F_p1;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_control;
	sp[1].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[1].o))->F_input;
	sp += 1;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_logicHideHud) != 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	POP_N(2); // Pop method args
	((func_mindustry_logic_LVar_setbool_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setbool_boolean])(ctx, sp[0].o, sp[1].i);
	goto label_9;
label_8:;
	{
	LINE_NUMBER(1367);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$CutsceneI *) NULL_CHECK((frame[0].o)))->F_p1;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 != 0) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	sp -= 2;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_logicHideHud = sp[1].i;
label_9:;
	LINE_NUMBER(1369);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$CutsceneI[] {
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
	(void *) M_mindustry_logic_LExecutor$CutsceneI_run_mindustry_logic_LExecutor,
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
	{ "action", &class_mindustry_logic_CutsceneAction, offsetof(mindustry_logic_LExecutor$CutsceneI, F_action), "Lmindustry/logic/CutsceneAction;", 1 },
	{ "p1", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$CutsceneI, F_p1), "Lmindustry/logic/LVar;", 1 },
	{ "p2", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$CutsceneI, F_p2), "Lmindustry/logic/LVar;", 1 },
	{ "p3", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$CutsceneI, F_p3), "Lmindustry/logic/LVar;", 1 },
	{ "p4", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$CutsceneI, F_p4), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$CutsceneI_mindustry_logic_CutsceneAction_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/CutsceneAction;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$CutsceneI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$CutsceneI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$CutsceneI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$CutsceneI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$CutsceneI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$CutsceneI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$CutsceneI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$CutsceneI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$CutsceneI,
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
static bool registered_mindustry_logic_LExecutor$CutsceneI = registerClass(&class_mindustry_logic_LExecutor$CutsceneI);

}

