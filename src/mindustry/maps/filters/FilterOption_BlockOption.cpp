#include "mindustry/maps/filters/FilterOption_BlockOption.h"
#include "mindustry/maps/filters/FilterOption_BlockOption_invoke_java_lang_Runnable_5.h"
#include "mindustry/maps/filters/FilterOption_BlockOption_invoke_java_lang_Runnable_6.h"
#include "arc/func/Prov.h"
#include "mindustry/maps/filters/FilterOption_BlockOption_invoke_java_lang_Runnable_4.h"
#include "mindustry/world/Block.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/maps/filters/FilterOption_BlockOption_invoke_java_lang_Runnable_7.h"
#include "arc/Application.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/Button.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/maps/filters/FilterOption_BlockOption.h"
#include "java/lang/String.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/style/Drawable.h"
#include "arc/func/Boolf.h"
#include "mindustry/maps/filters/FilterOption_BlockOption_invoke_arc_func_Cons_5.h"
#include "mindustry/maps/filters/FilterOption_BlockOption_invoke_arc_func_Cons_3.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/maps/filters/FilterOption_BlockOption_invoke_arc_func_Cons_4.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/content/Blocks.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_maps_filters_FilterOption$BlockOption(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_maps_filters_FilterOption(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_maps_filters_FilterOption$BlockOption *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_supplier)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_supplier)->clazz)->markFunction)((jobject) self->F_supplier, mark, depth + 1);
	if (self->F_consumer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_consumer)->clazz)->markFunction)((jobject) self->F_consumer, mark, depth + 1);
	if (self->F_filter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filter)->clazz)->markFunction)((jobject) self->F_filter, mark, depth + 1);
}

void clinit_mindustry_maps_filters_FilterOption$BlockOption(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_filters_FilterOption(ctx);
}

void init_mindustry_maps_filters_FilterOption$BlockOption_java_lang_String_arc_func_Prov_arc_func_Cons_arc_func_Boolf(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption$BlockOption:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_FilterOption$BlockOption(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(97);
	init_mindustry_maps_filters_FilterOption(ctx, (frame[0].o));
	LINE_NUMBER(98);
	((mindustry_maps_filters_FilterOption$BlockOption *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(99);
	((mindustry_maps_filters_FilterOption$BlockOption *) NULL_CHECK((frame[0].o)))->F_supplier = (jref) (frame[2].o);
	LINE_NUMBER(100);
	((mindustry_maps_filters_FilterOption$BlockOption *) NULL_CHECK((frame[0].o)))->F_consumer = (jref) (frame[3].o);
	LINE_NUMBER(101);
	((mindustry_maps_filters_FilterOption$BlockOption *) NULL_CHECK((frame[0].o)))->F_filter = (jref) (frame[4].o);
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_FilterOption$BlockOption_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption$BlockOption:build", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption$BlockOption_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption$BlockOption_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption$BlockOption_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption$BlockOption_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption_invoke_java_lang_Runnable_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_ui_Button, sp[0].o));
	LINE_NUMBER(129);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseMiddle;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption$BlockOption_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption$BlockOption_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption_invoke_java_lang_Runnable_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(134);
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption$BlockOption_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption$BlockOption_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption_invoke_java_lang_Runnable_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(141);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_maps_filters_FilterOption$BlockOption *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@filter.option.\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$6(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption$BlockOption:lambda$build$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_FilterOption$BlockOption *) NULL_CHECK((frame[0].o)))->F_filter;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_app;
	sp[2].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[2].o))(ctx, sp[2].o);
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_maps_filters_FilterOption$BlockOption *) NULL_CHECK((frame[0].o)))->F_consumer;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_app;
	sp[2].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[2].o))(ctx, sp[2].o);
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block])(ctx, sp[1].o, sp[2].o);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_maps_filters_FilterOption *) NULL_CHECK((frame[0].o)))->F_changed;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(139);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$5(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption$BlockOption:lambda$build$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((mindustry_maps_filters_FilterOption$BlockOption *) NULL_CHECK((frame[0].o)))->F_supplier;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_Block, sp[1].o))))->F_name;
	((func_arc_Application_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(131);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoFade_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@copied"_j))));
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption$BlockOption:lambda$build$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	sp[1].o = (jobject)((mindustry_maps_filters_FilterOption$BlockOption *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@filter.option.\u0001"_j.string, 1, sp[1].o);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(109);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption$BlockOption_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption$BlockOption_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption_invoke_arc_func_Cons_4);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jint temp0 = jint(0);
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(125);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$3_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption$BlockOption:lambda$build$3", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(110);
	frame[3].i = (jint(0));
	LINE_NUMBER(111);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_maps_filters_FilterOption$BlockOption *) NULL_CHECK((frame[0].o)))->F_filter;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	if (temp0 != 0) goto label_5;
	}
	goto label_2;
label_5:;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[2].o;
	sp[1].o = frame[5].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_air;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_none;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(5);
	sp[-1].o = (jobject) ((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[-1].o))->F_uiIcon;
label_7:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[1].o = frame[5].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_air;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@none"_j));
	goto label_9;
label_8:;
	INST_ALOAD(5);
	sp[-1].o = (jobject) ((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[-1].o))->F_localizedName;
label_9:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption$BlockOption_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption$BlockOption_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption_invoke_java_lang_Runnable_7);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Image_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(119);
	INST_IINC(3, 1);
	if (((frame[3].i) % (10)) != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_11:;
	LINE_NUMBER(120);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(121);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((frame[3].i) <= (100)) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 2;
	((func_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$4_mindustry_world_Block_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption$BlockOption:lambda$build$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_maps_filters_FilterOption$BlockOption *) NULL_CHECK((frame[0].o)))->F_consumer;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(116);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_maps_filters_FilterOption *) NULL_CHECK((frame[0].o)))->F_changed;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$0_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption$BlockOption:lambda$build$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_maps_filters_FilterOption$BlockOption *) NULL_CHECK((frame[0].o)))->F_supplier;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_Block, sp[1].o))))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption$BlockOption_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption$BlockOption_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(24.0f);
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$1_arc_scene_ui_Image(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption$BlockOption:lambda$build$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_arc_scene_ui_Image_getDrawable_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Image_getDrawable_R_arc_scene_style_Drawable])(ctx, (frame[1].o));
	sp[0].o = checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o);
	LINE_NUMBER(107);
	sp[1].o = (jobject)((mindustry_maps_filters_FilterOption$BlockOption *) NULL_CHECK((frame[0].o)))->F_supplier;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_air;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_none;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_maps_filters_FilterOption$BlockOption *) NULL_CHECK((frame[0].o)))->F_supplier;
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_Block, sp[0].o))))->F_uiIcon;
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	((func_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_FilterOption$BlockOption[] {
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
	(void *) M_mindustry_maps_filters_FilterOption$BlockOption_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$6,
	(void *) M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$5,
	(void *) M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$2,
	(void *) M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$3_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$4_mindustry_world_Block_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$0_arc_scene_ui_Button,
	(void *) M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$1_arc_scene_ui_Image,
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
	{ "lambda$build$6", "()V" },
	{ "lambda$build$5", "()V" },
	{ "lambda$build$2", "()V" },
	{ "lambda$build$3", "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$4", "(Lmindustry/world/Block;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$build$0", "(Larc/scene/ui/Button;)V" },
	{ "lambda$build$1", "(Larc/scene/ui/Image;)V" },
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(mindustry_maps_filters_FilterOption$BlockOption, F_name), "Ljava/lang/String;", 16 },
	{ "supplier", &class_arc_func_Prov, offsetof(mindustry_maps_filters_FilterOption$BlockOption, F_supplier), "Larc/func/Prov;", 16 },
	{ "consumer", &class_arc_func_Cons, offsetof(mindustry_maps_filters_FilterOption$BlockOption, F_consumer), "Larc/func/Cons;", 16 },
	{ "filter", &class_arc_func_Boolf, offsetof(mindustry_maps_filters_FilterOption$BlockOption, F_filter), "Larc/func/Boolf;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_FilterOption$BlockOption_java_lang_String_arc_func_Prov_arc_func_Cons_arc_func_Boolf, 0, "(Ljava/lang/String;Larc/func/Prov;Larc/func/Cons;Larc/func/Boolf;)V", 0 },
	{ "build", (intptr_t) M_mindustry_maps_filters_FilterOption$BlockOption_build_arc_scene_ui_layout_Table, VTABLE_mindustry_maps_filters_FilterOption$BlockOption_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "lambda$build$6", (intptr_t) M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$6, VTABLE_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$6, "()V", 4098 },
	{ "lambda$build$5", (intptr_t) M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$5, VTABLE_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$5, "()V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$2, VTABLE_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$2, "()V", 4098 },
	{ "lambda$build$3", (intptr_t) M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$3_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$3_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$4", (intptr_t) M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$4_mindustry_world_Block_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$4_mindustry_world_Block_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/world/Block;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$0_arc_scene_ui_Button, VTABLE_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$0_arc_scene_ui_Button, "(Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$1_arc_scene_ui_Image, VTABLE_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$1_arc_scene_ui_Image, "(Larc/scene/ui/Image;)V", 4098 },
};

Class class_mindustry_maps_filters_FilterOption$BlockOption{
		.nativeName = (intptr_t) "mindustry/maps/filters/FilterOption$BlockOption",
		.parentClass = (intptr_t) &class_mindustry_maps_filters_FilterOption,
		.size = sizeof(mindustry_maps_filters_FilterOption$BlockOption),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_FilterOption$BlockOption,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_FilterOption$BlockOption,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_FilterOption$BlockOption,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_maps_filters_FilterOption,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_FilterOption$BlockOption = registerClass(&class_mindustry_maps_filters_FilterOption$BlockOption);

}

