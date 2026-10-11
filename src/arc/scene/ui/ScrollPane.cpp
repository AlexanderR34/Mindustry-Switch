#include "arc/scene/ui/ScrollPane.h"
#include "arc/scene/ui/ScrollPane_4.h"
#include "arc/math/geom/Vec2.h"
#include "arc/math/geom/Rect.h"
#include "java/lang/Float.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/style/Drawable.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/Core.h"
#include "arc/scene/Group.h"
#include "arc/math/Interp.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/math/Mat.h"
#include "arc/scene/utils/Cullable.h"
#include "arc/scene/event/ElementGestureListener.h"
#include "arc/input/GestureDetector.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/ScrollPane.h"
#include "arc/scene/event/EventListener.h"
#include "java/lang/Class.h"
#include "arc/scene/ui/ScrollPane_1.h"
#include "arc/scene/ui/ScrollPane_2.h"
#include "arc/scene/ui/ScrollPane_3.h"
#include "arc/graphics/g2d/ScissorStack.h"

extern "C" {


void mark_arc_scene_ui_ScrollPane(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_layout_WidgetGroup(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_ScrollPane *) object;
	if (self->F_hScrollBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hScrollBounds)->clazz)->markFunction)((jobject) self->F_hScrollBounds, mark, depth + 1);
	if (self->F_vScrollBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vScrollBounds)->clazz)->markFunction)((jobject) self->F_vScrollBounds, mark, depth + 1);
	if (self->F_hKnobBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hKnobBounds)->clazz)->markFunction)((jobject) self->F_hKnobBounds, mark, depth + 1);
	if (self->F_vKnobBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vKnobBounds)->clazz)->markFunction)((jobject) self->F_vKnobBounds, mark, depth + 1);
	if (self->F_lastPoint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastPoint)->clazz)->markFunction)((jobject) self->F_lastPoint, mark, depth + 1);
	if (self->F_widgetAreaBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_widgetAreaBounds)->clazz)->markFunction)((jobject) self->F_widgetAreaBounds, mark, depth + 1);
	if (self->F_widgetCullingArea)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_widgetCullingArea)->clazz)->markFunction)((jobject) self->F_widgetCullingArea, mark, depth + 1);
	if (self->F_scissorBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scissorBounds)->clazz)->markFunction)((jobject) self->F_scissorBounds, mark, depth + 1);
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_widget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_widget)->clazz)->markFunction)((jobject) self->F_widget, mark, depth + 1);
	if (self->F_flickScrollListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flickScrollListener)->clazz)->markFunction)((jobject) self->F_flickScrollListener, mark, depth + 1);
}

void clinit_arc_scene_ui_ScrollPane(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_layout_WidgetGroup(ctx);
}

void init_arc_scene_ui_ScrollPane_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ScrollPane(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_scene;
	sp[2].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[2].o, (((jobject) &class_arc_scene_ui_ScrollPane$ScrollPaneStyle)));
	init_arc_scene_ui_ScrollPane_arc_scene_Element_arc_scene_ui_ScrollPane$ScrollPaneStyle(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_arc_scene_ui_ScrollPane$ScrollPaneStyle, sp[2].o)));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_ScrollPane_arc_scene_Element_arc_scene_ui_ScrollPane$ScrollPaneStyle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ScrollPane(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(70);
	init_arc_scene_ui_layout_WidgetGroup(ctx, (frame[0].o));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hScrollBounds = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vScrollBounds = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hKnobBounds = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vKnobBounds = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_lastPoint = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_widgetAreaBounds = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_widgetCullingArea = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scissorBounds = (jref) sp[1].o;
	LINE_NUMBER(38);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollOnRight = (jint(1));
	LINE_NUMBER(39);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollOnBottom = (jint(1));
	LINE_NUMBER(45);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlpha = (jfloat(1));
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlphaSeconds = (jfloat(1));
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeDelaySeconds = (jfloat(1));
	LINE_NUMBER(46);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_cancelTouchFocus = (jint(1));
	LINE_NUMBER(47);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScroll = (jint(1));
	LINE_NUMBER(50);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTime = (jfloat(1));
	LINE_NUMBER(51);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_draggingPointer = (jint(-1));
	LINE_NUMBER(55);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeScrollBars = (jint(0));
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_smoothScrolling = (jint(1));
	LINE_NUMBER(56);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollX = (jint(1));
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollY = (jint(1));
	LINE_NUMBER(57);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance = (jfloat(50.0f));
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin = (jfloat(30.0f));
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMax = (jfloat(200.0f));
	LINE_NUMBER(59);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_clamp = (jint(1));
	LINE_NUMBER(61);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_variableSizeKnobs = (jint(1));
	LINE_NUMBER(62);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_clip = (jint(1));
	LINE_NUMBER(71);
	if ((frame[2].o) != nullptr) goto label_23;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(72);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[2].o);
	LINE_NUMBER(73);
	((func_arc_scene_ui_ScrollPane_setWidget_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setWidget_arc_scene_Element])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(74);
	((func_arc_scene_ui_ScrollPane_setSize_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setSize_float_float])(ctx, (frame[0].o), (jfloat(150.0f)), (jfloat(150.0f)));
	LINE_NUMBER(75);
	((func_arc_scene_ui_ScrollPane_setTransform_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setTransform_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_ScrollPane$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane$1);
	init_arc_scene_ui_ScrollPane$1_arc_scene_ui_ScrollPane(ctx, sp[1].o, (frame[0].o));
	jint temp0 = (jint)((func_arc_scene_ui_ScrollPane_addCaptureListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_addCaptureListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_ScrollPane$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane$2);
	init_arc_scene_ui_ScrollPane$2_arc_scene_ui_ScrollPane(ctx, sp[1].o, (frame[0].o));
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_flickScrollListener = (jref) sp[1].o;
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScrollListener;
	jint temp1 = (jint)((func_arc_scene_ui_ScrollPane_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_ScrollPane$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane$3);
	init_arc_scene_ui_ScrollPane$3_arc_scene_ui_ScrollPane(ctx, sp[1].o, (frame[0].o));
	jint temp2 = (jint)((func_arc_scene_ui_ScrollPane_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_ScrollPane$4(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane$4);
	init_arc_scene_ui_ScrollPane$4_arc_scene_ui_ScrollPane(ctx, sp[1].o, (frame[0].o));
	jint temp3 = (jint)((func_arc_scene_ui_ScrollPane_addCaptureListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_addCaptureListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_resetFade(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:resetFade", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(233);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlpha = ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlphaSeconds);
	LINE_NUMBER(234);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeDelay = ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeDelaySeconds);
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_cancelTouchFocus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:cancelTouchFocus", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_arc_scene_ui_ScrollPane_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(244);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScrollListener;
	((func_arc_scene_Scene_cancelTouchFocusExcept_arc_scene_event_EventListener_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_cancelTouchFocusExcept_arc_scene_event_EventListener_arc_scene_Element])(ctx, sp[0].o, sp[1].o, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(245);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_cancel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:cancel", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(249);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_draggingPointer = (jint(-1));
	LINE_NUMBER(250);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_touchScrollH = (jint(0));
	LINE_NUMBER(251);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_touchScrollV = (jint(0));
	LINE_NUMBER(252);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScrollListener;
	sp[0].o = (jobject)((func_arc_scene_event_ElementGestureListener_getGestureDetector_R_arc_input_GestureDetector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ElementGestureListener_getGestureDetector_R_arc_input_GestureDetector])(ctx, sp[0].o);
	((func_arc_input_GestureDetector_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_GestureDetector_cancel])(ctx, sp[0].o);
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_clamp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:clamp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(256);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_clamp) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollX) == 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), (-((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance)), (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX) + ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance)));
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(258);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), (jfloat(0)), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX));
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	LINE_NUMBER(257);
	((func_arc_scene_ui_ScrollPane_scrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_scrollX_float])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollY) == 0) goto label_5;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), (-((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance)), (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY) + ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance)));
	sp[0].f = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(260);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), (jfloat(0)), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY));
	sp[0].f = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 2;
	LINE_NUMBER(259);
	((func_arc_scene_ui_ScrollPane_scrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_scrollY_float])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_ScrollPane_getStyle_R_arc_scene_ui_ScrollPane$ScrollPaneStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setStyle_arc_scene_ui_ScrollPane$ScrollPaneStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setStyle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(272);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(273);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(274);
	((func_arc_scene_ui_ScrollPane_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:act", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(279);
	M_arc_scene_Group_act_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(281);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScrollListener;
	sp[0].o = (jobject)((func_arc_scene_event_ElementGestureListener_getGestureDetector_R_arc_input_GestureDetector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ElementGestureListener_getGestureDetector_R_arc_input_GestureDetector])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_input_GestureDetector_isPanning_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_GestureDetector_isPanning_R_boolean])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(282);
	frame[3].i = (jint(0));
	LINE_NUMBER(284);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlpha), (jfloat(0)), -1)) <= 0) goto label_4;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeScrollBars) == 0) goto label_4;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_4;
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_touchScrollH) != 0) goto label_4;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_touchScrollV) != 0) goto label_4;
	}
	{
	LINE_NUMBER(285);
	sp[0].o = frame[0].o;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_fadeDelay = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_fadeDelay) - (frame[1].f));
	LINE_NUMBER(286);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeDelay), (jfloat(0)), 1)) > 0) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlpha) - (frame[1].f)));
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_fadeAlpha = temp0;
	}
label_7:;
	{
	LINE_NUMBER(287);
	frame[3].i = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(290);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTimer), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(291);
	((func_arc_scene_ui_ScrollPane_resetFade) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_resetFade])(ctx, (frame[0].o));
	LINE_NUMBER(293);
	frame[4].f = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTimer) / ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTime));
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountX = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountX) - ((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityX) * (frame[4].f)) * (frame[1].f)));
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountY = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountY) - ((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityY) * (frame[4].f)) * (frame[1].f)));
	LINE_NUMBER(296);
	((func_arc_scene_ui_ScrollPane_clamp) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_clamp])(ctx, (frame[0].o));
	LINE_NUMBER(299);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), (-((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance)), -1)) != 0) goto label_15;
	}
	{
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityX = (jfloat(0));
	}
label_15:;
	{
	LINE_NUMBER(300);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX) + ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance)), -1)) < 0) goto label_16;
	}
	{
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityX = (jfloat(0));
	}
label_16:;
	{
	LINE_NUMBER(301);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), (-((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance)), -1)) != 0) goto label_17;
	}
	{
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityY = (jfloat(0));
	}
label_17:;
	{
	LINE_NUMBER(302);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY) + ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance)), -1)) < 0) goto label_18;
	}
	{
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityY = (jfloat(0));
	}
label_18:;
	{
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_flingTimer = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_flingTimer) - (frame[1].f));
	LINE_NUMBER(305);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTimer), (jfloat(0)), 1)) > 0) goto label_20;
	}
	{
	LINE_NUMBER(306);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityX = (jfloat(0));
	LINE_NUMBER(307);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityY = (jfloat(0));
	}
label_20:;
	{
	LINE_NUMBER(310);
	frame[3].i = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(313);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_smoothScrolling) == 0) goto label_23;
	}
	{
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTimer), (jfloat(0)), 1)) > 0) goto label_23;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_23;
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_touchScrollH) == 0) goto label_24;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_23;
	}
	{
	jfloat temp0 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	if ((floatCompare((temp0 / (temp1 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width))), (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaWidth) * (jfloat(0.1f))), -1)) <= 0) goto label_23;
	}
label_24:;
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_touchScrollV) == 0) goto label_25;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_23;
	}
	{
	jfloat temp0 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	if ((floatCompare((temp0 / (temp1 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height))), (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight) * (jfloat(0.1f))), -1)) <= 0) goto label_23;
	}
label_25:;
	{
	LINE_NUMBER(318);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), -1)) == 0) goto label_26;
	}
	{
	LINE_NUMBER(319);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), 1)) >= 0) goto label_28;
	}
	{
	LINE_NUMBER(320);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX;
	jfloat temp1 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat(200.0f)) * (frame[1].f)), (((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX) - ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX)) * (jfloat(7.0f))) * (frame[1].f)));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (temp1 + temp2));
	((func_arc_scene_ui_ScrollPane_visualScrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_visualScrollX_float])(ctx, sp[0].o, temp3);
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(322);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX;
	jfloat temp1 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat(200.0f)) * (frame[1].f)), (((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX) - ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX)) * (jfloat(7.0f))) * (frame[1].f)));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp1 - temp2));
	((func_arc_scene_ui_ScrollPane_visualScrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_visualScrollX_float])(ctx, sp[0].o, temp3);
	}
label_30:;
	{
	LINE_NUMBER(323);
	frame[3].i = (jint(1));
	}
label_26:;
	{
	LINE_NUMBER(325);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), -1)) == 0) goto label_31;
	}
	{
	LINE_NUMBER(326);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), 1)) >= 0) goto label_33;
	}
	{
	LINE_NUMBER(327);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY;
	jfloat temp1 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat(200.0f)) * (frame[1].f)), (((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY) - ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY)) * (jfloat(7.0f))) * (frame[1].f)));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (temp1 + temp2));
	((func_arc_scene_ui_ScrollPane_visualScrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_visualScrollY_float])(ctx, sp[0].o, temp3);
	goto label_35;
	}
label_33:;
	{
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY;
	jfloat temp1 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat(200.0f)) * (frame[1].f)), (((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY) - ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY)) * (jfloat(7.0f))) * (frame[1].f)));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp1 - temp2));
	((func_arc_scene_ui_ScrollPane_visualScrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_visualScrollY_float])(ctx, sp[0].o, temp3);
	}
label_35:;
	{
	LINE_NUMBER(330);
	frame[3].i = (jint(1));
	goto label_31;
	}
label_23:;
	{
	LINE_NUMBER(333);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), -1)) == 0) goto label_36;
	}
	{
	((func_arc_scene_ui_ScrollPane_visualScrollX_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_visualScrollX_float])(ctx, (frame[0].o), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX));
	}
label_36:;
	{
	LINE_NUMBER(334);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), -1)) == 0) goto label_31;
	}
	{
	((func_arc_scene_ui_ScrollPane_visualScrollY_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_visualScrollY_float])(ctx, (frame[0].o), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY));
	}
label_31:;
	{
	LINE_NUMBER(337);
	if ((frame[2].i) != 0) goto label_37;
	}
	{
	LINE_NUMBER(338);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollX) == 0) goto label_39;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_39;
	}
	{
	LINE_NUMBER(339);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), (jfloat(0)), 1)) >= 0) goto label_41;
	}
	{
	LINE_NUMBER(340);
	((func_arc_scene_ui_ScrollPane_resetFade) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_resetFade])(ctx, (frame[0].o));
	LINE_NUMBER(341);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX) + ((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin) + (((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMax) - ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin)) * (-((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX))) / ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance))) * (frame[1].f)));
	LINE_NUMBER(343);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), (jfloat(0)), -1)) <= 0) goto label_45;
	}
	{
	((func_arc_scene_ui_ScrollPane_scrollX_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_scrollX_float])(ctx, (frame[0].o), (jfloat(0)));
	}
label_45:;
	{
	LINE_NUMBER(344);
	frame[3].i = (jint(1));
	goto label_39;
	}
label_41:;
	{
	LINE_NUMBER(345);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX), -1)) <= 0) goto label_39;
	}
	{
	LINE_NUMBER(346);
	((func_arc_scene_ui_ScrollPane_resetFade) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_resetFade])(ctx, (frame[0].o));
	LINE_NUMBER(347);
	sp[0].o = frame[0].o;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountX = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountX) - ((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin) + (((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMax) - ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin)) * (-(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX) - ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX)))) / ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance))) * (frame[1].f)));
	LINE_NUMBER(349);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX), 1)) >= 0) goto label_49;
	}
	{
	((func_arc_scene_ui_ScrollPane_scrollX_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_scrollX_float])(ctx, (frame[0].o), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX));
	}
label_49:;
	{
	LINE_NUMBER(350);
	frame[3].i = (jint(1));
	}
label_39:;
	{
	LINE_NUMBER(353);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollY) == 0) goto label_37;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_37;
	}
	{
	LINE_NUMBER(354);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), (jfloat(0)), 1)) >= 0) goto label_51;
	}
	{
	LINE_NUMBER(355);
	((func_arc_scene_ui_ScrollPane_resetFade) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_resetFade])(ctx, (frame[0].o));
	LINE_NUMBER(356);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY) + ((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin) + (((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMax) - ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin)) * (-((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY))) / ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance))) * (frame[1].f)));
	LINE_NUMBER(358);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), (jfloat(0)), -1)) <= 0) goto label_55;
	}
	{
	((func_arc_scene_ui_ScrollPane_scrollY_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_scrollY_float])(ctx, (frame[0].o), (jfloat(0)));
	}
label_55:;
	{
	LINE_NUMBER(359);
	frame[3].i = (jint(1));
	goto label_37;
	}
label_51:;
	{
	LINE_NUMBER(360);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY), -1)) <= 0) goto label_37;
	}
	{
	LINE_NUMBER(361);
	((func_arc_scene_ui_ScrollPane_resetFade) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_resetFade])(ctx, (frame[0].o));
	LINE_NUMBER(362);
	sp[0].o = frame[0].o;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountY = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountY) - ((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin) + (((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMax) - ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin)) * (-(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY) - ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY)))) / ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance))) * (frame[1].f)));
	LINE_NUMBER(364);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY), 1)) >= 0) goto label_59;
	}
	{
	((func_arc_scene_ui_ScrollPane_scrollY_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_scrollY_float])(ctx, (frame[0].o), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY));
	}
label_59:;
	{
	LINE_NUMBER(365);
	frame[3].i = (jint(1));
	}
label_37:;
	{
	LINE_NUMBER(370);
	if ((frame[3].i) == 0) goto label_60;
	}
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((func_arc_scene_ui_ScrollPane_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(372);
	if ((frame[4].o) == nullptr) goto label_60;
	}
	{
	jint temp0 = (jint)((func_arc_scene_Scene_getActionsRequestRendering_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Scene_getActionsRequestRendering_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_60;
	}
	clinit_arc_Core(ctx);
	(sp++)->o = SF_arc_Core_graphics;
	POP_N(1); // Pop method args
	((func_arc_Graphics_requestRendering) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_requestRendering])(ctx, sp[0].o);
label_60:;
	LINE_NUMBER(374);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setClip_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setClip", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(377);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_clip = (frame[1].i);
	LINE_NUMBER(378);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:layout", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[1].o = sp[0].o;
	LINE_NUMBER(383);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	frame[2].o = sp[0].o;
	LINE_NUMBER(384);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob;
	frame[3].o = sp[0].o;
	LINE_NUMBER(386);
	frame[4].f = (jfloat(0));
	frame[5].f = (jfloat(0));
	frame[6].f = (jfloat(0));
	frame[7].f = (jfloat(0));
	LINE_NUMBER(387);
	if ((frame[1].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(388);
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].f = temp0;
	LINE_NUMBER(389);
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getRightWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].f = temp1;
	LINE_NUMBER(390);
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	frame[6].f = temp2;
	LINE_NUMBER(391);
	jfloat temp3 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	frame[7].f = temp3;
	}
label_8:;
	{
	LINE_NUMBER(394);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_ScrollPane_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getWidth_R_float])(ctx, (frame[0].o));
	frame[8].f = temp0;
	LINE_NUMBER(395);
	jfloat temp1 = (jfloat)((func_arc_scene_ui_ScrollPane_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getHeight_R_float])(ctx, (frame[0].o));
	frame[9].f = temp1;
	LINE_NUMBER(397);
	frame[10].f = (jfloat(0));
	LINE_NUMBER(398);
	if ((frame[2].o) == nullptr) goto label_16;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	frame[10].f = temp0;
	}
label_16:;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	jfloat temp0 = frame[10].f;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[10].f = temp2;
	}
label_17:;
	{
	LINE_NUMBER(400);
	frame[11].f = (jfloat(0));
	LINE_NUMBER(401);
	if ((frame[3].o) == nullptr) goto label_19;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[3].o)))(ctx, (frame[3].o));
	frame[11].f = temp0;
	}
label_19:;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	jfloat temp0 = frame[11].f;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[11].f = temp2;
	}
label_20:;
	{
	LINE_NUMBER(405);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaWidth = (((frame[8].f) - (frame[4].f)) - (frame[5].f));
	LINE_NUMBER(406);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight = (((frame[9].f) - (frame[6].f)) - (frame[7].f));
	LINE_NUMBER(408);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	if (sp[0].o != nullptr) goto label_23;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_23:;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getPrefWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getPrefWidth_R_float])(ctx, sp[0].o);
	frame[12].f = temp0;
	LINE_NUMBER(413);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	jfloat temp1 = (jfloat)((func_arc_scene_Element_getPrefHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getPrefHeight_R_float])(ctx, sp[0].o);
	frame[13].f = temp1;
	LINE_NUMBER(417);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_forceScrollX) != 0) goto label_26;
	}
	{
	if ((floatCompare((frame[12].f), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaWidth), -1)) <= 0) goto label_27;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableX) != 0) goto label_27;
	}
label_26:;
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 2;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollX = sp[1].i;
	LINE_NUMBER(418);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_forceScrollY) != 0) goto label_30;
	}
	{
	if ((floatCompare((frame[13].f), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight), -1)) <= 0) goto label_31;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableY) != 0) goto label_31;
	}
label_30:;
	INST_ICONST(1);
	goto label_32;
label_31:;
	INST_ICONST(0);
label_32:;
	{
	sp -= 2;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollY = sp[1].i;
	LINE_NUMBER(420);
	frame[14].i = ((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeScrollBars);
	LINE_NUMBER(421);
	if ((frame[14].i) != 0) goto label_35;
	}
	{
	LINE_NUMBER(423);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_37;
	}
	{
	LINE_NUMBER(424);
	sp[0].o = frame[0].o;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_areaWidth = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_areaWidth) - (frame[11].f));
	LINE_NUMBER(425);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) != 0) goto label_37;
	}
	{
	if ((floatCompare((frame[12].f), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaWidth), -1)) <= 0) goto label_37;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableX) != 0) goto label_37;
	}
	{
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX = (jint(1));
	}
label_37:;
	{
	LINE_NUMBER(427);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_35;
	}
	{
	LINE_NUMBER(428);
	sp[0].o = frame[0].o;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_areaHeight = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_areaHeight) - (frame[10].f));
	LINE_NUMBER(429);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) != 0) goto label_35;
	}
	{
	if ((floatCompare((frame[13].f), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight), -1)) <= 0) goto label_35;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableY) != 0) goto label_35;
	}
	{
	LINE_NUMBER(430);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY = (jint(1));
	LINE_NUMBER(431);
	sp[0].o = frame[0].o;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_areaWidth = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_areaWidth) - (frame[11].f));
	}
label_35:;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetAreaBounds;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[4].f), (frame[7].f), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaWidth), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight));
	LINE_NUMBER(439);
	if ((frame[14].i) == 0) goto label_45;
	}
	{
	LINE_NUMBER(441);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_47;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_47;
	}
	{
	LINE_NUMBER(442);
	sp[0].o = frame[0].o;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_areaHeight = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_areaHeight) - (frame[10].f));
	LINE_NUMBER(443);
	sp[0].o = frame[0].o;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_areaWidth = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_areaWidth) - (frame[11].f));
	goto label_47;
	}
label_45:;
	{
	LINE_NUMBER(446);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollbarsOnTop) == 0) goto label_50;
	}
	{
	LINE_NUMBER(448);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_52;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetAreaBounds;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height) + (frame[10].f));
	}
label_52:;
	{
	LINE_NUMBER(449);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_47;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetAreaBounds;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width) + (frame[11].f));
	goto label_47;
	}
label_50:;
	{
	LINE_NUMBER(452);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_53;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollOnBottom) == 0) goto label_53;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetAreaBounds;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y) + (frame[10].f));
	}
label_53:;
	{
	LINE_NUMBER(454);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_47;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollOnRight) != 0) goto label_47;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetAreaBounds;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x) + (frame[11].f));
	}
label_47:;
	{
	LINE_NUMBER(459);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableX) == 0) goto label_54;
	}
	{
	jfloat temp0 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaWidth;
	sp[0].f = temp0;
	sp += 1;
	goto label_55;
	}
label_54:;
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaWidth), (frame[12].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_55:;
	{
	sp -= 1;
	frame[12].f = sp[0].f;
	LINE_NUMBER(460);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableY) == 0) goto label_57;
	}
	{
	jfloat temp0 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight;
	sp[0].f = temp0;
	sp += 1;
	goto label_58;
	}
label_57:;
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight), (frame[13].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_58:;
	{
	sp -= 1;
	frame[13].f = sp[0].f;
	LINE_NUMBER(462);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX = ((frame[12].f) - ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaWidth));
	LINE_NUMBER(463);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY = ((frame[13].f) - ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight));
	LINE_NUMBER(464);
	if ((frame[14].i) == 0) goto label_62;
	}
	{
	LINE_NUMBER(466);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_62;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_62;
	}
	{
	LINE_NUMBER(467);
	sp[0].o = frame[0].o;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_maxY = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_maxY) - (frame[10].f));
	LINE_NUMBER(468);
	sp[0].o = frame[0].o;
	((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_maxX = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_maxX) - (frame[11].f));
	}
label_62:;
	{
	LINE_NUMBER(471);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), (jfloat(0)), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX));
	((func_arc_scene_ui_ScrollPane_scrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_scrollX_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(475);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_67;
	}
	{
	LINE_NUMBER(476);
	if ((frame[2].o) == nullptr) goto label_69;
	}
	{
	LINE_NUMBER(477);
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	frame[15].f = temp0;
	LINE_NUMBER(479);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollOnRight) == 0) goto label_72;
	}
	INST_FLOAD(4);
	goto label_73;
label_72:;
	{
	jfloat temp0 = (frame[4].f) + (frame[11].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_73:;
	{
	sp -= 1;
	frame[16].f = sp[0].f;
	LINE_NUMBER(481);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollOnBottom) == 0) goto label_75;
	}
	INST_FLOAD(7);
	goto label_76;
label_75:;
	{
	jfloat temp0 = ((frame[9].f) - (frame[6].f)) - (frame[15].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_76:;
	{
	sp -= 1;
	frame[17].f = sp[0].f;
	LINE_NUMBER(482);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[16].f), (frame[17].f), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaWidth), (frame[15].f));
	LINE_NUMBER(483);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_variableSizeKnobs) == 0) goto label_79;
	}
	{
	LINE_NUMBER(484);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (jfloat((jint(((((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width) * ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaWidth)) / (frame[12].f)))))));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = temp1;
	goto label_81;
	}
label_79:;
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = temp0;
	}
label_81:;
	{
	LINE_NUMBER(488);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = temp0;
	LINE_NUMBER(490);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp3 = temp2 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width);
	jfloat temp4 = (jfloat)((func_arc_scene_ui_ScrollPane_getScrollPercentX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getScrollPercentX_R_float])(ctx, (frame[0].o));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (temp1 + (jfloat((jint((temp3 * temp4))))));
	LINE_NUMBER(491);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(492);
	goto label_67;
	}
label_69:;
	{
	LINE_NUMBER(493);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(494);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	}
label_67:;
	{
	LINE_NUMBER(497);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_86;
	}
	{
	LINE_NUMBER(498);
	if ((frame[3].o) == nullptr) goto label_88;
	}
	{
	LINE_NUMBER(499);
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[3].o)))(ctx, (frame[3].o));
	frame[15].f = temp0;
	LINE_NUMBER(502);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollOnBottom) == 0) goto label_91;
	}
	{
	LINE_NUMBER(503);
	frame[17].f = (((frame[9].f) - (frame[6].f)) - ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight));
	goto label_94;
	}
label_91:;
	{
	LINE_NUMBER(505);
	frame[17].f = (frame[7].f);
	}
label_94:;
	{
	LINE_NUMBER(508);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollOnRight) == 0) goto label_95;
	}
	{
	LINE_NUMBER(509);
	frame[16].f = (((frame[8].f) - (frame[5].f)) - (frame[15].f));
	goto label_98;
	}
label_95:;
	{
	LINE_NUMBER(511);
	frame[16].f = (frame[4].f);
	}
label_98:;
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[16].f), (frame[17].f), (frame[15].f), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight));
	LINE_NUMBER(514);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[3].o)))(ctx, (frame[3].o));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(515);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_variableSizeKnobs) == 0) goto label_101;
	}
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (jfloat((jint(((((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height) * ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight)) / (frame[13].f)))))));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = temp1;
	goto label_103;
	}
label_101:;
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = temp0;
	}
label_103:;
	{
	LINE_NUMBER(520);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollOnRight) == 0) goto label_104;
	}
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp0 = (frame[8].f) - (frame[5].f);
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[3].o)))(ctx, (frame[3].o));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (temp0 - temp1);
	goto label_106;
	}
label_104:;
	{
	LINE_NUMBER(523);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (frame[4].f);
	}
label_106:;
	{
	LINE_NUMBER(525);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp2 = temp1 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height);
	jfloat temp3 = jfloat(1);
	jfloat temp4 = (jfloat)((func_arc_scene_ui_ScrollPane_getScrollPercentY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getScrollPercentY_R_float])(ctx, (frame[0].o));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (temp0 + (jfloat((jint((temp2 * (temp3 - temp4)))))));
	LINE_NUMBER(526);
	goto label_86;
	}
label_88:;
	{
	LINE_NUMBER(527);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(528);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	}
label_86:;
	{
	LINE_NUMBER(532);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	((func_arc_scene_Element_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setSize_float_float])(ctx, sp[0].o, (frame[12].f), (frame[13].f));
	LINE_NUMBER(533);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	((func_arc_scene_Element_validate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_validate])(ctx, sp[0].o);
	LINE_NUMBER(534);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:draw", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(540);
	((func_arc_scene_ui_ScrollPane_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_validate])(ctx, (frame[0].o));
	LINE_NUMBER(543);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_scene_ui_ScrollPane_computeTransform_R_arc_math_Mat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_computeTransform_R_arc_math_Mat])(ctx, (frame[0].o));
	((func_arc_scene_ui_ScrollPane_applyTransform_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_applyTransform_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(545);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_4;
	}
	{
	LINE_NUMBER(546);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp2 = temp1 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width);
	jfloat temp3 = (jfloat)((func_arc_scene_ui_ScrollPane_getVisualScrollPercentX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getVisualScrollPercentX_R_float])(ctx, (frame[0].o));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (temp0 + (jfloat((jint((temp2 * temp3))))));
	}
label_4:;
	{
	LINE_NUMBER(547);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_6;
	}
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp2 = temp1 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height);
	jfloat temp3 = jfloat(1);
	jfloat temp4 = (jfloat)((func_arc_scene_ui_ScrollPane_getVisualScrollPercentY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getVisualScrollPercentY_R_float])(ctx, (frame[0].o));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (temp0 + (jfloat((jint((temp2 * (temp3 - temp4)))))));
	}
label_6:;
	{
	LINE_NUMBER(551);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetAreaBounds;
	frame[1].f = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(552);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) != 0) goto label_9;
	}
	{
	LINE_NUMBER(553);
	frame[1].f = ((frame[1].f) - (jfloat((jint(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY))))));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(555);
	frame[1].f = ((frame[1].f) - (jfloat((jint((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY) - ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY)))))));
	}
label_11:;
	{
	LINE_NUMBER(557);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetAreaBounds;
	frame[2].f = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(558);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_13;
	}
	{
	frame[2].f = ((frame[2].f) - (jfloat((jint(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX))))));
	}
label_13:;
	{
	LINE_NUMBER(560);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeScrollBars) != 0) goto label_14;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollbarsOnTop) == 0) goto label_14;
	}
	{
	LINE_NUMBER(561);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_16;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollOnBottom) == 0) goto label_16;
	}
	{
	LINE_NUMBER(562);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(563);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	frame[3].f = temp0;
	}
label_19:;
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[3].f = temp2;
	}
label_20:;
	{
	LINE_NUMBER(565);
	frame[1].f = ((frame[1].f) + (frame[3].f));
	}
label_16:;
	{
	LINE_NUMBER(567);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_14;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollOnRight) != 0) goto label_14;
	}
	{
	LINE_NUMBER(568);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(569);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[3].f = temp0;
	}
label_23:;
	{
	LINE_NUMBER(570);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[3].f = temp2;
	}
label_24:;
	{
	LINE_NUMBER(571);
	frame[2].f = ((frame[2].f) + (frame[3].f));
	}
label_14:;
	{
	LINE_NUMBER(575);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	((func_arc_scene_Element_setPosition_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setPosition_float_float])(ctx, sp[0].o, (frame[2].f), (frame[1].f));
	LINE_NUMBER(577);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_utils_Cullable)) == 0) goto label_26;
	}
	{
	LINE_NUMBER(578);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetCullingArea;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	jfloat temp0 = -((jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_x);
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetAreaBounds;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(579);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetCullingArea;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	jfloat temp1 = -((jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_y);
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetAreaBounds;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (temp1 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(580);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetCullingArea;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetAreaBounds;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(581);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetCullingArea;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetAreaBounds;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height);
	LINE_NUMBER(582);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	sp[0].o = checkCast(ctx, &class_arc_scene_utils_Cullable, sp[0].o);
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetCullingArea;
	((func_arc_scene_utils_Cullable_setCullingArea_arc_math_geom_Rect) resolveInterfaceMethod(ctx, &class_arc_scene_utils_Cullable, INDEX_arc_scene_utils_Cullable_setCullingArea_arc_math_geom_Rect, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_26:;
	{
	LINE_NUMBER(586);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = (jfloat)((func_arc_scene_ui_ScrollPane_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_arc_scene_ui_ScrollPane_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getHeight_R_float])(ctx, (frame[0].o));
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	}
label_32:;
	{
	LINE_NUMBER(590);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widgetAreaBounds;
	sp[2].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scissorBounds;
	((func_arc_scene_Scene_calculateScissors_arc_math_geom_Rect_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_calculateScissors_arc_math_geom_Rect_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(592);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_clip) == 0) goto label_34;
	}
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scissorBounds;
	jint temp0 = (jint)SM_arc_graphics_g2d_ScissorStack_push_arc_math_geom_Rect_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(595);
	((func_arc_scene_ui_ScrollPane_drawChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_drawChildren])(ctx, (frame[0].o));
	LINE_NUMBER(596);
	sp[0].o = (jobject)SM_arc_graphics_g2d_ScissorStack_pop_R_arc_math_geom_Rect(ctx);
	goto label_36;
	}
label_34:;
	{
	LINE_NUMBER(599);
	((func_arc_scene_ui_ScrollPane_drawChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_drawChildren])(ctx, (frame[0].o));
	}
label_36:;
	{
	LINE_NUMBER(603);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp1 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp2 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp3 = ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_fade;
	jfloat temp4 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlpha) / ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlphaSeconds)));
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, temp0, temp1, temp2, (temp3 * temp4));
	LINE_NUMBER(604);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_40;
	}
	{
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_40;
	}
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_corner;
	if (sp[0].o == nullptr) goto label_40;
	}
	{
	LINE_NUMBER(606);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_corner;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width);
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp3 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp1, temp2, temp3, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y));
	}
label_40:;
	{
	LINE_NUMBER(610);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_43;
	}
	{
	LINE_NUMBER(611);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	if (sp[0].o == nullptr) goto label_45;
	}
	{
	LINE_NUMBER(612);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height));
	}
label_45:;
	{
	LINE_NUMBER(613);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	if (sp[0].o == nullptr) goto label_43;
	}
	{
	LINE_NUMBER(614);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height));
	}
label_43:;
	{
	LINE_NUMBER(616);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_48;
	}
	{
	LINE_NUMBER(617);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	if (sp[0].o == nullptr) goto label_50;
	}
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height));
	}
label_50:;
	{
	LINE_NUMBER(619);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob;
	if (sp[0].o == nullptr) goto label_48;
	}
	{
	LINE_NUMBER(620);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height));
	}
label_48:;
	{
	LINE_NUMBER(623);
	((func_arc_scene_ui_ScrollPane_resetTransform) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_resetTransform])(ctx, (frame[0].o));
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_fling_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:fling", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(633);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTimer = (frame[1].f);
	LINE_NUMBER(634);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityX = (frame[2].f);
	LINE_NUMBER(635);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityY = (frame[3].f);
	LINE_NUMBER(636);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getPrefWidth", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(640);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(641);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(642);
	((func_arc_scene_ui_ScrollPane_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_validate])(ctx, (frame[0].o));
	LINE_NUMBER(643);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getPrefWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getPrefWidth_R_float])(ctx, sp[0].o);
	frame[1].f = temp0;
	}
label_2:;
	{
	LINE_NUMBER(645);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getRightWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[1].f = (temp0 + (temp1 + temp2));
	}
label_5:;
	{
	LINE_NUMBER(646);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_6;
	}
	{
	LINE_NUMBER(647);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(648);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[2].f = temp0;
	}
label_9:;
	{
	LINE_NUMBER(649);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[2].f = temp2;
	}
label_10:;
	{
	LINE_NUMBER(650);
	frame[1].f = ((frame[1].f) + (frame[2].f));
	}
label_6:;
	{
	LINE_NUMBER(652);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getPrefHeight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(657);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(658);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(659);
	((func_arc_scene_ui_ScrollPane_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_validate])(ctx, (frame[0].o));
	LINE_NUMBER(660);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getPrefHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getPrefHeight_R_float])(ctx, sp[0].o);
	frame[1].f = temp0;
	}
label_2:;
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, sp[0].o))(ctx, sp[0].o);
	frame[1].f = (temp0 + (temp1 + temp2));
	}
label_5:;
	{
	LINE_NUMBER(663);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_6;
	}
	{
	LINE_NUMBER(664);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(665);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	frame[2].f = temp0;
	}
label_9:;
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[2].f = temp2;
	}
label_10:;
	{
	LINE_NUMBER(667);
	frame[1].f = ((frame[1].f) + (frame[2].f));
	}
label_6:;
	{
	LINE_NUMBER(669);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getMinWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(674);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getMinHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(679);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_ScrollPane_getWidget_R_arc_scene_Element(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getWidget", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(684);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setWidget_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setWidget", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(692);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"widget cannot be the ScrollPane."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(693);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	jint temp0 = (jint)M_arc_scene_Group_removeChild_arc_scene_Element_R_boolean(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(694);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget = (jref) (frame[1].o);
	LINE_NUMBER(695);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	M_arc_scene_Group_addChild_arc_scene_Element(ctx, (frame[0].o), (frame[1].o));
	}
label_4:;
	LINE_NUMBER(696);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane_removeChild_arc_scene_Element_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:removeChild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(700);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(701);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(702);
	((func_arc_scene_ui_ScrollPane_setWidget_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setWidget_arc_scene_Element])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(703);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane_removeChild_arc_scene_Element_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:removeChild", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(708);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(709);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(710);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_widget = (jref) (jobject(nullptr));
	LINE_NUMBER(711);
	jint temp0 = (jint)M_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_ScrollPane_hit_float_float_boolean_R_arc_scene_Element(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:hit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(716);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) < 0) goto label_1;
	}
	{
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_ScrollPane_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getWidth_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, -1)) >= 0) goto label_1;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) < 0) goto label_1;
	}
	{
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_ScrollPane_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getHeight_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, -1)) < 0) goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(717);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_contains_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	if (temp0 == 0) goto label_3;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(718);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_contains_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	if (temp0 == 0) goto label_4;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(719);
	sp[0].o = (jobject)M_arc_scene_Group_hit_float_float_boolean_R_arc_scene_Element(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_scrollX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:scrollX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(724);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX = (frame[1].f);
	LINE_NUMBER(725);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_scrollY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:scrollY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(729);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY = (frame[1].f);
	LINE_NUMBER(730);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_visualScrollX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:visualScrollX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(734);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX = (frame[1].f);
	LINE_NUMBER(735);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_visualScrollY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:visualScrollY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(739);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY = (frame[1].f);
	LINE_NUMBER(740);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getMouseWheelX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getMouseWheelX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(744);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaWidth), ((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaWidth) * (jfloat(0.9f))) / (jfloat(4.0f))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getMouseWheelY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getMouseWheelY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(749);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight), ((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight) * (jfloat(0.9f))) / (jfloat(4.0f))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setScrollXForce_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setScrollXForce", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(753);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX = (frame[1].f);
	LINE_NUMBER(754);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX = (frame[1].f);
	LINE_NUMBER(755);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getScrollX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getScrollX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(759);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setScrollYForce_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setScrollYForce", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(763);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY = (frame[1].f);
	LINE_NUMBER(764);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY = (frame[1].f);
	LINE_NUMBER(765);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getScrollY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getScrollY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(769);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_updateVisualScroll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:updateVisualScroll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(777);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX = ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX);
	LINE_NUMBER(778);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY = ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY);
	LINE_NUMBER(779);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getVisualScrollX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getVisualScrollX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(782);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) != 0) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].f = ((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[-1].o))->F_visualAmountX;
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getVisualScrollY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getVisualScrollY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(786);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) != 0) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].f = ((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[-1].o))->F_visualAmountY;
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getVisualScrollPercentX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getVisualScrollPercentX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(790);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX) / ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX)), (jfloat(0)), (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getVisualScrollPercentY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getVisualScrollPercentY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(794);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY) / ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY)), (jfloat(0)), (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getScrollPercentX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getScrollPercentX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(798);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX) / ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX)));
	if (temp0 == 0) goto label_1;
	}
	INST_FCONST(1);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(799);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX) / ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX)), (jfloat(0)), (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setScrollPercentX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setScrollPercentX", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(803);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[1].f), (jfloat(0)), (jfloat(1)));
	((func_arc_scene_ui_ScrollPane_scrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_scrollX_float])(ctx, sp[0].o, (temp0 * temp1));
	LINE_NUMBER(804);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getScrollPercentY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getScrollPercentY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(807);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY) / ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY)));
	if (temp0 == 0) goto label_1;
	}
	INST_FCONST(1);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(808);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY) / ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY)), (jfloat(0)), (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setScrollPercentY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setScrollPercentY", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(812);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[1].f), (jfloat(0)), (jfloat(1)));
	((func_arc_scene_ui_ScrollPane_scrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_scrollY_float])(ctx, sp[0].o, (temp0 * temp1));
	LINE_NUMBER(813);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setFlickScroll_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setFlickScroll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(816);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScroll) != (frame[1].i)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(817);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScroll = (frame[1].i);
	LINE_NUMBER(818);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(819);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScrollListener;
	jint temp0 = (jint)((func_arc_scene_ui_ScrollPane_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(821);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScrollListener;
	jint temp0 = (jint)((func_arc_scene_ui_ScrollPane_removeListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_removeListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(822);
	((func_arc_scene_ui_ScrollPane_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(823);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setFlickScrollTapSquareSize_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setFlickScrollTapSquareSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(826);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScrollListener;
	sp[0].o = (jobject)((func_arc_scene_event_ElementGestureListener_getGestureDetector_R_arc_input_GestureDetector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ElementGestureListener_getGestureDetector_R_arc_input_GestureDetector])(ctx, sp[0].o);
	((func_arc_input_GestureDetector_setTapSquareSize_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_GestureDetector_setTapSquareSize_float])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(827);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_scrollTo_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:scrollTo", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(834);
	((func_arc_scene_ui_ScrollPane_scrollTo_float_float_float_float_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_scrollTo_float_float_float_float_boolean_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (jint(0)), (jint(0)));
	LINE_NUMBER(835);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_scrollTo_float_float_float_float_boolean_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:scrollTo", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(842);
	frame[7].f = ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX);
	LINE_NUMBER(843);
	if ((frame[5].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(844);
	frame[7].f = (((frame[1].f) - (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaWidth) / (jfloat(2)))) + ((frame[3].f) / (jfloat(2))));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(846);
	if ((floatCompare(((frame[1].f) + (frame[3].f)), ((frame[7].f) + ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaWidth)), -1)) <= 0) goto label_5;
	}
	{
	frame[7].f = (((frame[1].f) + (frame[3].f)) - ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaWidth));
	}
label_5:;
	{
	LINE_NUMBER(847);
	if ((floatCompare((frame[1].f), (frame[7].f), 1)) >= 0) goto label_4;
	}
	INST_FLOAD(1);
	INST_FSTORE(7);
label_4:;
	{
	LINE_NUMBER(849);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[7].f), (jfloat(0)), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX));
	((func_arc_scene_ui_ScrollPane_scrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_scrollX_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(851);
	frame[8].f = ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY);
	LINE_NUMBER(852);
	if ((frame[6].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(853);
	frame[8].f = (((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY) - (frame[2].f)) + (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight) / (jfloat(2)))) - ((frame[4].f) / (jfloat(2))));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(855);
	if ((floatCompare((frame[8].f), (((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY) - (frame[2].f)) - (frame[4].f)) + ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight)), -1)) <= 0) goto label_11;
	}
	{
	frame[8].f = (((((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY) - (frame[2].f)) - (frame[4].f)) + ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight));
	}
label_11:;
	{
	LINE_NUMBER(856);
	if ((floatCompare((frame[8].f), (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY) - (frame[2].f)), 1)) >= 0) goto label_10;
	}
	{
	frame[8].f = (((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY) - (frame[2].f));
	}
label_10:;
	{
	LINE_NUMBER(858);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[8].f), (jfloat(0)), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY));
	((func_arc_scene_ui_ScrollPane_scrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_scrollY_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(859);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getMaxX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getMaxX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(863);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getMaxY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getMaxY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(868);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getScrollBarHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getScrollBarHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(872);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) != 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(873);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(874);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	frame[1].f = temp0;
	}
label_3:;
	{
	LINE_NUMBER(875);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[1].f = temp2;
	}
label_4:;
	{
	LINE_NUMBER(876);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getScrollBarWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getScrollBarWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(880);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) != 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(881);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(882);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[1].f = temp0;
	}
label_3:;
	{
	LINE_NUMBER(883);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[1].f = temp2;
	}
label_4:;
	{
	LINE_NUMBER(884);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getScrollWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getScrollWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(889);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaWidth);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getScrollHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getScrollHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(894);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_areaHeight);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane_isScrollX_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:isScrollX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(899);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setScrollX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setScrollX", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(903);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[1].f), (jfloat(0)), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX));
	((func_arc_scene_ui_ScrollPane_scrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_scrollX_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(904);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane_isScrollY_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:isScrollY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(908);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setScrollY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setScrollY", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(912);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[1].f), (jfloat(0)), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY));
	((func_arc_scene_ui_ScrollPane_scrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_scrollY_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(913);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setScrollingDisabled", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(917);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableX = (frame[1].i);
	LINE_NUMBER(918);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableY = (frame[2].i);
	LINE_NUMBER(919);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setScrollingDisabledX_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setScrollingDisabledX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(922);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableX = (frame[1].i);
	LINE_NUMBER(923);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setScrollingDisabledY_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setScrollingDisabledY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(926);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableY = (frame[1].i);
	LINE_NUMBER(927);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane_isScrollingDisabledX_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:isScrollingDisabledX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(930);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableX);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane_isScrollingDisabledY_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:isScrollingDisabledY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(934);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableY);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane_isLeftEdge_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:isLeftEdge", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(938);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), (jfloat(0)), 1)) > 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane_isRightEdge_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:isRightEdge", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(942);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX), -1)) < 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane_isTopEdge_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:isTopEdge", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(946);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), (jfloat(0)), 1)) > 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane_isBottomEdge_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:isBottomEdge", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(950);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY), -1)) < 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane_isDragging_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:isDragging", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(954);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_draggingPointer) == (jint(-1))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane_isPanning_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:isPanning", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(958);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScrollListener;
	sp[0].o = (jobject)((func_arc_scene_event_ElementGestureListener_getGestureDetector_R_arc_input_GestureDetector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ElementGestureListener_getGestureDetector_R_arc_input_GestureDetector])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_input_GestureDetector_isPanning_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_GestureDetector_isPanning_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane_isFlinging_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:isFlinging", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(962);
	if ((floatCompare(((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTimer), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getVelocityX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getVelocityX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(967);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityX);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setVelocityX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setVelocityX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(971);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityX = (frame[1].f);
	LINE_NUMBER(972);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ScrollPane_getVelocityY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getVelocityY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(976);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityY);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setVelocityY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setVelocityY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(980);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityY = (frame[1].f);
	LINE_NUMBER(981);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setOverscroll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(988);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollX = (frame[1].i);
	LINE_NUMBER(989);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollY = (frame[2].i);
	LINE_NUMBER(990);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setupOverscroll_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setupOverscroll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(997);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance = (frame[1].f);
	LINE_NUMBER(998);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin = (frame[2].f);
	LINE_NUMBER(999);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMax = (frame[3].f);
	LINE_NUMBER(1000);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setForceScroll_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setForceScroll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1007);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_forceScrollX = (frame[1].i);
	LINE_NUMBER(1008);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_forceScrollY = (frame[2].i);
	LINE_NUMBER(1009);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane_isForceScrollX_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:isForceScrollX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1012);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_forceScrollX);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane_isForceScrollY_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:isForceScrollY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1016);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_forceScrollY);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setFlingTime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setFlingTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1021);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTime = (frame[1].f);
	LINE_NUMBER(1022);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setClamp_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setClamp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1026);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_clamp = (frame[1].i);
	LINE_NUMBER(1027);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setScrollBarPositions_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setScrollBarPositions", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1031);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollOnBottom = (frame[1].i);
	LINE_NUMBER(1032);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollOnRight = (frame[2].i);
	LINE_NUMBER(1033);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setFadeScrollBars", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1037);
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeScrollBars) != (frame[1].i)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1038);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeScrollBars = (frame[1].i);
	LINE_NUMBER(1039);
	if ((frame[1].i) != 0) goto label_3;
	}
	{
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlpha = ((jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlphaSeconds);
	}
label_3:;
	{
	LINE_NUMBER(1040);
	((func_arc_scene_ui_ScrollPane_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(1041);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setupFadeScrollBars_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setupFadeScrollBars", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1044);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlphaSeconds = (frame[1].f);
	LINE_NUMBER(1045);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeDelaySeconds = (frame[2].f);
	LINE_NUMBER(1046);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setSmoothScrolling_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setSmoothScrolling", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1049);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_smoothScrolling = (frame[1].i);
	LINE_NUMBER(1050);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setScrollbarsOnTop_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setScrollbarsOnTop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1058);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollbarsOnTop = (frame[1].i);
	LINE_NUMBER(1059);
	((func_arc_scene_ui_ScrollPane_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(1060);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane_getVariableSizeKnobs_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:getVariableSizeKnobs", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1063);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_variableSizeKnobs);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setVariableSizeKnobs_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setVariableSizeKnobs", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1071);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_variableSizeKnobs = (frame[1].i);
	LINE_NUMBER(1072);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ScrollPane_setCancelTouchFocus_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane:setCancelTouchFocus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1079);
	((arc_scene_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_cancelTouchFocus = (frame[1].i);
	LINE_NUMBER(1080);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_ScrollPane[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Group_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_ui_ScrollPane_draw,
	(void *) M_arc_scene_ui_ScrollPane_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane_hit_float_float_boolean_R_arc_scene_Element,
	(void *) M_arc_scene_Element_remove_R_boolean,
	(void *) M_arc_scene_Element_dragged_arc_func_Floatc2,
	(void *) M_arc_scene_Element_scrolled_arc_func_Floatc,
	(void *) M_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addAction_arc_scene_Action,
	(void *) M_arc_scene_Element_actions_Array1_arc_scene_Action,
	(void *) M_arc_scene_Element_removeAction_arc_scene_Action,
	(void *) M_arc_scene_Element_getActions_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_hasActions_R_boolean,
	(void *) M_arc_scene_Element_clearActions,
	(void *) M_arc_scene_Element_clearListeners,
	(void *) M_arc_scene_Group_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_Group_setScene_arc_scene_Scene,
	(void *) M_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean,
	(void *) M_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_hasParent_R_boolean,
	(void *) M_arc_scene_Element_isTouchable_R_boolean,
	(void *) M_arc_scene_Element_getX_int_R_float,
	(void *) M_arc_scene_Element_getY_int_R_float,
	(void *) M_arc_scene_Element_setPosition_float_float,
	(void *) M_arc_scene_Element_setPosition_float_float_int,
	(void *) M_arc_scene_Element_moveBy_float_float,
	(void *) M_arc_scene_Element_getWidth_R_float,
	(void *) M_arc_scene_Element_setWidth_float,
	(void *) M_arc_scene_Element_getHeight_R_float,
	(void *) M_arc_scene_Element_setHeight_float,
	(void *) M_arc_scene_Element_getTop_R_float,
	(void *) M_arc_scene_Element_getRight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_sizeChanged,
	(void *) M_arc_scene_Element_rotationChanged,
	(void *) M_arc_scene_Element_setSize_float,
	(void *) M_arc_scene_Element_setSize_float_float,
	(void *) M_arc_scene_Element_sizeBy_float,
	(void *) M_arc_scene_Element_sizeBy_float_float,
	(void *) M_arc_scene_Element_setBounds_float_float_float_float,
	(void *) M_arc_scene_Element_setOrigin_float_float,
	(void *) M_arc_scene_Element_setOrigin_int,
	(void *) M_arc_scene_Element_setScale_float,
	(void *) M_arc_scene_Element_setScale_float_float,
	(void *) M_arc_scene_Element_scaleBy_float,
	(void *) M_arc_scene_Element_scaleBy_float_float,
	(void *) M_arc_scene_Element_getRotation_R_float,
	(void *) M_arc_scene_Element_setRotation_float,
	(void *) M_arc_scene_Element_setRotationOrigin_float_int,
	(void *) M_arc_scene_Element_rotateBy_float,
	(void *) M_arc_scene_Element_setColor_float_float_float_float,
	(void *) M_arc_scene_Element_setColor_arc_graphics_Color,
	(void *) M_arc_scene_Element_toFront,
	(void *) M_arc_scene_Element_toBack,
	(void *) M_arc_scene_Element_getZIndex_R_int,
	(void *) M_arc_scene_Element_setZIndex_int,
	(void *) M_arc_scene_Element_clipBegin_R_boolean,
	(void *) M_arc_scene_Element_clipBegin_float_float_float_float_R_boolean,
	(void *) M_arc_scene_Element_clipEnd,
	(void *) M_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_ui_ScrollPane_getMinWidth_R_float,
	(void *) M_arc_scene_ui_ScrollPane_getMinHeight_R_float,
	(void *) M_arc_scene_ui_ScrollPane_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_ScrollPane_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_validate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_needsLayout_R_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidateHierarchy,
	(void *) M_arc_scene_ui_layout_WidgetGroup_pack,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean,
	(void *) M_arc_scene_ui_ScrollPane_layout,
	(void *) M_arc_scene_Element_keepInStage,
	(void *) M_arc_scene_Element_setTranslation_float_float,
	(void *) M_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable,
	(void *) M_arc_scene_Element_keyDown_arc_func_Cons,
	(void *) M_arc_scene_Element_fireClick,
	(void *) M_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener,
	(void *) M_arc_scene_Element_hovered_java_lang_Runnable,
	(void *) M_arc_scene_Element_exited_java_lang_Runnable,
	(void *) M_arc_scene_Element_released_java_lang_Runnable,
	(void *) M_arc_scene_Element_change,
	(void *) M_arc_scene_Element_changed_java_lang_Runnable,
	(void *) M_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element,
	(void *) M_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element,
	(void *) M_arc_scene_Element_touchable_arc_func_Prov,
	(void *) M_arc_scene_Group_setCullingArea_arc_math_geom_Rect,
	(void *) M_arc_scene_Group_drawChildren,
	(void *) M_arc_scene_Group_computeTransform_R_arc_math_Mat,
	(void *) M_arc_scene_Group_applyTransform_arc_math_Mat,
	(void *) M_arc_scene_Group_resetTransform,
	(void *) M_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect,
	(void *) M_arc_scene_ui_layout_WidgetGroup_childrenChanged,
	(void *) M_arc_scene_Group_forEach_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element,
	(void *) M_arc_scene_Group_fill_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_style_Drawable_arc_func_Cons,
	(void *) M_arc_scene_Group_addChild_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAt_int_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildBefore_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAfter_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_ui_ScrollPane_removeChild_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane_removeChild_arc_scene_Element_boolean_R_boolean,
	(void *) M_arc_scene_Group_clearChildren,
	(void *) M_arc_scene_Group_find_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element,
	(void *) M_arc_scene_Group_swapActor_int_int_R_boolean,
	(void *) M_arc_scene_Group_swapActor_arc_scene_Element_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq,
	(void *) M_arc_scene_Group_hasChildren_R_boolean,
	(void *) M_arc_scene_Group_isTransform_R_boolean,
	(void *) M_arc_scene_Group_setTransform_boolean,
	(void *) M_arc_scene_Group_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Group_toString_java_lang_StringBuilder_int,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_arc_scene_Group_boolean,
	(void *) M_arc_scene_ui_ScrollPane_resetFade,
	(void *) M_arc_scene_ui_ScrollPane_cancelTouchFocus,
	(void *) M_arc_scene_ui_ScrollPane_cancel,
	(void *) M_arc_scene_ui_ScrollPane_clamp,
	(void *) M_arc_scene_ui_ScrollPane_getStyle_R_arc_scene_ui_ScrollPane$ScrollPaneStyle,
	(void *) M_arc_scene_ui_ScrollPane_setStyle_arc_scene_ui_ScrollPane$ScrollPaneStyle,
	(void *) M_arc_scene_ui_ScrollPane_setClip_boolean,
	(void *) M_arc_scene_ui_ScrollPane_fling_float_float_float,
	(void *) M_arc_scene_ui_ScrollPane_getWidget_R_arc_scene_Element,
	(void *) M_arc_scene_ui_ScrollPane_setWidget_arc_scene_Element,
	(void *) M_arc_scene_ui_ScrollPane_scrollX_float,
	(void *) M_arc_scene_ui_ScrollPane_scrollY_float,
	(void *) M_arc_scene_ui_ScrollPane_visualScrollX_float,
	(void *) M_arc_scene_ui_ScrollPane_visualScrollY_float,
	(void *) M_arc_scene_ui_ScrollPane_getMouseWheelX_R_float,
	(void *) M_arc_scene_ui_ScrollPane_getMouseWheelY_R_float,
	(void *) M_arc_scene_ui_ScrollPane_setScrollXForce_float,
	(void *) M_arc_scene_ui_ScrollPane_getScrollX_R_float,
	(void *) M_arc_scene_ui_ScrollPane_setScrollYForce_float,
	(void *) M_arc_scene_ui_ScrollPane_getScrollY_R_float,
	(void *) M_arc_scene_ui_ScrollPane_updateVisualScroll,
	(void *) M_arc_scene_ui_ScrollPane_getVisualScrollX_R_float,
	(void *) M_arc_scene_ui_ScrollPane_getVisualScrollY_R_float,
	(void *) M_arc_scene_ui_ScrollPane_getVisualScrollPercentX_R_float,
	(void *) M_arc_scene_ui_ScrollPane_getVisualScrollPercentY_R_float,
	(void *) M_arc_scene_ui_ScrollPane_getScrollPercentX_R_float,
	(void *) M_arc_scene_ui_ScrollPane_setScrollPercentX_float,
	(void *) M_arc_scene_ui_ScrollPane_getScrollPercentY_R_float,
	(void *) M_arc_scene_ui_ScrollPane_setScrollPercentY_float,
	(void *) M_arc_scene_ui_ScrollPane_setFlickScroll_boolean,
	(void *) M_arc_scene_ui_ScrollPane_setFlickScrollTapSquareSize_float,
	(void *) M_arc_scene_ui_ScrollPane_scrollTo_float_float_float_float,
	(void *) M_arc_scene_ui_ScrollPane_scrollTo_float_float_float_float_boolean_boolean,
	(void *) M_arc_scene_ui_ScrollPane_getMaxX_R_float,
	(void *) M_arc_scene_ui_ScrollPane_getMaxY_R_float,
	(void *) M_arc_scene_ui_ScrollPane_getScrollBarHeight_R_float,
	(void *) M_arc_scene_ui_ScrollPane_getScrollBarWidth_R_float,
	(void *) M_arc_scene_ui_ScrollPane_getScrollWidth_R_float,
	(void *) M_arc_scene_ui_ScrollPane_getScrollHeight_R_float,
	(void *) M_arc_scene_ui_ScrollPane_isScrollX_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane_setScrollX_float,
	(void *) M_arc_scene_ui_ScrollPane_isScrollY_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane_setScrollY_float,
	(void *) M_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean,
	(void *) M_arc_scene_ui_ScrollPane_setScrollingDisabledX_boolean,
	(void *) M_arc_scene_ui_ScrollPane_setScrollingDisabledY_boolean,
	(void *) M_arc_scene_ui_ScrollPane_isScrollingDisabledX_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane_isScrollingDisabledY_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane_isLeftEdge_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane_isRightEdge_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane_isTopEdge_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane_isBottomEdge_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane_isDragging_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane_isPanning_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane_isFlinging_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane_getVelocityX_R_float,
	(void *) M_arc_scene_ui_ScrollPane_setVelocityX_float,
	(void *) M_arc_scene_ui_ScrollPane_getVelocityY_R_float,
	(void *) M_arc_scene_ui_ScrollPane_setVelocityY_float,
	(void *) M_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean,
	(void *) M_arc_scene_ui_ScrollPane_setupOverscroll_float_float_float,
	(void *) M_arc_scene_ui_ScrollPane_setForceScroll_boolean_boolean,
	(void *) M_arc_scene_ui_ScrollPane_isForceScrollX_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane_isForceScrollY_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane_setFlingTime_float,
	(void *) M_arc_scene_ui_ScrollPane_setClamp_boolean,
	(void *) M_arc_scene_ui_ScrollPane_setScrollBarPositions_boolean_boolean,
	(void *) M_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean,
	(void *) M_arc_scene_ui_ScrollPane_setupFadeScrollBars_float_float,
	(void *) M_arc_scene_ui_ScrollPane_setSmoothScrolling_boolean,
	(void *) M_arc_scene_ui_ScrollPane_setScrollbarsOnTop_boolean,
	(void *) M_arc_scene_ui_ScrollPane_getVariableSizeKnobs_R_boolean,
	(void *) M_arc_scene_ui_ScrollPane_setVariableSizeKnobs_boolean,
	(void *) M_arc_scene_ui_ScrollPane_setCancelTouchFocus_boolean,
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
	{ "draw", "()V" },
	{ "act", "(F)V" },
	{ "updateVisibility", "()V" },
	{ "hasMouse", "()Z" },
	{ "hasKeyboard", "()Z" },
	{ "hasScroll", "()Z" },
	{ "requestKeyboard", "()V" },
	{ "requestScroll", "()V" },
	{ "fire", "(Larc/scene/event/SceneEvent;)Z" },
	{ "notify", "(Larc/scene/event/SceneEvent;Z)Z" },
	{ "hit", "(FFZ)Larc/scene/Element;" },
	{ "remove", "()Z" },
	{ "dragged", "(Larc/func/Floatc2;)V" },
	{ "scrolled", "(Larc/func/Floatc;)V" },
	{ "addListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getListeners", "()Larc/struct/Seq;" },
	{ "addCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getCaptureListeners", "()Larc/struct/Seq;" },
	{ "addAction", "(Larc/scene/Action;)V" },
	{ "actions", "([Larc/scene/Action;)V" },
	{ "removeAction", "(Larc/scene/Action;)V" },
	{ "getActions", "()Larc/struct/Seq;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getScene", "()Larc/scene/Scene;" },
	{ "setScene", "(Larc/scene/Scene;)V" },
	{ "isDescendantOf", "(Larc/func/Boolf;)Z" },
	{ "isDescendantOf", "(Larc/scene/Element;)Z" },
	{ "isAscendantOf", "(Larc/scene/Element;)Z" },
	{ "hasParent", "()Z" },
	{ "isTouchable", "()Z" },
	{ "getX", "(I)F" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "sizeChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(F)V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "setRotationOrigin", "(FI)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(FFFF)V" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "getZIndex", "()I" },
	{ "setZIndex", "(I)V" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "stageToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToStageCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToParentCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToAscendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "parentToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "validate", "()V" },
	{ "needsLayout", "()Z" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "layout", "()V" },
	{ "keepInStage", "()V" },
	{ "setTranslation", "(FF)V" },
	{ "keyDown", "(Larc/input/KeyCode;Ljava/lang/Runnable;)V" },
	{ "keyDown", "(Larc/func/Cons;)V" },
	{ "fireClick", "()V" },
	{ "clicked", "(Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/input/KeyCode;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Larc/func/Cons;)Larc/scene/event/ClickListener;" },
	{ "tapped", "(Ljava/lang/Runnable;)Larc/scene/event/InputListener;" },
	{ "hovered", "(Ljava/lang/Runnable;)V" },
	{ "exited", "(Ljava/lang/Runnable;)V" },
	{ "released", "(Ljava/lang/Runnable;)V" },
	{ "change", "()V" },
	{ "changed", "(Ljava/lang/Runnable;)V" },
	{ "update", "(Ljava/lang/Runnable;)Larc/scene/Element;" },
	{ "visible", "(Larc/func/Boolp;)Larc/scene/Element;" },
	{ "touchable", "(Larc/func/Prov;)V" },
	{ "setCullingArea", "(Larc/math/geom/Rect;)V" },
	{ "drawChildren", "()V" },
	{ "computeTransform", "()Larc/math/Mat;" },
	{ "applyTransform", "(Larc/math/Mat;)V" },
	{ "resetTransform", "()V" },
	{ "getCullingArea", "()Larc/math/geom/Rect;" },
	{ "childrenChanged", "()V" },
	{ "forEach", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/Element;" },
	{ "fill", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/style/Drawable;Larc/func/Cons;)V" },
	{ "addChild", "(Larc/scene/Element;)V" },
	{ "addChildAt", "(ILarc/scene/Element;)V" },
	{ "addChildBefore", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "addChildAfter", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "removeChild", "(Larc/scene/Element;)Z" },
	{ "removeChild", "(Larc/scene/Element;Z)Z" },
	{ "clearChildren", "()V" },
	{ "find", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "findVisible", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "find", "(Larc/func/Boolf;)Larc/scene/Element;" },
	{ "swapActor", "(II)Z" },
	{ "swapActor", "(Larc/scene/Element;Larc/scene/Element;)Z" },
	{ "getChildren", "()Larc/struct/SnapshotSeq;" },
	{ "hasChildren", "()Z" },
	{ "isTransform", "()Z" },
	{ "setTransform", "(Z)V" },
	{ "localToDescendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "toString", "(Ljava/lang/StringBuilder;I)V" },
	{ "setLayoutEnabled", "(Larc/scene/Group;Z)V" },
	{ "resetFade", "()V" },
	{ "cancelTouchFocus", "()V" },
	{ "cancel", "()V" },
	{ "clamp", "()V" },
	{ "getStyle", "()Larc/scene/ui/ScrollPane$ScrollPaneStyle;" },
	{ "setStyle", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;)V" },
	{ "setClip", "(Z)V" },
	{ "fling", "(FFF)V" },
	{ "getWidget", "()Larc/scene/Element;" },
	{ "setWidget", "(Larc/scene/Element;)V" },
	{ "scrollX", "(F)V" },
	{ "scrollY", "(F)V" },
	{ "visualScrollX", "(F)V" },
	{ "visualScrollY", "(F)V" },
	{ "getMouseWheelX", "()F" },
	{ "getMouseWheelY", "()F" },
	{ "setScrollXForce", "(F)V" },
	{ "getScrollX", "()F" },
	{ "setScrollYForce", "(F)V" },
	{ "getScrollY", "()F" },
	{ "updateVisualScroll", "()V" },
	{ "getVisualScrollX", "()F" },
	{ "getVisualScrollY", "()F" },
	{ "getVisualScrollPercentX", "()F" },
	{ "getVisualScrollPercentY", "()F" },
	{ "getScrollPercentX", "()F" },
	{ "setScrollPercentX", "(F)V" },
	{ "getScrollPercentY", "()F" },
	{ "setScrollPercentY", "(F)V" },
	{ "setFlickScroll", "(Z)V" },
	{ "setFlickScrollTapSquareSize", "(F)V" },
	{ "scrollTo", "(FFFF)V" },
	{ "scrollTo", "(FFFFZZ)V" },
	{ "getMaxX", "()F" },
	{ "getMaxY", "()F" },
	{ "getScrollBarHeight", "()F" },
	{ "getScrollBarWidth", "()F" },
	{ "getScrollWidth", "()F" },
	{ "getScrollHeight", "()F" },
	{ "isScrollX", "()Z" },
	{ "setScrollX", "(F)V" },
	{ "isScrollY", "()Z" },
	{ "setScrollY", "(F)V" },
	{ "setScrollingDisabled", "(ZZ)V" },
	{ "setScrollingDisabledX", "(Z)V" },
	{ "setScrollingDisabledY", "(Z)V" },
	{ "isScrollingDisabledX", "()Z" },
	{ "isScrollingDisabledY", "()Z" },
	{ "isLeftEdge", "()Z" },
	{ "isRightEdge", "()Z" },
	{ "isTopEdge", "()Z" },
	{ "isBottomEdge", "()Z" },
	{ "isDragging", "()Z" },
	{ "isPanning", "()Z" },
	{ "isFlinging", "()Z" },
	{ "getVelocityX", "()F" },
	{ "setVelocityX", "(F)V" },
	{ "getVelocityY", "()F" },
	{ "setVelocityY", "(F)V" },
	{ "setOverscroll", "(ZZ)V" },
	{ "setupOverscroll", "(FFF)V" },
	{ "setForceScroll", "(ZZ)V" },
	{ "isForceScrollX", "()Z" },
	{ "isForceScrollY", "()Z" },
	{ "setFlingTime", "(F)V" },
	{ "setClamp", "(Z)V" },
	{ "setScrollBarPositions", "(ZZ)V" },
	{ "setFadeScrollBars", "(Z)V" },
	{ "setupFadeScrollBars", "(FF)V" },
	{ "setSmoothScrolling", "(Z)V" },
	{ "setScrollbarsOnTop", "(Z)V" },
	{ "getVariableSizeKnobs", "()Z" },
	{ "setVariableSizeKnobs", "(Z)V" },
	{ "setCancelTouchFocus", "(Z)V" },
};

static jclass innerClasses[] {
	&class_arc_scene_ui_ScrollPane$ScrollPaneStyle,
};

static FieldMetadata fields[] {
	{ "hScrollBounds", &class_arc_math_geom_Rect, offsetof(arc_scene_ui_ScrollPane, F_hScrollBounds), "Larc/math/geom/Rect;", 16 },
	{ "vScrollBounds", &class_arc_math_geom_Rect, offsetof(arc_scene_ui_ScrollPane, F_vScrollBounds), "Larc/math/geom/Rect;", 16 },
	{ "hKnobBounds", &class_arc_math_geom_Rect, offsetof(arc_scene_ui_ScrollPane, F_hKnobBounds), "Larc/math/geom/Rect;", 16 },
	{ "vKnobBounds", &class_arc_math_geom_Rect, offsetof(arc_scene_ui_ScrollPane, F_vKnobBounds), "Larc/math/geom/Rect;", 16 },
	{ "lastPoint", &class_arc_math_geom_Vec2, offsetof(arc_scene_ui_ScrollPane, F_lastPoint), "Larc/math/geom/Vec2;", 16 },
	{ "widgetAreaBounds", &class_arc_math_geom_Rect, offsetof(arc_scene_ui_ScrollPane, F_widgetAreaBounds), "Larc/math/geom/Rect;", 18 },
	{ "widgetCullingArea", &class_arc_math_geom_Rect, offsetof(arc_scene_ui_ScrollPane, F_widgetCullingArea), "Larc/math/geom/Rect;", 18 },
	{ "scissorBounds", &class_arc_math_geom_Rect, offsetof(arc_scene_ui_ScrollPane, F_scissorBounds), "Larc/math/geom/Rect;", 18 },
	{ "disableX", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_disableX), "Z", 4 },
	{ "disableY", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_disableY), "Z", 4 },
	{ "scrollX", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_scrollX), "Z", 0 },
	{ "scrollY", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_scrollY), "Z", 0 },
	{ "vScrollOnRight", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_vScrollOnRight), "Z", 0 },
	{ "hScrollOnBottom", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_hScrollOnBottom), "Z", 0 },
	{ "amountX", &class_float, offsetof(arc_scene_ui_ScrollPane, F_amountX), "F", 0 },
	{ "amountY", &class_float, offsetof(arc_scene_ui_ScrollPane, F_amountY), "F", 0 },
	{ "visualAmountX", &class_float, offsetof(arc_scene_ui_ScrollPane, F_visualAmountX), "F", 0 },
	{ "visualAmountY", &class_float, offsetof(arc_scene_ui_ScrollPane, F_visualAmountY), "F", 0 },
	{ "maxX", &class_float, offsetof(arc_scene_ui_ScrollPane, F_maxX), "F", 0 },
	{ "maxY", &class_float, offsetof(arc_scene_ui_ScrollPane, F_maxY), "F", 0 },
	{ "touchScrollH", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_touchScrollH), "Z", 0 },
	{ "touchScrollV", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_touchScrollV), "Z", 0 },
	{ "areaWidth", &class_float, offsetof(arc_scene_ui_ScrollPane, F_areaWidth), "F", 0 },
	{ "areaHeight", &class_float, offsetof(arc_scene_ui_ScrollPane, F_areaHeight), "F", 0 },
	{ "fadeAlpha", &class_float, offsetof(arc_scene_ui_ScrollPane, F_fadeAlpha), "F", 0 },
	{ "fadeAlphaSeconds", &class_float, offsetof(arc_scene_ui_ScrollPane, F_fadeAlphaSeconds), "F", 0 },
	{ "fadeDelay", &class_float, offsetof(arc_scene_ui_ScrollPane, F_fadeDelay), "F", 0 },
	{ "fadeDelaySeconds", &class_float, offsetof(arc_scene_ui_ScrollPane, F_fadeDelaySeconds), "F", 0 },
	{ "cancelTouchFocus", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_cancelTouchFocus), "Z", 0 },
	{ "flickScroll", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_flickScroll), "Z", 0 },
	{ "velocityX", &class_float, offsetof(arc_scene_ui_ScrollPane, F_velocityX), "F", 0 },
	{ "velocityY", &class_float, offsetof(arc_scene_ui_ScrollPane, F_velocityY), "F", 0 },
	{ "flingTimer", &class_float, offsetof(arc_scene_ui_ScrollPane, F_flingTimer), "F", 0 },
	{ "flingTime", &class_float, offsetof(arc_scene_ui_ScrollPane, F_flingTime), "F", 0 },
	{ "draggingPointer", &class_int, offsetof(arc_scene_ui_ScrollPane, F_draggingPointer), "I", 0 },
	{ "style", &class_arc_scene_ui_ScrollPane$ScrollPaneStyle, offsetof(arc_scene_ui_ScrollPane, F_style), "Larc/scene/ui/ScrollPane$ScrollPaneStyle;", 2 },
	{ "widget", &class_arc_scene_Element, offsetof(arc_scene_ui_ScrollPane, F_widget), "Larc/scene/Element;", 2 },
	{ "flickScrollListener", &class_arc_scene_event_ElementGestureListener, offsetof(arc_scene_ui_ScrollPane, F_flickScrollListener), "Larc/scene/event/ElementGestureListener;", 2 },
	{ "fadeScrollBars", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_fadeScrollBars), "Z", 2 },
	{ "smoothScrolling", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_smoothScrolling), "Z", 2 },
	{ "overscrollX", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_overscrollX), "Z", 2 },
	{ "overscrollY", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_overscrollY), "Z", 2 },
	{ "overscrollDistance", &class_float, offsetof(arc_scene_ui_ScrollPane, F_overscrollDistance), "F", 2 },
	{ "overscrollSpeedMin", &class_float, offsetof(arc_scene_ui_ScrollPane, F_overscrollSpeedMin), "F", 2 },
	{ "overscrollSpeedMax", &class_float, offsetof(arc_scene_ui_ScrollPane, F_overscrollSpeedMax), "F", 2 },
	{ "forceScrollX", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_forceScrollX), "Z", 2 },
	{ "forceScrollY", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_forceScrollY), "Z", 2 },
	{ "clamp", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_clamp), "Z", 2 },
	{ "scrollbarsOnTop", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_scrollbarsOnTop), "Z", 2 },
	{ "variableSizeKnobs", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_variableSizeKnobs), "Z", 2 },
	{ "clip", &class_boolean, offsetof(arc_scene_ui_ScrollPane, F_clip), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_ScrollPane_arc_scene_Element, 0, "(Larc/scene/Element;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_ScrollPane_arc_scene_Element_arc_scene_ui_ScrollPane$ScrollPaneStyle, 0, "(Larc/scene/Element;Larc/scene/ui/ScrollPane$ScrollPaneStyle;)V", 1 },
	{ "resetFade", (intptr_t) M_arc_scene_ui_ScrollPane_resetFade, VTABLE_arc_scene_ui_ScrollPane_resetFade, "()V", 0 },
	{ "cancelTouchFocus", (intptr_t) M_arc_scene_ui_ScrollPane_cancelTouchFocus, VTABLE_arc_scene_ui_ScrollPane_cancelTouchFocus, "()V", 1 },
	{ "cancel", (intptr_t) M_arc_scene_ui_ScrollPane_cancel, VTABLE_arc_scene_ui_ScrollPane_cancel, "()V", 1 },
	{ "clamp", (intptr_t) M_arc_scene_ui_ScrollPane_clamp, VTABLE_arc_scene_ui_ScrollPane_clamp, "()V", 0 },
	{ "getStyle", (intptr_t) M_arc_scene_ui_ScrollPane_getStyle_R_arc_scene_ui_ScrollPane$ScrollPaneStyle, VTABLE_arc_scene_ui_ScrollPane_getStyle_R_arc_scene_ui_ScrollPane$ScrollPaneStyle, "()Larc/scene/ui/ScrollPane$ScrollPaneStyle;", 1 },
	{ "setStyle", (intptr_t) M_arc_scene_ui_ScrollPane_setStyle_arc_scene_ui_ScrollPane$ScrollPaneStyle, VTABLE_arc_scene_ui_ScrollPane_setStyle_arc_scene_ui_ScrollPane$ScrollPaneStyle, "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;)V", 1 },
	{ "act", (intptr_t) M_arc_scene_ui_ScrollPane_act_float, VTABLE_arc_scene_ui_ScrollPane_act_float, "(F)V", 1 },
	{ "setClip", (intptr_t) M_arc_scene_ui_ScrollPane_setClip_boolean, VTABLE_arc_scene_ui_ScrollPane_setClip_boolean, "(Z)V", 1 },
	{ "layout", (intptr_t) M_arc_scene_ui_ScrollPane_layout, VTABLE_arc_scene_ui_ScrollPane_layout, "()V", 1 },
	{ "draw", (intptr_t) M_arc_scene_ui_ScrollPane_draw, VTABLE_arc_scene_ui_ScrollPane_draw, "()V", 1 },
	{ "fling", (intptr_t) M_arc_scene_ui_ScrollPane_fling_float_float_float, VTABLE_arc_scene_ui_ScrollPane_fling_float_float_float, "(FFF)V", 1 },
	{ "getPrefWidth", (intptr_t) M_arc_scene_ui_ScrollPane_getPrefWidth_R_float, VTABLE_arc_scene_ui_ScrollPane_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_arc_scene_ui_ScrollPane_getPrefHeight_R_float, VTABLE_arc_scene_ui_ScrollPane_getPrefHeight_R_float, "()F", 1 },
	{ "getMinWidth", (intptr_t) M_arc_scene_ui_ScrollPane_getMinWidth_R_float, VTABLE_arc_scene_ui_ScrollPane_getMinWidth_R_float, "()F", 1 },
	{ "getMinHeight", (intptr_t) M_arc_scene_ui_ScrollPane_getMinHeight_R_float, VTABLE_arc_scene_ui_ScrollPane_getMinHeight_R_float, "()F", 1 },
	{ "getWidget", (intptr_t) M_arc_scene_ui_ScrollPane_getWidget_R_arc_scene_Element, VTABLE_arc_scene_ui_ScrollPane_getWidget_R_arc_scene_Element, "()Larc/scene/Element;", 1 },
	{ "setWidget", (intptr_t) M_arc_scene_ui_ScrollPane_setWidget_arc_scene_Element, VTABLE_arc_scene_ui_ScrollPane_setWidget_arc_scene_Element, "(Larc/scene/Element;)V", 1 },
	{ "removeChild", (intptr_t) M_arc_scene_ui_ScrollPane_removeChild_arc_scene_Element_R_boolean, VTABLE_arc_scene_ui_ScrollPane_removeChild_arc_scene_Element_R_boolean, "(Larc/scene/Element;)Z", 1 },
	{ "removeChild", (intptr_t) M_arc_scene_ui_ScrollPane_removeChild_arc_scene_Element_boolean_R_boolean, VTABLE_arc_scene_ui_ScrollPane_removeChild_arc_scene_Element_boolean_R_boolean, "(Larc/scene/Element;Z)Z", 1 },
	{ "hit", (intptr_t) M_arc_scene_ui_ScrollPane_hit_float_float_boolean_R_arc_scene_Element, VTABLE_arc_scene_ui_ScrollPane_hit_float_float_boolean_R_arc_scene_Element, "(FFZ)Larc/scene/Element;", 1 },
	{ "scrollX", (intptr_t) M_arc_scene_ui_ScrollPane_scrollX_float, VTABLE_arc_scene_ui_ScrollPane_scrollX_float, "(F)V", 4 },
	{ "scrollY", (intptr_t) M_arc_scene_ui_ScrollPane_scrollY_float, VTABLE_arc_scene_ui_ScrollPane_scrollY_float, "(F)V", 4 },
	{ "visualScrollX", (intptr_t) M_arc_scene_ui_ScrollPane_visualScrollX_float, VTABLE_arc_scene_ui_ScrollPane_visualScrollX_float, "(F)V", 4 },
	{ "visualScrollY", (intptr_t) M_arc_scene_ui_ScrollPane_visualScrollY_float, VTABLE_arc_scene_ui_ScrollPane_visualScrollY_float, "(F)V", 4 },
	{ "getMouseWheelX", (intptr_t) M_arc_scene_ui_ScrollPane_getMouseWheelX_R_float, VTABLE_arc_scene_ui_ScrollPane_getMouseWheelX_R_float, "()F", 4 },
	{ "getMouseWheelY", (intptr_t) M_arc_scene_ui_ScrollPane_getMouseWheelY_R_float, VTABLE_arc_scene_ui_ScrollPane_getMouseWheelY_R_float, "()F", 4 },
	{ "setScrollXForce", (intptr_t) M_arc_scene_ui_ScrollPane_setScrollXForce_float, VTABLE_arc_scene_ui_ScrollPane_setScrollXForce_float, "(F)V", 1 },
	{ "getScrollX", (intptr_t) M_arc_scene_ui_ScrollPane_getScrollX_R_float, VTABLE_arc_scene_ui_ScrollPane_getScrollX_R_float, "()F", 1 },
	{ "setScrollYForce", (intptr_t) M_arc_scene_ui_ScrollPane_setScrollYForce_float, VTABLE_arc_scene_ui_ScrollPane_setScrollYForce_float, "(F)V", 1 },
	{ "getScrollY", (intptr_t) M_arc_scene_ui_ScrollPane_getScrollY_R_float, VTABLE_arc_scene_ui_ScrollPane_getScrollY_R_float, "()F", 1 },
	{ "updateVisualScroll", (intptr_t) M_arc_scene_ui_ScrollPane_updateVisualScroll, VTABLE_arc_scene_ui_ScrollPane_updateVisualScroll, "()V", 1 },
	{ "getVisualScrollX", (intptr_t) M_arc_scene_ui_ScrollPane_getVisualScrollX_R_float, VTABLE_arc_scene_ui_ScrollPane_getVisualScrollX_R_float, "()F", 1 },
	{ "getVisualScrollY", (intptr_t) M_arc_scene_ui_ScrollPane_getVisualScrollY_R_float, VTABLE_arc_scene_ui_ScrollPane_getVisualScrollY_R_float, "()F", 1 },
	{ "getVisualScrollPercentX", (intptr_t) M_arc_scene_ui_ScrollPane_getVisualScrollPercentX_R_float, VTABLE_arc_scene_ui_ScrollPane_getVisualScrollPercentX_R_float, "()F", 1 },
	{ "getVisualScrollPercentY", (intptr_t) M_arc_scene_ui_ScrollPane_getVisualScrollPercentY_R_float, VTABLE_arc_scene_ui_ScrollPane_getVisualScrollPercentY_R_float, "()F", 1 },
	{ "getScrollPercentX", (intptr_t) M_arc_scene_ui_ScrollPane_getScrollPercentX_R_float, VTABLE_arc_scene_ui_ScrollPane_getScrollPercentX_R_float, "()F", 1 },
	{ "setScrollPercentX", (intptr_t) M_arc_scene_ui_ScrollPane_setScrollPercentX_float, VTABLE_arc_scene_ui_ScrollPane_setScrollPercentX_float, "(F)V", 1 },
	{ "getScrollPercentY", (intptr_t) M_arc_scene_ui_ScrollPane_getScrollPercentY_R_float, VTABLE_arc_scene_ui_ScrollPane_getScrollPercentY_R_float, "()F", 1 },
	{ "setScrollPercentY", (intptr_t) M_arc_scene_ui_ScrollPane_setScrollPercentY_float, VTABLE_arc_scene_ui_ScrollPane_setScrollPercentY_float, "(F)V", 1 },
	{ "setFlickScroll", (intptr_t) M_arc_scene_ui_ScrollPane_setFlickScroll_boolean, VTABLE_arc_scene_ui_ScrollPane_setFlickScroll_boolean, "(Z)V", 1 },
	{ "setFlickScrollTapSquareSize", (intptr_t) M_arc_scene_ui_ScrollPane_setFlickScrollTapSquareSize_float, VTABLE_arc_scene_ui_ScrollPane_setFlickScrollTapSquareSize_float, "(F)V", 1 },
	{ "scrollTo", (intptr_t) M_arc_scene_ui_ScrollPane_scrollTo_float_float_float_float, VTABLE_arc_scene_ui_ScrollPane_scrollTo_float_float_float_float, "(FFFF)V", 1 },
	{ "scrollTo", (intptr_t) M_arc_scene_ui_ScrollPane_scrollTo_float_float_float_float_boolean_boolean, VTABLE_arc_scene_ui_ScrollPane_scrollTo_float_float_float_float_boolean_boolean, "(FFFFZZ)V", 1 },
	{ "getMaxX", (intptr_t) M_arc_scene_ui_ScrollPane_getMaxX_R_float, VTABLE_arc_scene_ui_ScrollPane_getMaxX_R_float, "()F", 1 },
	{ "getMaxY", (intptr_t) M_arc_scene_ui_ScrollPane_getMaxY_R_float, VTABLE_arc_scene_ui_ScrollPane_getMaxY_R_float, "()F", 1 },
	{ "getScrollBarHeight", (intptr_t) M_arc_scene_ui_ScrollPane_getScrollBarHeight_R_float, VTABLE_arc_scene_ui_ScrollPane_getScrollBarHeight_R_float, "()F", 1 },
	{ "getScrollBarWidth", (intptr_t) M_arc_scene_ui_ScrollPane_getScrollBarWidth_R_float, VTABLE_arc_scene_ui_ScrollPane_getScrollBarWidth_R_float, "()F", 1 },
	{ "getScrollWidth", (intptr_t) M_arc_scene_ui_ScrollPane_getScrollWidth_R_float, VTABLE_arc_scene_ui_ScrollPane_getScrollWidth_R_float, "()F", 1 },
	{ "getScrollHeight", (intptr_t) M_arc_scene_ui_ScrollPane_getScrollHeight_R_float, VTABLE_arc_scene_ui_ScrollPane_getScrollHeight_R_float, "()F", 1 },
	{ "isScrollX", (intptr_t) M_arc_scene_ui_ScrollPane_isScrollX_R_boolean, VTABLE_arc_scene_ui_ScrollPane_isScrollX_R_boolean, "()Z", 1 },
	{ "setScrollX", (intptr_t) M_arc_scene_ui_ScrollPane_setScrollX_float, VTABLE_arc_scene_ui_ScrollPane_setScrollX_float, "(F)V", 1 },
	{ "isScrollY", (intptr_t) M_arc_scene_ui_ScrollPane_isScrollY_R_boolean, VTABLE_arc_scene_ui_ScrollPane_isScrollY_R_boolean, "()Z", 1 },
	{ "setScrollY", (intptr_t) M_arc_scene_ui_ScrollPane_setScrollY_float, VTABLE_arc_scene_ui_ScrollPane_setScrollY_float, "(F)V", 1 },
	{ "setScrollingDisabled", (intptr_t) M_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean, VTABLE_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean, "(ZZ)V", 1 },
	{ "setScrollingDisabledX", (intptr_t) M_arc_scene_ui_ScrollPane_setScrollingDisabledX_boolean, VTABLE_arc_scene_ui_ScrollPane_setScrollingDisabledX_boolean, "(Z)V", 1 },
	{ "setScrollingDisabledY", (intptr_t) M_arc_scene_ui_ScrollPane_setScrollingDisabledY_boolean, VTABLE_arc_scene_ui_ScrollPane_setScrollingDisabledY_boolean, "(Z)V", 1 },
	{ "isScrollingDisabledX", (intptr_t) M_arc_scene_ui_ScrollPane_isScrollingDisabledX_R_boolean, VTABLE_arc_scene_ui_ScrollPane_isScrollingDisabledX_R_boolean, "()Z", 1 },
	{ "isScrollingDisabledY", (intptr_t) M_arc_scene_ui_ScrollPane_isScrollingDisabledY_R_boolean, VTABLE_arc_scene_ui_ScrollPane_isScrollingDisabledY_R_boolean, "()Z", 1 },
	{ "isLeftEdge", (intptr_t) M_arc_scene_ui_ScrollPane_isLeftEdge_R_boolean, VTABLE_arc_scene_ui_ScrollPane_isLeftEdge_R_boolean, "()Z", 1 },
	{ "isRightEdge", (intptr_t) M_arc_scene_ui_ScrollPane_isRightEdge_R_boolean, VTABLE_arc_scene_ui_ScrollPane_isRightEdge_R_boolean, "()Z", 1 },
	{ "isTopEdge", (intptr_t) M_arc_scene_ui_ScrollPane_isTopEdge_R_boolean, VTABLE_arc_scene_ui_ScrollPane_isTopEdge_R_boolean, "()Z", 1 },
	{ "isBottomEdge", (intptr_t) M_arc_scene_ui_ScrollPane_isBottomEdge_R_boolean, VTABLE_arc_scene_ui_ScrollPane_isBottomEdge_R_boolean, "()Z", 1 },
	{ "isDragging", (intptr_t) M_arc_scene_ui_ScrollPane_isDragging_R_boolean, VTABLE_arc_scene_ui_ScrollPane_isDragging_R_boolean, "()Z", 1 },
	{ "isPanning", (intptr_t) M_arc_scene_ui_ScrollPane_isPanning_R_boolean, VTABLE_arc_scene_ui_ScrollPane_isPanning_R_boolean, "()Z", 1 },
	{ "isFlinging", (intptr_t) M_arc_scene_ui_ScrollPane_isFlinging_R_boolean, VTABLE_arc_scene_ui_ScrollPane_isFlinging_R_boolean, "()Z", 1 },
	{ "getVelocityX", (intptr_t) M_arc_scene_ui_ScrollPane_getVelocityX_R_float, VTABLE_arc_scene_ui_ScrollPane_getVelocityX_R_float, "()F", 1 },
	{ "setVelocityX", (intptr_t) M_arc_scene_ui_ScrollPane_setVelocityX_float, VTABLE_arc_scene_ui_ScrollPane_setVelocityX_float, "(F)V", 1 },
	{ "getVelocityY", (intptr_t) M_arc_scene_ui_ScrollPane_getVelocityY_R_float, VTABLE_arc_scene_ui_ScrollPane_getVelocityY_R_float, "()F", 1 },
	{ "setVelocityY", (intptr_t) M_arc_scene_ui_ScrollPane_setVelocityY_float, VTABLE_arc_scene_ui_ScrollPane_setVelocityY_float, "(F)V", 1 },
	{ "setOverscroll", (intptr_t) M_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean, VTABLE_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean, "(ZZ)V", 1 },
	{ "setupOverscroll", (intptr_t) M_arc_scene_ui_ScrollPane_setupOverscroll_float_float_float, VTABLE_arc_scene_ui_ScrollPane_setupOverscroll_float_float_float, "(FFF)V", 1 },
	{ "setForceScroll", (intptr_t) M_arc_scene_ui_ScrollPane_setForceScroll_boolean_boolean, VTABLE_arc_scene_ui_ScrollPane_setForceScroll_boolean_boolean, "(ZZ)V", 1 },
	{ "isForceScrollX", (intptr_t) M_arc_scene_ui_ScrollPane_isForceScrollX_R_boolean, VTABLE_arc_scene_ui_ScrollPane_isForceScrollX_R_boolean, "()Z", 1 },
	{ "isForceScrollY", (intptr_t) M_arc_scene_ui_ScrollPane_isForceScrollY_R_boolean, VTABLE_arc_scene_ui_ScrollPane_isForceScrollY_R_boolean, "()Z", 1 },
	{ "setFlingTime", (intptr_t) M_arc_scene_ui_ScrollPane_setFlingTime_float, VTABLE_arc_scene_ui_ScrollPane_setFlingTime_float, "(F)V", 1 },
	{ "setClamp", (intptr_t) M_arc_scene_ui_ScrollPane_setClamp_boolean, VTABLE_arc_scene_ui_ScrollPane_setClamp_boolean, "(Z)V", 1 },
	{ "setScrollBarPositions", (intptr_t) M_arc_scene_ui_ScrollPane_setScrollBarPositions_boolean_boolean, VTABLE_arc_scene_ui_ScrollPane_setScrollBarPositions_boolean_boolean, "(ZZ)V", 1 },
	{ "setFadeScrollBars", (intptr_t) M_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean, VTABLE_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean, "(Z)V", 1 },
	{ "setupFadeScrollBars", (intptr_t) M_arc_scene_ui_ScrollPane_setupFadeScrollBars_float_float, VTABLE_arc_scene_ui_ScrollPane_setupFadeScrollBars_float_float, "(FF)V", 1 },
	{ "setSmoothScrolling", (intptr_t) M_arc_scene_ui_ScrollPane_setSmoothScrolling_boolean, VTABLE_arc_scene_ui_ScrollPane_setSmoothScrolling_boolean, "(Z)V", 1 },
	{ "setScrollbarsOnTop", (intptr_t) M_arc_scene_ui_ScrollPane_setScrollbarsOnTop_boolean, VTABLE_arc_scene_ui_ScrollPane_setScrollbarsOnTop_boolean, "(Z)V", 1 },
	{ "getVariableSizeKnobs", (intptr_t) M_arc_scene_ui_ScrollPane_getVariableSizeKnobs_R_boolean, VTABLE_arc_scene_ui_ScrollPane_getVariableSizeKnobs_R_boolean, "()Z", 1 },
	{ "setVariableSizeKnobs", (intptr_t) M_arc_scene_ui_ScrollPane_setVariableSizeKnobs_boolean, VTABLE_arc_scene_ui_ScrollPane_setVariableSizeKnobs_boolean, "(Z)V", 1 },
	{ "setCancelTouchFocus", (intptr_t) M_arc_scene_ui_ScrollPane_setCancelTouchFocus_boolean, VTABLE_arc_scene_ui_ScrollPane_setCancelTouchFocus_boolean, "(Z)V", 1 },
};

Class class_arc_scene_ui_ScrollPane{
		.nativeName = (intptr_t) "arc/scene/ui/ScrollPane",
		.parentClass = (intptr_t) &class_arc_scene_ui_layout_WidgetGroup,
		.size = sizeof(arc_scene_ui_ScrollPane),
		.classVtable = (intptr_t) vtable_arc_scene_ui_ScrollPane,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_ScrollPane,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_ScrollPane,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 51,
		.nativeFields = (intptr_t) fields,
		.methodCount = 86,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 225,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_ScrollPane = registerClass(&class_arc_scene_ui_ScrollPane);

}
