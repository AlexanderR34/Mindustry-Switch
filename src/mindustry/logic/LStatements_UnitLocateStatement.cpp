#include "mindustry/logic/LStatements_UnitLocateStatement.h"
#include "arc/func/Prov.h"
#include "mindustry/logic/LStatements_UnitLocateStatement.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_21.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_20.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_23.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_22.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_25.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_24.h"
#include "arc/graphics/Color.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_27.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_26.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons2_1.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_29.h"
#include "java/lang/Runnable.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_28.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_19.h"
#include "mindustry/logic/LStatements.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/util/Iterator.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_30.h"
#include "mindustry/logic/LAssembler.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_32.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_31.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_33.h"
#include "mindustry/type/Item.h"
#include "arc/func/Cons2.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_java_lang_Runnable_12.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_java_lang_Runnable_11.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_java_lang_Runnable_10.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LStatements_1.h"
#include "mindustry/logic/LCategory.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_java_lang_Runnable_13.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_java_lang_Runnable_7.h"
#include "mindustry/logic/LStatement.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_java_lang_Runnable_9.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_java_lang_Runnable_8.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Prov_3.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Prov_2.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_18.h"
#include "java/lang/CharSequence.h"
#include "mindustry/logic/LStatements_UnitLocateStatement_invoke_arc_func_Cons_17.h"
#include "mindustry/logic/LExecutor_UnitLocateI.h"
#include "arc/scene/Element.h"
#include "mindustry/logic/LLocate.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_logic_LStatements$UnitLocateStatement(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LStatements$UnitLocateStatement *) object;
	if (self->F_locate)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_locate)->clazz)->markFunction)((jobject) self->F_locate, mark, depth + 1);
	if (self->F_flag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flag)->clazz)->markFunction)((jobject) self->F_flag, mark, depth + 1);
	if (self->F_enemy)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_enemy)->clazz)->markFunction)((jobject) self->F_enemy, mark, depth + 1);
	if (self->F_ore)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ore)->clazz)->markFunction)((jobject) self->F_ore, mark, depth + 1);
	if (self->F_outX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outX)->clazz)->markFunction)((jobject) self->F_outX, mark, depth + 1);
	if (self->F_outY)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outY)->clazz)->markFunction)((jobject) self->F_outY, mark, depth + 1);
	if (self->F_outFound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outFound)->clazz)->markFunction)((jobject) self->F_outFound, mark, depth + 1);
	if (self->F_outBuild)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outBuild)->clazz)->markFunction)((jobject) self->F_outBuild, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$UnitLocateStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatement(ctx);
}

void init_mindustry_logic_LStatements$UnitLocateStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$UnitLocateStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1128);
	init_mindustry_logic_LStatement(ctx, (frame[0].o));
	LINE_NUMBER(1129);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LLocate(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LLocate_building;
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK(sp[0].o))->F_locate = (jref) sp[1].o;
	LINE_NUMBER(1130);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_core;
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK(sp[0].o))->F_flag = (jref) sp[1].o;
	LINE_NUMBER(1131);
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_enemy = (jref) (((jobject) createStringLiteral(ctx, u8"true"_j)));
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_ore = (jref) (((jobject) createStringLiteral(ctx, u8"@copper"_j)));
	LINE_NUMBER(1132);
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_outX = (jref) (((jobject) createStringLiteral(ctx, u8"outx"_j)));
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_outY = (jref) (((jobject) createStringLiteral(ctx, u8"outy"_j)));
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_outFound = (jref) (((jobject) createStringLiteral(ctx, u8"found"_j)));
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_outBuild = (jref) (((jobject) createStringLiteral(ctx, u8"building"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:build", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1136);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(1138);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"find"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_17);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1140);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_18);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_7);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(110.0f);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(1146);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(1148);
	clinit_mindustry_logic_LStatements$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatements$1_$SwitchMap$mindustry$logic$LLocate;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_locate;
	jint temp2 = (jint)((func_mindustry_logic_LLocate_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LLocate_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp2))) {
		case 1: goto label_5;
		case 2: goto label_6;
		case 3: goto label_7;
		case 4: goto label_7;
		default: goto label_7;
	}
	}
label_5:;
	{
	LINE_NUMBER(1150);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"group"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1151);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_20);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_8);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(120.0f);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(1154);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(1156);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"enemy"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_enemy;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$UnitLocateStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$UnitLocateStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1157);
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(1160);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_22(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_22 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_22);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1188);
	goto label_7;
	}
label_7:;
	{
	LINE_NUMBER(1194);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"outX"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_outX;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_23);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$UnitLocateStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$UnitLocateStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1196);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"outY"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_outY;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_24(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_24 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_24);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$UnitLocateStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$UnitLocateStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1198);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"found"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_outFound;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_25(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_25 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_25);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$UnitLocateStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$UnitLocateStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1200);
	sp[0].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_locate;
	clinit_mindustry_logic_LLocate(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LLocate_ore;
	if (sp[0].o == sp[1].o) goto label_16;
	}
	{
	LINE_NUMBER(1201);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"building"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_outBuild;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_26(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_26 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_26);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$UnitLocateStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$UnitLocateStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_16:;
	LINE_NUMBER(1204);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$UnitLocateStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:build", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1208);
	clinit_mindustry_logic_LExecutor$UnitLocateI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$UnitLocateI);
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_locate;
	sp[2].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_flag;
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_enemy;
	sp[3].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[3].o, sp[4].o);
	sp[4].o = frame[1].o;
	sp[5].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_ore;
	sp[4].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[4].o, sp[5].o);
	sp[5].o = frame[1].o;
	sp[6].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_outX;
	sp[5].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[5].o, sp[6].o);
	sp[6].o = frame[1].o;
	sp[7].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_outY;
	sp[6].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[6].o, sp[7].o);
	sp[7].o = frame[1].o;
	sp[8].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_outFound;
	sp[7].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[7].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[7].o, sp[8].o);
	sp[8].o = frame[1].o;
	sp[9].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_outBuild;
	sp[8].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[8].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[8].o, sp[9].o);
	init_mindustry_logic_LExecutor$UnitLocateI_mindustry_logic_LLocate_mindustry_world_meta_BlockFlag_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$UnitLocateStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1213);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_unit;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$24_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$24", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1201);
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_outBuild = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$23_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$23", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1198);
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_outFound = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$22_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$22", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1196);
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_outY = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$21_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$21", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1194);
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_outX = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$13_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$13", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1161);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_color;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1163);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"ore"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_ore;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_27(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_27 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_27);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$UnitLocateStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$UnitLocateStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1165);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_28(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_28 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_28);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_9);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(40.0f);
	LINE_NUMBER(1184);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-2.0f)));
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$20(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$20", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$UnitLocateStatement(ctx);
	LINE_NUMBER(1184);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$15_arc_scene_ui_layout_Table_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$15", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1166);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencilSmall;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1167);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_10);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$16_arc_scene_ui_Button_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$16", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1167);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons2_1);
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

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$17_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$17", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1168);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(1169);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_29(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_29 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_29);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jint temp0 = jint(3);
	LINE_NUMBER(1182);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(240.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(1183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$18_arc_scene_ui_layout_Table_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$18", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1170);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(1171);
	frame[4].i = (jint(0));
	LINE_NUMBER(1172);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(1173);
	jint temp0 = (jint)((func_mindustry_type_Item_unlockedNow_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Item_unlockedNow_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_6;
	}
	goto label_3;
label_6:;
	{
	LINE_NUMBER(1174);
	sp[0].o = frame[3].o;
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[6].o)))->F_uiIcon;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flati;
	jfloat temp0 = jfloat(24.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_11);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(1178);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(1180);
	INST_IINC(4, 1);
	if (((frame[4].i) % (6)) != 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	}
label_9:;
	LINE_NUMBER(1181);
	goto label_3;
label_4:;
	LINE_NUMBER(1182);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$19_mindustry_type_Item_arc_scene_ui_layout_Table_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$19", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1175);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001"_j.string, 1, sp[1].o);
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK(sp[0].o))->F_ore = (jref) sp[1].o;
	LINE_NUMBER(1176);
	((func_mindustry_logic_LStatements$UnitLocateStatement_build_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$UnitLocateStatement_build_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(1177);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(1178);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$14_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$14", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1163);
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_ore = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$12_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$12", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1156);
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_enemy = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$11(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$11", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$UnitLocateStatement(ctx);
	LINE_NUMBER(1154);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$6_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1152);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Prov_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1153);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_12);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$8_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$8", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1153);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_allLogic;
	sp[3].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_flag;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_30(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_30 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_30);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	jint temp0 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_31(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_31 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_31);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_logic_LStatements$UnitLocateStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$UnitLocateStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0, sp[5].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$10_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$UnitLocateStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1153);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (jfloat(120.0f)), (jfloat(50.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$9_mindustry_world_meta_BlockFlag(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1153);
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_flag = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$7_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$7", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1152);
	sp[0].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_flag;
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_Enum_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$5(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$5", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$UnitLocateStatement(ctx);
	LINE_NUMBER(1146);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$0_arc_scene_ui_layout_Table_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1141);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1142);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_java_lang_Runnable_13);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$2_arc_scene_ui_Button_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1142);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_logic_LLocate(ctx);
	sp[2].o = (jobject)SF_mindustry_logic_LLocate_all;
	sp[3].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_locate;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_32(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_32 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_32);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	jint temp0 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_33(ctx);
		auto proxy = (mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_33 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement_invoke_arc_func_Cons_33);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_logic_LStatements$UnitLocateStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$UnitLocateStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0, sp[5].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$4_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$UnitLocateStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1145);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (jfloat(110.0f)), (jfloat(50.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$3_arc_scene_ui_layout_Table_mindustry_logic_LLocate(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1143);
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_locate = (jref) (frame[2].o);
	LINE_NUMBER(1144);
	((func_mindustry_logic_LStatements$UnitLocateStatement_build_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$UnitLocateStatement_build_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$1_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitLocateStatement:lambda$build$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1141);
	sp[0].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[0].o)))->F_locate;
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_Enum_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$UnitLocateStatement[] {
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
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_category_R_mindustry_logic_LCategory,
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
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$24_java_lang_String,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$23_java_lang_String,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$22_java_lang_String,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$21_java_lang_String,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$13_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$15_arc_scene_ui_layout_Table_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$16_arc_scene_ui_Button_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$17_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table_java_lang_Runnable,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$18_arc_scene_ui_layout_Table_java_lang_Runnable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$19_mindustry_type_Item_arc_scene_ui_layout_Table_java_lang_Runnable,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$14_java_lang_String,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$12_java_lang_String,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$6_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$8_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$9_mindustry_world_meta_BlockFlag,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$7_R_java_lang_CharSequence,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$0_arc_scene_ui_layout_Table_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$2_arc_scene_ui_Button_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$3_arc_scene_ui_layout_Table_mindustry_logic_LLocate,
	(void *) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$1_R_java_lang_CharSequence,
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
	{ "lambda$build$24", "(Ljava/lang/String;)V" },
	{ "lambda$build$23", "(Ljava/lang/String;)V" },
	{ "lambda$build$22", "(Ljava/lang/String;)V" },
	{ "lambda$build$21", "(Ljava/lang/String;)V" },
	{ "lambda$build$13", "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$15", "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V" },
	{ "lambda$build$16", "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$17", "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V" },
	{ "lambda$build$18", "(Larc/scene/ui/layout/Table;Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$19", "(Lmindustry/type/Item;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V" },
	{ "lambda$build$14", "(Ljava/lang/String;)V" },
	{ "lambda$build$12", "(Ljava/lang/String;)V" },
	{ "lambda$build$6", "(Larc/scene/ui/Button;)V" },
	{ "lambda$build$8", "(Larc/scene/ui/Button;)V" },
	{ "lambda$build$9", "(Lmindustry/world/meta/BlockFlag;)V" },
	{ "lambda$build$7", "()Ljava/lang/CharSequence;" },
	{ "lambda$build$0", "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V" },
	{ "lambda$build$2", "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$3", "(Larc/scene/ui/layout/Table;Lmindustry/logic/LLocate;)V" },
	{ "lambda$build$1", "()Ljava/lang/CharSequence;" },
};

static FieldMetadata fields[] {
	{ "locate", &class_mindustry_logic_LLocate, offsetof(mindustry_logic_LStatements$UnitLocateStatement, F_locate), "Lmindustry/logic/LLocate;", 1 },
	{ "flag", &class_mindustry_world_meta_BlockFlag, offsetof(mindustry_logic_LStatements$UnitLocateStatement, F_flag), "Lmindustry/world/meta/BlockFlag;", 1 },
	{ "enemy", &class_java_lang_String, offsetof(mindustry_logic_LStatements$UnitLocateStatement, F_enemy), "Ljava/lang/String;", 1 },
	{ "ore", &class_java_lang_String, offsetof(mindustry_logic_LStatements$UnitLocateStatement, F_ore), "Ljava/lang/String;", 1 },
	{ "outX", &class_java_lang_String, offsetof(mindustry_logic_LStatements$UnitLocateStatement, F_outX), "Ljava/lang/String;", 1 },
	{ "outY", &class_java_lang_String, offsetof(mindustry_logic_LStatements$UnitLocateStatement, F_outY), "Ljava/lang/String;", 1 },
	{ "outFound", &class_java_lang_String, offsetof(mindustry_logic_LStatements$UnitLocateStatement, F_outFound), "Ljava/lang/String;", 1 },
	{ "outBuild", &class_java_lang_String, offsetof(mindustry_logic_LStatements$UnitLocateStatement, F_outBuild), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$UnitLocateStatement, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_build_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "lambda$build$24", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$24_java_lang_String, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$24_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$23", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$23_java_lang_String, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$23_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$22", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$22_java_lang_String, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$22_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$21", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$21_java_lang_String, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$21_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$13", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$13_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$13_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$20", (intptr_t) SM_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$20, 0, "()V", 4106 },
	{ "lambda$build$15", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$15_arc_scene_ui_layout_Table_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$15_arc_scene_ui_layout_Table_arc_scene_ui_Button, "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$build$16", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$16_arc_scene_ui_Button_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$16_arc_scene_ui_Button_arc_scene_ui_layout_Table, "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$17", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$17_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table_java_lang_Runnable, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$17_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table_java_lang_Runnable, "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$build$18", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$18_arc_scene_ui_layout_Table_java_lang_Runnable_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$18_arc_scene_ui_layout_Table_java_lang_Runnable_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$19", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$19_mindustry_type_Item_arc_scene_ui_layout_Table_java_lang_Runnable, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$19_mindustry_type_Item_arc_scene_ui_layout_Table_java_lang_Runnable, "(Lmindustry/type/Item;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$build$14", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$14_java_lang_String, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$14_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$12", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$12_java_lang_String, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$12_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$11", (intptr_t) SM_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$11, 0, "()V", 4106 },
	{ "lambda$build$6", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$6_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$6_arc_scene_ui_Button, "(Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$build$8", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$8_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$8_arc_scene_ui_Button, "(Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$build$10", (intptr_t) SM_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$10_arc_scene_ui_layout_Cell, 0, "(Larc/scene/ui/layout/Cell;)V", 4106 },
	{ "lambda$build$9", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$9_mindustry_world_meta_BlockFlag, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$9_mindustry_world_meta_BlockFlag, "(Lmindustry/world/meta/BlockFlag;)V", 4098 },
	{ "lambda$build$7", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$7_R_java_lang_CharSequence, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$7_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
	{ "lambda$build$5", (intptr_t) SM_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$5, 0, "()V", 4106 },
	{ "lambda$build$0", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$0_arc_scene_ui_layout_Table_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$0_arc_scene_ui_layout_Table_arc_scene_ui_Button, "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$2_arc_scene_ui_Button_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$2_arc_scene_ui_Button_arc_scene_ui_layout_Table, "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$4", (intptr_t) SM_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$4_arc_scene_ui_layout_Cell, 0, "(Larc/scene/ui/layout/Cell;)V", 4106 },
	{ "lambda$build$3", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$3_arc_scene_ui_layout_Table_mindustry_logic_LLocate, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$3_arc_scene_ui_layout_Table_mindustry_logic_LLocate, "(Larc/scene/ui/layout/Table;Lmindustry/logic/LLocate;)V", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$1_R_java_lang_CharSequence, VTABLE_mindustry_logic_LStatements$UnitLocateStatement_lambda$build$1_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
};

Class class_mindustry_logic_LStatements$UnitLocateStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$UnitLocateStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatement,
		.size = sizeof(mindustry_logic_LStatements$UnitLocateStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$UnitLocateStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$UnitLocateStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$UnitLocateStatement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LStatements,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 29,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 56,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$UnitLocateStatement = registerClass(&class_mindustry_logic_LStatements$UnitLocateStatement);

}

