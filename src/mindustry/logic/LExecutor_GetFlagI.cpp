#include "mindustry/logic/LExecutor_GetFlagI.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/game/Rules.h"
#include "mindustry/logic/LExecutor_GetFlagI.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_logic_LExecutor$GetFlagI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$GetFlagI *) object;
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
	if (self->F_flag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flag)->clazz)->markFunction)((jobject) self->F_flag, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$GetFlagI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$GetFlagI_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$GetFlagI:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$GetFlagI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2112);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2113);
	((mindustry_logic_LExecutor$GetFlagI *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[1].o);
	LINE_NUMBER(2114);
	((mindustry_logic_LExecutor$GetFlagI *) NULL_CHECK((frame[0].o)))->F_flag = (jref) (frame[2].o);
	LINE_NUMBER(2115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$GetFlagI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$GetFlagI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$GetFlagI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2117);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$GetFlagI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$GetFlagI:run", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2122);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$GetFlagI *) NULL_CHECK((frame[0].o)))->F_flag;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_String)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_java_lang_String, (frame[3].o)));
	LINE_NUMBER(2123);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$GetFlagI *) NULL_CHECK((frame[0].o)))->F_result;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	auto rules = (mindustry_game_Rules *) NULL_CHECK(sp[1].o);
	if (!rules->F_objectiveFlags) {
		clinit_arc_struct_ObjectSet(ctx);
		rules->F_objectiveFlags = (jref)gcAlloc(ctx, &class_arc_struct_ObjectSet);
		init_arc_struct_ObjectSet(ctx, (jobject)rules->F_objectiveFlags);
	}
	sp[1].o = (jobject)rules->F_objectiveFlags;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[1].o, (frame[2].o));
	((func_mindustry_logic_LVar_setbool_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setbool_boolean])(ctx, sp[0].o, temp0);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(2125);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$GetFlagI *) NULL_CHECK((frame[0].o)))->F_result;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_3:;
	LINE_NUMBER(2127);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$GetFlagI[] {
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
	(void *) M_mindustry_logic_LExecutor$GetFlagI_run_mindustry_logic_LExecutor,
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
	{ "result", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$GetFlagI, F_result), "Lmindustry/logic/LVar;", 1 },
	{ "flag", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$GetFlagI, F_flag), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$GetFlagI_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$GetFlagI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$GetFlagI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$GetFlagI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$GetFlagI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$GetFlagI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$GetFlagI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$GetFlagI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$GetFlagI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$GetFlagI,
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
static bool registered_mindustry_logic_LExecutor$GetFlagI = registerClass(&class_mindustry_logic_LExecutor$GetFlagI);

}

