#include "arc/scene/ui/layout/Collapser_CollapseAction.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/Action.h"
#include "arc/scene/ui/layout/Collapser_CollapseAction.h"
#include "arc/scene/ui/layout/Collapser.h"

extern "C" {


void mark_arc_scene_ui_layout_Collapser$CollapseAction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_Action(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_layout_Collapser$CollapseAction *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_ui_layout_Collapser$CollapseAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Action(ctx);
}

void init_arc_scene_ui_layout_Collapser$CollapseAction_arc_scene_ui_layout_Collapser(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser$CollapseAction:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Collapser$CollapseAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(178);
	((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_Action(ctx, (frame[0].o));
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_layout_Collapser$CollapseAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Collapser$CollapseAction:act", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[0].o))->F_collapsed) == 0) goto label_1;
	}
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[0].o))->F_currentHeight;
	jfloat temp1 = frame[1].f;
	sp[1].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[1].o))->F_table;
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Table_getPrefHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getPrefHeight_R_float])(ctx, sp[1].o);
	jfloat temp3 = temp1 * temp2;
	sp[1].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[0].o))->F_currentHeight = (temp0 - (temp3 / ((jfloat)((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[1].o))->F_seconds)));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(((jfloat)((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[0].o))->F_currentHeight), (jfloat(0)), 1)) > 0) goto label_4;
	}
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[0].o))->F_currentHeight = (jfloat(0));
	LINE_NUMBER(187);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[0].o))->F_actionRunning = (jint(0));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[0].o))->F_currentHeight;
	jfloat temp1 = frame[1].f;
	sp[1].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[1].o))->F_table;
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Table_getPrefHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getPrefHeight_R_float])(ctx, sp[1].o);
	jfloat temp3 = temp1 * temp2;
	sp[1].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[0].o))->F_currentHeight = (temp0 + (temp3 / ((jfloat)((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[1].o))->F_seconds)));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[0].o))->F_currentHeight;
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[0].o))->F_table;
	jfloat temp5 = (jfloat)((func_arc_scene_ui_layout_Table_getPrefHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getPrefHeight_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp4, temp5, -1)) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[1].o))->F_table;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Table_getPrefHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getPrefHeight_R_float])(ctx, sp[1].o);
	((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[0].o))->F_currentHeight = temp0;
	LINE_NUMBER(193);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[0].o))->F_actionRunning = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_layout_Collapser_invalidateHierarchy) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Collapser_invalidateHierarchy])(ctx, sp[0].o);
	LINE_NUMBER(198);
	sp[0].o = (jobject)((arc_scene_ui_layout_Collapser$CollapseAction *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_layout_Collapser *) NULL_CHECK(sp[0].o))->F_actionRunning) != 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_layout_Collapser$CollapseAction[] {
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
	(void *) M_arc_scene_Action_reset,
	(void *) M_arc_scene_ui_layout_Collapser$CollapseAction_act_float_R_boolean,
	(void *) M_arc_scene_Action_restart,
	(void *) M_arc_scene_Action_getActor_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setActor_arc_scene_Element,
	(void *) M_arc_scene_Action_getTarget_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setTarget_arc_scene_Element,
	(void *) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool,
	(void *) M_arc_scene_Action_setPool_arc_util_pooling_Pool,
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
};

static FieldMetadata fields[] {
	{ "this$0", &class_arc_scene_ui_layout_Collapser, offsetof(arc_scene_ui_layout_Collapser$CollapseAction, F_this$0), "Larc/scene/ui/layout/Collapser;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_layout_Collapser$CollapseAction_arc_scene_ui_layout_Collapser, 0, "(Larc/scene/ui/layout/Collapser;)V", 0 },
	{ "act", (intptr_t) M_arc_scene_ui_layout_Collapser$CollapseAction_act_float_R_boolean, VTABLE_arc_scene_ui_layout_Collapser$CollapseAction_act_float_R_boolean, "(F)Z", 1 },
};

Class class_arc_scene_ui_layout_Collapser$CollapseAction{
		.nativeName = (intptr_t) "arc/scene/ui/layout/Collapser$CollapseAction",
		.parentClass = (intptr_t) &class_arc_scene_Action,
		.size = sizeof(arc_scene_ui_layout_Collapser$CollapseAction),
		.classVtable = (intptr_t) vtable_arc_scene_ui_layout_Collapser$CollapseAction,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_layout_Collapser$CollapseAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_layout_Collapser$CollapseAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_layout_Collapser,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_layout_Collapser$CollapseAction = registerClass(&class_arc_scene_ui_layout_Collapser$CollapseAction);

}

