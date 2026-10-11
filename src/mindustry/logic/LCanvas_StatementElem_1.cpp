#include "mindustry/logic/LCanvas_StatementElem_1.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/logic/LCanvas.h"
#include "arc/input/KeyCode.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/Image.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LCanvas_StatementElem.h"
#include "arc/util/Tmp.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/logic/LCanvas_DragLayout.h"
#include "arc/scene/event/InputListener.h"
#include "mindustry/logic/LCanvas_StatementElem_1.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {


void mark_mindustry_logic_LCanvas$StatementElem$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_InputListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_logic_LCanvas$StatementElem$1 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_logic_LCanvas$StatementElem$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_mindustry_logic_LCanvas$StatementElem$1_mindustry_logic_LCanvas$StatementElem(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$StatementElem$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LCanvas$StatementElem$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(456);
	((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LCanvas$StatementElem$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$StatementElem$1:touchDown", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_targetActor;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Image)) == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(464);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseMiddle;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((func_mindustry_logic_LCanvas$StatementElem_copy) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$StatementElem_copy])(ctx, sp[0].o);
	LINE_NUMBER(466);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[2].f), (frame[3].f));
	sp[0].o = (jobject)((func_mindustry_logic_LCanvas$StatementElem_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$StatementElem_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(470);
	((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_lastx = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[6].o)))->F_x);
	LINE_NUMBER(471);
	((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_lasty = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[6].o)))->F_y);
	LINE_NUMBER(472);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$StatementElem *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[1].o = (jobject)((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_dragging = (jref) sp[1].o;
	LINE_NUMBER(473);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((func_mindustry_logic_LCanvas$StatementElem_toFront) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$StatementElem_toFront])(ctx, sp[0].o);
	LINE_NUMBER(474);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$StatementElem *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_statements;
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK(sp[0].o))->F_updateJumpHeights = (jint(1));
	LINE_NUMBER(475);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$StatementElem *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_statements;
	((func_mindustry_logic_LCanvas$DragLayout_invalidate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_invalidate])(ctx, sp[0].o);
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LCanvas$StatementElem$1_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$StatementElem$1:touchDragged", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[2].f), (frame[3].f));
	sp[0].o = (jobject)((func_mindustry_logic_LCanvas$StatementElem_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$StatementElem_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(483);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_translation;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_x) - ((jfloat)((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_lastx)), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_y) - ((jfloat)((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_lasty)));
	LINE_NUMBER(484);
	((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_lastx = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_x);
	LINE_NUMBER(485);
	((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_lasty = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_y);
	LINE_NUMBER(487);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$StatementElem *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_statements;
	((func_mindustry_logic_LCanvas$DragLayout_invalidate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_invalidate])(ctx, sp[0].o);
	LINE_NUMBER(488);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LCanvas$StatementElem$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$StatementElem$1:touchUp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$StatementElem$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$StatementElem *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_statements;
	((func_mindustry_logic_LCanvas$DragLayout_finishLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_finishLayout])(ctx, sp[0].o);
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LCanvas$StatementElem$1[] {
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
	(void *) M_mindustry_logic_LCanvas$StatementElem$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_mindustry_logic_LCanvas$StatementElem$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_mindustry_logic_LCanvas$StatementElem$1_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
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
};

static FieldMetadata fields[] {
	{ "lastx", &class_float, offsetof(mindustry_logic_LCanvas$StatementElem$1, F_lastx), "F", 0 },
	{ "lasty", &class_float, offsetof(mindustry_logic_LCanvas$StatementElem$1, F_lasty), "F", 0 },
	{ "this$1", &class_mindustry_logic_LCanvas$StatementElem, offsetof(mindustry_logic_LCanvas$StatementElem$1, F_this$1), "Lmindustry/logic/LCanvas$StatementElem;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LCanvas$StatementElem$1_mindustry_logic_LCanvas$StatementElem, 0, "(Lmindustry/logic/LCanvas$StatementElem;)V", 0 },
	{ "touchDown", (intptr_t) M_mindustry_logic_LCanvas$StatementElem$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_mindustry_logic_LCanvas$StatementElem$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
	{ "touchDragged", (intptr_t) M_mindustry_logic_LCanvas$StatementElem$1_touchDragged_arc_scene_event_InputEvent_float_float_int, VTABLE_mindustry_logic_LCanvas$StatementElem$1_touchDragged_arc_scene_event_InputEvent_float_float_int, "(Larc/scene/event/InputEvent;FFI)V", 1 },
	{ "touchUp", (intptr_t) M_mindustry_logic_LCanvas$StatementElem$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_logic_LCanvas$StatementElem$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
};

Class class_mindustry_logic_LCanvas$StatementElem$1{
		.nativeName = (intptr_t) "mindustry/logic/LCanvas$StatementElem$1",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(mindustry_logic_LCanvas$StatementElem$1),
		.classVtable = (intptr_t) vtable_mindustry_logic_LCanvas$StatementElem$1,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LCanvas$StatementElem$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LCanvas$StatementElem$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_logic_LCanvas$StatementElem$1 = registerClass(&class_mindustry_logic_LCanvas$StatementElem$1);

}

