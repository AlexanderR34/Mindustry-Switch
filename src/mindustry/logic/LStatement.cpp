#include "mindustry/logic/LStatement.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "arc/func/Prov.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/dialogs/ColorPicker.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Intc.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/gen/LogicIO.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/logic/ConditionOp.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "arc/Settings.h"
#include "mindustry/logic/LStatement_invoke_arc_func_Intc_1.h"
#include "java/util/Locale.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "arc/math/Interp.h"
#include "mindustry/logic/LAssembler.h"
#include "arc/util/Nullable.h"
#include "arc/func/Cons2.h"
#include "arc/scene/ui/Label.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "mindustry/logic/LCategory.h"
#include "mindustry/logic/LStatement_invoke_arc_func_Cons2_3.h"
#include "mindustry/logic/LStatement_invoke_arc_func_Cons2_4.h"
#include "mindustry/logic/LStatement_invoke_arc_func_Cons2_5.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/logic/LogicOp.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/logic/LStatement.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/logic/LStatement_invoke_java_lang_Runnable_12.h"
#include "mindustry/logic/LStatement_invoke_java_lang_Runnable_11.h"
#include "arc/scene/Action.h"
#include "arc/struct/IntMap.h"
#include "mindustry/logic/LStatement_1.h"
#include "arc/Application.h"
#include "arc/func/Cons.h"
#include "mindustry/logic/LStatement_invoke_arc_func_Cons_11.h"
#include "mindustry/logic/LStatement_invoke_java_lang_Runnable_18.h"
#include "mindustry/logic/LStatement_invoke_arc_func_Cons_12.h"
#include "mindustry/logic/LStatement_invoke_java_lang_Runnable_17.h"
#include "mindustry/logic/LStatement_invoke_arc_func_Cons_13.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "mindustry/logic/LStatement_invoke_arc_func_Cons_14.h"
#include "mindustry/logic/LStatement_invoke_java_lang_Runnable_19.h"
#include "mindustry/logic/LStatement_invoke_java_lang_Runnable_14.h"
#include "mindustry/logic/LStatement_invoke_arc_func_Cons_15.h"
#include "mindustry/logic/LStatement_invoke_java_lang_Runnable_13.h"
#include "arc/scene/ui/TextField_TextFieldStyle.h"
#include "mindustry/logic/LStatement_invoke_java_lang_Runnable_16.h"
#include "mindustry/logic/LStatement_invoke_java_lang_Runnable_15.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LStatement_invoke_arc_func_Cons_8.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/logic/LStatement_invoke_arc_func_Cons_9.h"
#include "mindustry/logic/LStatement_invoke_java_lang_Runnable_21.h"
#include "mindustry/logic/LStatement_invoke_java_lang_Runnable_20.h"
#include "arc/scene/event/ClickListener.h"
#include "java/lang/Enum.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/logic/LCanvas.h"
#include "arc/util/Align.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/logic/LStatement_invoke_arc_func_Cons_10.h"
#include "arc/scene/actions/Actions.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/actions/AlphaAction.h"
#include "mindustry/logic/LCanvas_StatementElem.h"
#include "java/lang/Class.h"
#include "arc/scene/event/InputListener.h"
#include "java/util/Objects.h"
#include "arc/scene/actions/RemoveActorAction.h"
#include "mindustry/Vars.h"

extern "C" {

jobject SF_mindustry_logic_LStatement_aligns;
jobject SF_mindustry_logic_LStatement_nameToAlign;
jobject SF_mindustry_logic_LStatement_alignToName;

void mark_mindustry_logic_LStatement(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_LStatement_aligns)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LStatement_aligns)->clazz)->markFunction)((jobject) SF_mindustry_logic_LStatement_aligns, mark, depth + 1);
		if (SF_mindustry_logic_LStatement_nameToAlign)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LStatement_nameToAlign)->clazz)->markFunction)((jobject) SF_mindustry_logic_LStatement_nameToAlign, mark, depth + 1);
		if (SF_mindustry_logic_LStatement_alignToName)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LStatement_alignToName)->clazz)->markFunction)((jobject) SF_mindustry_logic_LStatement_alignToName, mark, depth + 1);
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
	auto self = (mindustry_logic_LStatement *) object;
	if (self->F_elem)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_elem)->clazz)->markFunction)((jobject) self->F_elem, mark, depth + 1);
}

void init_mindustry_logic_LStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_unknown;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatement_copy_R_mindustry_logic_LStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:copy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(59);
	((func_mindustry_logic_LStatement_write_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatement_write_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_mindustry_logic_LAssembler_read_java_lang_String_boolean_R_arc_struct_Seq(ctx, sp[0].o, (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(62);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size) != 0) goto label_4;
	}
	INST_ACONST_NULL();
	goto label_5;
label_4:;
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[2].o));
	sp[0].o = checkCast(ctx, &class_mindustry_logic_LStatement, sp[0].o);
	sp += 1;
	}
label_5:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LStatement_useWrapping_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:useWrapping", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LStatement_hidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:hidden", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LStatement_privileged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:privileged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LStatement_nonPrivileged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:nonPrivileged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatement_param_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:param", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_mindustry_logic_LStatement_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatement_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_scene_ui_Label_getText_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[1].o)))->vtable)[VTABLE_arc_scene_ui_Label_getText_R_java_lang_StringBuilder])(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[1].o)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.\u0001"_j.string, 2, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(87);
	SM_mindustry_logic_LCanvas_tooltip_arc_scene_ui_layout_Cell_java_lang_String(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LStatement_sanitize_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:sanitize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(92);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(94);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 != (jint(1))) goto label_3;
	}
	{
	LINE_NUMBER(95);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	if (temp0 == (34)) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	if (temp0 == (59)) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	if (temp0 == (32)) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	LINE_NUMBER(96);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	if (temp1 == (10)) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	if (temp0 == (9)) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	if (temp0 != (35)) goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"invalid"_j)));
	}
label_3:;
	{
	LINE_NUMBER(100);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	init_java_lang_StringBuilder_int(ctx, sp[0].o, temp0);
	frame[1].o = sp[0].o;
	LINE_NUMBER(101);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	if (temp1 != (34)) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (34)) goto label_9;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (34));
	LINE_NUMBER(104);
	frame[2].i = (jint(1));
	}
label_12:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= (temp1 - (jint(1)))) goto label_13;
	}
	{
	LINE_NUMBER(105);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(107);
	if ((frame[3].i) != (92)) goto label_16;
	}
	{
	jint temp0 = (frame[2].i) + (jint(1));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= (temp1 - (jint(1)))) goto label_16;
	}
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[2].i) + (jint(1))));
	frame[4].i = temp0;
	LINE_NUMBER(109);
	if ((frame[4].i) == (34)) goto label_19;
	}
	{
	if ((frame[4].i) == (92)) goto label_19;
	}
	{
	if ((frame[4].i) != (110)) goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	LINE_NUMBER(111);
	INST_IINC(2, 1);
	LINE_NUMBER(112);
	goto label_23;
	}
label_20:;
	{
	LINE_NUMBER(113);
	if ((frame[4].i) != (117)) goto label_16;
	}
	{
	jint temp0 = (frame[2].i) + (jint(5));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= (temp1 - (jint(1)))) goto label_16;
	}
	{
	jint temp0 = (jint)SM_mindustry_logic_LStatement_isHex_java_lang_String_int_R_boolean(ctx, (frame[0].o), ((frame[2].i) + (jint(2))));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[0].o), (frame[2].i), ((frame[2].i) + (6)));
	LINE_NUMBER(115);
	INST_IINC(2, 5);
	LINE_NUMBER(116);
	goto label_23;
	}
label_16:;
	{
	LINE_NUMBER(119);
	switch((frame[3].i)) {
		case 10: goto label_27;
		case 34: goto label_28;
		case 92: goto label_29;
		default: goto label_30;
	}
	}
label_28:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\\""_j))));
	goto label_23;
	}
label_29:;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\\\"_j))));
	goto label_23;
	}
label_27:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\n"_j))));
	goto label_23;
	}
label_30:;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[3].i));
	}
label_23:;
	{
	LINE_NUMBER(104);
	INST_IINC(2, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (34));
	goto label_31;
	}
label_9:;
	{
	LINE_NUMBER(130);
	frame[2].i = (jint(0));
	}
label_32:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_31;
	}
	{
	LINE_NUMBER(131);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(132);
	sp[0].o = frame[1].o;
	sp += 1;
	switch((frame[3].i)) {
		case 9: goto label_35;
		case 10: goto label_35;
		case 32: goto label_35;
		case 34: goto label_36;
		case 35: goto label_35;
		case 59: goto label_37;
		default: goto label_38;
	}
	}
label_37:;
	{
	LINE_NUMBER(133);
	jint temp0 = 115;
	sp[0].i = temp0;
	sp += 1;
	goto label_39;
	}
label_36:;
	{
	LINE_NUMBER(134);
	jint temp0 = 39;
	sp[0].i = temp0;
	sp += 1;
	goto label_39;
	}
label_35:;
	{
	LINE_NUMBER(135);
	jint temp0 = 95;
	sp[0].i = temp0;
	sp += 1;
	goto label_39;
	}
label_38:;
	LINE_NUMBER(136);
	INST_ILOAD(3);
label_39:;
	{
	sp -= 2;
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(130);
	INST_IINC(2, 1);
	goto label_32;
	}
label_31:;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_LStatement_isHex_java_lang_String_int_R_boolean(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:isHex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(149);
	frame[2].i = (frame[1].i);
	}
label_1:;
	{
	if ((frame[2].i) >= ((frame[1].i) + (jint(4)))) goto label_2;
	}
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	jint temp1 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, temp0, (16));
	if (temp1 != (jint(-1))) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(149);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_LStatement_logicLocalization_R_boolean(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:logicLocalization", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	{
	LINE_NUMBER(156);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"logiclocalization"_j))), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:bundle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(160);
	jint temp0 = (jint)SM_mindustry_logic_LStatement_logicLocalization_R_boolean(ctx);
	if (temp0 != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(161);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"name.token.\u0001"_j.string, 1, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LStatement_bundle_java_lang_Enum_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:bundle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(165);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_logic_LogicOp)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_logic_LogicOp, (frame[0].o)));
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_logic_LogicOp *) NULL_CHECK((frame[1].o)))->F_symbol;
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_selectTranslate_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(167);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_logic_ConditionOp)) == 0) goto label_3;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_logic_ConditionOp, (frame[0].o)));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_logic_ConditionOp *) NULL_CHECK((frame[2].o)))->F_symbol;
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_selectTranslate_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((func_java_lang_Enum_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Enum_name_R_java_lang_String])(ctx, (frame[0].o));
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[0].o);
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.label.\u0001"_j.string, 2, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(172);
	jint temp0 = (jint)SM_mindustry_logic_LStatement_logicLocalization_R_boolean(ctx);
	if (temp0 == 0) goto label_7;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	jint temp0 = (jint)((func_arc_util_I18NBundle_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(173);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_java_lang_Enum_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Enum_name_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LStatement_selectTranslate_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:selectTranslate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(179);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	sp->i = (jint)SM_mindustry_logic_LStatement_logicLocalization_R_boolean(ctx);
	sp++;
	if ((--sp)->i != 0) goto label_2;
label_1:;
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(180);
	frame[1].o = (frame[0].o);
	frame[2].i = (jint(-1));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case -1414557169: goto label_3;
		case 3555: goto label_4;
		case 96727: goto label_5;
		case 109267: goto label_6;
		case 118875: goto label_7;
		case 3145837: goto label_8;
		case 91942380: goto label_9;
		default: goto label_10;
	}
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"not"_j))));
	if (temp0 == 0) goto label_10;
	}
	{
	frame[2].i = (jint(0));
	goto label_10;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"and"_j))));
	if (temp0 == 0) goto label_10;
	}
	{
	frame[2].i = (jint(1));
	goto label_10;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"or"_j))));
	if (temp0 == 0) goto label_10;
	}
	{
	frame[2].i = (jint(2));
	goto label_10;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"b-and"_j))));
	if (temp0 == 0) goto label_10;
	}
	{
	frame[2].i = (jint(3));
	goto label_10;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"xor"_j))));
	if (temp0 == 0) goto label_10;
	}
	{
	frame[2].i = (jint(4));
	goto label_10;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flip"_j))));
	if (temp0 == 0) goto label_10;
	}
	{
	frame[2].i = (jint(5));
	goto label_10;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"always"_j))));
	if (temp0 == 0) goto label_10;
	}
	INST_BIPUSH(6);
	INST_ISTORE(2);
label_10:;
	INST_ILOAD(2);
	switch((--sp)->i) {
		case 0: goto label_11;
		case 1: goto label_11;
		case 2: goto label_11;
		case 3: goto label_11;
		case 4: goto label_11;
		case 5: goto label_11;
		case 6: goto label_11;
		default: goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	sp += 1;
	goto label_13;
	}
label_12:;
	LINE_NUMBER(182);
	INST_ALOAD(0);
label_13:;
	LINE_NUMBER(180);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:field", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_nodeField;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(180.0f);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(188);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:fields", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jint temp0 = (jint)SM_mindustry_logic_LCanvas_isCompact_R_boolean(ctx);
	sp[0].o = (jobject)((func_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_boolean_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_boolean_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:fields", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(180.0f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_boolean_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:fields", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(200);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(201);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(202);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[6].o));
	LINE_NUMBER(203);
	frame[7].f = (jfloat(180.0f));
	LINE_NUMBER(204);
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (frame[2].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(206);
	if ((frame[3].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((func_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[6].o), (frame[4].o), (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[7].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(208);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[6].o), (frame[8].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return (frame[9].o);
	}
label_6:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[6].o), (frame[8].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(212);
	sp[0].o = (jobject)((func_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[6].o), (frame[4].o), (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[7].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatement_col_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:col", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(218);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_arc_func_Cons_11);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_java_lang_Runnable_11);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(40.0f);
	LINE_NUMBER(230);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-11.0f)));
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:showSelect", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(234);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_arc_func_Cons2_3(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_arc_func_Cons2_3 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_arc_func_Cons2_3);
		proxy->F_field4 = (frame[5].i);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_logic_LStatement_showSelectTable_arc_scene_ui_Button_arc_func_Cons2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:showSelect", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	sp[4].o = frame[4].o;
	jint temp0 = jint(4);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_arc_func_Cons_12);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0, sp[5].o);
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatement_fieldAlignSelect_arc_scene_ui_layout_Table_arc_func_Prov_arc_func_Cons_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:fieldAlignSelect", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(260);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_arc_func_Cons_13);
		proxy->F_field3 = (frame[5].i);
		proxy->F_field2 = (frame[4].i);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_java_lang_Runnable_12);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(40.0f);
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-10.0f)));
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_showAlignSelect_arc_scene_ui_Button_int_arc_func_Intc_boolean_boolean(jcontext ctx, jobject param0, jint param1, jobject param2, jbool param3, jbool param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:showAlignSelect", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(270);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_arc_func_Cons2_4(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_arc_func_Cons2_4 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_arc_func_Cons2_4);
		proxy->F_field3 = (frame[1].i);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (frame[4].i);
		proxy->F_field0 = (frame[3].i);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_logic_LStatement_showSelectTable_arc_scene_ui_Button_arc_func_Cons2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_showSelectTable_arc_scene_ui_Button_arc_func_Cons2(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:showSelectTable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(289);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_java_lang_Runnable_13);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_logic_LStatement_showSelectTable_arc_scene_ui_Button_arc_func_Cons2_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_showSelectTable_arc_scene_ui_Button_arc_func_Cons2_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:showSelectTable", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(293);
	clinit_mindustry_logic_LStatement$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatement$1);
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_paneSolid;
	init_mindustry_logic_LStatement$1_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(304);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o), (jfloat(4.0f)));
	LINE_NUMBER(307);
	clinit_arc_scene_Element(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_Element);
	init_arc_scene_Element(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(309);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_java_lang_Runnable_14);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[0].o = (jobject) proxy;
	}
	frame[5].o = sp[0].o;
	LINE_NUMBER(315);
	((arc_scene_Element *) NULL_CHECK((frame[4].o)))->F_fillParent = (jint(1));
	LINE_NUMBER(316);
	sp[0].o = (jobject)((func_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener])(ctx, (frame[4].o), (frame[5].o));
	LINE_NUMBER(318);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(319);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(321);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_java_lang_Runnable_15);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(339);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_R_arc_scene_actions_AlphaAction(ctx, (jfloat(0)));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	jfloat temp2 = jfloat(0.3f);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_fade;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_fadeIn_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, temp2, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(341);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_arc_func_Cons_14);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp3 = jfloat(0);
	LINE_NUMBER(344);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(346);
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, (frame[3].o));
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatement_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:afterRead", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(349);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatement_write_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(352);
	SM_mindustry_gen_LogicIO_write_java_lang_Object_java_lang_StringBuilder(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatement_setupUI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:setupUI", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(357);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatement_saveUI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:saveUI", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(361);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatement_typeName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:typeName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Statement"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatement_statementKey_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:statementKey", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((func_mindustry_logic_LStatement_typeName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatement_typeName_R_java_lang_String])(ctx, (frame[0].o));
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatement_localizedName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:localizedName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	jint temp0 = (jint)SM_mindustry_logic_LStatement_logicLocalization_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_mindustry_logic_LStatement_statementKey_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatement_statementKey_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"instruction.\u0001"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)((func_mindustry_logic_LStatement_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatement_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((func_mindustry_logic_LStatement_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatement_name_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatement_name_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:name", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(377);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Statement"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)SM_arc_util_Strings_insertSpaces_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$showSelectTable$4_arc_func_Cons2_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$showSelectTable$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(343);
	((func_arc_func_Cons2_get_java_lang_Object_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons2, INDEX_arc_func_Cons2_get_java_lang_Object_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	LINE_NUMBER(344);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$showSelectTable$2_arc_scene_ui_Button_arc_scene_Element_arc_scene_ui_layout_Table_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$showSelectTable$2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_root;
	jint temp0 = (jint)((func_arc_scene_ui_Button_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_isDescendantOf_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(323);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_java_lang_Runnable_16);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(331);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Button_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = temp0 / (jfloat(2));
	jfloat temp2 = (jfloat)((func_arc_scene_ui_Button_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_getHeight_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp1, (temp2 / (jfloat(2))));
	sp[0].o = (jobject)((func_arc_scene_ui_Button_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(332);
	sp[0].o = frame[2].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((func_arc_scene_ui_layout_Table_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setPosition_float_float_int])(ctx, sp[0].o, temp3, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), (jint(1)));
	LINE_NUMBER(333);
	jfloat temp4 = (jfloat)((func_arc_scene_ui_layout_Table_getWidth_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getWidth_R_float])(ctx, (frame[2].o));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jfloat temp5 = (jfloat)((func_arc_scene_Scene_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getWidth_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp4, temp5, -1)) <= 0) goto label_6;
	}
	{
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	((func_arc_scene_ui_layout_Table_setWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setWidth_float])(ctx, sp[0].o, (jfloat(temp0)));
	}
label_6:;
	{
	LINE_NUMBER(334);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Table_getHeight_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getHeight_R_float])(ctx, (frame[2].o));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jfloat temp1 = (jfloat)((func_arc_scene_Scene_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getHeight_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, temp1, -1)) <= 0) goto label_7;
	}
	{
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	((func_arc_scene_ui_layout_Table_setHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setHeight_float])(ctx, sp[0].o, (jfloat(temp0)));
	}
label_7:;
	{
	LINE_NUMBER(335);
	((func_arc_scene_ui_layout_Table_keepInStage) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_keepInStage])(ctx, (frame[2].o));
	LINE_NUMBER(336);
	((func_arc_scene_ui_layout_Table_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_invalidateHierarchy])(ctx, (frame[2].o));
	LINE_NUMBER(337);
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, (frame[2].o));
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$showSelectTable$3_arc_scene_Element_arc_scene_ui_layout_Table_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$showSelectTable$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(324);
	jint temp0 = (jint)((func_arc_scene_Element_remove_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_remove_R_boolean])(ctx, (frame[0].o));
	LINE_NUMBER(325);
	jint temp1 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, (frame[1].o));
	LINE_NUMBER(326);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$showSelectTable$1_arc_scene_Element_arc_scene_ui_layout_Table_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$showSelectTable$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(310);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_java_lang_Runnable_17);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(311);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(2)));
	jint temp0 = jint(0);
	jfloat temp1 = jfloat(0.3f);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_fade;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_fadeOut_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, temp1, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp2 = jint(1);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_remove_R_arc_scene_actions_RemoveActorAction(ctx);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(312);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$showSelectTable$0(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$showSelectTable$0", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	LINE_NUMBER(289);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$showAlignSelect$0_boolean_boolean_arc_func_Intc_int_arc_scene_ui_layout_Table_java_lang_Runnable(jcontext ctx, jbool param0, jbool param1, jobject param2, jint param3, jobject param4, jobject param5) {
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$showAlignSelect$0", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(150.0f)), (jfloat(40.0f)));
	LINE_NUMBER(273);
	frame[6].i = (jint(0));
	LINE_NUMBER(274);
	clinit_mindustry_logic_LStatement(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatement_aligns;
	frame[7].o = sp[0].o;
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_5:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_6;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(275);
	clinit_mindustry_logic_LStatement(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatement_nameToAlign;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[10].o));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)));
	frame[11].i = temp0;
	LINE_NUMBER(276);
	if ((frame[0].i) != 0) goto label_9;
	}
	{
	jint temp0 = (jint)SM_arc_util_Align_isCenterHorizontal_int_R_boolean(ctx, (frame[11].i));
	if (temp0 != 0) goto label_9;
	}
	goto label_10;
label_9:;
	{
	LINE_NUMBER(277);
	if ((frame[1].i) != 0) goto label_11;
	}
	{
	jint temp0 = (jint)SM_arc_util_Align_isCenterVertical_int_R_boolean(ctx, (frame[11].i));
	if (temp0 != 0) goto label_11;
	}
	goto label_10;
label_11:;
	{
	LINE_NUMBER(278);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (frame[10].o));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logicTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_java_lang_Runnable_18(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_java_lang_Runnable_18 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_java_lang_Runnable_18);
		proxy->F_field2 = (jref) (frame[5].o);
		proxy->F_field1 = (frame[11].i);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jint temp0 = frame[3].i;
	clinit_mindustry_logic_LStatement(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LStatement_nameToAlign;
	sp[2].o = frame[10].o;
	LINE_NUMBER(281);
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[1].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[1].o)));
	sp += 1;
	if (temp0 != temp1) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(283);
	INST_IINC(6, 1);
	if (((frame[6].i) % (jint(3))) != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	}
label_10:;
	{
	LINE_NUMBER(274);
	INST_IINC(9, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(285);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$showAlignSelect$1_arc_func_Intc_int_java_lang_Runnable(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$showAlignSelect$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(279);
	((func_arc_func_Intc_get_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc, INDEX_arc_func_Intc_get_int, (frame[0].o)))(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(280);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$fieldAlignSelect$3(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$fieldAlignSelect$3", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	LINE_NUMBER(266);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$fieldAlignSelect$0_arc_func_Prov_arc_func_Cons_boolean_boolean_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1, jbool param2, jbool param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$fieldAlignSelect$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(261);
	sp[0].o = frame[4].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencilSmall;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(262);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_java_lang_Runnable_19);
		proxy->F_field4 = (frame[3].i);
		proxy->F_field3 = (frame[2].i);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$fieldAlignSelect$1_arc_func_Prov_arc_scene_ui_Button_arc_func_Cons_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$fieldAlignSelect$1", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[5].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(264);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"@"_j))));
	sp += 1;
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_mindustry_logic_LStatement(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatement_nameToAlign;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[5].o), (jint(1)));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(-1)));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ICONST(-1);
label_3:;
	{
	sp -= 2;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_arc_func_Intc_1(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_arc_func_Intc_1 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_arc_func_Intc_1);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_logic_LStatement_showAlignSelect_arc_scene_ui_Button_int_arc_func_Intc_boolean_boolean(ctx, sp[0].o, sp[1].i, sp[2].o, (frame[3].i), (frame[4].i));
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$fieldAlignSelect$2_arc_func_Cons_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$fieldAlignSelect$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(264);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LStatement(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LStatement_alignToName;
	sp[1].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001"_j.string, 1, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$showSelect$3_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$showSelect$3", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	LINE_NUMBER(256);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$showSelect$0_Array1_java_lang_Object_arc_func_Cons_arc_func_Cons_java_lang_Object_int_arc_scene_ui_layout_Table_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jobject param5, jobject param6) {
	jtype frame[22];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$showSelect$0", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(235);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(236);
	frame[8].i = (jint(0));
	LINE_NUMBER(237);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(60.0f)), (jfloat(38.0f)));
	LINE_NUMBER(239);
	frame[9].o = (frame[0].o);
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_6:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_7;
	}
	{
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(240);
	if ((isInstance(ctx, (frame[12].o), &class_java_lang_Enum)) == 0) goto label_9;
	}
	{
	frame[14].o = (checkCast(ctx, &class_java_lang_Enum, (frame[12].o)));
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_Enum_R_java_lang_String(ctx, (frame[14].o));
	sp += 1;
	goto label_11;
	}
label_9:;
	{
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[12].o));
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[13].o = sp[0].o;
	LINE_NUMBER(241);
	sp[0].o = frame[1].o;
	sp[1].o = frame[5].o;
	sp[2].o = frame[13].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_logicTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_java_lang_Runnable_20);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[12].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[4].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) (frame[12].o);
		sp[2].o = (jobject) proxy;
	}
	LINE_NUMBER(244);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o);
	sp[2].o = frame[3].o;
	sp[3].o = frame[12].o;
	LINE_NUMBER(248);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (frame[7].o));
	LINE_NUMBER(241);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(250);
	INST_IINC(8, 1);
	if (((frame[8].i) % (frame[4].i)) != 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	}
label_17:;
	{
	LINE_NUMBER(239);
	INST_IINC(11, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(252);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$showSelect$2_java_lang_Object_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$showSelect$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(245);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Enum)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_java_lang_Enum, (frame[0].o)));
	LINE_NUMBER(246);
	SM_mindustry_logic_LCanvas_tooltip_arc_scene_ui_layout_Cell_java_lang_Enum(ctx, (frame[1].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(248);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$showSelect$1_arc_func_Cons_java_lang_Object_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$showSelect$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(242);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(243);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$col$2(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$col$2", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	LINE_NUMBER(230);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$col$0_java_lang_String_arc_func_Cons_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$col$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(219);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencilSmall;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(220);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_java_lang_Runnable_21);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$col$1_java_lang_String_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$col$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(221);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(222);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"%"_j))));
	if (temp0 == 0) goto label_6;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[0].o), (jint(1)));
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(225);
	goto label_6;
label_2:;
	INST_ASTORE(3);
label_6:;
	{
	LINE_NUMBER(228);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_picker;
	((func_mindustry_ui_dialogs_ColorPicker_show_arc_graphics_Color_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ColorPicker_show_arc_graphics_Color_arc_func_Cons])(ctx, sp[0].o, (frame[2].o), (frame[1].o));
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$field$0_arc_func_Cons_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$field$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_sanitize_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatement_lambda$static$0_java_lang_String_java_lang_Integer(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:lambda$static$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(44);
	clinit_mindustry_logic_LStatement(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatement_alignToName;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, temp0, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_LStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatement:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatement(ctx);
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (9));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"topLeft"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"top"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"topRight"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"left"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"center"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"right"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"bottomLeft"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8"bottom"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"bottomRight"_j)));
	clinit_mindustry_logic_LStatement(ctx);
	SF_mindustry_logic_LStatement_aligns = sp[0].o;
	LINE_NUMBER(30);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (18));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"center"_j)));
	jint temp0 = jint(1);
	jint temp1 = jint(1);
	LINE_NUMBER(31);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"top"_j)));
	jint temp2 = jint(3);
	jint temp3 = jint(2);
	LINE_NUMBER(32);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp3);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"bottom"_j)));
	jint temp4 = jint(5);
	jint temp5 = jint(4);
	LINE_NUMBER(33);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp5);
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"left"_j)));
	jint temp6 = 7;
	jint temp7 = 8;
	LINE_NUMBER(34);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp7);
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"right"_j)));
	jint temp8 = 9;
	jint temp9 = 16;
	LINE_NUMBER(35);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp9);
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) createStringLiteral(ctx, u8"topLeft"_j)));
	jint temp10 = 11;
	jint temp11 = 10;
	LINE_NUMBER(36);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp11);
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (12)) = (((jobject) createStringLiteral(ctx, u8"topRight"_j)));
	jint temp12 = 13;
	jint temp13 = 18;
	LINE_NUMBER(37);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp13);
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (14)) = (((jobject) createStringLiteral(ctx, u8"bottomLeft"_j)));
	jint temp14 = 15;
	jint temp15 = 12;
	LINE_NUMBER(38);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp15);
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (16)) = (((jobject) createStringLiteral(ctx, u8"bottomRight"_j)));
	jint temp16 = 17;
	jint temp17 = 20;
	LINE_NUMBER(39);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp17);
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = (jobject)SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_logic_LStatement(ctx);
	SF_mindustry_logic_LStatement_nameToAlign = sp[0].o;
	LINE_NUMBER(41);
	clinit_arc_struct_IntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[0].o);
	clinit_mindustry_logic_LStatement(ctx);
	SF_mindustry_logic_LStatement_alignToName = sp[0].o;
	LINE_NUMBER(44);
	clinit_mindustry_logic_LStatement(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatement_nameToAlign;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatement_invoke_arc_func_Cons2_5(ctx);
		auto proxy = (mindustry_logic_LStatement_invoke_arc_func_Cons2_5 *) gcAlloc(ctx, &class_mindustry_logic_LStatement_invoke_arc_func_Cons2_5);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_logic_LStatement;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field elem
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_logic_LStatement[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_logic_LStatement_category_R_mindustry_logic_LCategory,
	(void *) M_mindustry_logic_LStatement_copy_R_mindustry_logic_LStatement,
	(void *) M_mindustry_logic_LStatement_useWrapping_R_boolean,
	(void *) M_mindustry_logic_LStatement_hidden_R_boolean,
	(void *) M_mindustry_logic_LStatement_privileged_R_boolean,
	(void *) M_mindustry_logic_LStatement_nonPrivileged_R_boolean,
	(void *) M_mindustry_logic_LStatement_param_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_boolean_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_col_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons,
	(void *) M_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons,
	(void *) M_mindustry_logic_LStatement_fieldAlignSelect_arc_scene_ui_layout_Table_arc_func_Prov_arc_func_Cons_boolean_boolean,
	(void *) M_mindustry_logic_LStatement_afterRead,
	(void *) M_mindustry_logic_LStatement_write_java_lang_StringBuilder,
	(void *) M_mindustry_logic_LStatement_setupUI,
	(void *) M_mindustry_logic_LStatement_saveUI,
	(void *) M_mindustry_logic_LStatement_typeName_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_statementKey_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_localizedName_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_name_R_java_lang_String,
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
	{ "build", "(Larc/scene/ui/layout/Table;)V" },
	{ "build", "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;" },
	{ "category", "()Lmindustry/logic/LCategory;" },
	{ "copy", "()Lmindustry/logic/LStatement;" },
	{ "useWrapping", "()Z" },
	{ "hidden", "()Z" },
	{ "privileged", "()Z" },
	{ "nonPrivileged", "()Z" },
	{ "param", "(Larc/scene/ui/layout/Cell;)V" },
	{ "field", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "fields", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "fields", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "fields", "(Larc/scene/ui/layout/Table;Ljava/lang/String;ZLjava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "col", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "showSelect", "(Larc/scene/ui/Button;[Ljava/lang/Object;Ljava/lang/Object;Larc/func/Cons;ILarc/func/Cons;)V" },
	{ "showSelect", "(Larc/scene/ui/Button;[Ljava/lang/Object;Ljava/lang/Object;Larc/func/Cons;)V" },
	{ "fieldAlignSelect", "(Larc/scene/ui/layout/Table;Larc/func/Prov;Larc/func/Cons;ZZ)V" },
	{ "afterRead", "()V" },
	{ "write", "(Ljava/lang/StringBuilder;)V" },
	{ "setupUI", "()V" },
	{ "saveUI", "()V" },
	{ "typeName", "()Ljava/lang/String;" },
	{ "statementKey", "()Ljava/lang/String;" },
	{ "localizedName", "()Ljava/lang/String;" },
	{ "name", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "aligns", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_mindustry_logic_LStatement_aligns, "[Ljava/lang/String;", 26 },
	{ "nameToAlign", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_logic_LStatement_nameToAlign, "Larc/struct/ObjectMap;", 25 },
	{ "alignToName", &class_arc_struct_IntMap, (intptr_t) &SF_mindustry_logic_LStatement_alignToName, "Larc/struct/IntMap;", 25 },
	{ "elem", &class_mindustry_logic_LCanvas$StatementElem, offsetof(mindustry_logic_LStatement, F_elem), "Lmindustry/logic/LCanvas$StatementElem;", 129 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatement, 0, "()V", 1 },
	{ "build", 0, VTABLE_mindustry_logic_LStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1025 },
	{ "build", 0, VTABLE_mindustry_logic_LStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1025 },
	{ "category", (intptr_t) M_mindustry_logic_LStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "copy", (intptr_t) M_mindustry_logic_LStatement_copy_R_mindustry_logic_LStatement, VTABLE_mindustry_logic_LStatement_copy_R_mindustry_logic_LStatement, "()Lmindustry/logic/LStatement;", 1 },
	{ "useWrapping", (intptr_t) M_mindustry_logic_LStatement_useWrapping_R_boolean, VTABLE_mindustry_logic_LStatement_useWrapping_R_boolean, "()Z", 1 },
	{ "hidden", (intptr_t) M_mindustry_logic_LStatement_hidden_R_boolean, VTABLE_mindustry_logic_LStatement_hidden_R_boolean, "()Z", 1 },
	{ "privileged", (intptr_t) M_mindustry_logic_LStatement_privileged_R_boolean, VTABLE_mindustry_logic_LStatement_privileged_R_boolean, "()Z", 1 },
	{ "nonPrivileged", (intptr_t) M_mindustry_logic_LStatement_nonPrivileged_R_boolean, VTABLE_mindustry_logic_LStatement_nonPrivileged_R_boolean, "()Z", 1 },
	{ "param", (intptr_t) M_mindustry_logic_LStatement_param_arc_scene_ui_layout_Cell, VTABLE_mindustry_logic_LStatement_param_arc_scene_ui_layout_Cell, "(Larc/scene/ui/layout/Cell;)V", 4 },
	{ "sanitize", (intptr_t) SM_mindustry_logic_LStatement_sanitize_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "isHex", (intptr_t) SM_mindustry_logic_LStatement_isHex_java_lang_String_int_R_boolean, 0, "(Ljava/lang/String;I)Z", 10 },
	{ "logicLocalization", (intptr_t) SM_mindustry_logic_LStatement_logicLocalization_R_boolean, 0, "()Z", 12 },
	{ "bundle", (intptr_t) SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "bundle", (intptr_t) SM_mindustry_logic_LStatement_bundle_java_lang_Enum_R_java_lang_String, 0, "(Ljava/lang/Enum;)Ljava/lang/String;", 12 },
	{ "selectTranslate", (intptr_t) SM_mindustry_logic_LStatement_selectTranslate_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 12 },
	{ "field", (intptr_t) M_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 4 },
	{ "fields", (intptr_t) M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Larc/scene/ui/layout/Table;Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 4 },
	{ "fields", (intptr_t) M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 4 },
	{ "fields", (intptr_t) M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_boolean_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_boolean_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Larc/scene/ui/layout/Table;Ljava/lang/String;ZLjava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 4 },
	{ "col", (intptr_t) M_mindustry_logic_LStatement_col_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_mindustry_logic_LStatement_col_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 4 },
	{ "showSelect", (intptr_t) M_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons, VTABLE_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons, "(Larc/scene/ui/Button;[Ljava/lang/Object;Ljava/lang/Object;Larc/func/Cons;ILarc/func/Cons;)V", 4 },
	{ "showSelect", (intptr_t) M_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons, VTABLE_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons, "(Larc/scene/ui/Button;[Ljava/lang/Object;Ljava/lang/Object;Larc/func/Cons;)V", 4 },
	{ "fieldAlignSelect", (intptr_t) M_mindustry_logic_LStatement_fieldAlignSelect_arc_scene_ui_layout_Table_arc_func_Prov_arc_func_Cons_boolean_boolean, VTABLE_mindustry_logic_LStatement_fieldAlignSelect_arc_scene_ui_layout_Table_arc_func_Prov_arc_func_Cons_boolean_boolean, "(Larc/scene/ui/layout/Table;Larc/func/Prov;Larc/func/Cons;ZZ)V", 4 },
	{ "showAlignSelect", (intptr_t) SM_mindustry_logic_LStatement_showAlignSelect_arc_scene_ui_Button_int_arc_func_Intc_boolean_boolean, 0, "(Larc/scene/ui/Button;ILarc/func/Intc;ZZ)V", 9 },
	{ "showSelectTable", (intptr_t) SM_mindustry_logic_LStatement_showSelectTable_arc_scene_ui_Button_arc_func_Cons2, 0, "(Larc/scene/ui/Button;Larc/func/Cons2;)V", 12 },
	{ "showSelectTable", (intptr_t) SM_mindustry_logic_LStatement_showSelectTable_arc_scene_ui_Button_arc_func_Cons2_java_lang_Runnable, 0, "(Larc/scene/ui/Button;Larc/func/Cons2;Ljava/lang/Runnable;)V", 12 },
	{ "afterRead", (intptr_t) M_mindustry_logic_LStatement_afterRead, VTABLE_mindustry_logic_LStatement_afterRead, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_logic_LStatement_write_java_lang_StringBuilder, VTABLE_mindustry_logic_LStatement_write_java_lang_StringBuilder, "(Ljava/lang/StringBuilder;)V", 1 },
	{ "setupUI", (intptr_t) M_mindustry_logic_LStatement_setupUI, VTABLE_mindustry_logic_LStatement_setupUI, "()V", 1 },
	{ "saveUI", (intptr_t) M_mindustry_logic_LStatement_saveUI, VTABLE_mindustry_logic_LStatement_saveUI, "()V", 1 },
	{ "typeName", (intptr_t) M_mindustry_logic_LStatement_typeName_R_java_lang_String, VTABLE_mindustry_logic_LStatement_typeName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "statementKey", (intptr_t) M_mindustry_logic_LStatement_statementKey_R_java_lang_String, VTABLE_mindustry_logic_LStatement_statementKey_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "localizedName", (intptr_t) M_mindustry_logic_LStatement_localizedName_R_java_lang_String, VTABLE_mindustry_logic_LStatement_localizedName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "name", (intptr_t) M_mindustry_logic_LStatement_name_R_java_lang_String, VTABLE_mindustry_logic_LStatement_name_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lambda$showSelectTable$4", (intptr_t) SM_mindustry_logic_LStatement_lambda$showSelectTable$4_arc_func_Cons2_java_lang_Runnable_arc_scene_ui_layout_Table, 0, "(Larc/func/Cons2;Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showSelectTable$2", (intptr_t) SM_mindustry_logic_LStatement_lambda$showSelectTable$2_arc_scene_ui_Button_arc_scene_Element_arc_scene_ui_layout_Table_java_lang_Runnable, 0, "(Larc/scene/ui/Button;Larc/scene/Element;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$showSelectTable$3", (intptr_t) SM_mindustry_logic_LStatement_lambda$showSelectTable$3_arc_scene_Element_arc_scene_ui_layout_Table_java_lang_Runnable, 0, "(Larc/scene/Element;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$showSelectTable$1", (intptr_t) SM_mindustry_logic_LStatement_lambda$showSelectTable$1_arc_scene_Element_arc_scene_ui_layout_Table_java_lang_Runnable, 0, "(Larc/scene/Element;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$showSelectTable$0", (intptr_t) SM_mindustry_logic_LStatement_lambda$showSelectTable$0, 0, "()V", 4106 },
	{ "lambda$showAlignSelect$0", (intptr_t) SM_mindustry_logic_LStatement_lambda$showAlignSelect$0_boolean_boolean_arc_func_Intc_int_arc_scene_ui_layout_Table_java_lang_Runnable, 0, "(ZZLarc/func/Intc;ILarc/scene/ui/layout/Table;Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$showAlignSelect$1", (intptr_t) SM_mindustry_logic_LStatement_lambda$showAlignSelect$1_arc_func_Intc_int_java_lang_Runnable, 0, "(Larc/func/Intc;ILjava/lang/Runnable;)V", 4106 },
	{ "lambda$fieldAlignSelect$3", (intptr_t) SM_mindustry_logic_LStatement_lambda$fieldAlignSelect$3, 0, "()V", 4106 },
	{ "lambda$fieldAlignSelect$0", (intptr_t) SM_mindustry_logic_LStatement_lambda$fieldAlignSelect$0_arc_func_Prov_arc_func_Cons_boolean_boolean_arc_scene_ui_Button, 0, "(Larc/func/Prov;Larc/func/Cons;ZZLarc/scene/ui/Button;)V", 4106 },
	{ "lambda$fieldAlignSelect$1", (intptr_t) SM_mindustry_logic_LStatement_lambda$fieldAlignSelect$1_arc_func_Prov_arc_scene_ui_Button_arc_func_Cons_boolean_boolean, 0, "(Larc/func/Prov;Larc/scene/ui/Button;Larc/func/Cons;ZZ)V", 4106 },
	{ "lambda$fieldAlignSelect$2", (intptr_t) SM_mindustry_logic_LStatement_lambda$fieldAlignSelect$2_arc_func_Cons_int, 0, "(Larc/func/Cons;I)V", 4106 },
	{ "lambda$showSelect$3", (intptr_t) SM_mindustry_logic_LStatement_lambda$showSelect$3_arc_scene_ui_layout_Cell, 0, "(Larc/scene/ui/layout/Cell;)V", 4106 },
	{ "lambda$showSelect$0", (intptr_t) SM_mindustry_logic_LStatement_lambda$showSelect$0_Array1_java_lang_Object_arc_func_Cons_arc_func_Cons_java_lang_Object_int_arc_scene_ui_layout_Table_java_lang_Runnable, 0, "([Ljava/lang/Object;Larc/func/Cons;Larc/func/Cons;Ljava/lang/Object;ILarc/scene/ui/layout/Table;Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$showSelect$2", (intptr_t) SM_mindustry_logic_LStatement_lambda$showSelect$2_java_lang_Object_arc_scene_ui_layout_Cell, 0, "(Ljava/lang/Object;Larc/scene/ui/layout/Cell;)V", 4106 },
	{ "lambda$showSelect$1", (intptr_t) SM_mindustry_logic_LStatement_lambda$showSelect$1_arc_func_Cons_java_lang_Object_java_lang_Runnable, 0, "(Larc/func/Cons;Ljava/lang/Object;Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$col$2", (intptr_t) SM_mindustry_logic_LStatement_lambda$col$2, 0, "()V", 4106 },
	{ "lambda$col$0", (intptr_t) SM_mindustry_logic_LStatement_lambda$col$0_java_lang_String_arc_func_Cons_arc_scene_ui_Button, 0, "(Ljava/lang/String;Larc/func/Cons;Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$col$1", (intptr_t) SM_mindustry_logic_LStatement_lambda$col$1_java_lang_String_arc_func_Cons, 0, "(Ljava/lang/String;Larc/func/Cons;)V", 4106 },
	{ "lambda$field$0", (intptr_t) SM_mindustry_logic_LStatement_lambda$field$0_arc_func_Cons_java_lang_String, 0, "(Larc/func/Cons;Ljava/lang/String;)V", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_logic_LStatement_lambda$static$0_java_lang_String_java_lang_Integer, 0, "(Ljava/lang/String;Ljava/lang/Integer;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_LStatement, 0, "()V", 8 },
};

Class class_mindustry_logic_LStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatement",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatement,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 56,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatement = registerClass(&class_mindustry_logic_LStatement);

}
