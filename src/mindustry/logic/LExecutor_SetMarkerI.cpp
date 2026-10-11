#include "mindustry/logic/LExecutor_SetMarkerI.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/game/MapMarkers.h"
#include "mindustry/logic/LMarkerControl.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/logic/LExecutor_SetMarkerI.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_logic_LExecutor$SetMarkerI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$SetMarkerI *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_id)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_id)->clazz)->markFunction)((jobject) self->F_id, mark, depth + 1);
	if (self->F_p1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p1)->clazz)->markFunction)((jobject) self->F_p1, mark, depth + 1);
	if (self->F_p2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p2)->clazz)->markFunction)((jobject) self->F_p2, mark, depth + 1);
	if (self->F_p3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p3)->clazz)->markFunction)((jobject) self->F_p3, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$SetMarkerI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$SetMarkerI_mindustry_logic_LMarkerControl_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetMarkerI:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SetMarkerI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(2286);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2283);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_pos;
	((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(2287);
	((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(2288);
	((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_id = (jref) (frame[2].o);
	LINE_NUMBER(2289);
	((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[3].o);
	LINE_NUMBER(2290);
	((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (frame[4].o);
	LINE_NUMBER(2291);
	((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_p3 = (jref) (frame[5].o);
	LINE_NUMBER(2292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$SetMarkerI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetMarkerI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SetMarkerI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2294);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2283);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_pos;
	((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(2295);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$SetMarkerI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetMarkerI:run", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2299);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_remove;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(2300);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_id;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[1].o);
	((func_mindustry_game_MapMarkers_remove_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_remove_int])(ctx, sp[0].o, temp0);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(2302);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_id;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker])(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2303);
	if ((frame[2].o) != nullptr) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(2305);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_flushText;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(2306);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_p1;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[2].o);
	((func_mindustry_game_MapObjectives$ObjectiveMarker_setText_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_setText_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(2307);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(2308);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_texture;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(2309);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_p1;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(2310);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2311);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	goto label_3;
	}
label_11:;
	{
	LINE_NUMBER(2313);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_p2;
	sp[1].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[1].o);
	((func_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_9:;
	{
	LINE_NUMBER(2316);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_type;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_p1;
	jdouble temp0 = (jdouble)((func_mindustry_logic_LVar_numOrNan_R_double) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_numOrNan_R_double])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_p2;
	jdouble temp1 = (jdouble)((func_mindustry_logic_LVar_numOrNan_R_double) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_numOrNan_R_double])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_logic_LExecutor$SetMarkerI *) NULL_CHECK((frame[0].o)))->F_p3;
	jdouble temp2 = (jdouble)((func_mindustry_logic_LVar_numOrNan_R_double) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_numOrNan_R_double])(ctx, sp[2].o);
	((func_mindustry_game_MapObjectives$ObjectiveMarker_control_mindustry_logic_LMarkerControl_double_double_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_control_mindustry_logic_LMarkerControl_double_double_double])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2);
	}
label_3:;
	LINE_NUMBER(2319);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$SetMarkerI[] {
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
	(void *) M_mindustry_logic_LExecutor$SetMarkerI_run_mindustry_logic_LExecutor,
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
	{ "type", &class_mindustry_logic_LMarkerControl, offsetof(mindustry_logic_LExecutor$SetMarkerI, F_type), "Lmindustry/logic/LMarkerControl;", 1 },
	{ "id", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetMarkerI, F_id), "Lmindustry/logic/LVar;", 1 },
	{ "p1", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetMarkerI, F_p1), "Lmindustry/logic/LVar;", 1 },
	{ "p2", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetMarkerI, F_p2), "Lmindustry/logic/LVar;", 1 },
	{ "p3", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetMarkerI, F_p3), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SetMarkerI_mindustry_logic_LMarkerControl_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LMarkerControl;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SetMarkerI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$SetMarkerI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$SetMarkerI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$SetMarkerI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$SetMarkerI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$SetMarkerI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$SetMarkerI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$SetMarkerI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$SetMarkerI,
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
static bool registered_mindustry_logic_LExecutor$SetMarkerI = registerClass(&class_mindustry_logic_LExecutor$SetMarkerI);

}

