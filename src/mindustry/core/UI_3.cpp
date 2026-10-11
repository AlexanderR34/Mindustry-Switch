#include "mindustry/core/UI_3.h"
#include "arc/func/Cons.h"
#include "arc/math/geom/Vec2.h"
#include "arc/scene/ui/Tooltip.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/core/UI_3.h"
#include "arc/util/Tmp.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/event/InputListener.h"
#include "mindustry/core/UI.h"

extern "C" {


void mark_mindustry_core_UI$3(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_Tooltip(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_core_UI$3 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_core_UI$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_Tooltip(ctx);
}

void init_mindustry_core_UI$3_mindustry_core_UI_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI$3:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(389);
	((mindustry_core_UI$3 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_ui_Tooltip_arc_func_Cons(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(391);
	((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_allowMobile = (jint(1));
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_UI$3_setContainerPosition_arc_scene_Element_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI$3:setContainerPosition", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(395);
	((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_targetActor = (jref) (frame[1].o);
	LINE_NUMBER(396);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (jfloat(0)), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(397);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, sp[0].o);
	LINE_NUMBER(398);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	((func_arc_scene_ui_layout_Table_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setPosition_float_float_int])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_y), (10));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = (jfloat)((func_arc_scene_Element_getHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_getHeight_R_float])(ctx, (frame[1].o));
	((func_arc_scene_ui_layout_Table_setOrigin_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setOrigin_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(400);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_core_UI$3[] {
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
	(void *) M_arc_scene_event_InputListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_ui_Tooltip_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_ui_Tooltip_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_InputListener_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_ui_Tooltip_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_ui_Tooltip_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_ui_Tooltip_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
	(void *) M_arc_scene_ui_Tooltip_getManager_R_arc_scene_ui_Tooltip$Tooltips,
	(void *) M_arc_scene_ui_Tooltip_getContainer_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_Tooltip_setInstant_boolean,
	(void *) M_arc_scene_ui_Tooltip_setAlways_boolean,
	(void *) M_mindustry_core_UI$3_setContainerPosition_arc_scene_Element_float_float,
	(void *) M_arc_scene_ui_Tooltip_show_arc_scene_Element_float_float,
	(void *) M_arc_scene_ui_Tooltip_hide,
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
	{ "handle", "(Larc/scene/event/SceneEvent;)Z" },
	{ "touchDown", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z" },
	{ "touchUp", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "touchDragged", "(Larc/scene/event/InputEvent;FFI)V" },
	{ "mouseMoved", "(Larc/scene/event/InputEvent;FF)Z" },
	{ "enter", "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V" },
	{ "exit", "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V" },
	{ "scrolled", "(Larc/scene/event/InputEvent;FFFF)Z" },
	{ "keyDown", "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z" },
	{ "keyUp", "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z" },
	{ "keyTyped", "(Larc/scene/event/InputEvent;C)Z" },
	{ "getManager", "()Larc/scene/ui/Tooltip$Tooltips;" },
	{ "getContainer", "()Larc/scene/ui/layout/Table;" },
	{ "setInstant", "(Z)V" },
	{ "setAlways", "(Z)V" },
	{ "setContainerPosition", "(Larc/scene/Element;FF)V" },
	{ "show", "(Larc/scene/Element;FF)V" },
	{ "hide", "()V" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_core_UI, offsetof(mindustry_core_UI$3, F_this$0), "Lmindustry/core/UI;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_UI$3_mindustry_core_UI_arc_func_Cons, 0, "(Lmindustry/core/UI;Larc/func/Cons;)V", 0 },
	{ "setContainerPosition", (intptr_t) M_mindustry_core_UI$3_setContainerPosition_arc_scene_Element_float_float, VTABLE_mindustry_core_UI$3_setContainerPosition_arc_scene_Element_float_float, "(Larc/scene/Element;FF)V", 4 },
};

Class class_mindustry_core_UI$3{
		.nativeName = (intptr_t) "mindustry/core/UI$3",
		.parentClass = (intptr_t) &class_arc_scene_ui_Tooltip,
		.size = sizeof(mindustry_core_UI$3),
		.classVtable = (intptr_t) vtable_mindustry_core_UI$3,
		.staticInitializer = (intptr_t) clinit_mindustry_core_UI$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_core_UI$3,
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
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_core_UI$3 = registerClass(&class_mindustry_core_UI$3);

}

