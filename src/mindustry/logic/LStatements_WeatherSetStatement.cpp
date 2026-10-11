#include "mindustry/logic/LStatements_WeatherSetStatement.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/logic/LStatement.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/graphics/Color.h"
#include "mindustry/logic/LStatements_WeatherSetStatement_invoke_arc_func_Cons_7.h"
#include "mindustry/logic/LStatements_WeatherSetStatement_invoke_arc_func_Cons_6.h"
#include "mindustry/logic/LStatements_WeatherSetStatement_invoke_arc_func_Cons_5.h"
#include "mindustry/logic/LStatements_WeatherSetStatement_invoke_arc_func_Cons_4.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "mindustry/logic/LStatements.h"
#include "arc/scene/ui/Button.h"
#include "java/lang/String.h"
#include "mindustry/logic/LStatements_WeatherSetStatement.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/logic/LStatements_WeatherSetStatement_invoke_java_lang_Runnable_5.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "mindustry/logic/LStatements_WeatherSetStatement_invoke_java_lang_Runnable_4.h"
#include "mindustry/logic/LStatements_WeatherSetStatement_invoke_java_lang_Runnable_3.h"
#include "mindustry/logic/LExecutor_SetWeatherI.h"
#include "mindustry/gen/Icon.h"
#include "java/util/Iterator.h"
#include "mindustry/logic/LVar.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LAssembler.h"
#include "mindustry/type/Weather.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/logic/LStatements_WeatherSetStatement_invoke_arc_func_Cons2_1.h"
#include "mindustry/ui/Styles.h"
#include "arc/func/Cons2.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LCategory.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_logic_LStatements$WeatherSetStatement(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LStatements$WeatherSetStatement *) object;
	if (self->F_weather)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_weather)->clazz)->markFunction)((jobject) self->F_weather, mark, depth + 1);
	if (self->F_state)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_state)->clazz)->markFunction)((jobject) self->F_state, mark, depth + 1);
	if (self->F_tfield)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfield)->clazz)->markFunction)((jobject) self->F_tfield, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$WeatherSetStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatement(ctx);
}

void init_mindustry_logic_LStatements$WeatherSetStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$WeatherSetStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$WeatherSetStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1548);
	init_mindustry_logic_LStatement(ctx, (frame[0].o));
	LINE_NUMBER(1549);
	((mindustry_logic_LStatements$WeatherSetStatement *) NULL_CHECK((frame[0].o)))->F_weather = (jref) (((jobject) createStringLiteral(ctx, u8"@rain"_j)));
	((mindustry_logic_LStatements$WeatherSetStatement *) NULL_CHECK((frame[0].o)))->F_state = (jref) (((jobject) createStringLiteral(ctx, u8"true"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$WeatherSetStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$WeatherSetStatement:build", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1555);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$WeatherSetStatement *) NULL_CHECK((frame[0].o)))->F_weather;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$WeatherSetStatement_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_logic_LStatements$WeatherSetStatement_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$WeatherSetStatement_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_mindustry_logic_LStatements$WeatherSetStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LStatements$WeatherSetStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(0)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((mindustry_logic_LStatements$WeatherSetStatement *) NULL_CHECK(sp[0].o))->F_tfield = (jref) (checkCast(ctx, &class_arc_scene_ui_TextField, sp[1].o));
	LINE_NUMBER(1557);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$WeatherSetStatement_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_logic_LStatements$WeatherSetStatement_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$WeatherSetStatement_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$WeatherSetStatement_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_logic_LStatements$WeatherSetStatement_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$WeatherSetStatement_invoke_java_lang_Runnable_3);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(40.0f);
	LINE_NUMBER(1576);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-1.0f)));
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1578);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"state"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$WeatherSetStatement *) NULL_CHECK((frame[0].o)))->F_state;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$WeatherSetStatement_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_logic_LStatements$WeatherSetStatement_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$WeatherSetStatement_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$WeatherSetStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$WeatherSetStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1579);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LStatements$WeatherSetStatement_privileged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$WeatherSetStatement:privileged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1583);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$WeatherSetStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$WeatherSetStatement:build", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1588);
	clinit_mindustry_logic_LExecutor$SetWeatherI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$SetWeatherI);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$WeatherSetStatement *) NULL_CHECK((frame[0].o)))->F_weather;
	sp[1].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[1].o, sp[2].o);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$WeatherSetStatement *) NULL_CHECK((frame[0].o)))->F_state;
	sp[2].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[2].o, sp[3].o);
	init_mindustry_logic_LExecutor$SetWeatherI_mindustry_logic_LVar_mindustry_logic_LVar(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$WeatherSetStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$WeatherSetStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1593);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_world;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$7_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$WeatherSetStatement:lambda$build$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1578);
	((mindustry_logic_LStatements$WeatherSetStatement *) NULL_CHECK((frame[0].o)))->F_state = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$6(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$WeatherSetStatement:lambda$build$6", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$WeatherSetStatement(ctx);
	LINE_NUMBER(1576);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$1_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$WeatherSetStatement:lambda$build$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1558);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencilSmall;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1560);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$WeatherSetStatement_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_logic_LStatements$WeatherSetStatement_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$WeatherSetStatement_invoke_java_lang_Runnable_4);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1576);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$2_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$WeatherSetStatement:lambda$build$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1560);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$WeatherSetStatement_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_logic_LStatements$WeatherSetStatement_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$WeatherSetStatement_invoke_arc_func_Cons2_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_logic_LStatement_showSelectTable_arc_scene_ui_Button_arc_func_Cons2(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$3_arc_scene_ui_layout_Table_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$WeatherSetStatement:lambda$build$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1561);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1562);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$WeatherSetStatement_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_logic_LStatements$WeatherSetStatement_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$WeatherSetStatement_invoke_arc_func_Cons_7);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1574);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(1575);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$4_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$WeatherSetStatement:lambda$build$4", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1563);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(1564);
	frame[3].i = (jint(0));
	LINE_NUMBER(1565);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_weathers_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_weathers_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Weather, sp[0].o));
	LINE_NUMBER(1566);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[5].o)))->F_name;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatt;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$WeatherSetStatement_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_logic_LStatements$WeatherSetStatement_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$WeatherSetStatement_invoke_java_lang_Runnable_5);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(40.0f);
	LINE_NUMBER(1570);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrapLabel_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrapLabel_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(1572);
	INST_IINC(3, 1);
	if (((frame[3].i) % (jint(2))) != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_8:;
	LINE_NUMBER(1573);
	goto label_3;
label_4:;
	LINE_NUMBER(1574);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$5_mindustry_type_Weather_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$WeatherSetStatement:lambda$build$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1567);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001"_j.string, 1, sp[1].o);
	((mindustry_logic_LStatements$WeatherSetStatement *) NULL_CHECK(sp[0].o))->F_weather = (jref) sp[1].o;
	LINE_NUMBER(1568);
	sp[0].o = (jobject)((mindustry_logic_LStatements$WeatherSetStatement *) NULL_CHECK((frame[0].o)))->F_tfield;
	sp[1].o = (jobject)((mindustry_logic_LStatements$WeatherSetStatement *) NULL_CHECK((frame[0].o)))->F_weather;
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1569);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(1570);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$0_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$WeatherSetStatement:lambda$build$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1555);
	((mindustry_logic_LStatements$WeatherSetStatement *) NULL_CHECK((frame[0].o)))->F_weather = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$WeatherSetStatement[] {
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
	(void *) M_mindustry_logic_LStatements$WeatherSetStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$WeatherSetStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$WeatherSetStatement_category_R_mindustry_logic_LCategory,
	(void *) M_mindustry_logic_LStatement_copy_R_mindustry_logic_LStatement,
	(void *) M_mindustry_logic_LStatement_useWrapping_R_boolean,
	(void *) M_mindustry_logic_LStatement_hidden_R_boolean,
	(void *) M_mindustry_logic_LStatements$WeatherSetStatement_privileged_R_boolean,
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
	(void *) M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$7_java_lang_String,
	(void *) M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$1_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$2_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$3_arc_scene_ui_layout_Table_java_lang_Runnable,
	(void *) M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$4_java_lang_Runnable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$5_mindustry_type_Weather_java_lang_Runnable,
	(void *) M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$0_java_lang_String,
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
	{ "lambda$build$7", "(Ljava/lang/String;)V" },
	{ "lambda$build$1", "(Larc/scene/ui/Button;)V" },
	{ "lambda$build$2", "(Larc/scene/ui/Button;)V" },
	{ "lambda$build$3", "(Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V" },
	{ "lambda$build$4", "(Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$5", "(Lmindustry/type/Weather;Ljava/lang/Runnable;)V" },
	{ "lambda$build$0", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "weather", &class_java_lang_String, offsetof(mindustry_logic_LStatements$WeatherSetStatement, F_weather), "Ljava/lang/String;", 1 },
	{ "state", &class_java_lang_String, offsetof(mindustry_logic_LStatements$WeatherSetStatement, F_state), "Ljava/lang/String;", 1 },
	{ "tfield", &class_arc_scene_ui_TextField, offsetof(mindustry_logic_LStatements$WeatherSetStatement, F_tfield), "Larc/scene/ui/TextField;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$WeatherSetStatement, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$WeatherSetStatement_build_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$WeatherSetStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "privileged", (intptr_t) M_mindustry_logic_LStatements$WeatherSetStatement_privileged_R_boolean, VTABLE_mindustry_logic_LStatements$WeatherSetStatement_privileged_R_boolean, "()Z", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$WeatherSetStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$WeatherSetStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$WeatherSetStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$WeatherSetStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "lambda$build$7", (intptr_t) M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$7_java_lang_String, VTABLE_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$7_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$6", (intptr_t) SM_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$6, 0, "()V", 4106 },
	{ "lambda$build$1", (intptr_t) M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$1_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$1_arc_scene_ui_Button, "(Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$2_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$2_arc_scene_ui_Button, "(Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$build$3", (intptr_t) M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$3_arc_scene_ui_layout_Table_java_lang_Runnable, VTABLE_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$3_arc_scene_ui_layout_Table_java_lang_Runnable, "(Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$build$4", (intptr_t) M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$4_java_lang_Runnable_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$4_java_lang_Runnable_arc_scene_ui_layout_Table, "(Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$5", (intptr_t) M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$5_mindustry_type_Weather_java_lang_Runnable, VTABLE_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$5_mindustry_type_Weather_java_lang_Runnable, "(Lmindustry/type/Weather;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$0_java_lang_String, VTABLE_mindustry_logic_LStatements$WeatherSetStatement_lambda$build$0_java_lang_String, "(Ljava/lang/String;)V", 4098 },
};

Class class_mindustry_logic_LStatements$WeatherSetStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$WeatherSetStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatement,
		.size = sizeof(mindustry_logic_LStatements$WeatherSetStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$WeatherSetStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$WeatherSetStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$WeatherSetStatement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LStatements,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$WeatherSetStatement = registerClass(&class_mindustry_logic_LStatements$WeatherSetStatement);

}

