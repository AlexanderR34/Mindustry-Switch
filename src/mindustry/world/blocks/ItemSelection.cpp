#include "mindustry/world/blocks/ItemSelection.h"
#include "arc/func/Prov.h"
#include "mindustry/world/Block.h"
#include "arc/scene/ui/TextField.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "arc/scene/ui/Button.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/blocks/ItemSelection_invoke_java_lang_Runnable_10.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/world/blocks/ItemSelection_invoke_java_lang_Runnable_11.h"
#include "mindustry/core/Control.h"
#include "arc/scene/ui/ImageButton.h"
#include "mindustry/world/blocks/ItemSelection_invoke_arc_func_Cons_3.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/ItemSelection_invoke_arc_func_Cons_2.h"
#include "mindustry/world/blocks/ItemSelection.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "mindustry/gen/Tex.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Icon.h"
#include "java/util/Iterator.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/fragments/BlockConfigFragment.h"
#include "mindustry/world/blocks/ItemSelection_invoke_java_lang_Runnable_9.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/world/blocks/ItemSelection_invoke_java_lang_Runnable_6.h"
#include "mindustry/world/blocks/ItemSelection_invoke_java_lang_Runnable_7.h"
#include "mindustry/world/blocks/ItemSelection_invoke_java_lang_Runnable_8.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "arc/scene/ui/ScrollPane.h"
#include "mindustry/type/Planet.h"
#include "mindustry/world/blocks/ItemSelection_invoke_arc_func_Boolf_1.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/input/InputHandler.h"

extern "C" {

jobject SF_mindustry_world_blocks_ItemSelection_search;
jint SF_mindustry_world_blocks_ItemSelection_rowCount;

void mark_mindustry_world_blocks_ItemSelection(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_ItemSelection_search)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_ItemSelection_search)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_ItemSelection_search, mark, depth + 1);
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
	auto self = (mindustry_world_blocks_ItemSelection *) object;
}

void clinit_mindustry_world_blocks_ItemSelection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_blocks_ItemSelection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ItemSelection_buildTable_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:buildTable", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(23);
	SM_mindustry_world_blocks_ItemSelection_buildTable_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jint(1)));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ItemSelection_buildTable_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4) {
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:buildTable", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(27);
	SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_boolean_int_int(ctx, (jobject(nullptr)), (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].i), (jint(5)), (jint(4)));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ItemSelection_buildTable_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4) {
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:buildTable", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(31);
	SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_boolean_int_int(ctx, (jobject(nullptr)), (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jint(1)), (jint(5)), (frame[4].i));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:buildTable", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(35);
	SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_boolean_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (jint(1)), (jint(5)), (jint(4)));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jbool param5) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:buildTable", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(39);
	SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_boolean_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].i), (jint(5)), (jint(4)));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_int_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jint param5, jint param6) {
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:buildTable", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(43);
	SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_boolean_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (jint(1)), (frame[5].i), (frame[6].i));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ItemSelection_buildTable_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_int_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jint param5) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:buildTable", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(47);
	SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_boolean_int_int(ctx, (jobject(nullptr)), (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jint(1)), (frame[4].i), (frame[5].i));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_boolean_int_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jbool param5, jint param6, jint param7) {
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:buildTable", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(51);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(52);
	((func_arc_scene_ui_ButtonGroup_setMinCheckCount_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_scene_ui_ButtonGroup_setMinCheckCount_int])(ctx, (frame[8].o), (jint(0)));
	LINE_NUMBER(53);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[9].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	LINE_NUMBER(56);
	clinit_mindustry_world_blocks_ItemSelection(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_ItemSelection_search;
	if (sp[0].o == nullptr) goto label_5;
	}
	clinit_mindustry_world_blocks_ItemSelection(ctx);
	(sp++)->o = SF_mindustry_world_blocks_ItemSelection_search;
	POP_N(1); // Pop method args
	((func_arc_scene_ui_TextField_clearText) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_clearText])(ctx, sp[0].o);
label_5:;
	{
	LINE_NUMBER(58);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_6);
		proxy->F_field6 = (frame[7].i);
		proxy->F_field5 = (jref) (frame[3].o);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (frame[5].i);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[0].o = (jobject) proxy;
	}
	frame[10].o = sp[0].o;
	LINE_NUMBER(84);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[10].o)))(ctx, (frame[10].o));
	LINE_NUMBER(86);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(87);
	if ((floatCompare((jfloat((clinit_mindustry_world_blocks_ItemSelection(ctx), (jint)SF_mindustry_world_blocks_ItemSelection_rowCount))), ((jfloat((frame[6].i))) * (jfloat(1.5f))), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = frame[11].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_ItemSelection_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_world_blocks_ItemSelection_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_ItemSelection_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[10].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_9:;
	{
	LINE_NUMBER(95);
	clinit_arc_scene_ui_ScrollPane(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane);
	sp[1].o = frame[9].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_smallPane;
	init_arc_scene_ui_ScrollPane_arc_scene_Element_arc_scene_ui_ScrollPane$ScrollPaneStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(96);
	((func_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean])(ctx, (frame[12].o), (jint(1)), (jint(0)));
	LINE_NUMBER(97);
	sp[0].o = frame[12].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_7);
		proxy->F_field0 = (jref) (frame[12].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_ScrollPane_exited_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_exited_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(103);
	if ((frame[0].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(104);
	((func_arc_scene_ui_ScrollPane_setScrollYForce_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollYForce_float])(ctx, (frame[12].o), ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_selectScroll));
	LINE_NUMBER(105);
	sp[0].o = frame[12].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_8);
		proxy->F_field1 = (jref) (frame[12].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ScrollPane_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	}
label_15:;
	{
	LINE_NUMBER(110);
	((func_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean])(ctx, (frame[12].o), (jint(0)), (jint(0)));
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[11].o), (frame[12].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxHeight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxHeight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(((40) * (frame[6].i)))));
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[11].o));
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$8_mindustry_world_Block_arc_scene_ui_ScrollPane(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:lambda$buildTable$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_ScrollPane_getScrollY_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getScrollY_R_float])(ctx, (frame[1].o));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_selectScroll = temp0;
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$7_arc_scene_ui_ScrollPane(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:lambda$buildTable$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(98);
	jint temp0 = (jint)((func_arc_scene_ui_ScrollPane_hasScroll_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_hasScroll_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(99);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_1:;
	LINE_NUMBER(101);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$5_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:lambda$buildTable$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(89);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(90);
	sp[0].o = frame[1].o;
	sp[1].o = jobject(nullptr);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_ItemSelection_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_world_blocks_ItemSelection_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_ItemSelection_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	clinit_mindustry_world_blocks_ItemSelection(ctx);
	SF_mindustry_world_blocks_ItemSelection_search = (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o));
	LINE_NUMBER(91);
	clinit_mindustry_world_blocks_ItemSelection(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_ItemSelection_search;
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@players.search"_j))));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$6_java_lang_Runnable_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:lambda$buildTable$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(90);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$0_arc_scene_ui_ButtonGroup_arc_scene_ui_layout_Table_arc_struct_Seq_boolean_arc_func_Cons_arc_func_Prov_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jobject param5, jint param6) {
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:lambda$buildTable$0", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(59);
	((func_arc_scene_ui_ButtonGroup_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ButtonGroup_clear])(ctx, (frame[0].o));
	LINE_NUMBER(60);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(62);
	clinit_mindustry_world_blocks_ItemSelection(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_ItemSelection_search;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_mindustry_world_blocks_ItemSelection(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_ItemSelection_search;
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_4:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(63);
	frame[8].i = (jint(0));
	LINE_NUMBER(64);
	clinit_mindustry_world_blocks_ItemSelection(ctx);
	SF_mindustry_world_blocks_ItemSelection_rowCount = (jint(0));
	LINE_NUMBER(66);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_ItemSelection_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_blocks_ItemSelection_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_ItemSelection_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(67);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o));
	LINE_NUMBER(68);
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean])(ctx, (frame[11].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = frame[11].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_isHidden_R_boolean])(ctx, (frame[11].o));
	if (temp0 == 0) goto label_12;
	}
	goto label_9;
label_12:;
	{
	LINE_NUMBER(70);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[11].o)))->F_selectionSize), (jfloat(0)), (jfloat(40.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_9);
		proxy->F_field0 = (frame[3].i);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[11].o)))->F_localizedName;
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[12].o = (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[0].o));
	LINE_NUMBER(73);
	sp[0].o = frame[12].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_10);
		proxy->F_field2 = (jref) (frame[11].o);
		proxy->F_field1 = (jref) (frame[12].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_ImageButton_changed_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_changed_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[12].o));
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[11].o)))->F_uiIcon;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	LINE_NUMBER(75);
	sp[0].o = frame[12].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_world_blocks_ItemSelection_invoke_java_lang_Runnable_11);
		proxy->F_field2 = (jref) (frame[11].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[12].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(77);
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	if ((temp1 % (frame[6].i)) != ((frame[6].i) - (jint(1)))) goto label_18;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(79);
	clinit_mindustry_world_blocks_ItemSelection(ctx);
	SF_mindustry_world_blocks_ItemSelection_rowCount = ((clinit_mindustry_world_blocks_ItemSelection(ctx), (jint)SF_mindustry_world_blocks_ItemSelection_rowCount) + (jint(1)));
	}
label_18:;
	LINE_NUMBER(81);
	goto label_9;
label_10:;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$4_arc_scene_ui_ImageButton_arc_func_Prov_mindustry_ctype_UnlockableContent(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:lambda$buildTable$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp += 1;
	if (sp[0].o != (frame[2].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_ImageButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setChecked_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$3_arc_func_Cons_arc_scene_ui_ImageButton_mindustry_ctype_UnlockableContent(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:lambda$buildTable$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_scene_ui_ImageButton_isChecked_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_isChecked_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	INST_ALOAD(2);
	goto label_2;
label_1:;
	INST_ACONST_NULL();
label_2:;
	POP_N(2); // Pop method args
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$2_boolean(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:lambda$buildTable$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(71);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_config;
	((func_mindustry_ui_fragments_BlockConfigFragment_hideConfig) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_hideConfig])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$1_java_lang_String_mindustry_ctype_UnlockableContent_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ItemSelection:lambda$buildTable$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ItemSelection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(66);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_localizedName;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
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

void *vtable_mindustry_world_blocks_ItemSelection[] {
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
};

static FieldMetadata fields[] {
	{ "search", &class_arc_scene_ui_TextField, (intptr_t) &SF_mindustry_world_blocks_ItemSelection_search, "Larc/scene/ui/TextField;", 10 },
	{ "rowCount", &class_int, (intptr_t) &SF_mindustry_world_blocks_ItemSelection_rowCount, "I", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_ItemSelection, 0, "()V", 1 },
	{ "buildTable", (intptr_t) SM_mindustry_world_blocks_ItemSelection_buildTable_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Larc/struct/Seq;Larc/func/Prov;Larc/func/Cons;)V", 9 },
	{ "buildTable", (intptr_t) SM_mindustry_world_blocks_ItemSelection_buildTable_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_boolean, 0, "(Larc/scene/ui/layout/Table;Larc/struct/Seq;Larc/func/Prov;Larc/func/Cons;Z)V", 9 },
	{ "buildTable", (intptr_t) SM_mindustry_world_blocks_ItemSelection_buildTable_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_int, 0, "(Larc/scene/ui/layout/Table;Larc/struct/Seq;Larc/func/Prov;Larc/func/Cons;I)V", 9 },
	{ "buildTable", (intptr_t) SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons, 0, "(Lmindustry/world/Block;Larc/scene/ui/layout/Table;Larc/struct/Seq;Larc/func/Prov;Larc/func/Cons;)V", 9 },
	{ "buildTable", (intptr_t) SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_boolean, 0, "(Lmindustry/world/Block;Larc/scene/ui/layout/Table;Larc/struct/Seq;Larc/func/Prov;Larc/func/Cons;Z)V", 9 },
	{ "buildTable", (intptr_t) SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_int_int, 0, "(Lmindustry/world/Block;Larc/scene/ui/layout/Table;Larc/struct/Seq;Larc/func/Prov;Larc/func/Cons;II)V", 9 },
	{ "buildTable", (intptr_t) SM_mindustry_world_blocks_ItemSelection_buildTable_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_int_int, 0, "(Larc/scene/ui/layout/Table;Larc/struct/Seq;Larc/func/Prov;Larc/func/Cons;II)V", 9 },
	{ "buildTable", (intptr_t) SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_boolean_int_int, 0, "(Lmindustry/world/Block;Larc/scene/ui/layout/Table;Larc/struct/Seq;Larc/func/Prov;Larc/func/Cons;ZII)V", 9 },
	{ "lambda$buildTable$8", (intptr_t) SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$8_mindustry_world_Block_arc_scene_ui_ScrollPane, 0, "(Lmindustry/world/Block;Larc/scene/ui/ScrollPane;)V", 4106 },
	{ "lambda$buildTable$7", (intptr_t) SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$7_arc_scene_ui_ScrollPane, 0, "(Larc/scene/ui/ScrollPane;)V", 4106 },
	{ "lambda$buildTable$5", (intptr_t) SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$5_java_lang_Runnable_arc_scene_ui_layout_Table, 0, "(Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$buildTable$6", (intptr_t) SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$6_java_lang_Runnable_java_lang_String, 0, "(Ljava/lang/Runnable;Ljava/lang/String;)V", 4106 },
	{ "lambda$buildTable$0", (intptr_t) SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$0_arc_scene_ui_ButtonGroup_arc_scene_ui_layout_Table_arc_struct_Seq_boolean_arc_func_Cons_arc_func_Prov_int, 0, "(Larc/scene/ui/ButtonGroup;Larc/scene/ui/layout/Table;Larc/struct/Seq;ZLarc/func/Cons;Larc/func/Prov;I)V", 4106 },
	{ "lambda$buildTable$4", (intptr_t) SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$4_arc_scene_ui_ImageButton_arc_func_Prov_mindustry_ctype_UnlockableContent, 0, "(Larc/scene/ui/ImageButton;Larc/func/Prov;Lmindustry/ctype/UnlockableContent;)V", 4106 },
	{ "lambda$buildTable$3", (intptr_t) SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$3_arc_func_Cons_arc_scene_ui_ImageButton_mindustry_ctype_UnlockableContent, 0, "(Larc/func/Cons;Larc/scene/ui/ImageButton;Lmindustry/ctype/UnlockableContent;)V", 4106 },
	{ "lambda$buildTable$2", (intptr_t) SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$2_boolean, 0, "(Z)V", 4106 },
	{ "lambda$buildTable$1", (intptr_t) SM_mindustry_world_blocks_ItemSelection_lambda$buildTable$1_java_lang_String_mindustry_ctype_UnlockableContent_R_boolean, 0, "(Ljava/lang/String;Lmindustry/ctype/UnlockableContent;)Z", 4106 },
};

Class class_mindustry_world_blocks_ItemSelection{
		.nativeName = (intptr_t) "mindustry/world/blocks/ItemSelection",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_ItemSelection),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_ItemSelection,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_ItemSelection,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_ItemSelection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_ItemSelection = registerClass(&class_mindustry_world_blocks_ItemSelection);

}
