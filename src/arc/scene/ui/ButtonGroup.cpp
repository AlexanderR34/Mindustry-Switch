#include "arc/scene/ui/ButtonGroup.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Button.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/scene/ui/TextButton.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_arc_scene_ui_ButtonGroup(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_ButtonGroup *) object;
	if (self->F_buttons)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buttons)->clazz)->markFunction)((jobject) self->F_buttons, mark, depth + 1);
	if (self->F_checkedButtons)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checkedButtons)->clazz)->markFunction)((jobject) self->F_checkedButtons, mark, depth + 1);
	if (self->F_lastChecked)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastChecked)->clazz)->markFunction)((jobject) self->F_lastChecked, mark, depth + 1);
}

void clinit_arc_scene_ui_ButtonGroup(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_ui_ButtonGroup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ButtonGroup(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK(sp[0].o))->F_buttons = (jref) sp[1].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(1)));
	((arc_scene_ui_ButtonGroup *) NULL_CHECK(sp[0].o))->F_checkedButtons = (jref) sp[1].o;
	LINE_NUMBER(15);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_maxCheckCount = (jint(1));
	LINE_NUMBER(16);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_uncheckLast = (jint(1));
	LINE_NUMBER(20);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_minCheckCount = (jint(1));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_ButtonGroup_Array1_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ButtonGroup(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK(sp[0].o))->F_buttons = (jref) sp[1].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(1)));
	((arc_scene_ui_ButtonGroup *) NULL_CHECK(sp[0].o))->F_checkedButtons = (jref) sp[1].o;
	LINE_NUMBER(15);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_maxCheckCount = (jint(1));
	LINE_NUMBER(16);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_uncheckLast = (jint(1));
	LINE_NUMBER(24);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_minCheckCount = (jint(0));
	LINE_NUMBER(25);
	((func_arc_scene_ui_ButtonGroup_add_Array1_arc_scene_ui_Button) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ButtonGroup_add_Array1_arc_scene_ui_Button])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(26);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_minCheckCount = (jint(1));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(31);
	((arc_scene_ui_Button *) NULL_CHECK((frame[1].o)))->F_buttonGroup = (jref) (jobject(nullptr));
	LINE_NUMBER(32);
	jint temp0 = (jint)((func_arc_scene_ui_Button_isChecked_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_isChecked_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_buttons;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) >= ((jint)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_minCheckCount)) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(33);
	((func_arc_scene_ui_Button_setChecked_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_setChecked_boolean])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(34);
	((arc_scene_ui_Button *) NULL_CHECK((frame[1].o)))->F_buttonGroup = (jref) (frame[0].o);
	LINE_NUMBER(35);
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(36);
	((func_arc_scene_ui_Button_setChecked_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_setChecked_boolean])(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ButtonGroup_add_Array1_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buttons cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(41);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(42);
	((func_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(41);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_ButtonGroup_remove_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(47);
	((arc_scene_ui_Button *) NULL_CHECK((frame[1].o)))->F_buttonGroup = (jref) (jobject(nullptr));
	LINE_NUMBER(48);
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_buttons;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_checkedButtons;
	jint temp1 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ButtonGroup_remove_Array1_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buttons cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(54);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(55);
	((func_arc_scene_ui_ButtonGroup_remove_arc_scene_ui_Button) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ButtonGroup_remove_arc_scene_ui_Button])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(54);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_ButtonGroup_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_checkedButtons;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ButtonGroup_canCheck_arc_scene_ui_Button_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:canCheck", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(69);
	if (((jint)((arc_scene_ui_Button *) NULL_CHECK((frame[1].o)))->F_isChecked) != (frame[2].i)) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(71);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_checkedButtons;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) > ((jint)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_minCheckCount)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_checkedButtons;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(77);
	if (((jint)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_maxCheckCount) == (jint(-1))) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_checkedButtons;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) < ((jint)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_maxCheckCount)) goto label_6;
	}
	{
	LINE_NUMBER(78);
	if (((jint)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_uncheckLast) == 0) goto label_8;
	}
	{
	LINE_NUMBER(79);
	frame[3].i = ((jint)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_minCheckCount);
	LINE_NUMBER(80);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_minCheckCount = (jint(0));
	LINE_NUMBER(81);
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_lastChecked;
	((func_arc_scene_ui_Button_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_setChecked_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(82);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_minCheckCount = (frame[3].i);
	LINE_NUMBER(83);
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_checkedButtons;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(87);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_lastChecked = (jref) (frame[1].o);
	}
label_5:;
	{
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ButtonGroup_uncheckAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:uncheckAll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	frame[1].i = ((jint)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_minCheckCount);
	LINE_NUMBER(96);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_minCheckCount = (jint(0));
	LINE_NUMBER(97);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_buttons;
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_arc_scene_ui_Button, sp[0].o));
	LINE_NUMBER(99);
	((func_arc_scene_ui_Button_setChecked_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Button_setChecked_boolean])(ctx, (frame[4].o), (jint(0)));
	LINE_NUMBER(97);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(101);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_minCheckCount = (frame[1].i);
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_ButtonGroup_getChecked_R_arc_scene_ui_Button(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:getChecked", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_checkedButtons;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_checkedButtons;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_ui_Button, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ButtonGroup_setChecked_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:setChecked", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(112);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"text cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(113);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_buttons;
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_arc_scene_ui_Button, sp[0].o));
	LINE_NUMBER(115);
	if ((isInstance(ctx, (frame[4].o), &class_arc_scene_ui_TextButton)) == 0) goto label_7;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_scene_ui_TextButton_getText_R_java_lang_CharSequence) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, (frame[4].o))))->vtable)[VTABLE_arc_scene_ui_TextButton_getText_R_java_lang_CharSequence])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, (frame[4].o))));
	jint temp0 = (jint)((func_java_lang_String_contentEquals_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contentEquals_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(116);
	((func_arc_scene_ui_Button_setChecked_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Button_setChecked_boolean])(ctx, (frame[4].o), (jint(1)));
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(113);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(120);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_scene_ui_ButtonGroup_getCheckedIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:getCheckedIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_checkedButtons;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_checkedButtons;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (jint(0)));
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_ui_Button, sp[1].o)), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_ButtonGroup_getAllChecked_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:getAllChecked", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_checkedButtons;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_ButtonGroup_getButtons_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:getButtons", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_buttons;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ButtonGroup_setMinCheckCount_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:setMinCheckCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(138);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_minCheckCount = (frame[1].i);
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ButtonGroup_setMaxCheckCount_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:setMaxCheckCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(143);
	if ((frame[1].i) != 0) goto label_1;
	}
	INST_ICONST(-1);
	INST_ISTORE(1);
label_1:;
	{
	LINE_NUMBER(144);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_maxCheckCount = (frame[1].i);
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ButtonGroup_setUncheckLast_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ButtonGroup:setUncheckLast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(153);
	((arc_scene_ui_ButtonGroup *) NULL_CHECK((frame[0].o)))->F_uncheckLast = (frame[1].i);
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_ButtonGroup[] {
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
	(void *) M_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button,
	(void *) M_arc_scene_ui_ButtonGroup_add_Array1_arc_scene_ui_Button,
	(void *) M_arc_scene_ui_ButtonGroup_remove_arc_scene_ui_Button,
	(void *) M_arc_scene_ui_ButtonGroup_remove_Array1_arc_scene_ui_Button,
	(void *) M_arc_scene_ui_ButtonGroup_clear,
	(void *) M_arc_scene_ui_ButtonGroup_canCheck_arc_scene_ui_Button_boolean_R_boolean,
	(void *) M_arc_scene_ui_ButtonGroup_uncheckAll,
	(void *) M_arc_scene_ui_ButtonGroup_getChecked_R_arc_scene_ui_Button,
	(void *) M_arc_scene_ui_ButtonGroup_setChecked_java_lang_String,
	(void *) M_arc_scene_ui_ButtonGroup_getCheckedIndex_R_int,
	(void *) M_arc_scene_ui_ButtonGroup_getAllChecked_R_arc_struct_Seq,
	(void *) M_arc_scene_ui_ButtonGroup_getButtons_R_arc_struct_Seq,
	(void *) M_arc_scene_ui_ButtonGroup_setMinCheckCount_int,
	(void *) M_arc_scene_ui_ButtonGroup_setMaxCheckCount_int,
	(void *) M_arc_scene_ui_ButtonGroup_setUncheckLast_boolean,
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
	{ "add", "(Larc/scene/ui/Button;)V" },
	{ "add", "([Larc/scene/ui/Button;)V" },
	{ "remove", "(Larc/scene/ui/Button;)V" },
	{ "remove", "([Larc/scene/ui/Button;)V" },
	{ "clear", "()V" },
	{ "canCheck", "(Larc/scene/ui/Button;Z)Z" },
	{ "uncheckAll", "()V" },
	{ "getChecked", "()Larc/scene/ui/Button;" },
	{ "setChecked", "(Ljava/lang/String;)V" },
	{ "getCheckedIndex", "()I" },
	{ "getAllChecked", "()Larc/struct/Seq;" },
	{ "getButtons", "()Larc/struct/Seq;" },
	{ "setMinCheckCount", "(I)V" },
	{ "setMaxCheckCount", "(I)V" },
	{ "setUncheckLast", "(Z)V" },
};

static FieldMetadata fields[] {
	{ "buttons", &class_arc_struct_Seq, offsetof(arc_scene_ui_ButtonGroup, F_buttons), "Larc/struct/Seq;", 18 },
	{ "checkedButtons", &class_arc_struct_Seq, offsetof(arc_scene_ui_ButtonGroup, F_checkedButtons), "Larc/struct/Seq;", 2 },
	{ "minCheckCount", &class_int, offsetof(arc_scene_ui_ButtonGroup, F_minCheckCount), "I", 2 },
	{ "maxCheckCount", &class_int, offsetof(arc_scene_ui_ButtonGroup, F_maxCheckCount), "I", 2 },
	{ "uncheckLast", &class_boolean, offsetof(arc_scene_ui_ButtonGroup, F_uncheckLast), "Z", 2 },
	{ "lastChecked", &class_arc_scene_ui_Button, offsetof(arc_scene_ui_ButtonGroup, F_lastChecked), "Larc/scene/ui/Button;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_ButtonGroup, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_ButtonGroup_Array1_arc_scene_ui_Button, 0, "([Larc/scene/ui/Button;)V", 129 },
	{ "add", (intptr_t) M_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button, VTABLE_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button, "(Larc/scene/ui/Button;)V", 1 },
	{ "add", (intptr_t) M_arc_scene_ui_ButtonGroup_add_Array1_arc_scene_ui_Button, VTABLE_arc_scene_ui_ButtonGroup_add_Array1_arc_scene_ui_Button, "([Larc/scene/ui/Button;)V", 129 },
	{ "remove", (intptr_t) M_arc_scene_ui_ButtonGroup_remove_arc_scene_ui_Button, VTABLE_arc_scene_ui_ButtonGroup_remove_arc_scene_ui_Button, "(Larc/scene/ui/Button;)V", 1 },
	{ "remove", (intptr_t) M_arc_scene_ui_ButtonGroup_remove_Array1_arc_scene_ui_Button, VTABLE_arc_scene_ui_ButtonGroup_remove_Array1_arc_scene_ui_Button, "([Larc/scene/ui/Button;)V", 129 },
	{ "clear", (intptr_t) M_arc_scene_ui_ButtonGroup_clear, VTABLE_arc_scene_ui_ButtonGroup_clear, "()V", 1 },
	{ "canCheck", (intptr_t) M_arc_scene_ui_ButtonGroup_canCheck_arc_scene_ui_Button_boolean_R_boolean, VTABLE_arc_scene_ui_ButtonGroup_canCheck_arc_scene_ui_Button_boolean_R_boolean, "(Larc/scene/ui/Button;Z)Z", 4 },
	{ "uncheckAll", (intptr_t) M_arc_scene_ui_ButtonGroup_uncheckAll, VTABLE_arc_scene_ui_ButtonGroup_uncheckAll, "()V", 1 },
	{ "getChecked", (intptr_t) M_arc_scene_ui_ButtonGroup_getChecked_R_arc_scene_ui_Button, VTABLE_arc_scene_ui_ButtonGroup_getChecked_R_arc_scene_ui_Button, "()Larc/scene/ui/Button;", 1 },
	{ "setChecked", (intptr_t) M_arc_scene_ui_ButtonGroup_setChecked_java_lang_String, VTABLE_arc_scene_ui_ButtonGroup_setChecked_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getCheckedIndex", (intptr_t) M_arc_scene_ui_ButtonGroup_getCheckedIndex_R_int, VTABLE_arc_scene_ui_ButtonGroup_getCheckedIndex_R_int, "()I", 1 },
	{ "getAllChecked", (intptr_t) M_arc_scene_ui_ButtonGroup_getAllChecked_R_arc_struct_Seq, VTABLE_arc_scene_ui_ButtonGroup_getAllChecked_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getButtons", (intptr_t) M_arc_scene_ui_ButtonGroup_getButtons_R_arc_struct_Seq, VTABLE_arc_scene_ui_ButtonGroup_getButtons_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "setMinCheckCount", (intptr_t) M_arc_scene_ui_ButtonGroup_setMinCheckCount_int, VTABLE_arc_scene_ui_ButtonGroup_setMinCheckCount_int, "(I)V", 1 },
	{ "setMaxCheckCount", (intptr_t) M_arc_scene_ui_ButtonGroup_setMaxCheckCount_int, VTABLE_arc_scene_ui_ButtonGroup_setMaxCheckCount_int, "(I)V", 1 },
	{ "setUncheckLast", (intptr_t) M_arc_scene_ui_ButtonGroup_setUncheckLast_boolean, VTABLE_arc_scene_ui_ButtonGroup_setUncheckLast_boolean, "(Z)V", 1 },
};

Class class_arc_scene_ui_ButtonGroup{
		.nativeName = (intptr_t) "arc/scene/ui/ButtonGroup",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_ui_ButtonGroup),
		.classVtable = (intptr_t) vtable_arc_scene_ui_ButtonGroup,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_ButtonGroup,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_ButtonGroup,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_ButtonGroup = registerClass(&class_arc_scene_ui_ButtonGroup);

}
