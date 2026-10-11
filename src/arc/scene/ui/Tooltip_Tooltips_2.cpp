#include "arc/scene/ui/Tooltip_Tooltips_2.h"
#include "arc/scene/Scene.h"
#include "arc/scene/ui/Tooltip_Tooltips_2.h"
#include "arc/scene/ui/Tooltip.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Tooltip_Tooltips.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/util/Timer_Task.h"

extern "C" {


void mark_arc_scene_ui_Tooltip$Tooltips$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_util_Timer$Task(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_Tooltip$Tooltips$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_ui_Tooltip$Tooltips$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_util_Timer$Task(ctx);
}

void init_arc_scene_ui_Tooltip$Tooltips$2_arc_scene_ui_Tooltip$Tooltips(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip$Tooltips$2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Tooltip$Tooltips$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(193);
	((arc_scene_ui_Tooltip$Tooltips$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_util_Timer$Task(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Tooltip$Tooltips$2_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip$Tooltips$2:run", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_showTooltip;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_showTooltip;
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK(sp[0].o))->F_targetActor;
	sp[0].o = (jobject)((func_arc_scene_Element_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getScene_R_arc_scene_Scene])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(199);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(200);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_Tooltip$Tooltips$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[1].o))->F_showTooltip;
	sp[1].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK(sp[1].o))->F_container;
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(201);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_showTooltip;
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK(sp[0].o))->F_container;
	((func_arc_scene_ui_layout_Table_toFront) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_toFront])(ctx, sp[0].o);
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_showTooltip;
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK(sp[0].o))->F_container;
	((func_arc_scene_ui_layout_Table_clearActions) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearActions])(ctx, sp[0].o);
	LINE_NUMBER(204);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_Tooltip$Tooltips$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[1].o))->F_showTooltip;
	((func_arc_scene_ui_Tooltip$Tooltips_showAction_arc_scene_ui_Tooltip) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Tooltip$Tooltips_showAction_arc_scene_ui_Tooltip])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(206);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_showTooltip;
	if (((jint)((arc_scene_ui_Tooltip *) NULL_CHECK(sp[0].o))->F_instant) != 0) goto label_8;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_Tooltip$Tooltips$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_time = ((jfloat)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[1].o))->F_subsequentTime);
	LINE_NUMBER(208);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_resetTask;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(210);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Tooltip$Tooltips$2[] {
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
	(void *) M_arc_scene_ui_Tooltip$Tooltips$2_run,
	(void *) M_arc_util_Timer$Task_cancel,
	(void *) M_arc_util_Timer$Task_isScheduled_R_boolean,
	(void *) M_arc_util_Timer$Task_getExecuteTimeMillis_R_long,
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
	{ "run", "()V" },
	{ "cancel", "()V" },
	{ "isScheduled", "()Z" },
	{ "getExecuteTimeMillis", "()J" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_arc_scene_ui_Tooltip$Tooltips, offsetof(arc_scene_ui_Tooltip$Tooltips$2, F_this$0), "Larc/scene/ui/Tooltip$Tooltips;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Tooltip$Tooltips$2_arc_scene_ui_Tooltip$Tooltips, 0, "(Larc/scene/ui/Tooltip$Tooltips;)V", 0 },
	{ "run", (intptr_t) M_arc_scene_ui_Tooltip$Tooltips$2_run, VTABLE_arc_scene_ui_Tooltip$Tooltips$2_run, "()V", 1 },
};

Class class_arc_scene_ui_Tooltip$Tooltips$2{
		.nativeName = (intptr_t) "arc/scene/ui/Tooltip$Tooltips$2",
		.parentClass = (intptr_t) &class_arc_util_Timer$Task,
		.size = sizeof(arc_scene_ui_Tooltip$Tooltips$2),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Tooltip$Tooltips$2,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Tooltip$Tooltips$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Tooltip$Tooltips$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_scene_ui_Tooltip$Tooltips$2 = registerClass(&class_arc_scene_ui_Tooltip$Tooltips$2);

}

