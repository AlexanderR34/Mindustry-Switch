#include "arc/scene/ui/ScrollPane_2.h"
#include "java/lang/Math.h"
#include "arc/scene/event/InputEvent_InputEventType.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/ScrollPane.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/scene/event/ElementGestureListener.h"
#include "arc/scene/ui/ScrollPane_2.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_arc_scene_ui_ScrollPane$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_ElementGestureListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_ScrollPane$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_ui_ScrollPane$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_ElementGestureListener(ctx);
}

void init_arc_scene_ui_ScrollPane$2_arc_scene_ui_ScrollPane(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane$2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ScrollPane$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(162);
	((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_ElementGestureListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane$2_pan_arc_scene_event_InputEvent_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane$2:pan", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_ScrollPane_resetFade) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_resetFade])(ctx, sp[0].o);
	LINE_NUMBER(166);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountX = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountX) - (frame[4].f));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountY = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountY) + (frame[5].f));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_ScrollPane_clamp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_clamp])(ctx, sp[0].o);
	LINE_NUMBER(169);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_cancelTouchFocus) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollX) == 0) goto label_6;
	}
	{
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_7;
	}
label_6:;
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollY) == 0) goto label_5;
	}
	{
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) == 0) goto label_5;
	}
label_7:;
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_ScrollPane_cancelTouchFocus) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_cancelTouchFocus])(ctx, sp[0].o);
	}
label_5:;
	LINE_NUMBER(170);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane$2_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane$2:fling", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(174);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[2].f));
	if ((floatCompare(temp0, (jfloat(150.0f)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollX) == 0) goto label_1;
	}
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_flingTimer = ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_flingTime);
	LINE_NUMBER(176);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_velocityX = (frame[2].f);
	LINE_NUMBER(177);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_cancelTouchFocus) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_ScrollPane_cancelTouchFocus) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_cancelTouchFocus])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(179);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[3].f));
	if ((floatCompare(temp0, (jfloat(150.0f)), -1)) <= 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollY) == 0) goto label_5;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_flingTimer = ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_flingTime);
	LINE_NUMBER(181);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_velocityY = (-(frame[3].f));
	LINE_NUMBER(182);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_cancelTouchFocus) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_ScrollPane_cancelTouchFocus) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_cancelTouchFocus])(ctx, sp[0].o);
	}
label_5:;
	LINE_NUMBER(184);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane$2_handle_arc_scene_event_SceneEvent_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane$2:handle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(188);
	jint temp0 = (jint)M_arc_scene_event_ElementGestureListener_handle_arc_scene_event_SceneEvent_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((checkCast(ctx, &class_arc_scene_event_InputEvent, (frame[1].o)))))->F_type;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_touchDown;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_flingTimer = (jfloat(0));
	}
label_3:;
	{
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_ScrollPane$2[] {
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
	(void *) M_arc_scene_ui_ScrollPane$2_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_event_ElementGestureListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_longPress_arc_scene_Element_float_float_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane$2_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode,
	(void *) M_arc_scene_ui_ScrollPane$2_pan_arc_scene_event_InputEvent_float_float_float_float,
	(void *) M_arc_scene_event_ElementGestureListener_zoom_arc_scene_event_InputEvent_float_float,
	(void *) M_arc_scene_event_ElementGestureListener_pinch_arc_scene_event_InputEvent_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2,
	(void *) M_arc_scene_event_ElementGestureListener_getGestureDetector_R_arc_input_GestureDetector,
	(void *) M_arc_scene_event_ElementGestureListener_getTouchDownTarget_R_arc_scene_Element,
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
	{ "touchDown", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "touchUp", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "tap", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "longPress", "(Larc/scene/Element;FF)Z" },
	{ "fling", "(Larc/scene/event/InputEvent;FFLarc/input/KeyCode;)V" },
	{ "pan", "(Larc/scene/event/InputEvent;FFFF)V" },
	{ "zoom", "(Larc/scene/event/InputEvent;FF)V" },
	{ "pinch", "(Larc/scene/event/InputEvent;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)V" },
	{ "getGestureDetector", "()Larc/input/GestureDetector;" },
	{ "getTouchDownTarget", "()Larc/scene/Element;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_arc_scene_ui_ScrollPane, offsetof(arc_scene_ui_ScrollPane$2, F_this$0), "Larc/scene/ui/ScrollPane;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_ScrollPane$2_arc_scene_ui_ScrollPane, 0, "(Larc/scene/ui/ScrollPane;)V", 0 },
	{ "pan", (intptr_t) M_arc_scene_ui_ScrollPane$2_pan_arc_scene_event_InputEvent_float_float_float_float, VTABLE_arc_scene_ui_ScrollPane$2_pan_arc_scene_event_InputEvent_float_float_float_float, "(Larc/scene/event/InputEvent;FFFF)V", 1 },
	{ "fling", (intptr_t) M_arc_scene_ui_ScrollPane$2_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode, VTABLE_arc_scene_ui_ScrollPane$2_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFLarc/input/KeyCode;)V", 1 },
	{ "handle", (intptr_t) M_arc_scene_ui_ScrollPane$2_handle_arc_scene_event_SceneEvent_R_boolean, VTABLE_arc_scene_ui_ScrollPane$2_handle_arc_scene_event_SceneEvent_R_boolean, "(Larc/scene/event/SceneEvent;)Z", 1 },
};

Class class_arc_scene_ui_ScrollPane$2{
		.nativeName = (intptr_t) "arc/scene/ui/ScrollPane$2",
		.parentClass = (intptr_t) &class_arc_scene_event_ElementGestureListener,
		.size = sizeof(arc_scene_ui_ScrollPane$2),
		.classVtable = (intptr_t) vtable_arc_scene_ui_ScrollPane$2,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_ScrollPane$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_ScrollPane$2,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_scene_ui_ScrollPane$2 = registerClass(&class_arc_scene_ui_ScrollPane$2);

}

