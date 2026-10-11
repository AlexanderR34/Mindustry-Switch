#include "arc/scene/ui/TextField.h"
#include "java/lang/StringBuilder.h"
#include "arc/func/Prov.h"
#include "arc/scene/ui/TextField.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/Input.h"
#include "arc/scene/ui/TextField_TextFieldClickListener.h"
#include "arc/scene/event/IbeamCursorListener.h"
#include "arc/graphics/Color.h"
#include "arc/scene/ui/TextField_TextFieldValidator.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/scene/ui/TextField_invoke_arc_func_Prov_0.h"
#include "arc/scene/ui/TextField_KeyRepeatTask.h"
#include "arc/scene/ui/TextField_invoke_arc_func_Cons_0.h"
#include "arc/util/pooling/Pools.h"
#include "arc/util/Tmp.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/TextField_invoke_arc_scene_ui_TextField_TextFieldListener_1.h"
#include "arc/scene/ui/TextField_invoke_arc_scene_ui_TextField_TextFieldListener_0.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "arc/util/Time.h"
#include "arc/scene/event/ChangeListener_ChangeEvent.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/TextField_TextFieldListener.h"
#include "arc/math/geom/Vec2.h"
#include "arc/scene/ui/TextField_TextFieldFilter.h"
#include "arc/util/Timer_Task.h"
#include "arc/struct/FloatSeq.h"
#include "arc/Application.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/scene/ui/TextField_TextFieldStyle.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/TextArea.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/scene/Group.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/CharSequence.h"
#include "arc/Input_TextInput.h"
#include "arc/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "arc/scene/Element.h"
#include "arc/scene/utils/Disableable.h"
#include "arc/scene/ui/TextField_invoke_java_lang_Runnable_1.h"
#include "arc/scene/ui/TextField_invoke_java_lang_Runnable_0.h"
#include "arc/scene/event/EventListener.h"
#include "java/lang/Class.h"
#include "arc/scene/event/InputListener.h"
#include "arc/struct/SnapshotSeq.h"

extern "C" {

jchar SF_arc_scene_ui_TextField_BACKSPACE;
jchar SF_arc_scene_ui_TextField_TAB;
jchar SF_arc_scene_ui_TextField_DELETE;
jchar SF_arc_scene_ui_TextField_BULLET;
jobject SF_arc_scene_ui_TextField_tmp1;
jobject SF_arc_scene_ui_TextField_tmp2;
jobject SF_arc_scene_ui_TextField_tmp3;
jfloat SF_arc_scene_ui_TextField_keyRepeatInitialTime;
jfloat SF_arc_scene_ui_TextField_keyRepeatTime;

void mark_arc_scene_ui_TextField(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_scene_ui_TextField_tmp1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_TextField_tmp1)->clazz)->markFunction)((jobject) SF_arc_scene_ui_TextField_tmp1, mark, depth + 1);
		if (SF_arc_scene_ui_TextField_tmp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_TextField_tmp2)->clazz)->markFunction)((jobject) SF_arc_scene_ui_TextField_tmp2, mark, depth + 1);
		if (SF_arc_scene_ui_TextField_tmp3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_TextField_tmp3)->clazz)->markFunction)((jobject) SF_arc_scene_ui_TextField_tmp3, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_Element(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_TextField *) object;
	if (self->F_imeData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imeData)->clazz)->markFunction)((jobject) self->F_imeData, mark, depth + 1);
	if (self->F_layout)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_layout)->clazz)->markFunction)((jobject) self->F_layout, mark, depth + 1);
	if (self->F_glyphPositions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glyphPositions)->clazz)->markFunction)((jobject) self->F_glyphPositions, mark, depth + 1);
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
	if (self->F_displayText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_displayText)->clazz)->markFunction)((jobject) self->F_displayText, mark, depth + 1);
	if (self->F_inputDialogListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inputDialogListener)->clazz)->markFunction)((jobject) self->F_inputDialogListener, mark, depth + 1);
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_inputListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inputListener)->clazz)->markFunction)((jobject) self->F_inputListener, mark, depth + 1);
	if (self->F_listener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listener)->clazz)->markFunction)((jobject) self->F_listener, mark, depth + 1);
	if (self->F_validator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_validator)->clazz)->markFunction)((jobject) self->F_validator, mark, depth + 1);
	if (self->F_filter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filter)->clazz)->markFunction)((jobject) self->F_filter, mark, depth + 1);
	if (self->F_undoText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_undoText)->clazz)->markFunction)((jobject) self->F_undoText, mark, depth + 1);
	if (self->F_keyRepeatTask)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyRepeatTask)->clazz)->markFunction)((jobject) self->F_keyRepeatTask, mark, depth + 1);
	if (self->F_messageText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_messageText)->clazz)->markFunction)((jobject) self->F_messageText, mark, depth + 1);
	if (self->F_passwordBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_passwordBuffer)->clazz)->markFunction)((jobject) self->F_passwordBuffer, mark, depth + 1);
}

void init_arc_scene_ui_TextField(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextField(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(84);
	init_arc_scene_ui_TextField_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_TextField_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextField(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_scene;
	sp[2].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[2].o, (((jobject) &class_arc_scene_ui_TextField$TextFieldStyle)));
	init_arc_scene_ui_TextField_java_lang_String_arc_scene_ui_TextField$TextFieldStyle(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_arc_scene_ui_TextField$TextFieldStyle, sp[2].o)));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_TextField_java_lang_String_arc_scene_ui_TextField$TextFieldStyle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextField(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(91);
	init_arc_scene_Element(ctx, (frame[0].o));
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_GlyphLayout(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_GlyphLayout);
	init_arc_graphics_g2d_GlyphLayout_boolean(ctx, sp[1].o, (jint(1)));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_layout = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_arc_struct_FloatSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq(ctx, sp[1].o);
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_glyphPositions = (jref) sp[1].o;
	LINE_NUMBER(64);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_focusTraversal = (jint(1));
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_onlyFontChars = (jint(1));
	LINE_NUMBER(65);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_undoText = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(69);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursorOn = (jint(1));
	LINE_NUMBER(70);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasInputDialog = (jint(0));
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_TextField$KeyRepeatTask(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_TextField$KeyRepeatTask);
	init_arc_scene_ui_TextField$KeyRepeatTask_arc_scene_ui_TextField(ctx, sp[1].o, (frame[0].o));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_keyRepeatTask = (jref) sp[1].o;
	LINE_NUMBER(75);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHAlign = (8);
	LINE_NUMBER(78);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordCharacter = (149);
	LINE_NUMBER(80);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_maxLength = (jint(0));
	LINE_NUMBER(81);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_blinkTime = (jfloat(0.32f));
	LINE_NUMBER(92);
	((func_arc_scene_ui_TextField_setStyle_arc_scene_ui_TextField$TextFieldStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_setStyle_arc_scene_ui_TextField$TextFieldStyle])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(93);
	((func_arc_scene_ui_TextField_initialize) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_initialize])(ctx, (frame[0].o));
	LINE_NUMBER(94);
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_TextField_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_scene_ui_TextField_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_arc_scene_ui_TextField_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_initialize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:initialize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_arc_scene_ui_TextField_createInputListener_R_arc_scene_event_InputListener) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_createInputListener_R_arc_scene_event_InputListener])(ctx, (frame[0].o));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[1].o))->F_inputListener = (jref) sp[2].o;
	jint temp0 = (jint)((func_arc_scene_ui_TextField_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_IbeamCursorListener(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_event_IbeamCursorListener);
	init_arc_scene_event_IbeamCursorListener(ctx, sp[1].o);
	jint temp1 = (jint)((func_arc_scene_ui_TextField_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(101);
	((func_arc_scene_ui_TextField_addInputDialog) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_addInputDialog])(ctx, (frame[0].o));
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TextField_createInputListener_R_arc_scene_event_InputListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:createInputListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	clinit_arc_scene_ui_TextField$TextFieldClickListener(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextField$TextFieldClickListener);
	init_arc_scene_ui_TextField$TextFieldClickListener_arc_scene_ui_TextField(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_scene_ui_TextField_letterUnderCursor_float_R_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:letterUnderCursor", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(110);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset) + ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_fontOffset);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	jfloat temp2 = temp1 - ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_cursorX);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jfloat temp3 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart));
	frame[1].f = (temp0 - (temp2 - temp3));
	LINE_NUMBER(111);
	sp[0].o = (jobject)M_arc_scene_ui_TextField_getBackgroundDrawable_R_arc_scene_style_Drawable(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(112);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[1].f = (temp0 - temp1);
	}
label_3:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	frame[3].i = ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(115);
	frame[5].i = (jint(1));
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_7;
	}
	{
	LINE_NUMBER(116);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i))), (frame[1].f), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(117);
	if ((floatCompare((((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i))) - (frame[1].f)), ((frame[1].f) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), ((frame[5].i) - (jint(1)))))), 1)) > 0) goto label_11;
	}
	INST_ILOAD(5);
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return ((frame[5].i) - (jint(1)));
	}
label_9:;
	{
	LINE_NUMBER(115);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return ((frame[3].i) - (jint(1)));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextField_isWordCharacter_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:isWordCharacter", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(126);
	jint temp0 = (jint)SM_java_lang_Character_isLetterOrDigit_char_R_boolean(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TextField_wordUnderCursor_int_R_Array1_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:wordUnderCursor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	frame[2].o = sp[0].o;
	LINE_NUMBER(131);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[3].i = temp0;
	frame[4].i = (jint(0));
	frame[5].i = (frame[1].i);
	LINE_NUMBER(132);
	jint temp1 = frame[1].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp1 < temp2) goto label_5;
	}
	{
	LINE_NUMBER(133);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(134);
	frame[3].i = (jint(0));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(136);
	if ((frame[5].i) >= (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[5].i));
	jint temp1 = (jint)((func_arc_scene_ui_TextField_isWordCharacter_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_isWordCharacter_char_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_11;
	}
	{
	LINE_NUMBER(138);
	frame[3].i = (frame[5].i);
	LINE_NUMBER(139);
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(136);
	INST_IINC(5, 1);
	goto label_5;
	}
label_9:;
	{
	LINE_NUMBER(142);
	frame[5].i = ((frame[1].i) - (jint(1)));
	}
label_14:;
	{
	if ((frame[5].i) <= (jint(-1))) goto label_8;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[5].i));
	jint temp1 = (jint)((func_arc_scene_ui_TextField_isWordCharacter_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_isWordCharacter_char_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_16;
	}
	{
	LINE_NUMBER(144);
	frame[4].i = ((frame[5].i) + (jint(1)));
	LINE_NUMBER(145);
	goto label_8;
	}
label_16:;
	{
	LINE_NUMBER(142);
	INST_IINC(5, -1);
	goto label_14;
	}
label_8:;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[4].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (frame[3].i);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TextField_wordUnderCursor_float_R_Array1_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:wordUnderCursor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_scene_ui_TextField_letterUnderCursor_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_letterUnderCursor_float_R_int])(ctx, (frame[0].o), (frame[1].f));
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_wordUnderCursor_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_wordUnderCursor_int_R_Array1_int])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextField_withinMaxLength_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:withinMaxLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(157);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_maxLength) <= 0) goto label_1;
	}
	{
	if ((frame[1].i) >= ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_maxLength)) goto label_2;
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

void M_arc_scene_ui_TextField_removeInputDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:removeInputDialog", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasInputDialog) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_inputDialogListener;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_inputDialogListener;
	jint temp0 = (jint)((func_arc_scene_ui_TextField_removeListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_removeListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(163);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasInputDialog = (jint(0));
	}
label_1:;
	LINE_NUMBER(165);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_addInputDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:addInputDialog", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(169);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isMobile_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isMobile_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasInputDialog) == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(171);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasInputDialog = (jint(1));
	LINE_NUMBER(173);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_TextField_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_scene_ui_TextField_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_scene_ui_TextField_invoke_java_lang_Runnable_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_tapped_java_lang_Runnable_R_arc_scene_event_InputListener) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_tapped_java_lang_Runnable_R_arc_scene_event_InputListener])(ctx, sp[1].o, sp[2].o);
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_inputDialogListener = (jref) sp[1].o;
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_scene_ui_TextField_getMaxLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:getMaxLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_maxLength);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setMaxLength_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setMaxLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(201);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_maxLength = (frame[1].i);
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_clearText(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:clearText", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(205);
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setOnlyFontChars_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setOnlyFontChars", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(214);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_onlyFontChars = (frame[1].i);
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setStyle_arc_scene_ui_TextField$TextFieldStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setStyle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(226);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(227);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_font;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Font_getCapHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getCapHeight_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_font;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_Font_getDescent_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getDescent_R_float])(ctx, sp[1].o);
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_textHeight = (temp0 - (temp1 * (jfloat(2))));
	LINE_NUMBER(229);
	((func_arc_scene_ui_TextField_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_calculateOffsets(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:calculateOffsets", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(233);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_TextField_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_getWidth_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(234);
	sp[0].o = (jobject)M_arc_scene_ui_TextField_getBackgroundDrawable_R_arc_scene_style_Drawable(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(235);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getRightWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	frame[1].f = (temp0 - (temp1 + temp2));
	}
label_3:;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	frame[3].i = ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(238);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(241);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor), (jint(0)), ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1))));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	LINE_NUMBER(242);
	sp[0].o = frame[4].o;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor) - (jint(1))));
	frame[5].f = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp1)) + ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_renderOffset));
	LINE_NUMBER(243);
	if ((floatCompare((frame[5].f), (jfloat(0)), 1)) > 0) goto label_8;
	}
	{
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_renderOffset = (((jfloat)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_renderOffset) - (frame[5].f));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(246);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((frame[3].i) - (jint(1))), (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor) + (jint(1))));
	frame[6].i = temp0;
	LINE_NUMBER(247);
	frame[7].f = (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[6].i))) - (frame[1].f));
	LINE_NUMBER(248);
	if ((floatCompare((-((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_renderOffset)), (frame[7].f), 1)) >= 0) goto label_10;
	}
	{
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_renderOffset = (-(frame[7].f));
	}
label_10:;
	{
	LINE_NUMBER(252);
	frame[6].f = (jfloat(0));
	LINE_NUMBER(253);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, ((frame[3].i) - (jint(1))), (jint(0)), ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1))));
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0));
	LINE_NUMBER(254);
	frame[8].i = ((frame[3].i) - (jint(2)));
	}
label_15:;
	INST_ILOAD(8);
	if ((--sp)->i < 0) goto label_16;
	{
	LINE_NUMBER(255);
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[8].i)));
	LINE_NUMBER(256);
	if ((floatCompare(((frame[7].f) - (frame[9].f)), (frame[1].f), -1)) <= 0) goto label_19;
	}
	goto label_16;
label_19:;
	{
	LINE_NUMBER(257);
	frame[6].f = (frame[9].f);
	LINE_NUMBER(254);
	INST_IINC(8, -1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(259);
	if ((floatCompare((-((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_renderOffset)), (frame[6].f), -1)) <= 0) goto label_21;
	}
	{
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_renderOffset = (-(frame[6].f));
	}
label_21:;
	{
	LINE_NUMBER(262);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart = (jint(0));
	LINE_NUMBER(263);
	frame[8].f = (jfloat(0));
	LINE_NUMBER(264);
	frame[9].i = (jint(0));
	}
label_24:;
	{
	if ((frame[9].i) >= (frame[3].i)) goto label_25;
	}
	{
	LINE_NUMBER(265);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[9].i))), (-((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_renderOffset)), -1)) < 0) goto label_27;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), (frame[9].i));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_visibleTextStart = temp0;
	LINE_NUMBER(267);
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[9].i)));
	LINE_NUMBER(268);
	goto label_25;
	}
label_27:;
	{
	LINE_NUMBER(264);
	INST_IINC(9, 1);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_displayText;
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[0].o))(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1))));
	frame[9].i = temp1;
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[9].i), (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor) + (jint(1))));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_visibleTextEnd = temp2;
	}
label_32:;
	{
	LINE_NUMBER(275);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextEnd) > (frame[9].i)) goto label_33;
	}
	{
	LINE_NUMBER(276);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextEnd))), ((frame[8].f) + (frame[1].f)), -1)) <= 0) goto label_35;
	}
	goto label_33;
label_35:;
	{
	LINE_NUMBER(275);
	sp[0].o = frame[0].o;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_visibleTextEnd = (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_visibleTextEnd) + (jint(1)));
	goto label_32;
	}
label_33:;
	{
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextEnd) - (jint(1))));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_visibleTextEnd = temp0;
	LINE_NUMBER(279);
	if ((((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHAlign) & (8)) != 0) goto label_37;
	}
	{
	LINE_NUMBER(280);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset = ((frame[1].f) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextEnd))) - (frame[8].f)));
	LINE_NUMBER(281);
	if ((((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHAlign) & (jint(1))) == 0) goto label_40;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset) * (jfloat(0.5f))));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_textOffset = (jfloat(temp0));
	goto label_40;
	}
label_37:;
	{
	LINE_NUMBER(283);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset = ((frame[8].f) + ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_renderOffset));
	}
label_40:;
	{
	LINE_NUMBER(286);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection) == 0) goto label_41;
	}
	{
	LINE_NUMBER(287);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart));
	frame[10].i = temp0;
	LINE_NUMBER(288);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart));
	frame[11].i = temp1;
	LINE_NUMBER(289);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[10].i))) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart)))), (-((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset)));
	frame[12].f = temp2;
	LINE_NUMBER(290);
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[11].i))) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart)))), ((frame[1].f) - ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset)));
	frame[13].f = temp3;
	LINE_NUMBER(291);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionX = (frame[12].f);
	LINE_NUMBER(292);
	sp[0].o = frame[0].o;
	jfloat temp4 = (frame[13].f) - (frame[12].f);
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[1].o))->F_font;
	sp[1].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[1].o);
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_selectionWidth = (temp4 - ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[1].o))->F_cursorX));
	}
label_41:;
	LINE_NUMBER(294);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TextField_getBackgroundDrawable_R_arc_scene_style_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:getBackgroundDrawable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(298);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, (frame[1].o));
	if (sp[0].o != (frame[0].o)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(299);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_invalidBackground;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	jint temp0 = (jint)((func_arc_scene_ui_TextField_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_invalidBackground;
	sp += 1;
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(301);
	if ((frame[2].i) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedBackground;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedBackground;
	sp += 1;
	goto label_6;
	}
label_8:;
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	sp += 1;
	}
label_6:;
	LINE_NUMBER(299);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[29];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:draw", 29 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(307);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, (frame[1].o));
	if (sp[0].o != (frame[0].o)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(308);
	if ((frame[2].i) != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_keyRepeatTask;
	((func_arc_scene_ui_TextField$KeyRepeatTask_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField$KeyRepeatTask_cancel])(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font;
	frame[3].o = sp[0].o;
	LINE_NUMBER(311);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledFontColor;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledFontColor;
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(312);
	if ((frame[2].i) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedFontColor;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedFontColor;
	sp += 1;
	goto label_8;
	}
label_9:;
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_fontColor;
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(313);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_selection;
	frame[5].o = sp[0].o;
	LINE_NUMBER(314);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_cursor;
	frame[6].o = sp[0].o;
	LINE_NUMBER(315);
	sp[0].o = (jobject)M_arc_scene_ui_TextField_getBackgroundDrawable_R_arc_scene_style_Drawable(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(317);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	frame[8].o = sp[0].o;
	LINE_NUMBER(318);
	frame[9].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(319);
	frame[10].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(320);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_TextField_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_getWidth_R_float])(ctx, (frame[0].o));
	frame[11].f = temp0;
	LINE_NUMBER(321);
	jfloat temp1 = (jfloat)((func_arc_scene_ui_TextField_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_getHeight_R_float])(ctx, (frame[0].o));
	frame[12].f = temp1;
	LINE_NUMBER(323);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[8].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[8].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[8].o)))->F_b), (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[8].o)))->F_a) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha)));
	LINE_NUMBER(324);
	frame[13].f = (jfloat(0));
	frame[14].f = (jfloat(0));
	LINE_NUMBER(325);
	if ((frame[7].o) == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(326);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, (frame[7].o)))(ctx, (frame[7].o), (frame[9].f), (frame[10].f), (frame[11].f), (frame[12].f));
	LINE_NUMBER(327);
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, (frame[7].o)))(ctx, (frame[7].o));
	frame[13].f = temp0;
	LINE_NUMBER(328);
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getRightWidth_R_float, (frame[7].o)))(ctx, (frame[7].o));
	frame[14].f = temp1;
	}
label_22:;
	{
	LINE_NUMBER(331);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_TextField_getTextY_arc_graphics_g2d_Font_arc_scene_style_Drawable_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_getTextY_arc_graphics_g2d_Font_arc_scene_style_Drawable_R_float])(ctx, (frame[0].o), (frame[3].o), (frame[7].o));
	frame[15].f = temp0;
	LINE_NUMBER(332);
	((func_arc_scene_ui_TextField_calculateOffsets) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_calculateOffsets])(ctx, (frame[0].o));
	LINE_NUMBER(334);
	if ((frame[2].i) == 0) goto label_28;
	}
	{
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection) == 0) goto label_28;
	}
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_28;
	{
	LINE_NUMBER(335);
	((func_arc_scene_ui_TextField_drawSelection_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_drawSelection_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float])(ctx, (frame[0].o), (frame[5].o), (frame[3].o), ((frame[9].f) + (frame[13].f)), ((frame[10].f) + (frame[15].f)));
	}
label_28:;
	{
	LINE_NUMBER(338);
	jint temp0 = (jint)((func_arc_graphics_g2d_Font_isFlipped_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_Font_isFlipped_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_30;
	}
	{
	jfloat temp0 = -((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHeight);
	sp[0].f = temp0;
	sp += 1;
	goto label_31;
	}
label_30:;
	INST_FCONST(0);
label_31:;
	{
	sp -= 1;
	frame[16].f = sp[0].f;
	LINE_NUMBER(339);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_displayText;
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_33;
	}
	{
	LINE_NUMBER(340);
	if ((frame[2].i) != 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_messageText;
	if (sp[0].o == nullptr) goto label_35;
	}
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_messageFont;
	if (sp[0].o == nullptr) goto label_37;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_messageFont;
	sp += 1;
	goto label_38;
	}
label_37:;
	INST_ALOAD(3);
label_38:;
	{
	sp -= 1;
	frame[17].o = sp[0].o;
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getColor_R_arc_graphics_Color])(ctx, (frame[17].o));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(344);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_messageFontColor;
	if (sp[0].o == nullptr) goto label_41;
	}
	{
	LINE_NUMBER(345);
	sp[0].o = frame[17].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[1].o))->F_messageFontColor;
	jfloat temp0 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_r;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[1].o))->F_messageFontColor;
	jfloat temp1 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_g;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[1].o))->F_messageFontColor;
	jfloat temp2 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_b;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[1].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[1].o))->F_messageFontColor;
	((func_arc_graphics_g2d_Font_setColor_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_float_float_float_float])(ctx, sp[0].o, temp0, temp1, temp2, ((((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[8].o)))->F_a)) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha)));
	goto label_43;
	}
label_41:;
	{
	LINE_NUMBER(348);
	((func_arc_graphics_g2d_Font_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_float_float_float_float])(ctx, (frame[17].o), (jfloat(0.7f)), (jfloat(0.7f)), (jfloat(0.7f)), (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[8].o)))->F_a) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha)));
	}
label_43:;
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[17].o));
	frame[18].i = ((jint)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_markupEnabled);
	LINE_NUMBER(352);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[17].o));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_markupEnabled = (jint(0));
	LINE_NUMBER(353);
	sp[0].o = frame[17].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_messageText;
	jfloat temp0 = (frame[9].f) + (frame[13].f);
	jfloat temp1 = ((frame[10].f) + (frame[15].f)) + (frame[16].f);
	jint temp2 = jint(0);
	sp[2].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_messageText;
	jint temp3 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (((frame[11].f) - (frame[13].f)) - (frame[14].f)), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHAlign), (jint(0)), (((jobject) createStringLiteral(ctx, u8"..."_j))));
	LINE_NUMBER(355);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[17].o));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_markupEnabled = (frame[18].i);
	LINE_NUMBER(356);
	sp[0].o = frame[17].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(357);
	goto label_35;
	}
label_33:;
	{
	LINE_NUMBER(359);
	((func_arc_graphics_g2d_Font_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_float_float_float_float])(ctx, (frame[3].o), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_b), ((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_a) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[8].o)))->F_a)) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha)));
	LINE_NUMBER(360);
	((func_arc_scene_ui_TextField_drawText_arc_graphics_g2d_Font_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_drawText_arc_graphics_g2d_Font_float_float])(ctx, (frame[0].o), (frame[3].o), ((frame[9].f) + (frame[13].f)), (((frame[10].f) + (frame[15].f)) + (frame[16].f)));
	}
label_35:;
	{
	LINE_NUMBER(362);
	if ((frame[2].i) == 0) goto label_50;
	}
	{
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_disabled) != 0) goto label_50;
	}
	{
	LINE_NUMBER(363);
	M_arc_scene_ui_TextField_blink(ctx, (frame[0].o));
	LINE_NUMBER(364);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursorOn) == 0) goto label_50;
	}
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_50;
	{
	LINE_NUMBER(365);
	((func_arc_scene_ui_TextField_drawCursor_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_drawCursor_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float])(ctx, (frame[0].o), (frame[6].o), (frame[3].o), ((frame[9].f) + (frame[13].f)), ((frame[10].f) + (frame[15].f)));
	}
label_50:;
	LINE_NUMBER(368);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextField_isValid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:isValid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_validator;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_validator;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_arc_scene_ui_TextField$TextFieldValidator_valid_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_arc_scene_ui_TextField$TextFieldValidator, INDEX_arc_scene_ui_TextField$TextFieldValidator_valid_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
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

jfloat M_arc_scene_ui_TextField_getTextY_arc_graphics_g2d_Font_arc_scene_style_Drawable_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:getTextY", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(375);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_TextField_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_getHeight_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(376);
	jfloat temp1 = ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHeight) / (jfloat(2));
	jfloat temp2 = (jfloat)((func_arc_graphics_g2d_Font_getDescent_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getDescent_R_float])(ctx, (frame[1].o));
	frame[4].f = (temp1 + temp2);
	LINE_NUMBER(377);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(378);
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	frame[5].f = temp0;
	LINE_NUMBER(379);
	jfloat temp1 = frame[4].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].f = ((temp1 + (((temp2 - temp3) - (frame[5].f)) / (jfloat(2)))) + (frame[5].f));
	LINE_NUMBER(380);
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(381);
	frame[4].f = ((frame[4].f) + ((frame[3].f) / (jfloat(2))));
	}
label_7:;
	{
	LINE_NUMBER(383);
	jint temp0 = (jint)((func_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	frame[4].f = (jfloat((jint((frame[4].f)))));
	}
label_8:;
	{
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return (frame[4].f);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_drawSelection_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:drawSelection", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(389);
	sp[0].o = frame[1].o;
	jfloat temp0 = (((frame[3].f) + ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset)) + ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionX)) + ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_fontOffset);
	jfloat temp1 = (frame[4].f) - ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHeight);
	jfloat temp2 = (jfloat)((func_arc_graphics_g2d_Font_getDescent_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getDescent_R_float])(ctx, (frame[2].o));
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, (temp1 - temp2), ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionWidth), ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHeight));
	LINE_NUMBER(390);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_drawText_arc_graphics_g2d_Font_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:drawText", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[1].o));
	frame[4].i = ((jint)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_markupEnabled);
	LINE_NUMBER(394);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[1].o));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_markupEnabled = (jint(0));
	LINE_NUMBER(395);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_displayText;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, ((frame[2].f) + ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset)), (frame[3].f), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextEnd), (jfloat(0)), (8), (jint(0)));
	LINE_NUMBER(396);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[1].o));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_markupEnabled = (frame[4].i);
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_drawCursor_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:drawCursor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(400);
	sp[0].o = frame[1].o;
	jfloat temp0 = (frame[3].f) + ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset);
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jint temp1 = (jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor;
	LINE_NUMBER(401);
	jfloat temp2 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[1].o, temp1);
	jfloat temp3 = temp0 + temp2;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jfloat temp4 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[1].o, ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart));
	jfloat temp5 = (temp3 - temp4) + ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_fontOffset);
	sp[1].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[2].o));
	jfloat temp6 = temp5 + ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[1].o))->F_cursorX);
	jfloat temp7 = (frame[4].f) - ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHeight);
	sp[1].o = frame[2].o;
	LINE_NUMBER(402);
	jfloat temp8 = (jfloat)((func_arc_graphics_g2d_Font_getDescent_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getDescent_R_float])(ctx, sp[1].o);
	jfloat temp9 = temp7 - temp8;
	jfloat temp10 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp11 = (jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHeight;
	LINE_NUMBER(400);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp6, temp9, temp10, temp11);
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_updateDisplayText(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:updateDisplayText", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font;
	frame[1].o = sp[0].o;
	LINE_NUMBER(407);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(408);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	frame[3].o = sp[0].o;
	LINE_NUMBER(409);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(411);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(412);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(413);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (frame[6].i));
	frame[7].i = temp0;
	LINE_NUMBER(414);
	sp[0].o = frame[5].o;
	jint temp1 = (jint)((func_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean])(ctx, (frame[2].o), (frame[7].i));
	sp += 1;
	if (temp1 == 0) goto label_10;
	}
	INST_ILOAD(7);
	goto label_11;
label_10:;
	INST_BIPUSH(32);
label_11:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(412);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(418);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordMode) == 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean])(ctx, (frame[2].o), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordCharacter));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordBuffer;
	if (sp[0].o != nullptr) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[6].o));
	init_java_lang_StringBuilder_int(ctx, sp[1].o, temp0);
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_passwordBuffer = (jref) sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordBuffer;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[0].o);
	if (temp0 <= (frame[4].i)) goto label_17;
	}
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordBuffer;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (frame[4].i));
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordBuffer;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[0].o);
	frame[7].i = temp0;
	}
label_20:;
	{
	if ((frame[7].i) >= (frame[4].i)) goto label_19;
	}
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordBuffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordCharacter));
	LINE_NUMBER(423);
	INST_IINC(7, 1);
	goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(426);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordBuffer;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_displayText = (jref) sp[1].o;
	goto label_23;
	}
label_14:;
	{
	LINE_NUMBER(428);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_displayText = (jref) (frame[6].o);
	}
label_23:;
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_layout;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_displayText;
	sp[2].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[2].o, (10), (32));
	sp[2].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[2].o, (13), (32));
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(431);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(432);
	frame[7].f = (jfloat(0));
	LINE_NUMBER(433);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_layout;
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_runs;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_27;
	}
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_layout;
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_runs;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	frame[8].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o));
	LINE_NUMBER(435);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[8].o)))->F_xAdvances;
	frame[9].o = sp[0].o;
	LINE_NUMBER(436);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_first_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_FloatSeq_first_R_float])(ctx, (frame[9].o));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_fontOffset = temp0;
	LINE_NUMBER(437);
	frame[10].i = (jint(1));
	frame[11].i = ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[9].o)))->F_size);
	}
label_33:;
	{
	if ((frame[10].i) >= (frame[11].i)) goto label_34;
	}
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(439);
	jfloat temp0 = frame[7].f;
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[9].o), (frame[10].i));
	frame[7].f = (temp0 + temp1);
	LINE_NUMBER(437);
	INST_IINC(10, 1);
	goto label_33;
	}
label_34:;
	LINE_NUMBER(441);
	goto label_38;
label_27:;
	{
	LINE_NUMBER(442);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_fontOffset = (jfloat(0));
	}
label_38:;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(446);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_visibleTextStart = temp1;
	LINE_NUMBER(447);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextEnd;
	jint temp3 = (jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_visibleTextStart;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jint temp4 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp2, temp3, ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_visibleTextEnd = temp4;
	LINE_NUMBER(449);
	jint temp5 = (jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart;
	jint temp6 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[6].o));
	if (temp5 <= temp6) goto label_42;
	}
	{
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart = (frame[4].i);
	}
label_42:;
	LINE_NUMBER(450);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_blink(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:blink", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(453);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isContinuousRendering_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isContinuousRendering_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(454);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursorOn = (jint(1));
	LINE_NUMBER(455);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(457);
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(458);
	if ((floatCompare(((jfloat(((frame[1].l) - ((jlong)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_lastBlink)))) / (jfloat(1,000000e+09f))), ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_blinkTime), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(459);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursorOn) != 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursorOn = sp[1].i;
	LINE_NUMBER(460);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_lastBlink = (frame[1].l);
	}
label_5:;
	LINE_NUMBER(462);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_copy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:copy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(466);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection) == 0) goto label_1;
	}
	{
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordMode) != 0) goto label_1;
	}
	{
	LINE_NUMBER(467);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, temp0, temp1);
	((func_arc_Application_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(469);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_cut(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:cut", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(476);
	((func_arc_scene_ui_TextField_cut_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_cut_boolean])(ctx, (frame[0].o), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents));
	LINE_NUMBER(477);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_cut_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:cut", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(480);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection) == 0) goto label_1;
	}
	{
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordMode) != 0) goto label_1;
	}
	{
	LINE_NUMBER(481);
	((func_arc_scene_ui_TextField_copy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_copy])(ctx, (frame[0].o));
	LINE_NUMBER(482);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_scene_ui_TextField_delete_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_delete_boolean_R_int])(ctx, (frame[0].o), (frame[1].i));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	LINE_NUMBER(483);
	((func_arc_scene_ui_TextField_updateDisplayText) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_updateDisplayText])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(485);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_paste_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:paste", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(488);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(489);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(490);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(491);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection) == 0) goto label_4;
	}
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor) - ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart)));
	frame[4].i = (temp0 - temp1);
	}
label_4:;
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(493);
	frame[6].i = (jint(0));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[7].i = temp0;
	}
label_7:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_8;
	}
	{
	LINE_NUMBER(494);
	sp[0].o = frame[0].o;
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[3].o));
	jint temp2 = (jint)((func_arc_scene_ui_TextField_withinMaxLength_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_withinMaxLength_int_R_boolean])(ctx, sp[0].o, (temp0 + temp1));
	if (temp2 != 0) goto label_10;
	}
	goto label_8;
label_10:;
	{
	LINE_NUMBER(495);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[6].i));
	frame[8].i = temp0;
	LINE_NUMBER(496);
	if ((frame[8].i) != (13)) goto label_12;
	}
	goto label_13;
label_12:;
	{
	LINE_NUMBER(497);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_writeEnters) == 0) goto label_14;
	}
	{
	if ((frame[8].i) == (10)) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(498);
	if ((frame[8].i) != (10)) goto label_16;
	}
	goto label_13;
label_16:;
	{
	LINE_NUMBER(499);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_onlyFontChars) == 0) goto label_17;
	}
	{
	jint temp0 = (jint)((func_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean])(ctx, (frame[5].o), (frame[8].i));
	if (temp0 != 0) goto label_17;
	}
	goto label_13;
label_17:;
	{
	LINE_NUMBER(500);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_filter;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_filter;
	jint temp0 = (jint)((func_arc_scene_ui_TextField$TextFieldFilter_acceptChar_arc_scene_ui_TextField_char_R_boolean) resolveInterfaceMethod(ctx, &class_arc_scene_ui_TextField$TextFieldFilter, INDEX_arc_scene_ui_TextField$TextFieldFilter_acceptChar_arc_scene_ui_TextField_char_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[8].i));
	if (temp0 != 0) goto label_15;
	}
	goto label_13;
label_15:;
	{
	LINE_NUMBER(502);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[8].i));
	}
label_13:;
	{
	LINE_NUMBER(493);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(506);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection) == 0) goto label_19;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_scene_ui_TextField_delete_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_delete_boolean_R_int])(ctx, (frame[0].o), (frame[2].i));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	}
label_19:;
	{
	LINE_NUMBER(507);
	if ((frame[2].i) == 0) goto label_20;
	}
	{
	LINE_NUMBER(508);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = frame[0].o;
	jint temp0 = (jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor;
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_arc_scene_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String])(ctx, sp[2].o, temp0, sp[3].o, sp[4].o);
	jint temp1 = (jint)((func_arc_scene_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(510);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String])(ctx, sp[1].o, temp0, sp[2].o, sp[3].o);
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	}
label_22:;
	{
	LINE_NUMBER(511);
	((func_arc_scene_ui_TextField_updateDisplayText) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_updateDisplayText])(ctx, (frame[0].o));
	LINE_NUMBER(512);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = (temp0 + temp1);
	LINE_NUMBER(513);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:insert", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(516);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(517);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[3].o), (jint(0)), (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[3].o), (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_scene_ui_TextField_delete_boolean_R_int(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:delete", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(521);
	frame[2].i = ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart);
	LINE_NUMBER(522);
	frame[3].i = ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor);
	LINE_NUMBER(523);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[2].i), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(524);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[2].i), (frame[3].i));
	frame[5].i = temp1;
	LINE_NUMBER(525);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp += 1;
	if ((frame[4].i) <= 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, (jint(0)), (frame[4].i));
	sp += 1;
	goto label_6;
	}
label_5:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_6:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(526);
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	sp += 1;
	if (temp0 >= temp1) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (frame[5].i));
	sp += 1;
	goto label_9;
	}
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_9:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(527);
	if ((frame[1].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_arc_scene_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[6].o));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(530);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[6].o);
	}
label_13:;
	{
	LINE_NUMBER(531);
	((func_arc_scene_ui_TextField_clearSelection) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_clearSelection])(ctx, (frame[0].o));
	LINE_NUMBER(532);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_next_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:next", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(540);
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(541);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(542);
	frame[3].o = (frame[0].o);
	}
label_3:;
	{
	LINE_NUMBER(544);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[3].o)))->F_parent;
	clinit_arc_scene_ui_TextField(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_TextField_tmp1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_arc_scene_Group_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(545);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_scene_Scene_getElements_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_Scene_getElements_R_arc_struct_Seq])(ctx, (frame[2].o));
	sp[2].o = jobject(nullptr);
	clinit_arc_scene_ui_TextField(ctx);
	sp[3].o = (jobject)SF_arc_scene_ui_TextField_tmp2;
	clinit_arc_scene_ui_TextField(ctx);
	sp[4].o = (jobject)SF_arc_scene_ui_TextField_tmp1;
	sp[0].o = (jobject)M_arc_scene_ui_TextField_findNextTextField_arc_struct_Seq_arc_scene_ui_TextField_arc_math_geom_Vec2_arc_math_geom_Vec2_boolean_R_arc_scene_ui_TextField(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(546);
	if ((frame[4].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(547);
	if ((frame[1].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(548);
	clinit_arc_scene_ui_TextField(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_TextField_tmp1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(1,401298e-45f)), (jfloat(1,401298e-45f)));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(550);
	clinit_arc_scene_ui_TextField(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_TextField_tmp1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(3,402823e+38f)), (jfloat(3,402823e+38f)));
	}
label_10:;
	{
	LINE_NUMBER(551);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_scene_Scene_getElements_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Scene_getElements_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[2].o = jobject(nullptr);
	clinit_arc_scene_ui_TextField(ctx);
	sp[3].o = (jobject)SF_arc_scene_ui_TextField_tmp2;
	clinit_arc_scene_ui_TextField(ctx);
	sp[4].o = (jobject)SF_arc_scene_ui_TextField_tmp1;
	sp[0].o = (jobject)M_arc_scene_ui_TextField_findNextTextField_arc_struct_Seq_arc_scene_ui_TextField_arc_math_geom_Vec2_arc_math_geom_Vec2_boolean_R_arc_scene_ui_TextField(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (frame[1].i));
	frame[4].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(553);
	if ((frame[4].o) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(554);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	((func_arc_Input_setOnscreenKeyboardVisible_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_setOnscreenKeyboardVisible_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(555);
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(557);
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, (frame[2].o), (frame[4].o));
	if (temp0 == 0) goto label_15;
	}
	goto label_14;
label_15:;
	{
	LINE_NUMBER(558);
	frame[3].o = (frame[4].o);
	LINE_NUMBER(559);
	goto label_3;
	}
label_14:;
	LINE_NUMBER(560);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TextField_findNextTextField_arc_struct_Seq_arc_scene_ui_TextField_arc_math_geom_Vec2_arc_math_geom_Vec2_boolean_R_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:findNextTextField", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(563);
	frame[6].i = (jint(0));
	frame[7].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_2:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_3;
	}
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[6].i));
	frame[8].o = (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	LINE_NUMBER(565);
	if ((frame[8].o) == (frame[0].o)) goto label_6;
	}
	{
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[8].o)))->F_visible) != 0) goto label_7;
	}
	goto label_6;
label_7:;
	{
	LINE_NUMBER(566);
	if ((isInstance(ctx, (frame[8].o), &class_arc_scene_ui_TextField)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(567);
	frame[9].o = (checkCast(ctx, &class_arc_scene_ui_TextField, (frame[8].o)));
	LINE_NUMBER(568);
	jint temp0 = (jint)((func_arc_scene_ui_TextField_isDisabled_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_TextField_isDisabled_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_6;
	}
	{
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[9].o)))->F_focusTraversal) != 0) goto label_11;
	}
	goto label_6;
label_11:;
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[8].o)))->F_parent;
	clinit_arc_scene_ui_TextField(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_TextField_tmp3;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[8].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[8].o)))->F_y));
	sp[0].o = (jobject)((func_arc_scene_Group_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(570);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[10].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_y), 1)) < 0) goto label_13;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[10].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_y), -1)) != 0) goto label_14;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[10].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_x), -1)) <= 0) goto label_14;
	}
label_13:;
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	if ((sp[0].i ^ (frame[5].i)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(571);
	if ((frame[2].o) == nullptr) goto label_18;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[10].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y), -1)) > 0) goto label_19;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[10].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y), -1)) != 0) goto label_20;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[10].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x), 1)) >= 0) goto label_20;
	}
label_19:;
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 1;
	if ((sp[0].i ^ (frame[5].i)) == 0) goto label_16;
	}
label_18:;
	{
	LINE_NUMBER(573);
	frame[2].o = (checkCast(ctx, &class_arc_scene_ui_TextField, (frame[8].o)));
	LINE_NUMBER(574);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[3].o), (frame[10].o));
	}
label_16:;
	LINE_NUMBER(577);
	goto label_6;
label_8:;
	{
	if ((isInstance(ctx, (frame[8].o), &class_arc_scene_Group)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(578);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_Group, (frame[8].o))))->vtable)[VTABLE_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq])(ctx, (checkCast(ctx, &class_arc_scene_Group, (frame[8].o))));
	sp[0].o = (jobject)M_arc_scene_ui_TextField_findNextTextField_arc_struct_Seq_arc_scene_ui_TextField_arc_math_geom_Vec2_arc_math_geom_Vec2_boolean_R_arc_scene_ui_TextField(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].i));
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(563);
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TextField_getDefaultInputListener_R_arc_scene_event_InputListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:getDefaultInputListener", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(584);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_inputListener;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setTextFieldListener_arc_scene_ui_TextField$TextFieldListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setTextFieldListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(589);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (frame[1].o);
	LINE_NUMBER(590);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_typed_char_java_lang_Runnable(jcontext ctx, jobject self, jchar param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:typed", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(593);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0(ctx);
		auto proxy = (arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0 *) gcAlloc(ctx, &class_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (frame[1].i);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextField_setTextFieldListener_arc_scene_ui_TextField$TextFieldListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setTextFieldListener_arc_scene_ui_TextField$TextFieldListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(598);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_typed_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:typed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(601);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_1(ctx);
		auto proxy = (arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_1 *) gcAlloc(ctx, &class_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextField_setTextFieldListener_arc_scene_ui_TextField$TextFieldListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setTextFieldListener_arc_scene_ui_TextField$TextFieldListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TextField_getFilter_R_arc_scene_ui_TextField$TextFieldFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:getFilter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_filter;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setFilter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(610);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_filter = (jref) (frame[1].o);
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setValidator_arc_scene_ui_TextField$TextFieldValidator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setValidator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(614);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_validator = (jref) (frame[1].o);
	LINE_NUMBER(615);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TextField_getValidator_R_arc_scene_ui_TextField$TextFieldValidator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:getValidator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_validator;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setFocusTraversal_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setFocusTraversal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(623);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_focusTraversal = (frame[1].i);
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TextField_getMessageText_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:getMessageText", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_messageText;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setMessageText_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setMessageText", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(636);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"$"_j))));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@"_j))));
	if (temp0 == 0) goto label_1;
	}
label_2:;
	clinit_arc_Core(ctx);
	(sp++)->o = SF_arc_Core_bundle;
	if ((--sp)->o == nullptr) goto label_1;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)));
	jint temp0 = (jint)((func_arc_util_I18NBundle_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(637);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)));
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_messageText = (jref) sp[1].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(639);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_messageText = (jref) (frame[1].o);
	}
label_4:;
	LINE_NUMBER(641);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_appendText_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:appendText", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(645);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	INST_ASTORE(1);
label_1:;
	{
	LINE_NUMBER(647);
	((func_arc_scene_ui_TextField_clearSelection) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_clearSelection])(ctx, (frame[0].o));
	LINE_NUMBER(648);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	LINE_NUMBER(649);
	((func_arc_scene_ui_TextField_paste_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_paste_java_lang_String_boolean])(ctx, (frame[0].o), (frame[1].o), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents));
	LINE_NUMBER(650);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TextField_getText_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:getText", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(654);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setText_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setText", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(659);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	INST_ASTORE(1);
label_1:;
	{
	LINE_NUMBER(660);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(662);
	((func_arc_scene_ui_TextField_clearSelection) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_clearSelection])(ctx, (frame[0].o));
	LINE_NUMBER(663);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	frame[2].o = sp[0].o;
	LINE_NUMBER(664);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(665);
	((func_arc_scene_ui_TextField_paste_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_paste_java_lang_String_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(666);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_arc_scene_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_7:;
	{
	LINE_NUMBER(667);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor = (jint(0));
	LINE_NUMBER(668);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:changeText", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(675);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(676);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[2].o);
	LINE_NUMBER(677);
	sp[0].o = ((jobject) &class_arc_scene_event_ChangeListener$ChangeEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_TextField_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_scene_ui_TextField_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_scene_ui_TextField_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_event_ChangeListener$ChangeEvent, sp[0].o));
	LINE_NUMBER(678);
	jint temp0 = (jint)((func_arc_scene_ui_TextField_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(679);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[4].i) == 0) goto label_5;
	}
	INST_ALOAD(1);
	goto label_6;
label_5:;
	INST_ALOAD(2);
label_6:;
	{
	sp -= 2;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(680);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[3].o));
	LINE_NUMBER(681);
	if ((frame[4].i) != 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextField_getProgrammaticChangeEvents_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:getProgrammaticChangeEvents", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(685);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setProgrammaticChangeEvents_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setProgrammaticChangeEvents", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(693);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents = (frame[1].i);
	LINE_NUMBER(694);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_scene_ui_TextField_getSelectionStart_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:getSelectionStart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(697);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TextField_getSelection_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:getSelection", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(701);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp1);
	sp += 1;
	goto label_2;
	}
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setSelection_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setSelection", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(706);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"selectionStart must be >= 0"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(707);
	if ((frame[2].i) >= 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"selectionEnd must be >= 0"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(708);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (frame[1].i));
	frame[1].i = temp1;
	LINE_NUMBER(709);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp2, (frame[2].i));
	frame[2].i = temp3;
	LINE_NUMBER(710);
	if ((frame[2].i) != (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(711);
	((func_arc_scene_ui_TextField_clearSelection) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_clearSelection])(ctx, (frame[0].o));
	LINE_NUMBER(712);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(714);
	if ((frame[2].i) >= (frame[1].i)) goto label_8;
	}
	{
	LINE_NUMBER(715);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(716);
	frame[2].i = (frame[1].i);
	LINE_NUMBER(717);
	frame[1].i = (frame[3].i);
	}
label_8:;
	{
	LINE_NUMBER(720);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection = (jint(1));
	LINE_NUMBER(721);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart = (frame[1].i);
	LINE_NUMBER(722);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor = (frame[2].i);
	LINE_NUMBER(723);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_selectAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:selectAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(726);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((func_arc_scene_ui_TextField_setSelection_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setSelection_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(727);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_clearSelection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:clearSelection", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(730);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_hasSelection = (jint(0));
	LINE_NUMBER(731);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_scene_ui_TextField_getCursorPosition_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:getCursorPosition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(734);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setCursorPosition_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setCursorPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(739);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cursorPosition must be >= 0"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(740);
	((func_arc_scene_ui_TextField_clearSelection) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_clearSelection])(ctx, (frame[0].o));
	LINE_NUMBER(741);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp2;
	LINE_NUMBER(742);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_TextField_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:getPrefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(746);
	popStackFrame(ctx);
	return (jfloat(150.0f));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_TextField_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:getPrefHeight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(751);
	frame[1].f = (jfloat(0));
	frame[2].f = (jfloat(0));
	LINE_NUMBER(752);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(753);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp1 + temp2));
	frame[1].f = temp3;
	LINE_NUMBER(754);
	jfloat temp4 = frame[2].f;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp5 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, temp5);
	frame[2].f = temp6;
	}
label_3:;
	{
	LINE_NUMBER(756);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedBackground;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(757);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedBackground;
	LINE_NUMBER(758);
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedBackground;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp3 = temp1 + temp2;
	LINE_NUMBER(757);
	jfloat temp4 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp3);
	frame[1].f = temp4;
	LINE_NUMBER(759);
	jfloat temp5 = frame[2].f;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedBackground;
	jfloat temp6 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp7 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp5, temp6);
	frame[2].f = temp7;
	}
label_6:;
	{
	LINE_NUMBER(761);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(762);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	LINE_NUMBER(763);
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp3 = temp1 + temp2;
	LINE_NUMBER(762);
	jfloat temp4 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp3);
	frame[1].f = temp4;
	LINE_NUMBER(764);
	jfloat temp5 = frame[2].f;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	jfloat temp6 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp7 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp5, temp6);
	frame[2].f = temp7;
	}
label_11:;
	{
	LINE_NUMBER(766);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((frame[1].f) + ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHeight)), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setAlignment_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setAlignment", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(774);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHAlign = (frame[1].i);
	LINE_NUMBER(775);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextField_isPasswordMode_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:isPasswordMode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(778);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordMode);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setPasswordMode_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setPasswordMode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(786);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordMode = (frame[1].i);
	LINE_NUMBER(787);
	((func_arc_scene_ui_TextField_updateDisplayText) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_updateDisplayText])(ctx, (frame[0].o));
	LINE_NUMBER(788);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setPasswordCharacter_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setPasswordCharacter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(795);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordCharacter = (frame[1].i);
	LINE_NUMBER(796);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_passwordMode) == 0) goto label_2;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_scene_ui_TextField_updateDisplayText) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_updateDisplayText])(ctx, sp[0].o);
label_2:;
	LINE_NUMBER(797);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setBlinkTime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setBlinkTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(800);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_blinkTime = (frame[1].f);
	LINE_NUMBER(801);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextField_isDisabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:isDisabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(805);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_disabled);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_setDisabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:setDisabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(810);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_disabled = (frame[1].i);
	LINE_NUMBER(811);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_moveCursor_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:moveCursor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(814);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(815);
	if ((frame[1].i) == 0) goto label_4;
	}
	INST_ICONST(0);
	goto label_5;
label_4:;
	INST_ICONST(-1);
label_5:;
	INST_ISTORE(4);
label_6:;
	{
	LINE_NUMBER(816);
	if ((frame[1].i) == 0) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor) + (jint(1));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	if (temp0 >= (frame[3].i)) goto label_8;
	}
	goto label_9;
label_7:;
	{
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor) - (jint(1));
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	if (temp0 <= (frame[3].i)) goto label_8;
	}
label_9:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_8;
	{
	LINE_NUMBER(817);
	jint temp0 = (jint)((func_arc_scene_ui_TextField_continueCursor_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_continueCursor_int_int_R_boolean])(ctx, (frame[0].o), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor), (frame[4].i));
	if (temp0 != 0) goto label_6;
	}
	goto label_8;
label_8:;
	LINE_NUMBER(819);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextField_continueCursor_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:continueCursor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(822);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, ((frame[1].i) + (frame[2].i)));
	frame[3].i = temp0;
	LINE_NUMBER(823);
	jint temp1 = (jint)((func_arc_scene_ui_TextField_isWordCharacter_char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_isWordCharacter_char_R_boolean])(ctx, (frame[0].o), (frame[3].i));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_ui_TextField_lambda$typed$1_arc_func_Cons_arc_scene_ui_TextField_char(jcontext ctx, jobject param0, jobject param1, jchar param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:lambda$typed$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextField(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(601);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, (frame[2].i));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_ui_TextField_lambda$typed$0_char_java_lang_Runnable_arc_scene_ui_TextField_char(jcontext ctx, jchar param0, jobject param1, jobject param2, jchar param3) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:lambda$typed$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextField(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(594);
	if ((frame[3].i) != (frame[0].i)) goto label_1;
	}
	{
	LINE_NUMBER(595);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(597);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_lambda$addInputDialog$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:lambda$addInputDialog$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_useKeyboard_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_useKeyboard_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(176);
	clinit_arc_Input$TextInput(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Input$TextInput);
	init_arc_Input$TextInput(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(177);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[0].o));
	((arc_Input$TextInput *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(178);
	if (((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_maxLength) <= 0) goto label_4;
	}
	{
	((arc_Input$TextInput *) NULL_CHECK((frame[1].o)))->F_maxLength = ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_maxLength);
	}
label_4:;
	{
	LINE_NUMBER(179);
	((arc_Input$TextInput *) NULL_CHECK((frame[1].o)))->F_multiline = (isInstance(ctx, (frame[0].o), &class_arc_scene_ui_TextArea));
	LINE_NUMBER(180);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_TextField_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_scene_ui_TextField_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_scene_ui_TextField_invoke_arc_func_Cons_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((arc_Input$TextInput *) NULL_CHECK(sp[0].o))->F_accepted = (jref) sp[1].o;
	LINE_NUMBER(186);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_TextField_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (arc_scene_ui_TextField_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_arc_scene_ui_TextField_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((arc_Input$TextInput *) NULL_CHECK(sp[0].o))->F_canceled = (jref) sp[1].o;
	LINE_NUMBER(192);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	((func_arc_Input_getTextInput_arc_Input$TextInput) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_getTextInput_arc_Input$TextInput])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_lambda$addInputDialog$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:lambda$addInputDialog$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(187);
	jint temp0 = (jint)((func_arc_scene_ui_TextField_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_hasKeyboard_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(188);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_1:;
	{
	LINE_NUMBER(190);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	((func_arc_Input_setOnscreenKeyboardVisible_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_setOnscreenKeyboardVisible_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField_lambda$addInputDialog$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:lambda$addInputDialog$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(181);
	((func_arc_scene_ui_TextField_clearText) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_clearText])(ctx, (frame[0].o));
	LINE_NUMBER(182);
	((func_arc_scene_ui_TextField_appendText_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_appendText_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(183);
	((func_arc_scene_ui_TextField_change) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_change])(ctx, (frame[0].o));
	LINE_NUMBER(184);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	((func_arc_Input_setOnscreenKeyboardVisible_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_setOnscreenKeyboardVisible_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_scene_ui_TextField(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Element(ctx);
	SF_arc_scene_ui_TextField_BACKSPACE = jint(8);
	SF_arc_scene_ui_TextField_TAB = jint(9);
	SF_arc_scene_ui_TextField_DELETE = jint(127);
	SF_arc_scene_ui_TextField_BULLET = jint(149);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextField(ctx);
	{
	LINE_NUMBER(40);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_scene_ui_TextField(ctx);
	SF_arc_scene_ui_TextField_tmp1 = sp[0].o;
	LINE_NUMBER(41);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_scene_ui_TextField(ctx);
	SF_arc_scene_ui_TextField_tmp2 = sp[0].o;
	LINE_NUMBER(42);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_scene_ui_TextField(ctx);
	SF_arc_scene_ui_TextField_tmp3 = sp[0].o;
	LINE_NUMBER(44);
	clinit_arc_scene_ui_TextField(ctx);
	SF_arc_scene_ui_TextField_keyRepeatInitialTime = (jfloat(0.4f));
	LINE_NUMBER(45);
	clinit_arc_scene_ui_TextField(ctx);
	SF_arc_scene_ui_TextField_keyRepeatTime = (jfloat(0.1f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_TextField[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Element_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_ui_TextField_draw,
	(void *) M_arc_scene_Element_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element,
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
	(void *) M_arc_scene_Element_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_Element_setScene_arc_scene_Scene,
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
	(void *) M_arc_scene_Element_sizeChanged,
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
	(void *) M_arc_scene_Element_getMinWidth_R_float,
	(void *) M_arc_scene_Element_getMinHeight_R_float,
	(void *) M_arc_scene_ui_TextField_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_TextField_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_Element_setLayoutEnabled_boolean,
	(void *) M_arc_scene_Element_validate,
	(void *) M_arc_scene_Element_needsLayout_R_boolean,
	(void *) M_arc_scene_Element_invalidate,
	(void *) M_arc_scene_Element_invalidateHierarchy,
	(void *) M_arc_scene_Element_pack,
	(void *) M_arc_scene_Element_setFillParent_boolean,
	(void *) M_arc_scene_Element_layout,
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
	(void *) M_arc_scene_ui_TextField_isDisabled_R_boolean,
	(void *) M_arc_scene_ui_TextField_setDisabled_boolean,
	(void *) M_arc_scene_ui_TextField_initialize,
	(void *) M_arc_scene_ui_TextField_createInputListener_R_arc_scene_event_InputListener,
	(void *) M_arc_scene_ui_TextField_letterUnderCursor_float_R_int,
	(void *) M_arc_scene_ui_TextField_isWordCharacter_char_R_boolean,
	(void *) M_arc_scene_ui_TextField_wordUnderCursor_int_R_Array1_int,
	(void *) M_arc_scene_ui_TextField_wordUnderCursor_float_R_Array1_int,
	(void *) M_arc_scene_ui_TextField_withinMaxLength_int_R_boolean,
	(void *) M_arc_scene_ui_TextField_removeInputDialog,
	(void *) M_arc_scene_ui_TextField_addInputDialog,
	(void *) M_arc_scene_ui_TextField_getMaxLength_R_int,
	(void *) M_arc_scene_ui_TextField_setMaxLength_int,
	(void *) M_arc_scene_ui_TextField_clearText,
	(void *) M_arc_scene_ui_TextField_setOnlyFontChars_boolean,
	(void *) M_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle,
	(void *) M_arc_scene_ui_TextField_setStyle_arc_scene_ui_TextField$TextFieldStyle,
	(void *) M_arc_scene_ui_TextField_calculateOffsets,
	(void *) M_arc_scene_ui_TextField_getBackgroundDrawable_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_TextField_isValid_R_boolean,
	(void *) M_arc_scene_ui_TextField_getTextY_arc_graphics_g2d_Font_arc_scene_style_Drawable_R_float,
	(void *) M_arc_scene_ui_TextField_drawSelection_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float,
	(void *) M_arc_scene_ui_TextField_drawText_arc_graphics_g2d_Font_float_float,
	(void *) M_arc_scene_ui_TextField_drawCursor_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float,
	(void *) M_arc_scene_ui_TextField_updateDisplayText,
	(void *) M_arc_scene_ui_TextField_blink,
	(void *) M_arc_scene_ui_TextField_copy,
	(void *) M_arc_scene_ui_TextField_cut,
	(void *) M_arc_scene_ui_TextField_cut_boolean,
	(void *) M_arc_scene_ui_TextField_paste_java_lang_String_boolean,
	(void *) M_arc_scene_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String,
	(void *) M_arc_scene_ui_TextField_delete_boolean_R_int,
	(void *) M_arc_scene_ui_TextField_next_boolean,
	(void *) M_arc_scene_ui_TextField_findNextTextField_arc_struct_Seq_arc_scene_ui_TextField_arc_math_geom_Vec2_arc_math_geom_Vec2_boolean_R_arc_scene_ui_TextField,
	(void *) M_arc_scene_ui_TextField_getDefaultInputListener_R_arc_scene_event_InputListener,
	(void *) M_arc_scene_ui_TextField_setTextFieldListener_arc_scene_ui_TextField$TextFieldListener,
	(void *) M_arc_scene_ui_TextField_typed_char_java_lang_Runnable,
	(void *) M_arc_scene_ui_TextField_typed_arc_func_Cons,
	(void *) M_arc_scene_ui_TextField_getFilter_R_arc_scene_ui_TextField$TextFieldFilter,
	(void *) M_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter,
	(void *) M_arc_scene_ui_TextField_setValidator_arc_scene_ui_TextField$TextFieldValidator,
	(void *) M_arc_scene_ui_TextField_getValidator_R_arc_scene_ui_TextField$TextFieldValidator,
	(void *) M_arc_scene_ui_TextField_setFocusTraversal_boolean,
	(void *) M_arc_scene_ui_TextField_getMessageText_R_java_lang_String,
	(void *) M_arc_scene_ui_TextField_setMessageText_java_lang_String,
	(void *) M_arc_scene_ui_TextField_appendText_java_lang_String,
	(void *) M_arc_scene_ui_TextField_getText_R_java_lang_String,
	(void *) M_arc_scene_ui_TextField_setText_java_lang_String,
	(void *) M_arc_scene_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean,
	(void *) M_arc_scene_ui_TextField_getProgrammaticChangeEvents_R_boolean,
	(void *) M_arc_scene_ui_TextField_setProgrammaticChangeEvents_boolean,
	(void *) M_arc_scene_ui_TextField_getSelectionStart_R_int,
	(void *) M_arc_scene_ui_TextField_getSelection_R_java_lang_String,
	(void *) M_arc_scene_ui_TextField_setSelection_int_int,
	(void *) M_arc_scene_ui_TextField_selectAll,
	(void *) M_arc_scene_ui_TextField_clearSelection,
	(void *) M_arc_scene_ui_TextField_getCursorPosition_R_int,
	(void *) M_arc_scene_ui_TextField_setCursorPosition_int,
	(void *) M_arc_scene_ui_TextField_setAlignment_int,
	(void *) M_arc_scene_ui_TextField_isPasswordMode_R_boolean,
	(void *) M_arc_scene_ui_TextField_setPasswordMode_boolean,
	(void *) M_arc_scene_ui_TextField_setPasswordCharacter_char,
	(void *) M_arc_scene_ui_TextField_setBlinkTime_float,
	(void *) M_arc_scene_ui_TextField_moveCursor_boolean_boolean,
	(void *) M_arc_scene_ui_TextField_continueCursor_int_int_R_boolean,
	(void *) M_arc_scene_ui_TextField_lambda$addInputDialog$0,
	(void *) M_arc_scene_ui_TextField_lambda$addInputDialog$2,
	(void *) M_arc_scene_ui_TextField_lambda$addInputDialog$1_java_lang_String,
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
	{ "isDisabled", "()Z" },
	{ "setDisabled", "(Z)V" },
	{ "initialize", "()V" },
	{ "createInputListener", "()Larc/scene/event/InputListener;" },
	{ "letterUnderCursor", "(F)I" },
	{ "isWordCharacter", "(C)Z" },
	{ "wordUnderCursor", "(I)[I" },
	{ "wordUnderCursor", "(F)[I" },
	{ "withinMaxLength", "(I)Z" },
	{ "removeInputDialog", "()V" },
	{ "addInputDialog", "()V" },
	{ "getMaxLength", "()I" },
	{ "setMaxLength", "(I)V" },
	{ "clearText", "()V" },
	{ "setOnlyFontChars", "(Z)V" },
	{ "getStyle", "()Larc/scene/ui/TextField$TextFieldStyle;" },
	{ "setStyle", "(Larc/scene/ui/TextField$TextFieldStyle;)V" },
	{ "calculateOffsets", "()V" },
	{ "getBackgroundDrawable", "()Larc/scene/style/Drawable;" },
	{ "isValid", "()Z" },
	{ "getTextY", "(Larc/graphics/g2d/Font;Larc/scene/style/Drawable;)F" },
	{ "drawSelection", "(Larc/scene/style/Drawable;Larc/graphics/g2d/Font;FF)V" },
	{ "drawText", "(Larc/graphics/g2d/Font;FF)V" },
	{ "drawCursor", "(Larc/scene/style/Drawable;Larc/graphics/g2d/Font;FF)V" },
	{ "updateDisplayText", "()V" },
	{ "blink", "()V" },
	{ "copy", "()V" },
	{ "cut", "()V" },
	{ "cut", "(Z)V" },
	{ "paste", "(Ljava/lang/String;Z)V" },
	{ "insert", "(ILjava/lang/CharSequence;Ljava/lang/String;)Ljava/lang/String;" },
	{ "delete", "(Z)I" },
	{ "next", "(Z)V" },
	{ "findNextTextField", "(Larc/struct/Seq;Larc/scene/ui/TextField;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Z)Larc/scene/ui/TextField;" },
	{ "getDefaultInputListener", "()Larc/scene/event/InputListener;" },
	{ "setTextFieldListener", "(Larc/scene/ui/TextField$TextFieldListener;)V" },
	{ "typed", "(CLjava/lang/Runnable;)V" },
	{ "typed", "(Larc/func/Cons;)V" },
	{ "getFilter", "()Larc/scene/ui/TextField$TextFieldFilter;" },
	{ "setFilter", "(Larc/scene/ui/TextField$TextFieldFilter;)V" },
	{ "setValidator", "(Larc/scene/ui/TextField$TextFieldValidator;)V" },
	{ "getValidator", "()Larc/scene/ui/TextField$TextFieldValidator;" },
	{ "setFocusTraversal", "(Z)V" },
	{ "getMessageText", "()Ljava/lang/String;" },
	{ "setMessageText", "(Ljava/lang/String;)V" },
	{ "appendText", "(Ljava/lang/String;)V" },
	{ "getText", "()Ljava/lang/String;" },
	{ "setText", "(Ljava/lang/String;)V" },
	{ "changeText", "(Ljava/lang/String;Ljava/lang/String;)Z" },
	{ "getProgrammaticChangeEvents", "()Z" },
	{ "setProgrammaticChangeEvents", "(Z)V" },
	{ "getSelectionStart", "()I" },
	{ "getSelection", "()Ljava/lang/String;" },
	{ "setSelection", "(II)V" },
	{ "selectAll", "()V" },
	{ "clearSelection", "()V" },
	{ "getCursorPosition", "()I" },
	{ "setCursorPosition", "(I)V" },
	{ "setAlignment", "(I)V" },
	{ "isPasswordMode", "()Z" },
	{ "setPasswordMode", "(Z)V" },
	{ "setPasswordCharacter", "(C)V" },
	{ "setBlinkTime", "(F)V" },
	{ "moveCursor", "(ZZ)V" },
	{ "continueCursor", "(II)Z" },
	{ "lambda$addInputDialog$0", "()V" },
	{ "lambda$addInputDialog$2", "()V" },
	{ "lambda$addInputDialog$1", "(Ljava/lang/String;)V" },
};

static jclass interfaces[] { &class_arc_scene_utils_Disableable, };

static jclass innerClasses[] {
	&class_arc_scene_ui_TextField$TextFieldStyle,
	&class_arc_scene_ui_TextField$KeyRepeatTask,
	&class_arc_scene_ui_TextField$TextFieldClickListener,
	&class_arc_scene_ui_TextField$TextFieldValidator,
	&class_arc_scene_ui_TextField$TextFieldFilter,
	&class_arc_scene_ui_TextField$TextFieldListener,
};

static FieldMetadata fields[] {
	{ "BACKSPACE", &class_char, (intptr_t) &SF_arc_scene_ui_TextField_BACKSPACE, "C", 28 },
	{ "TAB", &class_char, (intptr_t) &SF_arc_scene_ui_TextField_TAB, "C", 28 },
	{ "DELETE", &class_char, (intptr_t) &SF_arc_scene_ui_TextField_DELETE, "C", 28 },
	{ "BULLET", &class_char, (intptr_t) &SF_arc_scene_ui_TextField_BULLET, "C", 28 },
	{ "tmp1", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_scene_ui_TextField_tmp1, "Larc/math/geom/Vec2;", 26 },
	{ "tmp2", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_scene_ui_TextField_tmp2, "Larc/math/geom/Vec2;", 26 },
	{ "tmp3", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_scene_ui_TextField_tmp3, "Larc/math/geom/Vec2;", 26 },
	{ "keyRepeatInitialTime", &class_float, (intptr_t) &SF_arc_scene_ui_TextField_keyRepeatInitialTime, "F", 9 },
	{ "keyRepeatTime", &class_float, (intptr_t) &SF_arc_scene_ui_TextField_keyRepeatTime, "F", 9 },
	{ "imeData", &class_java_lang_Object, offsetof(arc_scene_ui_TextField, F_imeData), "Ljava/lang/Object;", 1 },
	{ "layout", &class_arc_graphics_g2d_GlyphLayout, offsetof(arc_scene_ui_TextField, F_layout), "Larc/graphics/g2d/GlyphLayout;", 20 },
	{ "glyphPositions", &class_arc_struct_FloatSeq, offsetof(arc_scene_ui_TextField, F_glyphPositions), "Larc/struct/FloatSeq;", 20 },
	{ "text", &class_java_lang_String, offsetof(arc_scene_ui_TextField, F_text), "Ljava/lang/String;", 4 },
	{ "cursor", &class_int, offsetof(arc_scene_ui_TextField, F_cursor), "I", 4 },
	{ "selectionStart", &class_int, offsetof(arc_scene_ui_TextField, F_selectionStart), "I", 4 },
	{ "hasSelection", &class_boolean, offsetof(arc_scene_ui_TextField, F_hasSelection), "Z", 4 },
	{ "writeEnters", &class_boolean, offsetof(arc_scene_ui_TextField, F_writeEnters), "Z", 4 },
	{ "displayText", &class_java_lang_CharSequence, offsetof(arc_scene_ui_TextField, F_displayText), "Ljava/lang/CharSequence;", 4 },
	{ "fontOffset", &class_float, offsetof(arc_scene_ui_TextField, F_fontOffset), "F", 4 },
	{ "textHeight", &class_float, offsetof(arc_scene_ui_TextField, F_textHeight), "F", 4 },
	{ "textOffset", &class_float, offsetof(arc_scene_ui_TextField, F_textOffset), "F", 4 },
	{ "inputDialogListener", &class_arc_scene_event_InputListener, offsetof(arc_scene_ui_TextField, F_inputDialogListener), "Larc/scene/event/InputListener;", 4 },
	{ "style", &class_arc_scene_ui_TextField$TextFieldStyle, offsetof(arc_scene_ui_TextField, F_style), "Larc/scene/ui/TextField$TextFieldStyle;", 4 },
	{ "inputListener", &class_arc_scene_event_InputListener, offsetof(arc_scene_ui_TextField, F_inputListener), "Larc/scene/event/InputListener;", 4 },
	{ "listener", &class_arc_scene_ui_TextField$TextFieldListener, offsetof(arc_scene_ui_TextField, F_listener), "Larc/scene/ui/TextField$TextFieldListener;", 4 },
	{ "validator", &class_arc_scene_ui_TextField$TextFieldValidator, offsetof(arc_scene_ui_TextField, F_validator), "Larc/scene/ui/TextField$TextFieldValidator;", 4 },
	{ "filter", &class_arc_scene_ui_TextField$TextFieldFilter, offsetof(arc_scene_ui_TextField, F_filter), "Larc/scene/ui/TextField$TextFieldFilter;", 4 },
	{ "focusTraversal", &class_boolean, offsetof(arc_scene_ui_TextField, F_focusTraversal), "Z", 4 },
	{ "onlyFontChars", &class_boolean, offsetof(arc_scene_ui_TextField, F_onlyFontChars), "Z", 4 },
	{ "disabled", &class_boolean, offsetof(arc_scene_ui_TextField, F_disabled), "Z", 4 },
	{ "undoText", &class_java_lang_String, offsetof(arc_scene_ui_TextField, F_undoText), "Ljava/lang/String;", 4 },
	{ "lastChangeTime", &class_long, offsetof(arc_scene_ui_TextField, F_lastChangeTime), "J", 4 },
	{ "passwordMode", &class_boolean, offsetof(arc_scene_ui_TextField, F_passwordMode), "Z", 4 },
	{ "renderOffset", &class_float, offsetof(arc_scene_ui_TextField, F_renderOffset), "F", 4 },
	{ "cursorOn", &class_boolean, offsetof(arc_scene_ui_TextField, F_cursorOn), "Z", 4 },
	{ "hasInputDialog", &class_boolean, offsetof(arc_scene_ui_TextField, F_hasInputDialog), "Z", 4 },
	{ "lastBlink", &class_long, offsetof(arc_scene_ui_TextField, F_lastBlink), "J", 4 },
	{ "keyRepeatTask", &class_arc_scene_ui_TextField$KeyRepeatTask, offsetof(arc_scene_ui_TextField, F_keyRepeatTask), "Larc/scene/ui/TextField$KeyRepeatTask;", 4 },
	{ "programmaticChangeEvents", &class_boolean, offsetof(arc_scene_ui_TextField, F_programmaticChangeEvents), "Z", 4 },
	{ "messageText", &class_java_lang_String, offsetof(arc_scene_ui_TextField, F_messageText), "Ljava/lang/String;", 4 },
	{ "textHAlign", &class_int, offsetof(arc_scene_ui_TextField, F_textHAlign), "I", 4 },
	{ "selectionX", &class_float, offsetof(arc_scene_ui_TextField, F_selectionX), "F", 4 },
	{ "selectionWidth", &class_float, offsetof(arc_scene_ui_TextField, F_selectionWidth), "F", 4 },
	{ "passwordBuffer", &class_java_lang_StringBuilder, offsetof(arc_scene_ui_TextField, F_passwordBuffer), "Ljava/lang/StringBuilder;", 4 },
	{ "passwordCharacter", &class_char, offsetof(arc_scene_ui_TextField, F_passwordCharacter), "C", 4 },
	{ "visibleTextStart", &class_int, offsetof(arc_scene_ui_TextField, F_visibleTextStart), "I", 4 },
	{ "visibleTextEnd", &class_int, offsetof(arc_scene_ui_TextField, F_visibleTextEnd), "I", 4 },
	{ "maxLength", &class_int, offsetof(arc_scene_ui_TextField, F_maxLength), "I", 4 },
	{ "blinkTime", &class_float, offsetof(arc_scene_ui_TextField, F_blinkTime), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_TextField, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_TextField_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_TextField_java_lang_String_arc_scene_ui_TextField$TextFieldStyle, 0, "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;)V", 1 },
	{ "initialize", (intptr_t) M_arc_scene_ui_TextField_initialize, VTABLE_arc_scene_ui_TextField_initialize, "()V", 4 },
	{ "createInputListener", (intptr_t) M_arc_scene_ui_TextField_createInputListener_R_arc_scene_event_InputListener, VTABLE_arc_scene_ui_TextField_createInputListener_R_arc_scene_event_InputListener, "()Larc/scene/event/InputListener;", 4 },
	{ "letterUnderCursor", (intptr_t) M_arc_scene_ui_TextField_letterUnderCursor_float_R_int, VTABLE_arc_scene_ui_TextField_letterUnderCursor_float_R_int, "(F)I", 4 },
	{ "isWordCharacter", (intptr_t) M_arc_scene_ui_TextField_isWordCharacter_char_R_boolean, VTABLE_arc_scene_ui_TextField_isWordCharacter_char_R_boolean, "(C)Z", 4 },
	{ "wordUnderCursor", (intptr_t) M_arc_scene_ui_TextField_wordUnderCursor_int_R_Array1_int, VTABLE_arc_scene_ui_TextField_wordUnderCursor_int_R_Array1_int, "(I)[I", 4 },
	{ "wordUnderCursor", (intptr_t) M_arc_scene_ui_TextField_wordUnderCursor_float_R_Array1_int, VTABLE_arc_scene_ui_TextField_wordUnderCursor_float_R_Array1_int, "(F)[I", 0 },
	{ "withinMaxLength", (intptr_t) M_arc_scene_ui_TextField_withinMaxLength_int_R_boolean, VTABLE_arc_scene_ui_TextField_withinMaxLength_int_R_boolean, "(I)Z", 0 },
	{ "removeInputDialog", (intptr_t) M_arc_scene_ui_TextField_removeInputDialog, VTABLE_arc_scene_ui_TextField_removeInputDialog, "()V", 1 },
	{ "addInputDialog", (intptr_t) M_arc_scene_ui_TextField_addInputDialog, VTABLE_arc_scene_ui_TextField_addInputDialog, "()V", 1 },
	{ "getMaxLength", (intptr_t) M_arc_scene_ui_TextField_getMaxLength_R_int, VTABLE_arc_scene_ui_TextField_getMaxLength_R_int, "()I", 1 },
	{ "setMaxLength", (intptr_t) M_arc_scene_ui_TextField_setMaxLength_int, VTABLE_arc_scene_ui_TextField_setMaxLength_int, "(I)V", 1 },
	{ "clearText", (intptr_t) M_arc_scene_ui_TextField_clearText, VTABLE_arc_scene_ui_TextField_clearText, "()V", 1 },
	{ "setOnlyFontChars", (intptr_t) M_arc_scene_ui_TextField_setOnlyFontChars_boolean, VTABLE_arc_scene_ui_TextField_setOnlyFontChars_boolean, "(Z)V", 1 },
	{ "getStyle", (intptr_t) M_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle, VTABLE_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle, "()Larc/scene/ui/TextField$TextFieldStyle;", 1 },
	{ "setStyle", (intptr_t) M_arc_scene_ui_TextField_setStyle_arc_scene_ui_TextField$TextFieldStyle, VTABLE_arc_scene_ui_TextField_setStyle_arc_scene_ui_TextField$TextFieldStyle, "(Larc/scene/ui/TextField$TextFieldStyle;)V", 1 },
	{ "calculateOffsets", (intptr_t) M_arc_scene_ui_TextField_calculateOffsets, VTABLE_arc_scene_ui_TextField_calculateOffsets, "()V", 4 },
	{ "getBackgroundDrawable", (intptr_t) M_arc_scene_ui_TextField_getBackgroundDrawable_R_arc_scene_style_Drawable, VTABLE_arc_scene_ui_TextField_getBackgroundDrawable_R_arc_scene_style_Drawable, "()Larc/scene/style/Drawable;", 2 },
	{ "draw", (intptr_t) M_arc_scene_ui_TextField_draw, VTABLE_arc_scene_ui_TextField_draw, "()V", 1 },
	{ "isValid", (intptr_t) M_arc_scene_ui_TextField_isValid_R_boolean, VTABLE_arc_scene_ui_TextField_isValid_R_boolean, "()Z", 1 },
	{ "getTextY", (intptr_t) M_arc_scene_ui_TextField_getTextY_arc_graphics_g2d_Font_arc_scene_style_Drawable_R_float, VTABLE_arc_scene_ui_TextField_getTextY_arc_graphics_g2d_Font_arc_scene_style_Drawable_R_float, "(Larc/graphics/g2d/Font;Larc/scene/style/Drawable;)F", 4 },
	{ "drawSelection", (intptr_t) M_arc_scene_ui_TextField_drawSelection_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float, VTABLE_arc_scene_ui_TextField_drawSelection_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float, "(Larc/scene/style/Drawable;Larc/graphics/g2d/Font;FF)V", 4 },
	{ "drawText", (intptr_t) M_arc_scene_ui_TextField_drawText_arc_graphics_g2d_Font_float_float, VTABLE_arc_scene_ui_TextField_drawText_arc_graphics_g2d_Font_float_float, "(Larc/graphics/g2d/Font;FF)V", 4 },
	{ "drawCursor", (intptr_t) M_arc_scene_ui_TextField_drawCursor_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float, VTABLE_arc_scene_ui_TextField_drawCursor_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float, "(Larc/scene/style/Drawable;Larc/graphics/g2d/Font;FF)V", 4 },
	{ "updateDisplayText", (intptr_t) M_arc_scene_ui_TextField_updateDisplayText, VTABLE_arc_scene_ui_TextField_updateDisplayText, "()V", 4 },
	{ "blink", (intptr_t) M_arc_scene_ui_TextField_blink, VTABLE_arc_scene_ui_TextField_blink, "()V", 2 },
	{ "copy", (intptr_t) M_arc_scene_ui_TextField_copy, VTABLE_arc_scene_ui_TextField_copy, "()V", 1 },
	{ "cut", (intptr_t) M_arc_scene_ui_TextField_cut, VTABLE_arc_scene_ui_TextField_cut, "()V", 1 },
	{ "cut", (intptr_t) M_arc_scene_ui_TextField_cut_boolean, VTABLE_arc_scene_ui_TextField_cut_boolean, "(Z)V", 0 },
	{ "paste", (intptr_t) M_arc_scene_ui_TextField_paste_java_lang_String_boolean, VTABLE_arc_scene_ui_TextField_paste_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 1 },
	{ "insert", (intptr_t) M_arc_scene_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String, VTABLE_arc_scene_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String, "(ILjava/lang/CharSequence;Ljava/lang/String;)Ljava/lang/String;", 0 },
	{ "delete", (intptr_t) M_arc_scene_ui_TextField_delete_boolean_R_int, VTABLE_arc_scene_ui_TextField_delete_boolean_R_int, "(Z)I", 0 },
	{ "next", (intptr_t) M_arc_scene_ui_TextField_next_boolean, VTABLE_arc_scene_ui_TextField_next_boolean, "(Z)V", 1 },
	{ "findNextTextField", (intptr_t) M_arc_scene_ui_TextField_findNextTextField_arc_struct_Seq_arc_scene_ui_TextField_arc_math_geom_Vec2_arc_math_geom_Vec2_boolean_R_arc_scene_ui_TextField, VTABLE_arc_scene_ui_TextField_findNextTextField_arc_struct_Seq_arc_scene_ui_TextField_arc_math_geom_Vec2_arc_math_geom_Vec2_boolean_R_arc_scene_ui_TextField, "(Larc/struct/Seq;Larc/scene/ui/TextField;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Z)Larc/scene/ui/TextField;", 2 },
	{ "getDefaultInputListener", (intptr_t) M_arc_scene_ui_TextField_getDefaultInputListener_R_arc_scene_event_InputListener, VTABLE_arc_scene_ui_TextField_getDefaultInputListener_R_arc_scene_event_InputListener, "()Larc/scene/event/InputListener;", 1 },
	{ "setTextFieldListener", (intptr_t) M_arc_scene_ui_TextField_setTextFieldListener_arc_scene_ui_TextField$TextFieldListener, VTABLE_arc_scene_ui_TextField_setTextFieldListener_arc_scene_ui_TextField$TextFieldListener, "(Larc/scene/ui/TextField$TextFieldListener;)V", 1 },
	{ "typed", (intptr_t) M_arc_scene_ui_TextField_typed_char_java_lang_Runnable, VTABLE_arc_scene_ui_TextField_typed_char_java_lang_Runnable, "(CLjava/lang/Runnable;)V", 1 },
	{ "typed", (intptr_t) M_arc_scene_ui_TextField_typed_arc_func_Cons, VTABLE_arc_scene_ui_TextField_typed_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "getFilter", (intptr_t) M_arc_scene_ui_TextField_getFilter_R_arc_scene_ui_TextField$TextFieldFilter, VTABLE_arc_scene_ui_TextField_getFilter_R_arc_scene_ui_TextField$TextFieldFilter, "()Larc/scene/ui/TextField$TextFieldFilter;", 1 },
	{ "setFilter", (intptr_t) M_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter, VTABLE_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter, "(Larc/scene/ui/TextField$TextFieldFilter;)V", 1 },
	{ "setValidator", (intptr_t) M_arc_scene_ui_TextField_setValidator_arc_scene_ui_TextField$TextFieldValidator, VTABLE_arc_scene_ui_TextField_setValidator_arc_scene_ui_TextField$TextFieldValidator, "(Larc/scene/ui/TextField$TextFieldValidator;)V", 1 },
	{ "getValidator", (intptr_t) M_arc_scene_ui_TextField_getValidator_R_arc_scene_ui_TextField$TextFieldValidator, VTABLE_arc_scene_ui_TextField_getValidator_R_arc_scene_ui_TextField$TextFieldValidator, "()Larc/scene/ui/TextField$TextFieldValidator;", 1 },
	{ "setFocusTraversal", (intptr_t) M_arc_scene_ui_TextField_setFocusTraversal_boolean, VTABLE_arc_scene_ui_TextField_setFocusTraversal_boolean, "(Z)V", 1 },
	{ "getMessageText", (intptr_t) M_arc_scene_ui_TextField_getMessageText_R_java_lang_String, VTABLE_arc_scene_ui_TextField_getMessageText_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setMessageText", (intptr_t) M_arc_scene_ui_TextField_setMessageText_java_lang_String, VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "appendText", (intptr_t) M_arc_scene_ui_TextField_appendText_java_lang_String, VTABLE_arc_scene_ui_TextField_appendText_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getText", (intptr_t) M_arc_scene_ui_TextField_getText_R_java_lang_String, VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setText", (intptr_t) M_arc_scene_ui_TextField_setText_java_lang_String, VTABLE_arc_scene_ui_TextField_setText_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "changeText", (intptr_t) M_arc_scene_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean, VTABLE_arc_scene_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean, "(Ljava/lang/String;Ljava/lang/String;)Z", 0 },
	{ "getProgrammaticChangeEvents", (intptr_t) M_arc_scene_ui_TextField_getProgrammaticChangeEvents_R_boolean, VTABLE_arc_scene_ui_TextField_getProgrammaticChangeEvents_R_boolean, "()Z", 1 },
	{ "setProgrammaticChangeEvents", (intptr_t) M_arc_scene_ui_TextField_setProgrammaticChangeEvents_boolean, VTABLE_arc_scene_ui_TextField_setProgrammaticChangeEvents_boolean, "(Z)V", 1 },
	{ "getSelectionStart", (intptr_t) M_arc_scene_ui_TextField_getSelectionStart_R_int, VTABLE_arc_scene_ui_TextField_getSelectionStart_R_int, "()I", 1 },
	{ "getSelection", (intptr_t) M_arc_scene_ui_TextField_getSelection_R_java_lang_String, VTABLE_arc_scene_ui_TextField_getSelection_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setSelection", (intptr_t) M_arc_scene_ui_TextField_setSelection_int_int, VTABLE_arc_scene_ui_TextField_setSelection_int_int, "(II)V", 1 },
	{ "selectAll", (intptr_t) M_arc_scene_ui_TextField_selectAll, VTABLE_arc_scene_ui_TextField_selectAll, "()V", 1 },
	{ "clearSelection", (intptr_t) M_arc_scene_ui_TextField_clearSelection, VTABLE_arc_scene_ui_TextField_clearSelection, "()V", 1 },
	{ "getCursorPosition", (intptr_t) M_arc_scene_ui_TextField_getCursorPosition_R_int, VTABLE_arc_scene_ui_TextField_getCursorPosition_R_int, "()I", 1 },
	{ "setCursorPosition", (intptr_t) M_arc_scene_ui_TextField_setCursorPosition_int, VTABLE_arc_scene_ui_TextField_setCursorPosition_int, "(I)V", 1 },
	{ "getPrefWidth", (intptr_t) M_arc_scene_ui_TextField_getPrefWidth_R_float, VTABLE_arc_scene_ui_TextField_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_arc_scene_ui_TextField_getPrefHeight_R_float, VTABLE_arc_scene_ui_TextField_getPrefHeight_R_float, "()F", 1 },
	{ "setAlignment", (intptr_t) M_arc_scene_ui_TextField_setAlignment_int, VTABLE_arc_scene_ui_TextField_setAlignment_int, "(I)V", 1 },
	{ "isPasswordMode", (intptr_t) M_arc_scene_ui_TextField_isPasswordMode_R_boolean, VTABLE_arc_scene_ui_TextField_isPasswordMode_R_boolean, "()Z", 1 },
	{ "setPasswordMode", (intptr_t) M_arc_scene_ui_TextField_setPasswordMode_boolean, VTABLE_arc_scene_ui_TextField_setPasswordMode_boolean, "(Z)V", 1 },
	{ "setPasswordCharacter", (intptr_t) M_arc_scene_ui_TextField_setPasswordCharacter_char, VTABLE_arc_scene_ui_TextField_setPasswordCharacter_char, "(C)V", 1 },
	{ "setBlinkTime", (intptr_t) M_arc_scene_ui_TextField_setBlinkTime_float, VTABLE_arc_scene_ui_TextField_setBlinkTime_float, "(F)V", 1 },
	{ "isDisabled", (intptr_t) M_arc_scene_ui_TextField_isDisabled_R_boolean, VTABLE_arc_scene_ui_TextField_isDisabled_R_boolean, "()Z", 1 },
	{ "setDisabled", (intptr_t) M_arc_scene_ui_TextField_setDisabled_boolean, VTABLE_arc_scene_ui_TextField_setDisabled_boolean, "(Z)V", 1 },
	{ "moveCursor", (intptr_t) M_arc_scene_ui_TextField_moveCursor_boolean_boolean, VTABLE_arc_scene_ui_TextField_moveCursor_boolean_boolean, "(ZZ)V", 4 },
	{ "continueCursor", (intptr_t) M_arc_scene_ui_TextField_continueCursor_int_int_R_boolean, VTABLE_arc_scene_ui_TextField_continueCursor_int_int_R_boolean, "(II)Z", 4 },
	{ "lambda$typed$1", (intptr_t) SM_arc_scene_ui_TextField_lambda$typed$1_arc_func_Cons_arc_scene_ui_TextField_char, 0, "(Larc/func/Cons;Larc/scene/ui/TextField;C)V", 4106 },
	{ "lambda$typed$0", (intptr_t) SM_arc_scene_ui_TextField_lambda$typed$0_char_java_lang_Runnable_arc_scene_ui_TextField_char, 0, "(CLjava/lang/Runnable;Larc/scene/ui/TextField;C)V", 4106 },
	{ "lambda$addInputDialog$0", (intptr_t) M_arc_scene_ui_TextField_lambda$addInputDialog$0, VTABLE_arc_scene_ui_TextField_lambda$addInputDialog$0, "()V", 4098 },
	{ "lambda$addInputDialog$2", (intptr_t) M_arc_scene_ui_TextField_lambda$addInputDialog$2, VTABLE_arc_scene_ui_TextField_lambda$addInputDialog$2, "()V", 4098 },
	{ "lambda$addInputDialog$1", (intptr_t) M_arc_scene_ui_TextField_lambda$addInputDialog$1_java_lang_String, VTABLE_arc_scene_ui_TextField_lambda$addInputDialog$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_arc_scene_ui_TextField, 0, "()V", 8 },
};

Class class_arc_scene_ui_TextField{
		.nativeName = (intptr_t) "arc/scene/ui/TextField",
		.parentClass = (intptr_t) &class_arc_scene_Element,
		.size = sizeof(arc_scene_ui_TextField),
		.classVtable = (intptr_t) vtable_arc_scene_ui_TextField,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_TextField,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_TextField,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 6,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 49,
		.nativeFields = (intptr_t) fields,
		.methodCount = 77,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 189,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_TextField = registerClass(&class_arc_scene_ui_TextField);

}
