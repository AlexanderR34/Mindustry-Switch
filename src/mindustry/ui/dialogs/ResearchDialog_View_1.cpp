#include "mindustry/ui/dialogs/ResearchDialog_View_1.h"
#include "java/lang/Object.h"
#include "arc/math/Interp.h"
#include "arc/scene/actions/RelativeTemporalAction.h"
#include "arc/scene/actions/TemporalAction.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_1.h"
#include "arc/scene/Action.h"
#include "mindustry/ui/dialogs/ResearchDialog_View.h"

extern "C" {


void mark_mindustry_ui_dialogs_ResearchDialog$View$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_actions_RelativeTemporalAction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_ResearchDialog$View$1 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_ResearchDialog$View$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_actions_RelativeTemporalAction(ctx);
}

void init_mindustry_ui_dialogs_ResearchDialog$View$1_mindustry_ui_dialogs_ResearchDialog$View_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$View$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(472);
	((mindustry_ui_dialogs_ResearchDialog$View$1 *) NULL_CHECK((frame[0].o)))->F_val$moveBy = (frame[2].f);
	((mindustry_ui_dialogs_ResearchDialog$View$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_arc_scene_actions_RelativeTemporalAction(ctx, (frame[0].o));
	LINE_NUMBER(474);
	((func_mindustry_ui_dialogs_ResearchDialog$View$1_setDuration_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_setDuration_float])(ctx, (frame[0].o), (jfloat(0.1f)));
	LINE_NUMBER(475);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_fade;
	((func_mindustry_ui_dialogs_ResearchDialog$View$1_setInterpolation_arc_math_Interp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_setInterpolation_arc_math_Interp])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(472);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View$1_updateRelative_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View$1:updateRelative", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_panX = (((jfloat)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_panX) - (((jfloat)((mindustry_ui_dialogs_ResearchDialog$View$1 *) NULL_CHECK((frame[0].o)))->F_val$moveBy) * (frame[1].f)));
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_ResearchDialog$View$1[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Action_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_actions_TemporalAction_reset,
	(void *) M_arc_scene_actions_TemporalAction_act_float_R_boolean,
	(void *) M_arc_scene_actions_TemporalAction_restart,
	(void *) M_arc_scene_Action_getActor_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setActor_arc_scene_Element,
	(void *) M_arc_scene_Action_getTarget_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setTarget_arc_scene_Element,
	(void *) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool,
	(void *) M_arc_scene_Action_setPool_arc_util_pooling_Pool,
	(void *) M_arc_scene_actions_RelativeTemporalAction_begin,
	(void *) M_arc_scene_actions_TemporalAction_end,
	(void *) M_arc_scene_actions_RelativeTemporalAction_update_float,
	(void *) M_arc_scene_actions_TemporalAction_finish,
	(void *) M_arc_scene_actions_TemporalAction_getTime_R_float,
	(void *) M_arc_scene_actions_TemporalAction_setTime_float,
	(void *) M_arc_scene_actions_TemporalAction_getDuration_R_float,
	(void *) M_arc_scene_actions_TemporalAction_setDuration_float,
	(void *) M_arc_scene_actions_TemporalAction_getInterpolation_R_arc_math_Interp,
	(void *) M_arc_scene_actions_TemporalAction_setInterpolation_arc_math_Interp,
	(void *) M_arc_scene_actions_TemporalAction_isReverse_R_boolean,
	(void *) M_arc_scene_actions_TemporalAction_setReverse_boolean,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View$1_updateRelative_float,
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
	{ "reset", "()V" },
	{ "act", "(F)Z" },
	{ "restart", "()V" },
	{ "getActor", "()Larc/scene/Element;" },
	{ "setActor", "(Larc/scene/Element;)V" },
	{ "getTarget", "()Larc/scene/Element;" },
	{ "setTarget", "(Larc/scene/Element;)V" },
	{ "getPool", "()Larc/util/pooling/Pool;" },
	{ "setPool", "(Larc/util/pooling/Pool;)V" },
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "update", "(F)V" },
	{ "finish", "()V" },
	{ "getTime", "()F" },
	{ "setTime", "(F)V" },
	{ "getDuration", "()F" },
	{ "setDuration", "(F)V" },
	{ "getInterpolation", "()Larc/math/Interp;" },
	{ "setInterpolation", "(Larc/math/Interp;)V" },
	{ "isReverse", "()Z" },
	{ "setReverse", "(Z)V" },
	{ "updateRelative", "(F)V" },
};

static FieldMetadata fields[] {
	{ "val$moveBy", &class_float, offsetof(mindustry_ui_dialogs_ResearchDialog$View$1, F_val$moveBy), "F", 4112 },
	{ "this$1", &class_mindustry_ui_dialogs_ResearchDialog$View, offsetof(mindustry_ui_dialogs_ResearchDialog$View$1, F_this$1), "Lmindustry/ui/dialogs/ResearchDialog$View;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ResearchDialog$View$1_mindustry_ui_dialogs_ResearchDialog$View_float, 0, "(Lmindustry/ui/dialogs/ResearchDialog$View;F)V", 0 },
	{ "updateRelative", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View$1_updateRelative_float, VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_updateRelative_float, "(F)V", 4 },
};

Class class_mindustry_ui_dialogs_ResearchDialog$View$1{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ResearchDialog$View$1",
		.parentClass = (intptr_t) &class_arc_scene_actions_RelativeTemporalAction,
		.size = sizeof(mindustry_ui_dialogs_ResearchDialog$View$1),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ResearchDialog$View$1,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ResearchDialog$View$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ResearchDialog$View$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_ResearchDialog$View$1 = registerClass(&class_mindustry_ui_dialogs_ResearchDialog$View$1);

}

