#include "arc/scene/ui/TextArea_TextAreaListener.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "arc/scene/ui/TextField.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/Input.h"
#include "arc/scene/ui/TextField_TextFieldClickListener.h"
#include "arc/scene/event/ClickListener.h"
#include "arc/struct/IntSeq.h"
#include "arc/scene/ui/TextArea_TextAreaListener.h"
#include "arc/input/KeyCode.h"
#include "arc/scene/Scene.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/ui/TextField_TextFieldStyle.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/event/InputListener.h"
#include "arc/scene/ui/TextArea.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {


void mark_arc_scene_ui_TextArea$TextAreaListener(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_TextField$TextFieldClickListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_TextArea$TextAreaListener *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_ui_TextArea$TextAreaListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_TextField$TextFieldClickListener(ctx);
}

void init_arc_scene_ui_TextArea$TextAreaListener_arc_scene_ui_TextArea(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea$TextAreaListener:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextArea$TextAreaListener(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(338);
	((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_ui_TextField$TextFieldClickListener_arc_scene_ui_TextField(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextArea$TextAreaListener_setCursorPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea$TextAreaListener:setCursorPosition", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_moveOffset = (jfloat(-1.0f));
	LINE_NUMBER(344);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[3].o = sp[0].o;
	LINE_NUMBER(345);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font;
	frame[4].o = sp[0].o;
	LINE_NUMBER(347);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_TextArea_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextArea_getHeight_R_float])(ctx, sp[0].o);
	frame[5].f = temp0;
	LINE_NUMBER(349);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(350);
	jfloat temp0 = frame[5].f;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	frame[5].f = (temp0 - temp1);
	LINE_NUMBER(351);
	jfloat temp2 = frame[1].f;
	jfloat temp3 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, (frame[3].o)))(ctx, (frame[3].o));
	frame[1].f = (temp2 - temp3);
	}
label_5:;
	{
	LINE_NUMBER(353);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), (frame[1].f));
	frame[1].f = temp0;
	LINE_NUMBER(354);
	if ((frame[3].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(355);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	frame[2].f = (temp0 - temp1);
	}
label_9:;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (frame[5].f) - (frame[2].f);
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_Font_getLineHeight_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getLineHeight_R_float])(ctx, (frame[4].o));
	jdouble temp2 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (jdouble((temp0 / temp1))));
	jint temp3 = jint(temp2);
	sp[1].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_cursorLine = (temp3 + ((jint)((arc_scene_ui_TextArea *) NULL_CHECK(sp[1].o))->F_firstLineShowing));
	LINE_NUMBER(359);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp4 = jint(0);
	sp[1].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp5 = (jint)((arc_scene_ui_TextArea *) NULL_CHECK(sp[1].o))->F_cursorLine;
	sp[1].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp6 = (jint)((func_arc_scene_ui_TextArea_getLines_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextArea_getLines_R_int])(ctx, sp[1].o);
	jint temp7 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp5, (temp6 - (jint(1))));
	jint temp8 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp4, temp7);
	((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_cursorLine = temp8;
	LINE_NUMBER(360);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp9 = (jint)((arc_scene_ui_TextArea *) NULL_CHECK(sp[1].o))->F_cursorLine;
	sp[1].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp10 = (jint)((arc_scene_ui_TextArea *) NULL_CHECK(sp[1].o))->F_firstLineShowing;
	sp[1].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp11 = (jint)((arc_scene_ui_TextArea *) NULL_CHECK(sp[1].o))->F_firstLineShowing;
	sp[1].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp12 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp9, temp10, ((temp11 + ((jint)((arc_scene_ui_TextArea *) NULL_CHECK(sp[1].o))->F_linesShowing)) - (jint(1))));
	((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_cursorLine = temp12;
	LINE_NUMBER(362);
	M_arc_scene_ui_TextField$TextFieldClickListener_setCursorPosition_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(363);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextArea_updateCurrentLine) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextArea_updateCurrentLine])(ctx, sp[0].o);
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextArea$TextAreaListener_checkFocusTraverse_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea$TextAreaListener:checkFocusTraverse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_focusTraversal) == 0) goto label_1;
	}
	{
	if ((frame[1].i) != (9)) goto label_1;
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

jbool M_arc_scene_ui_TextArea$TextAreaListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea$TextAreaListener:keyDown", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(373);
	jint temp0 = (jint)M_arc_scene_ui_TextField$TextFieldClickListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(374);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_scene_ui_TextArea_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextArea_getScene_R_arc_scene_Scene])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(375);
	if ((frame[4].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, (frame[4].o));
	sp[1].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(376);
	frame[5].i = (jint(0));
	LINE_NUMBER(377);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_shiftLeft;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_shiftRight;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
label_6:;
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(378);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_down;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(379);
	if ((frame[6].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection) != 0) goto label_14;
	}
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_selectionStart = ((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[1].o))->F_cursor);
	LINE_NUMBER(382);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection = (jint(1));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextArea_clearSelection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextArea_clearSelection])(ctx, sp[0].o);
	}
label_14:;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextArea_moveCursorLine_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextArea_moveCursorLine_int])(ctx, sp[0].o, (((jint)((arc_scene_ui_TextArea *) NULL_CHECK(sp[1].o))->F_cursorLine) + (jint(1))));
	LINE_NUMBER(388);
	frame[5].i = (jint(1));
	goto label_18;
	}
label_10:;
	{
	LINE_NUMBER(390);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_up;
	if (sp[0].o != sp[1].o) goto label_19;
	}
	{
	LINE_NUMBER(391);
	if ((frame[6].i) == 0) goto label_21;
	}
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection) != 0) goto label_23;
	}
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_selectionStart = ((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[1].o))->F_cursor);
	LINE_NUMBER(394);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection = (jint(1));
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextArea_clearSelection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextArea_clearSelection])(ctx, sp[0].o);
	}
label_23:;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextArea_moveCursorLine_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextArea_moveCursorLine_int])(ctx, sp[0].o, (((jint)((arc_scene_ui_TextArea *) NULL_CHECK(sp[1].o))->F_cursorLine) - (jint(1))));
	LINE_NUMBER(400);
	frame[5].i = (jint(1));
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_moveOffset = (jfloat(-1.0f));
	}
label_18:;
	{
	LINE_NUMBER(405);
	if ((frame[5].i) == 0) goto label_27;
	}
	{
	LINE_NUMBER(406);
	((func_arc_scene_ui_TextArea$TextAreaListener_scheduleKeyRepeatTask_arc_input_KeyCode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextArea$TextAreaListener_scheduleKeyRepeatTask_arc_input_KeyCode])(ctx, (frame[0].o), (frame[2].o));
	}
label_27:;
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextArea_showCursor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextArea_showCursor])(ctx, sp[0].o);
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextArea$TextAreaListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean(jcontext ctx, jobject self, jobject param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea$TextAreaListener:keyTyped", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(416);
	jint temp0 = (jint)M_arc_scene_ui_TextField$TextFieldClickListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(417);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextArea_showCursor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextArea_showCursor])(ctx, sp[0].o);
	LINE_NUMBER(418);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextArea$TextAreaListener_goHome_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea$TextAreaListener:goHome", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(423);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = (jint(0));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = ((jint)((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_cursorLine) * (jint(2));
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_linesBreak;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK(sp[1].o))->F_linesBreak;
	sp[2].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, (((jint)((arc_scene_ui_TextArea *) NULL_CHECK(sp[2].o))->F_cursorLine) * (jint(2))));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	}
label_3:;
	LINE_NUMBER(428);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextArea$TextAreaListener_goEnd_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea$TextAreaListener:goEnd", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(432);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_cursorLine;
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_arc_scene_ui_TextArea_getLines_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextArea_getLines_R_int])(ctx, sp[0].o);
	if (temp0 < temp1) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[1].o))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (((jint)((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_cursorLine) * (jint(2))) + (jint(1));
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_linesBreak;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK(sp[1].o))->F_linesBreak;
	sp[2].o = (jobject)((arc_scene_ui_TextArea$TextAreaListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, ((((jint)((arc_scene_ui_TextArea *) NULL_CHECK(sp[2].o))->F_cursorLine) * (jint(2))) + (jint(1))));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	}
label_3:;
	LINE_NUMBER(437);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_TextArea$TextAreaListener[] {
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
	(void *) M_arc_scene_ui_TextField$TextFieldClickListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_ui_TextField$TextFieldClickListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_ui_TextField$TextFieldClickListener_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_ClickListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_ClickListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_ui_TextArea$TextAreaListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_ui_TextField$TextFieldClickListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_ui_TextArea$TextAreaListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
	(void *) M_arc_scene_event_ClickListener_cancel,
	(void *) M_arc_scene_ui_TextField$TextFieldClickListener_clicked_arc_scene_event_InputEvent_float_float,
	(void *) M_arc_scene_event_ClickListener_isOver_arc_scene_Element_float_float_R_boolean,
	(void *) M_arc_scene_event_ClickListener_inTapSquare_float_float_R_boolean,
	(void *) M_arc_scene_event_ClickListener_inTapSquare_R_boolean,
	(void *) M_arc_scene_event_ClickListener_invalidateTapSquare,
	(void *) M_arc_scene_event_ClickListener_isPressed_R_boolean,
	(void *) M_arc_scene_event_ClickListener_isVisualPressed_R_boolean,
	(void *) M_arc_scene_event_ClickListener_isOver_R_boolean,
	(void *) M_arc_scene_event_ClickListener_getTapSquareSize_R_float,
	(void *) M_arc_scene_event_ClickListener_setTapSquareSize_float,
	(void *) M_arc_scene_event_ClickListener_setTapCountInterval_float,
	(void *) M_arc_scene_event_ClickListener_getTapCount_R_int,
	(void *) M_arc_scene_event_ClickListener_setTapCount_int,
	(void *) M_arc_scene_event_ClickListener_getTouchDownX_R_float,
	(void *) M_arc_scene_event_ClickListener_getTouchDownY_R_float,
	(void *) M_arc_scene_event_ClickListener_getPressedButton_R_arc_input_KeyCode,
	(void *) M_arc_scene_event_ClickListener_getPressedPointer_R_int,
	(void *) M_arc_scene_event_ClickListener_getButton_R_arc_input_KeyCode,
	(void *) M_arc_scene_event_ClickListener_setButton_arc_input_KeyCode,
	(void *) M_arc_scene_ui_TextArea$TextAreaListener_setCursorPosition_float_float,
	(void *) M_arc_scene_ui_TextArea$TextAreaListener_goHome_boolean,
	(void *) M_arc_scene_ui_TextArea$TextAreaListener_goEnd_boolean,
	(void *) M_arc_scene_ui_TextField$TextFieldClickListener_scheduleKeyRepeatTask_arc_input_KeyCode,
	(void *) M_arc_scene_ui_TextArea$TextAreaListener_checkFocusTraverse_char_R_boolean,
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
	{ "cancel", "()V" },
	{ "clicked", "(Larc/scene/event/InputEvent;FF)V" },
	{ "isOver", "(Larc/scene/Element;FF)Z" },
	{ "inTapSquare", "(FF)Z" },
	{ "inTapSquare", "()Z" },
	{ "invalidateTapSquare", "()V" },
	{ "isPressed", "()Z" },
	{ "isVisualPressed", "()Z" },
	{ "isOver", "()Z" },
	{ "getTapSquareSize", "()F" },
	{ "setTapSquareSize", "(F)V" },
	{ "setTapCountInterval", "(F)V" },
	{ "getTapCount", "()I" },
	{ "setTapCount", "(I)V" },
	{ "getTouchDownX", "()F" },
	{ "getTouchDownY", "()F" },
	{ "getPressedButton", "()Larc/input/KeyCode;" },
	{ "getPressedPointer", "()I" },
	{ "getButton", "()Larc/input/KeyCode;" },
	{ "setButton", "(Larc/input/KeyCode;)V" },
	{ "setCursorPosition", "(FF)V" },
	{ "goHome", "(Z)V" },
	{ "goEnd", "(Z)V" },
	{ "scheduleKeyRepeatTask", "(Larc/input/KeyCode;)V" },
	{ "checkFocusTraverse", "(C)Z" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_arc_scene_ui_TextArea, offsetof(arc_scene_ui_TextArea$TextAreaListener, F_this$0), "Larc/scene/ui/TextArea;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_TextArea$TextAreaListener_arc_scene_ui_TextArea, 0, "(Larc/scene/ui/TextArea;)V", 1 },
	{ "setCursorPosition", (intptr_t) M_arc_scene_ui_TextArea$TextAreaListener_setCursorPosition_float_float, VTABLE_arc_scene_ui_TextArea$TextAreaListener_setCursorPosition_float_float, "(FF)V", 4 },
	{ "checkFocusTraverse", (intptr_t) M_arc_scene_ui_TextArea$TextAreaListener_checkFocusTraverse_char_R_boolean, VTABLE_arc_scene_ui_TextArea$TextAreaListener_checkFocusTraverse_char_R_boolean, "(C)Z", 4 },
	{ "keyDown", (intptr_t) M_arc_scene_ui_TextArea$TextAreaListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_ui_TextArea$TextAreaListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z", 1 },
	{ "keyTyped", (intptr_t) M_arc_scene_ui_TextArea$TextAreaListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean, VTABLE_arc_scene_ui_TextArea$TextAreaListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean, "(Larc/scene/event/InputEvent;C)Z", 1 },
	{ "goHome", (intptr_t) M_arc_scene_ui_TextArea$TextAreaListener_goHome_boolean, VTABLE_arc_scene_ui_TextArea$TextAreaListener_goHome_boolean, "(Z)V", 4 },
	{ "goEnd", (intptr_t) M_arc_scene_ui_TextArea$TextAreaListener_goEnd_boolean, VTABLE_arc_scene_ui_TextArea$TextAreaListener_goEnd_boolean, "(Z)V", 4 },
};

Class class_arc_scene_ui_TextArea$TextAreaListener{
		.nativeName = (intptr_t) "arc/scene/ui/TextArea$TextAreaListener",
		.parentClass = (intptr_t) &class_arc_scene_ui_TextField$TextFieldClickListener,
		.size = sizeof(arc_scene_ui_TextArea$TextAreaListener),
		.classVtable = (intptr_t) vtable_arc_scene_ui_TextArea$TextAreaListener,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_TextArea$TextAreaListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_TextArea$TextAreaListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_TextArea,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 47,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_TextArea$TextAreaListener = registerClass(&class_arc_scene_ui_TextArea$TextAreaListener);

}

