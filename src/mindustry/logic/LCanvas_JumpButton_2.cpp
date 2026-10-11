#include "mindustry/logic/LCanvas_JumpButton_2.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/logic/LCanvas_JumpButton.h"
#include "mindustry/logic/LCanvas.h"
#include "arc/input/KeyCode.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/util/Tmp.h"
#include "mindustry/logic/LCanvas_StatementElem.h"
#include "mindustry/logic/LCanvas_JumpButton_2.h"
#include "mindustry/logic/LCanvas_DragLayout.h"
#include "arc/scene/event/InputListener.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {


void mark_mindustry_logic_LCanvas$JumpButton$2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LCanvas$JumpButton$2 *) object;
	if (self->F_val$setter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$setter)->clazz)->markFunction)((jobject) self->F_val$setter, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_logic_LCanvas$JumpButton$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_mindustry_logic_LCanvas$JumpButton$2_mindustry_logic_LCanvas$JumpButton_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$JumpButton$2:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LCanvas$JumpButton$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(570);
	((mindustry_logic_LCanvas$JumpButton$2 *) NULL_CHECK((frame[0].o)))->F_val$setter = (jref) (frame[2].o);
	((mindustry_logic_LCanvas$JumpButton$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LCanvas$JumpButton$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$JumpButton$2:touchDown", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(573);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_logic_LCanvas$JumpButton *) NULL_CHECK(sp[0].o))->F_selecting = (jint(1));
	LINE_NUMBER(574);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton$2 *) NULL_CHECK((frame[0].o)))->F_val$setter;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(575);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_logic_LCanvas$JumpButton *) NULL_CHECK(sp[0].o))->F_mx = (frame[2].f);
	LINE_NUMBER(576);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_logic_LCanvas$JumpButton *) NULL_CHECK(sp[0].o))->F_my = (frame[3].f);
	LINE_NUMBER(577);
	clinit_mindustry_logic_LCanvas(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCanvas_canvas;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_statements;
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK(sp[0].o))->F_updateJumpHeights = (jint(1));
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LCanvas$JumpButton$2_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$JumpButton$2:touchDragged", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_logic_LCanvas$JumpButton *) NULL_CHECK(sp[0].o))->F_mx = (frame[2].f);
	LINE_NUMBER(584);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_logic_LCanvas$JumpButton *) NULL_CHECK(sp[0].o))->F_my = (frame[3].f);
	LINE_NUMBER(585);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LCanvas$JumpButton$2_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$JumpButton$2:touchUp", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(589);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[2].f), (frame[3].f));
	sp[0].o = (jobject)((func_mindustry_logic_LCanvas$JumpButton_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$JumpButton_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(590);
	clinit_mindustry_logic_LCanvas(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCanvas_canvas;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_hovered;
	frame[6].o = sp[0].o;
	LINE_NUMBER(592);
	if ((frame[6].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_logic_LCanvas$JumpButton_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$JumpButton_isDescendantOf_arc_scene_Element_R_boolean])(ctx, sp[0].o, (frame[6].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(593);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton$2 *) NULL_CHECK((frame[0].o)))->F_val$setter;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[6].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(595);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton$2 *) NULL_CHECK((frame[0].o)))->F_val$setter;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, (jobject(nullptr)));
	}
label_5:;
	{
	LINE_NUMBER(597);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_logic_LCanvas$JumpButton *) NULL_CHECK(sp[0].o))->F_selecting = (jint(0));
	LINE_NUMBER(598);
	clinit_mindustry_logic_LCanvas(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCanvas_canvas;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_statements;
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK(sp[0].o))->F_updateJumpHeights = (jint(1));
	LINE_NUMBER(599);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LCanvas$JumpButton$2[] {
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
	(void *) M_mindustry_logic_LCanvas$JumpButton$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_mindustry_logic_LCanvas$JumpButton$2_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_mindustry_logic_LCanvas$JumpButton$2_touchDragged_arc_scene_event_InputEvent_float_float_int,
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
	{ "val$setter", &class_arc_func_Cons, offsetof(mindustry_logic_LCanvas$JumpButton$2, F_val$setter), "Larc/func/Cons;", 4112 },
	{ "this$0", &class_mindustry_logic_LCanvas$JumpButton, offsetof(mindustry_logic_LCanvas$JumpButton$2, F_this$0), "Lmindustry/logic/LCanvas$JumpButton;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LCanvas$JumpButton$2_mindustry_logic_LCanvas$JumpButton_arc_func_Cons, 0, "(Lmindustry/logic/LCanvas$JumpButton;Larc/func/Cons;)V", 0 },
	{ "touchDown", (intptr_t) M_mindustry_logic_LCanvas$JumpButton$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_mindustry_logic_LCanvas$JumpButton$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
	{ "touchDragged", (intptr_t) M_mindustry_logic_LCanvas$JumpButton$2_touchDragged_arc_scene_event_InputEvent_float_float_int, VTABLE_mindustry_logic_LCanvas$JumpButton$2_touchDragged_arc_scene_event_InputEvent_float_float_int, "(Larc/scene/event/InputEvent;FFI)V", 1 },
	{ "touchUp", (intptr_t) M_mindustry_logic_LCanvas$JumpButton$2_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_logic_LCanvas$JumpButton$2_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
};

Class class_mindustry_logic_LCanvas$JumpButton$2{
		.nativeName = (intptr_t) "mindustry/logic/LCanvas$JumpButton$2",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(mindustry_logic_LCanvas$JumpButton$2),
		.classVtable = (intptr_t) vtable_mindustry_logic_LCanvas$JumpButton$2,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LCanvas$JumpButton$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LCanvas$JumpButton$2,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_logic_LCanvas$JumpButton$2 = registerClass(&class_mindustry_logic_LCanvas$JumpButton$2);

}

