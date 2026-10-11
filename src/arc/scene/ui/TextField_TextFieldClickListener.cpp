#include "arc/scene/ui/TextField_TextFieldClickListener.h"
#include "java/lang/StringBuilder.h"
#include "arc/scene/ui/TextField.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/Input.h"
#include "arc/scene/ui/TextField_TextFieldFilter.h"
#include "arc/scene/ui/TextField_TextFieldClickListener.h"
#include "arc/util/Timer_Task.h"
#include "arc/Application.h"
#include "arc/input/KeyCode.h"
#include "arc/scene/ui/TextField_KeyRepeatTask.h"
#include "java/lang/String.h"
#include "arc/util/Timer.h"
#include "arc/scene/ui/TextField_TextFieldStyle.h"
#include "arc/util/OS.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/scene/event/ClickListener.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/TextField_TextFieldListener.h"
#include "arc/scene/event/InputListener.h"
#include "arc/scene/event/InputEvent.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_scene_ui_TextField$TextFieldClickListener(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_ClickListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_TextField$TextFieldClickListener *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_ui_TextField$TextFieldClickListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_ClickListener(ctx);
}

void init_arc_scene_ui_TextField$TextFieldClickListener_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldClickListener:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextField$TextFieldClickListener(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(894);
	((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_ClickListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField$TextFieldClickListener_clicked_arc_scene_event_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldClickListener:clicked", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(897);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_imeData;
	if (sp[0].o == nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(898);
	jint temp0 = (jint)((func_arc_scene_ui_TextField$TextFieldClickListener_getTapCount_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField$TextFieldClickListener_getTapCount_R_int])(ctx, (frame[0].o));
	frame[4].i = (temp0 % (jint(4)));
	LINE_NUMBER(899);
	if ((frame[4].i) != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_clearSelection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_clearSelection])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(900);
	if ((frame[4].i) != (jint(2))) goto label_4;
	}
	{
	LINE_NUMBER(901);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_wordUnderCursor_float_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_wordUnderCursor_float_R_Array1_int])(ctx, sp[0].o, (frame[2].f));
	frame[5].o = sp[0].o;
	LINE_NUMBER(902);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_setSelection_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setSelection_int_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(0)))), ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(1)))));
	}
label_4:;
	{
	LINE_NUMBER(904);
	if ((frame[4].i) != (jint(3))) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_selectAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_selectAll])(ctx, sp[0].o);
	}
label_7:;
	LINE_NUMBER(905);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextField$TextFieldClickListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldClickListener:touchDown", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(909);
	jint temp0 = (jint)M_arc_scene_event_ClickListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(910);
	if ((frame[4].i) != 0) goto label_2;
	}
	{
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(911);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_disabled) != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_imeData;
	if (sp[0].o == nullptr) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(912);
	((func_arc_scene_ui_TextField$TextFieldClickListener_setCursorPosition_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField$TextFieldClickListener_setCursorPosition_float_float])(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(913);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_selectionStart = ((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[1].o))->F_cursor);
	LINE_NUMBER(914);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getScene_R_arc_scene_Scene])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(915);
	if ((frame[6].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	{
	LINE_NUMBER(916);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasInputDialog) != 0) goto label_9;
	}
	{
	LINE_NUMBER(917);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	((func_arc_Input_setOnscreenKeyboardVisible_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_setOnscreenKeyboardVisible_boolean])(ctx, sp[0].o, (jint(1)));
	}
label_9:;
	{
	LINE_NUMBER(919);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection = (jint(1));
	LINE_NUMBER(920);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField$TextFieldClickListener_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldClickListener:touchDragged", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(925);
	M_arc_scene_event_ClickListener_touchDragged_arc_scene_event_InputEvent_float_float_int(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i));
	LINE_NUMBER(926);
	((func_arc_scene_ui_TextField$TextFieldClickListener_setCursorPosition_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField$TextFieldClickListener_setCursorPosition_float_float])(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(927);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField$TextFieldClickListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldClickListener:touchUp", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(931);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_selectionStart;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 != ((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor)) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(932);
	M_arc_scene_event_ClickListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].o));
	LINE_NUMBER(933);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField$TextFieldClickListener_setCursorPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldClickListener:setCursorPosition", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(936);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_lastBlink = (jlong(0));
	LINE_NUMBER(937);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursorOn = (jint(0));
	LINE_NUMBER(938);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_arc_scene_ui_TextField_letterUnderCursor_float_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_letterUnderCursor_float_R_int])(ctx, sp[1].o, (frame[1].f));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	LINE_NUMBER(939);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField$TextFieldClickListener_goHome_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldClickListener:goHome", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(942);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = (jint(0));
	LINE_NUMBER(943);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField$TextFieldClickListener_goEnd_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldClickListener:goEnd", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(946);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[1].o))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	LINE_NUMBER(947);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextField$TextFieldClickListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldClickListener:keyDown", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(951);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_disabled) == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(952);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_imeData;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(954);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_lastBlink = (jlong(0));
	LINE_NUMBER(955);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursorOn = (jint(0));
	LINE_NUMBER(957);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getScene_R_arc_scene_Scene])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(958);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, (frame[3].o));
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (sp[0].o == sp[1].o) goto label_7;
	}
label_6:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(960);
	frame[4].i = (jint(0));
	LINE_NUMBER(961);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_ctrl_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_ctrl_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_alt_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_alt_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(962);
	if ((frame[5].i) == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_passwordMode) != 0) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(964);
	if ((frame[5].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(965);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_v;
	if (sp[0].o != sp[1].o) goto label_17;
	}
	{
	LINE_NUMBER(966);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	((func_arc_scene_ui_TextField_paste_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_paste_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(967);
	frame[4].i = (jint(1));
	}
label_17:;
	{
	LINE_NUMBER(969);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_c;
	if (sp[0].o == sp[1].o) goto label_20;
	}
	{
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_insert;
	if (sp[0].o != sp[1].o) goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(970);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_copy) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_copy])(ctx, sp[0].o);
	LINE_NUMBER(971);
	popStackFrame(ctx);
	return (jint(1));
	}
label_21:;
	{
	LINE_NUMBER(973);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_x;
	if (sp[0].o != sp[1].o) goto label_23;
	}
	{
	LINE_NUMBER(974);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_cut_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_cut_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(975);
	popStackFrame(ctx);
	return (jint(1));
	}
label_23:;
	{
	LINE_NUMBER(977);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_a;
	if (sp[0].o != sp[1].o) goto label_26;
	}
	{
	LINE_NUMBER(978);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_selectAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_selectAll])(ctx, sp[0].o);
	LINE_NUMBER(979);
	popStackFrame(ctx);
	return (jint(1));
	}
label_26:;
	{
	LINE_NUMBER(981);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_z;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	LINE_NUMBER(982);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_text;
	frame[7].o = sp[0].o;
	LINE_NUMBER(983);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[1].o))->F_undoText;
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(984);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_undoText = (jref) (frame[7].o);
	LINE_NUMBER(985);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_updateDisplayText) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_updateDisplayText])(ctx, sp[0].o);
	LINE_NUMBER(986);
	popStackFrame(ctx);
	return (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(990);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_shift_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_shift_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_34;
	}
	{
	LINE_NUMBER(991);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_insert;
	if (sp[0].o != sp[1].o) goto label_36;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	((func_arc_scene_ui_TextField_paste_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_paste_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, (jint(1)));
	}
label_36:;
	{
	LINE_NUMBER(992);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_forwardDel;
	if (sp[0].o != sp[1].o) goto label_37;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_cut_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_cut_boolean])(ctx, sp[0].o, (jint(1)));
	}
label_37:;
	{
	LINE_NUMBER(995);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[7].i = ((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor);
	LINE_NUMBER(998);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_left;
	if (sp[0].o != sp[1].o) goto label_39;
	}
	{
	LINE_NUMBER(999);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_moveCursor_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_moveCursor_boolean_boolean])(ctx, sp[0].o, (jint(0)), (frame[6].i));
	LINE_NUMBER(1000);
	frame[4].i = (jint(1));
	LINE_NUMBER(1001);
	goto label_43;
	}
label_39:;
	{
	LINE_NUMBER(1003);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_right;
	if (sp[0].o != sp[1].o) goto label_44;
	}
	{
	LINE_NUMBER(1004);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_moveCursor_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_moveCursor_boolean_boolean])(ctx, sp[0].o, (jint(1)), (frame[6].i));
	LINE_NUMBER(1005);
	frame[4].i = (jint(1));
	LINE_NUMBER(1006);
	goto label_43;
	}
label_44:;
	{
	LINE_NUMBER(1008);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_home;
	if (sp[0].o != sp[1].o) goto label_48;
	}
	{
	LINE_NUMBER(1009);
	((func_arc_scene_ui_TextField$TextFieldClickListener_goHome_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField$TextFieldClickListener_goHome_boolean])(ctx, (frame[0].o), (frame[6].i));
	LINE_NUMBER(1010);
	goto label_43;
	}
label_48:;
	{
	LINE_NUMBER(1012);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_end;
	if (sp[0].o != sp[1].o) goto label_51;
	}
	{
	LINE_NUMBER(1013);
	((func_arc_scene_ui_TextField$TextFieldClickListener_goEnd_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField$TextFieldClickListener_goEnd_boolean])(ctx, (frame[0].o), (frame[6].i));
	}
label_43:;
	{
	LINE_NUMBER(1018);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection) != 0) goto label_53;
	}
	{
	LINE_NUMBER(1019);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_selectionStart = (frame[7].i);
	LINE_NUMBER(1020);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection = (jint(1));
	}
label_53:;
	LINE_NUMBER(1022);
	goto label_51;
label_34:;
	{
	LINE_NUMBER(1025);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_left;
	if (sp[0].o != sp[1].o) goto label_56;
	}
	{
	LINE_NUMBER(1026);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_moveCursor_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_moveCursor_boolean_boolean])(ctx, sp[0].o, (jint(0)), (frame[6].i));
	LINE_NUMBER(1027);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_clearSelection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_clearSelection])(ctx, sp[0].o);
	LINE_NUMBER(1028);
	frame[4].i = (jint(1));
	}
label_56:;
	{
	LINE_NUMBER(1030);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_right;
	if (sp[0].o != sp[1].o) goto label_60;
	}
	{
	LINE_NUMBER(1031);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_moveCursor_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_moveCursor_boolean_boolean])(ctx, sp[0].o, (jint(1)), (frame[6].i));
	LINE_NUMBER(1032);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_clearSelection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_clearSelection])(ctx, sp[0].o);
	LINE_NUMBER(1033);
	frame[4].i = (jint(1));
	}
label_60:;
	{
	LINE_NUMBER(1035);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_home;
	if (sp[0].o != sp[1].o) goto label_64;
	}
	{
	LINE_NUMBER(1036);
	((func_arc_scene_ui_TextField$TextFieldClickListener_goHome_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField$TextFieldClickListener_goHome_boolean])(ctx, (frame[0].o), (frame[6].i));
	LINE_NUMBER(1037);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_clearSelection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_clearSelection])(ctx, sp[0].o);
	}
label_64:;
	{
	LINE_NUMBER(1039);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_end;
	if (sp[0].o != sp[1].o) goto label_51;
	}
	{
	LINE_NUMBER(1040);
	((func_arc_scene_ui_TextField$TextFieldClickListener_goEnd_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField$TextFieldClickListener_goEnd_boolean])(ctx, (frame[0].o), (frame[6].i));
	LINE_NUMBER(1041);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_clearSelection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_clearSelection])(ctx, sp[0].o);
	}
label_51:;
	{
	LINE_NUMBER(1044);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[1].o))->F_cursor;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[1].o))->F_text;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	jint temp3 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, temp2);
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp3;
	LINE_NUMBER(1046);
	if ((frame[4].i) == 0) goto label_70;
	}
	{
	LINE_NUMBER(1047);
	((func_arc_scene_ui_TextField$TextFieldClickListener_scheduleKeyRepeatTask_arc_input_KeyCode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField$TextFieldClickListener_scheduleKeyRepeatTask_arc_input_KeyCode])(ctx, (frame[0].o), (frame[2].o));
	}
label_70:;
	{
	LINE_NUMBER(1049);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField$TextFieldClickListener_scheduleKeyRepeatTask_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldClickListener:scheduleKeyRepeatTask", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1053);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyRepeatTask;
	jint temp0 = (jint)((func_arc_scene_ui_TextField$KeyRepeatTask_isScheduled_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField$KeyRepeatTask_isScheduled_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyRepeatTask;
	sp[0].o = (jobject)((arc_scene_ui_TextField$KeyRepeatTask *) NULL_CHECK(sp[0].o))->F_keycode;
	if (sp[0].o == (frame[1].o)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1054);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyRepeatTask;
	((arc_scene_ui_TextField$KeyRepeatTask *) NULL_CHECK(sp[0].o))->F_keycode = (jref) (frame[1].o);
	LINE_NUMBER(1055);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyRepeatTask;
	((func_arc_scene_ui_TextField$KeyRepeatTask_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField$KeyRepeatTask_cancel])(ctx, sp[0].o);
	LINE_NUMBER(1056);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyRepeatTask;
	sp[0].o = (jobject)SM_arc_util_Timer_schedule_arc_util_Timer$Task_float_float_R_arc_util_Timer$Task(ctx, sp[0].o, (clinit_arc_scene_ui_TextField(ctx), (jfloat)SF_arc_scene_ui_TextField_keyRepeatInitialTime), (clinit_arc_scene_ui_TextField(ctx), (jfloat)SF_arc_scene_ui_TextField_keyRepeatTime));
	}
label_2:;
	LINE_NUMBER(1058);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextField$TextFieldClickListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldClickListener:keyUp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1062);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_disabled) == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1063);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_imeData;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(1064);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyRepeatTask;
	((func_arc_scene_ui_TextField$KeyRepeatTask_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField$KeyRepeatTask_cancel])(ctx, sp[0].o);
	LINE_NUMBER(1065);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextField$TextFieldClickListener_checkFocusTraverse_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldClickListener:checkFocusTraverse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1069);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_focusTraversal) == 0) goto label_1;
	}
	{
	if ((frame[1].i) == (9)) goto label_2;
	}
	{
	if ((frame[1].i) == (13)) goto label_3;
	}
	{
	if ((frame[1].i) != (10)) goto label_1;
	}
label_3:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isMobile_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isMobile_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextField$TextFieldClickListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean(jcontext ctx, jobject self, jobject param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldClickListener:keyTyped", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1074);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_disabled) == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1077);
	switch((frame[2].i)) {
		case 8: goto label_2;
		case 9: goto label_2;
		case 10: goto label_2;
		case 13: goto label_2;
		case 127: goto label_2;
		default: goto label_3;
	}
	}
label_2:;
	{
	LINE_NUMBER(1083);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_imeData;
	if (sp[0].o == nullptr) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(1086);
	if ((frame[2].i) >= (32)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(1089);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getScene_R_arc_scene_Scene])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1090);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, (frame[3].o));
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (sp[0].o == sp[1].o) goto label_7;
	}
label_6:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(1092);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isMac) == 0) goto label_8;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_sym;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(1094);
	jint temp0 = (jint)((func_arc_scene_ui_TextField$TextFieldClickListener_checkFocusTraverse_char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField$TextFieldClickListener_checkFocusTraverse_char_R_boolean])(ctx, (frame[0].o), (frame[2].i));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(1095);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_shift_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_shift_R_boolean])(ctx, sp[1].o);
	((func_arc_scene_ui_TextField_next_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_next_boolean])(ctx, sp[0].o, temp0);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(1097);
	if ((frame[2].i) != (127)) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1098);
	if ((frame[2].i) != (8)) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(1099);
	if ((frame[2].i) == (10)) goto label_18;
	}
	{
	if ((frame[2].i) != (13)) goto label_19;
	}
label_18:;
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1100);
	if ((frame[6].i) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_writeEnters;
	sp[0].i = temp0;
	sp += 1;
	goto label_23;
	}
label_22:;
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_onlyFontChars) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean])(ctx, sp[0].o, (frame[2].i));
	if (temp0 == 0) goto label_25;
	}
label_24:;
	INST_ICONST(1);
	goto label_23;
label_25:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(1101);
	if ((frame[5].i) != 0) goto label_27;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_28;
label_27:;
	INST_ICONST(1);
	goto label_29;
label_28:;
	INST_ICONST(0);
label_29:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(1102);
	if ((frame[7].i) != 0) goto label_31;
	}
	INST_ILOAD(8);
	if ((--sp)->i == 0) goto label_11;
label_31:;
	{
	LINE_NUMBER(1103);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_text;
	frame[9].o = sp[0].o;
	LINE_NUMBER(1104);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[10].i = ((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor);
	LINE_NUMBER(1105);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_hasSelection) == 0) goto label_34;
	}
	{
	LINE_NUMBER(1106);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_arc_scene_ui_TextField_delete_boolean_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_delete_boolean_R_int])(ctx, sp[1].o, (jint(0)));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	goto label_36;
	}
label_34:;
	{
	LINE_NUMBER(1108);
	if ((frame[5].i) == 0) goto label_37;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor) <= 0) goto label_37;
	}
	{
	LINE_NUMBER(1109);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[2].o))->F_text;
	jint temp0 = jint(0);
	sp[3].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, temp0, (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[3].o))->F_cursor) - (jint(1))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[2].o))->F_text;
	sp[3].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[3].o))->F_cursor;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[3].o))->F_cursor = (temp1 - (jint(1)));
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, temp1);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(1110);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_renderOffset = (jfloat(0));
	}
label_37:;
	{
	LINE_NUMBER(1112);
	if ((frame[4].i) == 0) goto label_36;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_36;
	}
	{
	LINE_NUMBER(1113);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[2].o))->F_text;
	jint temp0 = jint(0);
	sp[3].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, temp0, ((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[3].o))->F_cursor));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[2].o))->F_text;
	sp[3].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[3].o))->F_cursor) + (jint(1))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	}
label_36:;
	{
	LINE_NUMBER(1116);
	if ((frame[7].i) == 0) goto label_41;
	}
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_41;
	{
	LINE_NUMBER(1118);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_filter;
	if (sp[0].o == nullptr) goto label_43;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_filter;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_arc_scene_ui_TextField$TextFieldFilter_acceptChar_arc_scene_ui_TextField_char_R_boolean) resolveInterfaceMethod(ctx, &class_arc_scene_ui_TextField$TextFieldFilter, INDEX_arc_scene_ui_TextField$TextFieldFilter_acceptChar_arc_scene_ui_TextField_char_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[2].i));
	if (temp0 != 0) goto label_43;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_43:;
	{
	LINE_NUMBER(1119);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[1].o))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)((func_arc_scene_ui_TextField_withinMaxLength_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_withinMaxLength_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_44;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_44:;
	{
	LINE_NUMBER(1120);
	if ((frame[6].i) == 0) goto label_45;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"\n"_j));
	goto label_46;
label_45:;
	INST_ILOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, sp[0].i);
	sp++;
label_46:;
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	LINE_NUMBER(1121);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[2].o))->F_cursor;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[2].o))->F_cursor = (temp0 + (jint(1)));
	sp[2].o = frame[11].o;
	sp[3].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[3].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[3].o))->F_text;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String])(ctx, sp[1].o, temp0, sp[2].o, sp[3].o);
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	}
label_41:;
	{
	LINE_NUMBER(1123);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = frame[9].o;
	sp[2].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[2].o))->F_text;
	jint temp0 = (jint)((func_arc_scene_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_48;
	}
	{
	LINE_NUMBER(1124);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[11].l = temp0;
	LINE_NUMBER(1125);
	jlong temp1 = (frame[11].l) - (jlong(750ll));
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((longCompare(temp1, ((jlong)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_lastChangeTime))) <= 0) goto label_51;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_undoText = (jref) (frame[9].o);
	}
label_51:;
	{
	LINE_NUMBER(1126);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_lastChangeTime = (frame[11].l);
	LINE_NUMBER(1127);
	goto label_53;
	}
label_48:;
	{
	LINE_NUMBER(1128);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = (frame[10].i);
	}
label_53:;
	{
	LINE_NUMBER(1129);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField_updateDisplayText) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_updateDisplayText])(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(1132);
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_listener;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_listener;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldClickListener *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_TextField$TextFieldListener_keyTyped_arc_scene_ui_TextField_char) resolveInterfaceMethod(ctx, &class_arc_scene_ui_TextField$TextFieldListener, INDEX_arc_scene_ui_TextField$TextFieldListener_keyTyped_arc_scene_ui_TextField_char, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[2].i));
	}
label_54:;
	{
	LINE_NUMBER(1133);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_TextField$TextFieldClickListener[] {
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
	(void *) M_arc_scene_ui_TextField$TextFieldClickListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_ui_TextField$TextFieldClickListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_ui_TextField$TextFieldClickListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
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
	(void *) M_arc_scene_ui_TextField$TextFieldClickListener_setCursorPosition_float_float,
	(void *) M_arc_scene_ui_TextField$TextFieldClickListener_goHome_boolean,
	(void *) M_arc_scene_ui_TextField$TextFieldClickListener_goEnd_boolean,
	(void *) M_arc_scene_ui_TextField$TextFieldClickListener_scheduleKeyRepeatTask_arc_input_KeyCode,
	(void *) M_arc_scene_ui_TextField$TextFieldClickListener_checkFocusTraverse_char_R_boolean,
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
	{ "this$0", &class_arc_scene_ui_TextField, offsetof(arc_scene_ui_TextField$TextFieldClickListener, F_this$0), "Larc/scene/ui/TextField;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_TextField$TextFieldClickListener_arc_scene_ui_TextField, 0, "(Larc/scene/ui/TextField;)V", 1 },
	{ "clicked", (intptr_t) M_arc_scene_ui_TextField$TextFieldClickListener_clicked_arc_scene_event_InputEvent_float_float, VTABLE_arc_scene_ui_TextField$TextFieldClickListener_clicked_arc_scene_event_InputEvent_float_float, "(Larc/scene/event/InputEvent;FF)V", 1 },
	{ "touchDown", (intptr_t) M_arc_scene_ui_TextField$TextFieldClickListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_ui_TextField$TextFieldClickListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
	{ "touchDragged", (intptr_t) M_arc_scene_ui_TextField$TextFieldClickListener_touchDragged_arc_scene_event_InputEvent_float_float_int, VTABLE_arc_scene_ui_TextField$TextFieldClickListener_touchDragged_arc_scene_event_InputEvent_float_float_int, "(Larc/scene/event/InputEvent;FFI)V", 1 },
	{ "touchUp", (intptr_t) M_arc_scene_ui_TextField$TextFieldClickListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_arc_scene_ui_TextField$TextFieldClickListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "setCursorPosition", (intptr_t) M_arc_scene_ui_TextField$TextFieldClickListener_setCursorPosition_float_float, VTABLE_arc_scene_ui_TextField$TextFieldClickListener_setCursorPosition_float_float, "(FF)V", 4 },
	{ "goHome", (intptr_t) M_arc_scene_ui_TextField$TextFieldClickListener_goHome_boolean, VTABLE_arc_scene_ui_TextField$TextFieldClickListener_goHome_boolean, "(Z)V", 4 },
	{ "goEnd", (intptr_t) M_arc_scene_ui_TextField$TextFieldClickListener_goEnd_boolean, VTABLE_arc_scene_ui_TextField$TextFieldClickListener_goEnd_boolean, "(Z)V", 4 },
	{ "keyDown", (intptr_t) M_arc_scene_ui_TextField$TextFieldClickListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_ui_TextField$TextFieldClickListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z", 1 },
	{ "scheduleKeyRepeatTask", (intptr_t) M_arc_scene_ui_TextField$TextFieldClickListener_scheduleKeyRepeatTask_arc_input_KeyCode, VTABLE_arc_scene_ui_TextField$TextFieldClickListener_scheduleKeyRepeatTask_arc_input_KeyCode, "(Larc/input/KeyCode;)V", 4 },
	{ "keyUp", (intptr_t) M_arc_scene_ui_TextField$TextFieldClickListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_ui_TextField$TextFieldClickListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z", 1 },
	{ "checkFocusTraverse", (intptr_t) M_arc_scene_ui_TextField$TextFieldClickListener_checkFocusTraverse_char_R_boolean, VTABLE_arc_scene_ui_TextField$TextFieldClickListener_checkFocusTraverse_char_R_boolean, "(C)Z", 4 },
	{ "keyTyped", (intptr_t) M_arc_scene_ui_TextField$TextFieldClickListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean, VTABLE_arc_scene_ui_TextField$TextFieldClickListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean, "(Larc/scene/event/InputEvent;C)Z", 1 },
};

Class class_arc_scene_ui_TextField$TextFieldClickListener{
		.nativeName = (intptr_t) "arc/scene/ui/TextField$TextFieldClickListener",
		.parentClass = (intptr_t) &class_arc_scene_event_ClickListener,
		.size = sizeof(arc_scene_ui_TextField$TextFieldClickListener),
		.classVtable = (intptr_t) vtable_arc_scene_ui_TextField$TextFieldClickListener,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_TextField$TextFieldClickListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_TextField$TextFieldClickListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_TextField,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 47,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_TextField$TextFieldClickListener = registerClass(&class_arc_scene_ui_TextField$TextFieldClickListener);

}

