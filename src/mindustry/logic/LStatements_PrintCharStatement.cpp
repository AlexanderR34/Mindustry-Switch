#include "mindustry/logic/LStatements_PrintCharStatement.h"
#include "java/lang/Integer.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/logic/LStatement.h"
#include "mindustry/logic/LStatements_PrintCharStatement_invoke_arc_func_Cons_4.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/logic/LStatements_PrintCharStatement_invoke_arc_func_Cons_3.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/logic/LStatements_PrintCharStatement_invoke_arc_func_Cons_5.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "mindustry/logic/LStatements.h"
#include "arc/scene/ui/Button.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/logic/LStatements_PrintCharStatement_invoke_java_lang_Runnable_3.h"
#include "mindustry/logic/LStatements_PrintCharStatement_invoke_java_lang_Runnable_4.h"
#include "mindustry/logic/LStatements_PrintCharStatement_invoke_java_lang_Runnable_5.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "mindustry/gen/Icon.h"
#include "mindustry/logic/LVar.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LStatements_PrintCharStatement_invoke_arc_func_Cons2_1.h"
#include "mindustry/logic/LAssembler.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/logic/LStatements_PrintCharStatement.h"
#include "mindustry/logic/LExecutor_PrintCharI.h"
#include "arc/func/Cons2.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LCategory.h"

extern "C" {


void mark_mindustry_logic_LStatements$PrintCharStatement(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_logic_LStatement(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_logic_LStatements$PrintCharStatement *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$PrintCharStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatement(ctx);
}

void init_mindustry_logic_LStatements$PrintCharStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PrintCharStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$PrintCharStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(284);
	init_mindustry_logic_LStatement(ctx, (frame[0].o));
	LINE_NUMBER(285);
	((mindustry_logic_LStatements$PrintCharStatement *) NULL_CHECK((frame[0].o)))->F_value = (jref) (((jobject) createStringLiteral(ctx, u8"65"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PrintCharStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PrintCharStatement:build", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(289);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"char"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$PrintCharStatement *) NULL_CHECK((frame[0].o)))->F_value;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PrintCharStatement_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_logic_LStatements$PrintCharStatement_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PrintCharStatement_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$PrintCharStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$PrintCharStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o));
	LINE_NUMBER(291);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PrintCharStatement_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_logic_LStatements$PrintCharStatement_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PrintCharStatement_invoke_arc_func_Cons_4);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PrintCharStatement_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_logic_LStatements$PrintCharStatement_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PrintCharStatement_invoke_java_lang_Runnable_3);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(40.0f);
	LINE_NUMBER(309);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-2.0f)));
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$PrintCharStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PrintCharStatement:build", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(314);
	clinit_mindustry_logic_LExecutor$PrintCharI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$PrintCharI);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$PrintCharStatement *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[1].o, sp[2].o);
	init_mindustry_logic_LExecutor$PrintCharI_mindustry_logic_LVar(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$PrintCharStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PrintCharStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(319);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_io;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$PrintCharStatement_lambda$build$6(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$PrintCharStatement:lambda$build$6", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$PrintCharStatement(ctx);
	LINE_NUMBER(309);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$1_arc_scene_ui_TextField_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PrintCharStatement:lambda$build$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(292);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencilSmall;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(293);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PrintCharStatement_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_logic_LStatements$PrintCharStatement_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PrintCharStatement_invoke_java_lang_Runnable_4);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$2_arc_scene_ui_Button_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PrintCharStatement:lambda$build$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(293);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PrintCharStatement_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_logic_LStatements$PrintCharStatement_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PrintCharStatement_invoke_arc_func_Cons2_1);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_logic_LStatement_showSelectTable_arc_scene_ui_Button_arc_func_Cons2(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$3_arc_scene_ui_TextField_arc_scene_ui_layout_Table_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PrintCharStatement:lambda$build$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(295);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PrintCharStatement_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_logic_LStatements$PrintCharStatement_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PrintCharStatement_invoke_arc_func_Cons_5);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$4_arc_scene_ui_TextField_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PrintCharStatement:lambda$build$4", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(297);
	frame[4].i = (jint(0));
	LINE_NUMBER(298);
	frame[5].i = (32);
	}
label_3:;
	{
	if ((frame[5].i) >= (127)) goto label_4;
	}
	{
	LINE_NUMBER(299);
	frame[6].i = (frame[5].i);
	LINE_NUMBER(300);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, (frame[5].i));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatt;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PrintCharStatement_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_logic_LStatements$PrintCharStatement_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PrintCharStatement_invoke_java_lang_Runnable_5);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (frame[6].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(32.0f);
	LINE_NUMBER(304);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(305);
	INST_IINC(4, 1);
	if (((frame[4].i) % (8)) != 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	}
label_9:;
	{
	LINE_NUMBER(298);
	frame[5].i = (jchar(((frame[5].i) + (jint(1)))));
	goto label_3;
	}
label_4:;
	LINE_NUMBER(307);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$5_int_arc_scene_ui_TextField_java_lang_Runnable(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PrintCharStatement:lambda$build$5", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(301);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, (frame[1].i));
	((mindustry_logic_LStatements$PrintCharStatement *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(302);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PrintCharStatement *) NULL_CHECK((frame[0].o)))->F_value;
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(303);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$0_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PrintCharStatement:lambda$build$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(290);
	((mindustry_logic_LStatements$PrintCharStatement *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$PrintCharStatement[] {
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
	(void *) M_mindustry_logic_LStatements$PrintCharStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$PrintCharStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$PrintCharStatement_category_R_mindustry_logic_LCategory,
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
	(void *) M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$1_arc_scene_ui_TextField_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$2_arc_scene_ui_Button_arc_scene_ui_TextField,
	(void *) M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$3_arc_scene_ui_TextField_arc_scene_ui_layout_Table_java_lang_Runnable,
	(void *) M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$4_arc_scene_ui_TextField_java_lang_Runnable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$5_int_arc_scene_ui_TextField_java_lang_Runnable,
	(void *) M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$0_java_lang_String,
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
	{ "lambda$build$1", "(Larc/scene/ui/TextField;Larc/scene/ui/Button;)V" },
	{ "lambda$build$2", "(Larc/scene/ui/Button;Larc/scene/ui/TextField;)V" },
	{ "lambda$build$3", "(Larc/scene/ui/TextField;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V" },
	{ "lambda$build$4", "(Larc/scene/ui/TextField;Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$5", "(ILarc/scene/ui/TextField;Ljava/lang/Runnable;)V" },
	{ "lambda$build$0", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "value", &class_java_lang_String, offsetof(mindustry_logic_LStatements$PrintCharStatement, F_value), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$PrintCharStatement, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$PrintCharStatement_build_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$PrintCharStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$PrintCharStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$PrintCharStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$PrintCharStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$PrintCharStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "lambda$build$6", (intptr_t) SM_mindustry_logic_LStatements$PrintCharStatement_lambda$build$6, 0, "()V", 4106 },
	{ "lambda$build$1", (intptr_t) M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$1_arc_scene_ui_TextField_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$PrintCharStatement_lambda$build$1_arc_scene_ui_TextField_arc_scene_ui_Button, "(Larc/scene/ui/TextField;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$2_arc_scene_ui_Button_arc_scene_ui_TextField, VTABLE_mindustry_logic_LStatements$PrintCharStatement_lambda$build$2_arc_scene_ui_Button_arc_scene_ui_TextField, "(Larc/scene/ui/Button;Larc/scene/ui/TextField;)V", 4098 },
	{ "lambda$build$3", (intptr_t) M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$3_arc_scene_ui_TextField_arc_scene_ui_layout_Table_java_lang_Runnable, VTABLE_mindustry_logic_LStatements$PrintCharStatement_lambda$build$3_arc_scene_ui_TextField_arc_scene_ui_layout_Table_java_lang_Runnable, "(Larc/scene/ui/TextField;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$build$4", (intptr_t) M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$4_arc_scene_ui_TextField_java_lang_Runnable_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$PrintCharStatement_lambda$build$4_arc_scene_ui_TextField_java_lang_Runnable_arc_scene_ui_layout_Table, "(Larc/scene/ui/TextField;Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$5", (intptr_t) M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$5_int_arc_scene_ui_TextField_java_lang_Runnable, VTABLE_mindustry_logic_LStatements$PrintCharStatement_lambda$build$5_int_arc_scene_ui_TextField_java_lang_Runnable, "(ILarc/scene/ui/TextField;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_logic_LStatements$PrintCharStatement_lambda$build$0_java_lang_String, VTABLE_mindustry_logic_LStatements$PrintCharStatement_lambda$build$0_java_lang_String, "(Ljava/lang/String;)V", 4098 },
};

Class class_mindustry_logic_LStatements$PrintCharStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$PrintCharStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatement,
		.size = sizeof(mindustry_logic_LStatements$PrintCharStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$PrintCharStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$PrintCharStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$PrintCharStatement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LStatements,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 42,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$PrintCharStatement = registerClass(&class_mindustry_logic_LStatements$PrintCharStatement);

}

