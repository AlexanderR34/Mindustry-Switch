#include "mindustry/logic/LExecutor_UnitBindI.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/Object.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "mindustry/logic/LExecutor_UnitBindI.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_logic_LExecutor$UnitBindI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$UnitBindI *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$UnitBindI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$UnitBindI_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$UnitBindI:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$UnitBindI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(172);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(173);
	((mindustry_logic_LExecutor$UnitBindI *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$UnitBindI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$UnitBindI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$UnitBindI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(176);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$UnitBindI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$UnitBindI:run", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(181);
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_privileged) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_logicUnitControl) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_binds;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_binds;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[0].o);
	if (temp0 == ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(184);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_binds = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitBindI *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_type_UnitType)) == 0) goto label_4;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[4].o)));
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[2].o)))->F_logicControllable) == 0) goto label_4;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(191);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_binds;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) % ((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size));
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_binds;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id))) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size)) goto label_11;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_binds;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id))));
	((func_mindustry_logic_LVar_setconst_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setconst_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_binds;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_unit;
	((func_mindustry_logic_LVar_setconst_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setconst_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_13:;
	LINE_NUMBER(202);
	goto label_14;
label_4:;
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitBindI *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_gen_Unit)) == 0) goto label_15;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[4].o)));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_team;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_17;
	}
	{
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_privileged) == 0) goto label_15;
	}
label_17:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_logicControllable) == 0) goto label_15;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_unit;
	((func_mindustry_logic_LVar_setconst_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setconst_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_unit;
	((func_mindustry_logic_LVar_setconst_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setconst_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_14:;
	LINE_NUMBER(208);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$UnitBindI[] {
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
	(void *) M_mindustry_logic_LExecutor$UnitBindI_run_mindustry_logic_LExecutor,
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
	{ "type", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$UnitBindI, F_type), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$UnitBindI_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$UnitBindI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$UnitBindI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$UnitBindI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$UnitBindI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$UnitBindI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$UnitBindI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$UnitBindI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$UnitBindI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$UnitBindI,
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
static bool registered_mindustry_logic_LExecutor$UnitBindI = registerClass(&class_mindustry_logic_LExecutor$UnitBindI);

}

