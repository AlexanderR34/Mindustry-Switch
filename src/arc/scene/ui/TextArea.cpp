#include "arc/scene/ui/TextArea.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "arc/func/Prov.h"
#include "arc/scene/ui/TextField.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/struct/FloatSeq.h"
#include "arc/struct/IntSeq.h"
#include "arc/scene/ui/TextArea_TextAreaListener.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/pooling/Pools.h"
#include "arc/scene/ui/TextField_TextFieldStyle.h"
#include "arc/scene/ui/TextArea_invoke_arc_func_Prov_0.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/Class.h"
#include "arc/scene/event/InputListener.h"
#include "arc/scene/ui/TextArea.h"

extern "C" {


void mark_arc_scene_ui_TextArea(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_TextField(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_TextArea *) object;
	if (self->F_linesBreak)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_linesBreak)->clazz)->markFunction)((jobject) self->F_linesBreak, mark, depth + 1);
	if (self->F_lastText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastText)->clazz)->markFunction)((jobject) self->F_lastText, mark, depth + 1);
}

void clinit_arc_scene_ui_TextArea(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_TextField(ctx);
}

void init_arc_scene_ui_TextArea_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextArea(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	init_arc_scene_ui_TextField_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_TextArea_java_lang_String_arc_scene_ui_TextField$TextFieldStyle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextArea(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(36);
	init_arc_scene_ui_TextField_java_lang_String_arc_scene_ui_TextField$TextFieldStyle(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextArea_initialize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:initialize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	M_arc_scene_ui_TextField_initialize(ctx, (frame[0].o));
	LINE_NUMBER(42);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_writeEnters = (jint(1));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_linesBreak = (jref) sp[1].o;
	LINE_NUMBER(44);
	((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine = (jint(0));
	LINE_NUMBER(45);
	((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_firstLineShowing = (jint(0));
	LINE_NUMBER(46);
	((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_moveOffset = (jfloat(-1.0f));
	LINE_NUMBER(47);
	((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesShowing = (jint(0));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_scene_ui_TextArea_letterUnderCursor_float_R_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:letterUnderCursor", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(53);
	jint temp0 = ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine) * (jint(2));
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	if (temp0 < ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(57);
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine) * (jint(2)))));
	LINE_NUMBER(58);
	frame[1].f = ((frame[1].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[3].i))));
	LINE_NUMBER(59);
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine) * (jint(2))) + (jint(1)))));
	LINE_NUMBER(60);
	frame[5].i = (frame[3].i);
	}
label_9:;
	{
	LINE_NUMBER(61);
	if ((frame[5].i) >= (frame[4].i)) goto label_10;
	}
	{
	LINE_NUMBER(62);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[5].i))), (frame[1].f), -1)) <= 0) goto label_12;
	}
	goto label_10;
label_12:;
	{
	LINE_NUMBER(61);
	INST_IINC(5, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(63);
	if (((frame[5].i) - (jint(1))) < 0) goto label_13;
	}
	{
	if ((floatCompare((((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[5].i))) - (frame[1].f)), ((frame[1].f) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) - (jint(1)))))), 1)) > 0) goto label_13;
	}
	INST_ILOAD(5);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(64);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((frame[5].i) - (jint(1))));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextArea_setPrefRows_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:setPrefRows", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(73);
	((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_prefRows = (frame[1].f);
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_TextArea_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:getPrefHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	if ((floatCompare(((jfloat)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_prefRows), (jfloat(0)), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(79);
	jfloat temp0 = (jfloat)M_arc_scene_ui_TextField_getPrefHeight_R_float(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(81);
	frame[1].f = (((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHeight) * ((jfloat)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_prefRows));
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(83);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = temp0 + temp1;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp3 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp4 = temp2 + temp3;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	LINE_NUMBER(84);
	jfloat temp5 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(83);
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, temp5);
	frame[1].f = temp6;
	}
label_4:;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jint M_arc_scene_ui_TextArea_getLines_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:getLines", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	jint temp0 = ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) / (jint(2));
	jint temp1 = (jint)((func_arc_scene_ui_TextArea_newLineAtEnd_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextArea_newLineAtEnd_R_boolean])(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	INST_IADD();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextArea_newLineAtEnd_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:newLineAtEnd", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	LINE_NUMBER(98);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 == (13)) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (10)) goto label_1;
	}
label_3:;
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextArea_moveCursorLine_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:moveCursorLine", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(103);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(104);
	((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine = (jint(0));
	LINE_NUMBER(105);
	((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor = (jint(0));
	LINE_NUMBER(106);
	((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_moveOffset = (jfloat(-1.0f));
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(107);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_arc_scene_ui_TextArea_getLines_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextArea_getLines_R_int])(ctx, (frame[0].o));
	if (temp0 < temp1) goto label_6;
	}
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_arc_scene_ui_TextArea_getLines_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextArea_getLines_R_int])(ctx, (frame[0].o));
	frame[2].i = (temp0 - (jint(1)));
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = temp1;
	LINE_NUMBER(110);
	jint temp2 = frame[1].i;
	jint temp3 = (jint)((func_arc_scene_ui_TextArea_getLines_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextArea_getLines_R_int])(ctx, (frame[0].o));
	if (temp2 > temp3) goto label_10;
	}
	{
	if ((frame[2].i) != ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine)) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(111);
	((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_moveOffset = (jfloat(-1.0f));
	}
label_11:;
	{
	LINE_NUMBER(113);
	((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine = (frame[2].i);
	LINE_NUMBER(114);
	goto label_5;
	}
label_6:;
	{
	if ((frame[1].i) == ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine)) goto label_5;
	}
	{
	LINE_NUMBER(115);
	if ((floatCompare(((jfloat)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_moveOffset), (jfloat(0)), 1)) >= 0) goto label_14;
	}
	{
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp += 1;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) > (((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine) * (jint(2)))) goto label_16;
	}
	INST_FCONST(0);
	goto label_17;
label_16:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor));
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	sp[1].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	jint temp1 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, (((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine) * (jint(2))));
	jfloat temp2 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, temp1);
	jfloat temp3 = temp0 - temp2;
	sp[0].f = temp3;
	sp += 1;
	}
label_17:;
	sp -= 2;
	((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_moveOffset = sp[1].f;
label_14:;
	{
	LINE_NUMBER(119);
	((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine = (frame[1].i);
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine) * (jint(2));
	sp[1].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp += 1;
	if (temp0 < ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_19;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_20;
	}
label_19:;
	{
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[0].o, (((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine) * (jint(2))));
	sp[0].i = temp0;
	sp += 1;
	}
label_20:;
	sp -= 2;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = sp[1].i;
label_21:;
	{
	LINE_NUMBER(121);
	jint temp0 = (jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_22;
	}
	{
	jint temp0 = (jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor;
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	jint temp1 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[0].o, ((((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine) * (jint(2))) + (jint(1))));
	if (temp0 > (temp1 - (jint(1)))) goto label_22;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jint temp0 = (jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor;
	LINE_NUMBER(122);
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	sp[1].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	jint temp2 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, (((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine) * (jint(2))));
	jfloat temp3 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, temp2);
	if ((floatCompare((temp1 - temp3), ((jfloat)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_moveOffset), 1)) >= 0) goto label_22;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor = (((jint)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_cursor) + (jint(1)));
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(125);
	((func_arc_scene_ui_TextArea_showCursor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextArea_showCursor])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(127);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextArea_updateCurrentLine(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:updateCurrentLine", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	jint temp0 = (jint)M_arc_scene_ui_TextArea_calculateCurrentLineIndex_int_R_int(ctx, (frame[0].o), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor));
	frame[1].i = temp0;
	LINE_NUMBER(132);
	frame[2].i = ((frame[1].i) / (jint(2)));
	LINE_NUMBER(135);
	if (((frame[1].i) % (jint(2))) == 0) goto label_3;
	}
	{
	jint temp0 = (frame[1].i) + (jint(1));
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	jint temp0 = (jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor;
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	if (temp0 != ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)))) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1))));
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	if (temp0 == ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)))) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(137);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	if (temp0 < (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) / (jint(2)))) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 == (13)) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	LINE_NUMBER(138);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (10)) goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(139);
	((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine = (frame[2].i);
	}
label_4:;
	LINE_NUMBER(142);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextArea_showCursor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:showCursor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	((func_arc_scene_ui_TextArea_updateCurrentLine) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextArea_updateCurrentLine])(ctx, (frame[0].o));
	LINE_NUMBER(147);
	if (((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine) == ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_firstLineShowing)) goto label_2;
	}
	{
	LINE_NUMBER(148);
	if (((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine) < ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_firstLineShowing)) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(-1);
label_5:;
	INST_ISTORE(1);
label_6:;
	{
	LINE_NUMBER(149);
	if (((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_firstLineShowing) > ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine)) goto label_7;
	}
	{
	if (((((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_firstLineShowing) + ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesShowing)) - (jint(1))) >= ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine)) goto label_2;
	}
label_7:;
	{
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_firstLineShowing = (((jint)((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_firstLineShowing) + (frame[1].i));
	goto label_6;
	}
label_2:;
	LINE_NUMBER(153);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_scene_ui_TextArea_calculateCurrentLineIndex_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:calculateCurrentLineIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(157);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(158);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	if (temp0 <= ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)))) goto label_2;
	}
	{
	LINE_NUMBER(159);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextArea_sizeChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:sizeChanged", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_lastText = (jref) (jobject(nullptr));
	LINE_NUMBER(171);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font;
	frame[1].o = sp[0].o;
	LINE_NUMBER(172);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[2].o = sp[0].o;
	LINE_NUMBER(173);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_TextArea_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextArea_getHeight_R_float])(ctx, (frame[0].o));
	sp[0].f = temp0;
	sp += 1;
	if ((frame[2].o) != nullptr) goto label_4;
	}
	INST_FCONST(0);
	goto label_5;
label_4:;
	{
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp2 = temp0 + temp1;
	sp[0].f = temp2;
	sp += 1;
	}
label_5:;
	{
	sp -= 2;
	frame[3].f = (sp[0].f - sp[1].f);
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_Font_getLineHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getLineHeight_R_float])(ctx, (frame[1].o));
	jdouble temp2 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (jdouble((temp0 / temp1))));
	((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_linesShowing = (jint(temp2));
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_TextArea_getTextY_arc_graphics_g2d_Font_arc_scene_style_Drawable_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:getTextY", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(179);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_TextArea_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextArea_getHeight_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(180);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(181);
	jfloat temp0 = frame[3].f;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].f = (jfloat((jint((temp0 - temp1)))));
	}
label_2:;
	{
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextArea_drawSelection_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:drawSelection", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(188);
	frame[5].i = (((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_firstLineShowing) * (jint(2)));
	LINE_NUMBER(189);
	frame[6].f = (jfloat(0));
	LINE_NUMBER(190);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart));
	frame[7].i = temp0;
	LINE_NUMBER(191);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor), ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_selectionStart));
	frame[8].i = temp1;
	}
label_4:;
	{
	LINE_NUMBER(192);
	jint temp0 = (frame[5].i) + (jint(1));
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_5;
	}
	{
	if ((frame[5].i) >= ((((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_firstLineShowing) + ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesShowing)) * (jint(2)))) goto label_5;
	}
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[0].o, (frame[5].i));
	frame[9].i = temp0;
	LINE_NUMBER(195);
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	jint temp1 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[0].o, ((frame[5].i) + (jint(1))));
	frame[10].i = temp1;
	LINE_NUMBER(197);
	if ((frame[7].i) >= (frame[9].i)) goto label_9;
	}
	{
	if ((frame[7].i) >= (frame[10].i)) goto label_9;
	}
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_9;
	}
	{
	if ((frame[8].i) < (frame[10].i)) goto label_10;
	}
label_9:;
	{
	if ((frame[7].i) <= (frame[9].i)) goto label_11;
	}
	{
	if ((frame[7].i) <= (frame[10].i)) goto label_11;
	}
	{
	if ((frame[8].i) <= (frame[9].i)) goto label_11;
	}
	{
	if ((frame[8].i) > (frame[10].i)) goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[0].o, (frame[5].i));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (frame[7].i));
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1))));
	frame[11].i = temp2;
	LINE_NUMBER(201);
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	jint temp3 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[0].o, ((frame[5].i) + (jint(1))));
	jint temp4 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp3, (frame[8].i));
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jint temp5 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp4, (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1))));
	frame[12].i = temp5;
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jfloat temp6 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, (frame[11].i));
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	sp[1].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	jint temp7 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, (frame[5].i));
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jint temp8 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp7, ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size));
	jfloat temp9 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, temp8);
	frame[13].f = (temp6 - temp9);
	LINE_NUMBER(204);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jfloat temp10 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, (frame[12].i));
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jfloat temp11 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, (frame[11].i));
	frame[14].f = (temp10 - temp11);
	LINE_NUMBER(206);
	sp[0].o = frame[1].o;
	jfloat temp12 = ((frame[3].f) + (frame[13].f)) + ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_fontOffset);
	jfloat temp13 = (frame[4].f) - ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textHeight);
	jfloat temp14 = (jfloat)((func_arc_graphics_g2d_Font_getDescent_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getDescent_R_float])(ctx, (frame[2].o));
	jfloat temp15 = (temp13 - temp14) - (frame[6].f);
	jfloat temp16 = frame[14].f;
	sp[1].o = frame[2].o;
	LINE_NUMBER(207);
	jfloat temp17 = (jfloat)((func_arc_graphics_g2d_Font_getLineHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getLineHeight_R_float])(ctx, sp[1].o);
	LINE_NUMBER(206);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp12, temp15, temp16, temp17);
	}
label_10:;
	{
	LINE_NUMBER(210);
	jfloat temp0 = frame[6].f;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_Font_getLineHeight_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getLineHeight_R_float])(ctx, (frame[2].o));
	frame[6].f = (temp0 + temp1);
	LINE_NUMBER(211);
	INST_IINC(5, 2);
	LINE_NUMBER(212);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(213);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextArea_drawText_arc_graphics_g2d_Font_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:drawText", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[1].o));
	frame[4].i = ((jint)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_markupEnabled);
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[1].o));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_markupEnabled = (jint(0));
	LINE_NUMBER(219);
	frame[5].f = (jfloat(0));
	LINE_NUMBER(220);
	frame[6].i = (((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_firstLineShowing) * (jint(2)));
	}
label_4:;
	{
	if ((frame[6].i) >= ((((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_firstLineShowing) + ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesShowing)) * (jint(2)))) goto label_5;
	}
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_displayText;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (frame[3].f) + (frame[5].f);
	sp[2].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp[2].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[2].o))->F_items;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[2].o, (frame[6].i));
	sp[2].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp[2].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[2].o))->F_items;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[2].o, ((frame[6].i) + (jint(1))))), (jfloat(0)), (8), (jint(0)));
	LINE_NUMBER(222);
	jfloat temp3 = frame[5].f;
	jfloat temp4 = (jfloat)((func_arc_graphics_g2d_Font_getLineHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getLineHeight_R_float])(ctx, (frame[1].o));
	frame[5].f = (temp3 - temp4);
	LINE_NUMBER(220);
	INST_IINC(6, 2);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[1].o));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_markupEnabled = (frame[4].i);
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextArea_drawCursor_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:drawCursor", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(229);
	jint temp0 = (jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	if (temp0 >= ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	jint temp0 = ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine) * (jint(2));
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	if (temp0 < ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
label_1:;
	INST_FCONST(0);
	goto label_3;
label_2:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor));
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_glyphPositions;
	sp[1].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp[1].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[1].o))->F_items;
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine) * (jint(2))))));
	jfloat temp2 = temp0 - temp1;
	sp[0].f = temp2;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[5].f = sp[0].f;
	LINE_NUMBER(231);
	sp[0].o = frame[1].o;
	jfloat temp0 = ((frame[3].f) + (frame[5].f)) + ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_fontOffset);
	sp[1].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[2].o));
	jfloat temp1 = temp0 + ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[1].o))->F_cursorX);
	jfloat temp2 = frame[4].f;
	sp[1].o = frame[2].o;
	LINE_NUMBER(232);
	jfloat temp3 = (jfloat)((func_arc_graphics_g2d_Font_getDescent_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getDescent_R_float])(ctx, sp[1].o);
	jfloat temp4 = temp2 - (temp3 / (jfloat(2)));
	jfloat temp5 = jfloat(((((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine) - ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_firstLineShowing)) + (jint(1))));
	jfloat temp6 = (jfloat)((func_arc_graphics_g2d_Font_getLineHeight_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getLineHeight_R_float])(ctx, (frame[2].o));
	jfloat temp7 = temp4 - (temp5 * temp6);
	jfloat temp8 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = frame[2].o;
	LINE_NUMBER(233);
	jfloat temp9 = (jfloat)((func_arc_graphics_g2d_Font_getLineHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getLineHeight_R_float])(ctx, sp[1].o);
	LINE_NUMBER(231);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp1, temp7, temp8, temp9);
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextArea_calculateOffsets(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:calculateOffsets", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	M_arc_scene_ui_TextField_calculateOffsets(ctx, (frame[0].o));
	LINE_NUMBER(239);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_lastText;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_lastText = (jref) sp[1].o;
	LINE_NUMBER(241);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font;
	frame[1].o = sp[0].o;
	LINE_NUMBER(242);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_TextArea_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextArea_getWidth_R_float])(ctx, (frame[0].o));
	LINE_NUMBER(243);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	jobject temp1 = sp[0].o;
	sp[0].f = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getRightWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = temp0 + temp1;
	sp[0].f = temp2;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_FCONST(0);
label_8:;
	{
	sp -= 2;
	frame[2].f = (sp[0].f - sp[1].f);
	LINE_NUMBER(244);
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(245);
	frame[3].i = (jint(0));
	LINE_NUMBER(246);
	frame[4].i = (jint(0));
	LINE_NUMBER(248);
	sp[0].o = ((jobject) &class_arc_graphics_g2d_GlyphLayout);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_TextArea_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_scene_ui_TextArea_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_scene_ui_TextArea_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(249);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[6].o)))->F_ignoreMarkup = (jint(1));
	LINE_NUMBER(250);
	frame[7].i = (jint(0));
	}
label_15:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_16;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (frame[7].i));
	frame[5].i = temp0;
	LINE_NUMBER(252);
	if ((frame[5].i) == (10)) goto label_19;
	}
	{
	if ((frame[5].i) != (13)) goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(254);
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(255);
	frame[3].i = ((frame[7].i) + (jint(1)));
	goto label_23;
	}
label_20:;
	{
	LINE_NUMBER(257);
	jint temp0 = (jint)((func_arc_scene_ui_TextArea_continueCursor_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextArea_continueCursor_int_int_R_boolean])(ctx, (frame[0].o), (frame[7].i), (jint(0)));
	if (temp0 == 0) goto label_24;
	}
	INST_ILOAD(4);
	goto label_25;
label_24:;
	INST_ILOAD(7);
label_25:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(258);
	sp[0].o = frame[6].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_java_lang_String_subSequence_int_int_R_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_subSequence_int_int_R_java_lang_CharSequence])(ctx, sp[2].o, (frame[3].i), ((frame[7].i) + (jint(1))));
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(259);
	if ((floatCompare(((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[6].o)))->F_width), (frame[2].f), -1)) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(260);
	if ((frame[3].i) < (frame[4].i)) goto label_29;
	}
	{
	LINE_NUMBER(261);
	frame[4].i = ((frame[7].i) - (jint(1)));
	}
label_29:;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(264);
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, ((frame[4].i) + (jint(1))));
	LINE_NUMBER(265);
	frame[3].i = ((frame[4].i) + (jint(1)));
	LINE_NUMBER(266);
	frame[4].i = (frame[3].i);
	}
label_23:;
	{
	LINE_NUMBER(250);
	INST_IINC(7, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(270);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[6].o));
	LINE_NUMBER(272);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_35;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(274);
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp[1].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	}
label_35:;
	{
	LINE_NUMBER(276);
	((func_arc_scene_ui_TextArea_showCursor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextArea_showCursor])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(278);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TextArea_createInputListener_R_arc_scene_event_InputListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:createInputListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(282);
	clinit_arc_scene_ui_TextArea$TextAreaListener(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextArea$TextAreaListener);
	init_arc_scene_ui_TextArea$TextAreaListener_arc_scene_ui_TextArea(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextArea_setSelection_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:setSelection", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(287);
	M_arc_scene_ui_TextField_setSelection_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(288);
	((func_arc_scene_ui_TextArea_updateCurrentLine) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextArea_updateCurrentLine])(ctx, (frame[0].o));
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextArea_moveCursor_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:moveCursor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(293);
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(-1);
label_2:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(294);
	frame[4].i = ((((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine) * (jint(2))) + (frame[3].i));
	LINE_NUMBER(295);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	jint temp0 = (frame[4].i) + (jint(1));
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i))) != ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor)) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[4].i) + (jint(1))))) != ((jint)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_cursor)) goto label_5;
	}
	{
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_cursorLine = (((jint)((arc_scene_ui_TextArea *) NULL_CHECK(sp[0].o))->F_cursorLine) + (frame[3].i));
	LINE_NUMBER(298);
	if ((frame[2].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(299);
	M_arc_scene_ui_TextField_moveCursor_boolean_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	}
label_8:;
	{
	LINE_NUMBER(301);
	((func_arc_scene_ui_TextArea_showCursor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextArea_showCursor])(ctx, (frame[0].o));
	goto label_10;
	}
label_5:;
	{
	LINE_NUMBER(303);
	M_arc_scene_ui_TextField_moveCursor_boolean_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	}
label_10:;
	{
	LINE_NUMBER(305);
	((func_arc_scene_ui_TextArea_updateCurrentLine) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextArea_updateCurrentLine])(ctx, (frame[0].o));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TextArea_continueCursor_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:continueCursor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(311);
	jint temp0 = (jint)M_arc_scene_ui_TextArea_calculateCurrentLineIndex_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (frame[2].i)));
	frame[3].i = temp0;
	LINE_NUMBER(312);
	jint temp1 = (jint)M_arc_scene_ui_TextField_continueCursor_int_int_R_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp1 == 0) goto label_2;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	if (temp0 >= (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) - (jint(2)))) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[3].i) + (jint(1))))) != (frame[1].i)) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[3].i) + (jint(1))));
	sp[0].o = (jobject)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesBreak;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	if (temp0 != ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[3].i) + (jint(2)))))) goto label_2;
	}
label_3:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_arc_scene_ui_TextArea_getCursorLine_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:getCursorLine", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine);
	}

	popStackFrame(ctx);
}

jint M_arc_scene_ui_TextArea_getFirstLineShowing_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:getFirstLineShowing", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_firstLineShowing);
	}

	popStackFrame(ctx);
}

jint M_arc_scene_ui_TextArea_getLinesShowing_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:getLinesShowing", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_linesShowing);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_TextArea_getCursorX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:getCursorX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(329);
	jfloat temp0 = ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_textOffset) + ((jfloat)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_fontOffset);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 + ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_cursorX));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_TextArea_getCursorY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextArea:getCursorY", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font;
	frame[1].o = sp[0].o;
	LINE_NUMBER(334);
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Font_getDescent_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getDescent_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (-temp0) / (jfloat(2));
	jfloat temp2 = jfloat(((((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_cursorLine) - ((jint)((arc_scene_ui_TextArea *) NULL_CHECK((frame[0].o)))->F_firstLineShowing)) + (jint(1))));
	jfloat temp3 = (jfloat)((func_arc_graphics_g2d_Font_getLineHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getLineHeight_R_float])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (-(temp1 - (temp2 * temp3)));
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_TextArea[] {
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
	(void *) M_arc_scene_ui_TextArea_sizeChanged,
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
	(void *) M_arc_scene_ui_TextArea_getPrefHeight_R_float,
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
	(void *) M_arc_scene_ui_TextArea_initialize,
	(void *) M_arc_scene_ui_TextArea_createInputListener_R_arc_scene_event_InputListener,
	(void *) M_arc_scene_ui_TextArea_letterUnderCursor_float_R_int,
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
	(void *) M_arc_scene_ui_TextArea_calculateOffsets,
	(void *) M_arc_scene_ui_TextField_getBackgroundDrawable_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_TextField_isValid_R_boolean,
	(void *) M_arc_scene_ui_TextArea_getTextY_arc_graphics_g2d_Font_arc_scene_style_Drawable_R_float,
	(void *) M_arc_scene_ui_TextArea_drawSelection_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float,
	(void *) M_arc_scene_ui_TextArea_drawText_arc_graphics_g2d_Font_float_float,
	(void *) M_arc_scene_ui_TextArea_drawCursor_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float,
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
	(void *) M_arc_scene_ui_TextArea_setSelection_int_int,
	(void *) M_arc_scene_ui_TextField_selectAll,
	(void *) M_arc_scene_ui_TextField_clearSelection,
	(void *) M_arc_scene_ui_TextField_getCursorPosition_R_int,
	(void *) M_arc_scene_ui_TextField_setCursorPosition_int,
	(void *) M_arc_scene_ui_TextField_setAlignment_int,
	(void *) M_arc_scene_ui_TextField_isPasswordMode_R_boolean,
	(void *) M_arc_scene_ui_TextField_setPasswordMode_boolean,
	(void *) M_arc_scene_ui_TextField_setPasswordCharacter_char,
	(void *) M_arc_scene_ui_TextField_setBlinkTime_float,
	(void *) M_arc_scene_ui_TextArea_moveCursor_boolean_boolean,
	(void *) M_arc_scene_ui_TextArea_continueCursor_int_int_R_boolean,
	(void *) M_arc_scene_ui_TextField_lambda$addInputDialog$0,
	(void *) M_arc_scene_ui_TextField_lambda$addInputDialog$2,
	(void *) M_arc_scene_ui_TextField_lambda$addInputDialog$1_java_lang_String,
	(void *) M_arc_scene_ui_TextArea_setPrefRows_float,
	(void *) M_arc_scene_ui_TextArea_getLines_R_int,
	(void *) M_arc_scene_ui_TextArea_newLineAtEnd_R_boolean,
	(void *) M_arc_scene_ui_TextArea_moveCursorLine_int,
	(void *) M_arc_scene_ui_TextArea_updateCurrentLine,
	(void *) M_arc_scene_ui_TextArea_showCursor,
	(void *) M_arc_scene_ui_TextArea_calculateCurrentLineIndex_int_R_int,
	(void *) M_arc_scene_ui_TextArea_getCursorLine_R_int,
	(void *) M_arc_scene_ui_TextArea_getFirstLineShowing_R_int,
	(void *) M_arc_scene_ui_TextArea_getLinesShowing_R_int,
	(void *) M_arc_scene_ui_TextArea_getCursorX_R_float,
	(void *) M_arc_scene_ui_TextArea_getCursorY_R_float,
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
	{ "setPrefRows", "(F)V" },
	{ "getLines", "()I" },
	{ "newLineAtEnd", "()Z" },
	{ "moveCursorLine", "(I)V" },
	{ "updateCurrentLine", "()V" },
	{ "showCursor", "()V" },
	{ "calculateCurrentLineIndex", "(I)I" },
	{ "getCursorLine", "()I" },
	{ "getFirstLineShowing", "()I" },
	{ "getLinesShowing", "()I" },
	{ "getCursorX", "()F" },
	{ "getCursorY", "()F" },
};

static jclass innerClasses[] {
	&class_arc_scene_ui_TextArea$TextAreaListener,
};

static FieldMetadata fields[] {
	{ "linesBreak", &class_arc_struct_IntSeq, offsetof(arc_scene_ui_TextArea, F_linesBreak), "Larc/struct/IntSeq;", 4 },
	{ "cursorLine", &class_int, offsetof(arc_scene_ui_TextArea, F_cursorLine), "I", 4 },
	{ "firstLineShowing", &class_int, offsetof(arc_scene_ui_TextArea, F_firstLineShowing), "I", 4 },
	{ "moveOffset", &class_float, offsetof(arc_scene_ui_TextArea, F_moveOffset), "F", 4 },
	{ "lastText", &class_java_lang_String, offsetof(arc_scene_ui_TextArea, F_lastText), "Ljava/lang/String;", 4 },
	{ "linesShowing", &class_int, offsetof(arc_scene_ui_TextArea, F_linesShowing), "I", 4 },
	{ "prefRows", &class_float, offsetof(arc_scene_ui_TextArea, F_prefRows), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_TextArea_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_TextArea_java_lang_String_arc_scene_ui_TextField$TextFieldStyle, 0, "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;)V", 1 },
	{ "initialize", (intptr_t) M_arc_scene_ui_TextArea_initialize, VTABLE_arc_scene_ui_TextArea_initialize, "()V", 4 },
	{ "letterUnderCursor", (intptr_t) M_arc_scene_ui_TextArea_letterUnderCursor_float_R_int, VTABLE_arc_scene_ui_TextArea_letterUnderCursor_float_R_int, "(F)I", 4 },
	{ "setPrefRows", (intptr_t) M_arc_scene_ui_TextArea_setPrefRows_float, VTABLE_arc_scene_ui_TextArea_setPrefRows_float, "(F)V", 1 },
	{ "getPrefHeight", (intptr_t) M_arc_scene_ui_TextArea_getPrefHeight_R_float, VTABLE_arc_scene_ui_TextArea_getPrefHeight_R_float, "()F", 1 },
	{ "getLines", (intptr_t) M_arc_scene_ui_TextArea_getLines_R_int, VTABLE_arc_scene_ui_TextArea_getLines_R_int, "()I", 1 },
	{ "newLineAtEnd", (intptr_t) M_arc_scene_ui_TextArea_newLineAtEnd_R_boolean, VTABLE_arc_scene_ui_TextArea_newLineAtEnd_R_boolean, "()Z", 1 },
	{ "moveCursorLine", (intptr_t) M_arc_scene_ui_TextArea_moveCursorLine_int, VTABLE_arc_scene_ui_TextArea_moveCursorLine_int, "(I)V", 1 },
	{ "updateCurrentLine", (intptr_t) M_arc_scene_ui_TextArea_updateCurrentLine, VTABLE_arc_scene_ui_TextArea_updateCurrentLine, "()V", 0 },
	{ "showCursor", (intptr_t) M_arc_scene_ui_TextArea_showCursor, VTABLE_arc_scene_ui_TextArea_showCursor, "()V", 0 },
	{ "calculateCurrentLineIndex", (intptr_t) M_arc_scene_ui_TextArea_calculateCurrentLineIndex_int_R_int, VTABLE_arc_scene_ui_TextArea_calculateCurrentLineIndex_int_R_int, "(I)I", 2 },
	{ "sizeChanged", (intptr_t) M_arc_scene_ui_TextArea_sizeChanged, VTABLE_arc_scene_ui_TextArea_sizeChanged, "()V", 4 },
	{ "getTextY", (intptr_t) M_arc_scene_ui_TextArea_getTextY_arc_graphics_g2d_Font_arc_scene_style_Drawable_R_float, VTABLE_arc_scene_ui_TextArea_getTextY_arc_graphics_g2d_Font_arc_scene_style_Drawable_R_float, "(Larc/graphics/g2d/Font;Larc/scene/style/Drawable;)F", 4 },
	{ "drawSelection", (intptr_t) M_arc_scene_ui_TextArea_drawSelection_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float, VTABLE_arc_scene_ui_TextArea_drawSelection_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float, "(Larc/scene/style/Drawable;Larc/graphics/g2d/Font;FF)V", 4 },
	{ "drawText", (intptr_t) M_arc_scene_ui_TextArea_drawText_arc_graphics_g2d_Font_float_float, VTABLE_arc_scene_ui_TextArea_drawText_arc_graphics_g2d_Font_float_float, "(Larc/graphics/g2d/Font;FF)V", 4 },
	{ "drawCursor", (intptr_t) M_arc_scene_ui_TextArea_drawCursor_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float, VTABLE_arc_scene_ui_TextArea_drawCursor_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float, "(Larc/scene/style/Drawable;Larc/graphics/g2d/Font;FF)V", 4 },
	{ "calculateOffsets", (intptr_t) M_arc_scene_ui_TextArea_calculateOffsets, VTABLE_arc_scene_ui_TextArea_calculateOffsets, "()V", 4 },
	{ "createInputListener", (intptr_t) M_arc_scene_ui_TextArea_createInputListener_R_arc_scene_event_InputListener, VTABLE_arc_scene_ui_TextArea_createInputListener_R_arc_scene_event_InputListener, "()Larc/scene/event/InputListener;", 4 },
	{ "setSelection", (intptr_t) M_arc_scene_ui_TextArea_setSelection_int_int, VTABLE_arc_scene_ui_TextArea_setSelection_int_int, "(II)V", 1 },
	{ "moveCursor", (intptr_t) M_arc_scene_ui_TextArea_moveCursor_boolean_boolean, VTABLE_arc_scene_ui_TextArea_moveCursor_boolean_boolean, "(ZZ)V", 4 },
	{ "continueCursor", (intptr_t) M_arc_scene_ui_TextArea_continueCursor_int_int_R_boolean, VTABLE_arc_scene_ui_TextArea_continueCursor_int_int_R_boolean, "(II)Z", 4 },
	{ "getCursorLine", (intptr_t) M_arc_scene_ui_TextArea_getCursorLine_R_int, VTABLE_arc_scene_ui_TextArea_getCursorLine_R_int, "()I", 1 },
	{ "getFirstLineShowing", (intptr_t) M_arc_scene_ui_TextArea_getFirstLineShowing_R_int, VTABLE_arc_scene_ui_TextArea_getFirstLineShowing_R_int, "()I", 1 },
	{ "getLinesShowing", (intptr_t) M_arc_scene_ui_TextArea_getLinesShowing_R_int, VTABLE_arc_scene_ui_TextArea_getLinesShowing_R_int, "()I", 1 },
	{ "getCursorX", (intptr_t) M_arc_scene_ui_TextArea_getCursorX_R_float, VTABLE_arc_scene_ui_TextArea_getCursorX_R_float, "()F", 1 },
	{ "getCursorY", (intptr_t) M_arc_scene_ui_TextArea_getCursorY_R_float, VTABLE_arc_scene_ui_TextArea_getCursorY_R_float, "()F", 1 },
};

Class class_arc_scene_ui_TextArea{
		.nativeName = (intptr_t) "arc/scene/ui/TextArea",
		.parentClass = (intptr_t) &class_arc_scene_ui_TextField,
		.size = sizeof(arc_scene_ui_TextArea),
		.classVtable = (intptr_t) vtable_arc_scene_ui_TextArea,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_TextArea,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_TextArea,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 27,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 201,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_TextArea = registerClass(&class_arc_scene_ui_TextArea);

}
