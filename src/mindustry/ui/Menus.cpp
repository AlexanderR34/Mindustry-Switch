#include "mindustry/ui/Menus.h"
#include "mindustry/ui/Menus_MenuListener.h"
#include "java/lang/Integer.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/Events.h"
#include "mindustry/gen/WorldLabelc.h"
#include "mindustry/ui/Menus_TextInputListener.h"
#include "java/lang/Runnable.h"
#include "arc/func/Intc.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "mindustry/ui/Menus_1.h"
#include "mindustry/ui/fragments/HudFragment.h"
#include "mindustry/ui/Menus_MenuDialog.h"
#include "arc/Core.h"
#include "mindustry/ui/Menus_invoke_arc_func_Cons_3.h"
#include "mindustry/ui/Menus_invoke_arc_func_Cons_4.h"
#include "mindustry/ui/Menus.h"
#include "mindustry/ui/builder/UiBuilder_NodeBuilder.h"
#include "mindustry/game/EventType_MenuBuilderOptionChooseEvent.h"
#include "mindustry/ui/Menus_invoke_arc_func_Intc_3.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "mindustry/ui/Menus_invoke_arc_func_Intc_2.h"
#include "mindustry/ui/Menus_invoke_java_lang_Runnable_12.h"
#include "arc/func/Cons2.h"
#include "mindustry/ui/Menus_invoke_java_lang_Runnable_13.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/ui/Menus_invoke_java_lang_Runnable_10.h"
#include "mindustry/ui/Menus_invoke_java_lang_Runnable_11.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/ui/Menus_invoke_arc_func_Cons_5.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/net/Net.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/gen/Groups.h"
#include "arc/struct/IntMap.h"
#include "arc/scene/Action.h"
#include "mindustry/ui/builder/MenuResult.h"
#include "arc/Application.h"
#include "arc/graphics/g2d/Font_Glyph.h"
#include "arc/func/Cons.h"
#include "mindustry/ui/Menus_invoke_arc_func_Cons2_2.h"
#include "mindustry/game/EventType_TextInputEvent.h"
#include "java/lang/String.h"
#include "mindustry/ui/builder/UiTreeBuilder_BuildResult.h"
#include "mindustry/ui/Menus_invoke_arc_func_Cons2_3.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/game/EventType_MenuOptionChooseEvent.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/gen/Syncc.h"
#include "arc/scene/Group.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/Menus_invoke_java_lang_Runnable_9.h"
#include "mindustry/ui/Menus_MenuBuilderListener.h"
#include "mindustry/ui/builder/UiTreeBuilder.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/entities/EntityGroup.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/ScrollPane.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ui/Menus_invoke_java_lang_Runnable_8.h"
#include "mindustry/ui/Menus_invoke_java_lang_Runnable_7.h"
#include "arc/struct/SnapshotSeq.h"
#include "mindustry/Vars.h"
#include "mindustry/gen/Call.h"
#include "mindustry/core/GameState.h"

extern "C" {

jobject SF_mindustry_ui_Menus_followUpMenus;
jobject SF_mindustry_ui_Menus_menuDialogs;
jobject SF_mindustry_ui_Menus_menuListeners;
jobject SF_mindustry_ui_Menus_menuBuilderListeners;
jobject SF_mindustry_ui_Menus_textInputListeners;

void mark_mindustry_ui_Menus(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_Menus_followUpMenus)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Menus_followUpMenus)->clazz)->markFunction)((jobject) SF_mindustry_ui_Menus_followUpMenus, mark, depth + 1);
		if (SF_mindustry_ui_Menus_menuDialogs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Menus_menuDialogs)->clazz)->markFunction)((jobject) SF_mindustry_ui_Menus_menuDialogs, mark, depth + 1);
		if (SF_mindustry_ui_Menus_menuListeners)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Menus_menuListeners)->clazz)->markFunction)((jobject) SF_mindustry_ui_Menus_menuListeners, mark, depth + 1);
		if (SF_mindustry_ui_Menus_menuBuilderListeners)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Menus_menuBuilderListeners)->clazz)->markFunction)((jobject) SF_mindustry_ui_Menus_menuBuilderListeners, mark, depth + 1);
		if (SF_mindustry_ui_Menus_textInputListeners)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Menus_textInputListeners)->clazz)->markFunction)((jobject) SF_mindustry_ui_Menus_textInputListeners, mark, depth + 1);
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
	auto self = (mindustry_ui_Menus *) object;
}

void init_mindustry_ui_Menus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_Menus_registerMenu_mindustry_ui_Menus$MenuListener_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:registerMenu", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(31);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_menuListeners;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(32);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_menuListeners;
	popStackFrame(ctx);
	return (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_Menus_registerMenuBuilder_mindustry_ui_Menus$MenuBuilderListener_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:registerMenuBuilder", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(37);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_menuBuilderListeners;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(38);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_menuBuilderListeners;
	popStackFrame(ctx);
	return (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_Menus_registerTextInput_mindustry_ui_Menus$TextInputListener_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:registerTextInput", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(43);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_textInputListeners;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(44);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_textInputListeners;
	popStackFrame(ctx);
	return (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_menuBuilder_int_long_java_lang_String_boolean_boolean_boolean_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jint param0, jlong param1, jobject param2, jbool param3, jbool param4, jbool param5, jobject param6) {
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:menuBuilder", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	frame[1].l = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(50);
	clinit_mindustry_ui_Menus$MenuDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Menus$MenuDialog);
	init_mindustry_ui_Menus$MenuDialog(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(51);
	((func_mindustry_ui_Menus$MenuDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_ui_Menus$MenuDialog_setFillParent_boolean])(ctx, (frame[8].o), (frame[6].i));
	LINE_NUMBER(52);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[8].o)))->F_title;
	((func_arc_scene_ui_Label_setText_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setText_java_lang_CharSequence])(ctx, sp[0].o, (frame[3].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[8].o)))->F_titleTable;
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(58);
	((func_mindustry_ui_Menus$MenuDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_ui_Menus$MenuDialog_addCloseButton])(ctx, (frame[8].o));
	LINE_NUMBER(60);
	sp[0].o = frame[8].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Menus_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_ui_Menus_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_ui_Menus_invoke_java_lang_Runnable_7);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_Menus$MenuDialog_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_Menus$MenuDialog_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(66);
	sp[0].o = frame[8].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Menus_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_ui_Menus_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_ui_Menus_invoke_java_lang_Runnable_8);
		proxy->F_field2 = (frame[1].l);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (frame[0].i);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_Menus$MenuDialog_hidden_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_Menus$MenuDialog_hidden_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(76);
	sp[0].o = frame[8].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Menus_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_ui_Menus_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_ui_Menus_invoke_arc_func_Cons_3);
		proxy->F_field3 = (jref) (frame[8].o);
		proxy->F_field2 = (frame[4].i);
		proxy->F_field1 = (frame[0].i);
		proxy->F_field0 = (frame[1].l);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_ui_Menus$MenuDialog *) NULL_CHECK(sp[0].o))->F_originalListener = (jref) sp[1].o;
	LINE_NUMBER(86);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[8].o)))->F_cont;
	sp[1].o = frame[7].o;
	sp[2].o = (jobject)((mindustry_ui_Menus$MenuDialog *) NULL_CHECK((frame[8].o)))->F_originalListener;
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiTreeBuilder_build_arc_scene_ui_layout_Table_mindustry_ui_builder_UiBuilder$NodeBuilder_arc_func_Cons_R_mindustry_ui_builder_UiTreeBuilder$BuildResult(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(87);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiTreeBuilder$BuildResult *) NULL_CHECK((frame[9].o)))->F_idElements;
	((mindustry_ui_Menus$MenuDialog *) NULL_CHECK(sp[0].o))->F_idToElement = (jref) sp[1].o;
	LINE_NUMBER(88);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiTreeBuilder$BuildResult *) NULL_CHECK((frame[9].o)))->F_images;
	((func_mindustry_ui_Menus$MenuDialog_addImages_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_Menus$MenuDialog_addImages_arc_struct_ObjectMap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(90);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_menuDialogs;
	sp[0].o = (jobject)((func_arc_struct_IntMap_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	frame[10].o = (checkCast(ctx, &class_mindustry_ui_Menus$MenuDialog, sp[0].o));
	LINE_NUMBER(92);
	if ((frame[5].i) == 0) goto label_14;
	}
	INST_ALOAD(10);
	if ((--sp)->o == nullptr) goto label_14;
	{
	LINE_NUMBER(94);
	sp[0].o = frame[8].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_mindustry_ui_Menus$MenuDialog_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_Menus$MenuDialog_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	LINE_NUMBER(95);
	((func_mindustry_ui_Menus$MenuDialog_hide_arc_scene_Action) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_ui_Menus$MenuDialog_hide_arc_scene_Action])(ctx, (frame[10].o), (jobject(nullptr)));
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((func_mindustry_ui_Menus$MenuDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_ui_Menus$MenuDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[8].o));
	}
label_17:;
	{
	LINE_NUMBER(100);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_menuDialogs;
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i), (frame[8].o));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_menuBuilderUpdate_int_java_lang_String_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jint param0, jobject param1, jobject param2) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:menuBuilderUpdate", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(105);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_menuDialogs;
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	frame[3].o = (checkCast(ctx, &class_mindustry_ui_Menus$MenuDialog, sp[0].o));
	LINE_NUMBER(106);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_ui_Menus$MenuDialog *) NULL_CHECK((frame[3].o)))->F_idToElement;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	LINE_NUMBER(108);
	if ((isInstance(ctx, (frame[4].o), &class_arc_scene_ui_layout_Table)) == 0) goto label_4;
	}
	{
	frame[6].o = (checkCast(ctx, &class_arc_scene_ui_layout_Table, (frame[4].o)));
	sp[0].o = frame[6].o;
	sp += 1;
	goto label_6;
	}
label_4:;
	INST_ACONST_NULL();
label_6:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(109);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	{
	if ((isInstance(ctx, (frame[4].o), &class_arc_scene_ui_ScrollPane)) == 0) goto label_8;
	}
	{
	frame[6].o = (checkCast(ctx, &class_arc_scene_ui_ScrollPane, (frame[4].o)));
	sp[0].o = (jobject)((func_arc_scene_ui_ScrollPane_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[6].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_ScrollPane_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_first_R_java_lang_Object])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	if ((isInstance(ctx, (frame[8].o), &class_arc_scene_ui_layout_Table)) == 0) goto label_8;
	}
	{
	frame[7].o = (checkCast(ctx, &class_arc_scene_ui_layout_Table, (frame[8].o)));
	frame[5].o = (frame[7].o);
	}
label_8:;
	{
	LINE_NUMBER(110);
	if ((frame[5].o) != nullptr) goto label_11;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
	{
	LINE_NUMBER(112);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[5].o));
	LINE_NUMBER(113);
	sp[0].o = frame[5].o;
	sp[1].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Menus_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_ui_Menus_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_ui_Menus_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiTreeBuilder_build_arc_scene_ui_layout_Table_mindustry_ui_builder_UiBuilder$NodeBuilder_arc_func_Cons_R_mindustry_ui_builder_UiTreeBuilder$BuildResult(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_ui_Menus$MenuDialog *) NULL_CHECK((frame[3].o)))->F_idToElement;
	sp[1].o = (jobject)((mindustry_ui_builder_UiTreeBuilder$BuildResult *) NULL_CHECK((frame[6].o)))->F_idElements;
	((func_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(119);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiTreeBuilder$BuildResult *) NULL_CHECK((frame[6].o)))->F_images;
	((func_mindustry_ui_Menus$MenuDialog_addImages_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_Menus$MenuDialog_addImages_arc_struct_ObjectMap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_hideMenuBuilder_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:hideMenuBuilder", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(124);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_menuDialogs;
	jint temp0 = (jint)((func_arc_struct_IntMap_containsKey_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_containsKey_int_R_boolean])(ctx, sp[0].o, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(125);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_menuDialogs;
	sp[0].o = (jobject)((func_arc_struct_IntMap_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	((func_mindustry_ui_Menus$MenuDialog_hide) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_ui_Menus$MenuDialog, sp[0].o)))->vtable)[VTABLE_mindustry_ui_Menus$MenuDialog_hide])(ctx, (checkCast(ctx, &class_mindustry_ui_Menus$MenuDialog, sp[0].o)));
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_menuBuilderChoose_mindustry_gen_Player_int_mindustry_ui_builder_MenuResult(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:menuBuilderChoose", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(132);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(133);
	clinit_mindustry_game_EventType$MenuBuilderOptionChooseEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$MenuBuilderOptionChooseEvent);
	init_mindustry_game_EventType$MenuBuilderOptionChooseEvent_mindustry_gen_Player_int_mindustry_ui_builder_MenuResult(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(135);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_menuBuilderListeners;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(136);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_menuBuilderListeners;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_mindustry_ui_Menus$MenuBuilderListener_get_mindustry_gen_Player_mindustry_ui_builder_MenuResult) resolveInterfaceMethod(ctx, &class_mindustry_ui_Menus$MenuBuilderListener, INDEX_mindustry_ui_Menus$MenuBuilderListener_get_mindustry_gen_Player_mindustry_ui_builder_MenuResult, (checkCast(ctx, &class_mindustry_ui_Menus$MenuBuilderListener, sp[0].o))))(ctx, (checkCast(ctx, &class_mindustry_ui_Menus$MenuBuilderListener, sp[0].o)), (frame[0].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(139);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_menu_int_java_lang_String_java_lang_String_Array2_java_lang_String(jcontext ctx, jint param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:menu", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(143);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	INST_ASTORE(1);
label_1:;
	{
	LINE_NUMBER(144);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	INST_ASTORE(2);
label_2:;
	{
	LINE_NUMBER(145);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)createMultiArray(ctx, &class_java_lang_String, {(jint(0)), (jint(0))});
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(147);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Menus_invoke_arc_func_Intc_2(ctx);
		auto proxy = (mindustry_ui_Menus_invoke_arc_func_Intc_2 *) gcAlloc(ctx, &class_mindustry_ui_Menus_invoke_arc_func_Intc_2);
		proxy->F_field0 = (frame[0].i);
		sp[3].o = (jobject) proxy;
	}
	SM_mindustry_ui_Menus_showMenu_java_lang_String_java_lang_String_Array2_java_lang_String_arc_func_Intc(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_followUpMenu_int_java_lang_String_java_lang_String_Array2_java_lang_String(jcontext ctx, jint param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:followUpMenu", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(152);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	INST_ASTORE(1);
label_1:;
	{
	LINE_NUMBER(153);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	INST_ASTORE(2);
label_2:;
	{
	LINE_NUMBER(154);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)createMultiArray(ctx, &class_java_lang_String, {(jint(0)), (jint(0))});
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(156);
	jint temp0 = frame[0].i;
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Menus_invoke_arc_func_Intc_3(ctx);
		auto proxy = (mindustry_ui_Menus_invoke_arc_func_Intc_3 *) gcAlloc(ctx, &class_mindustry_ui_Menus_invoke_arc_func_Intc_3);
		proxy->F_field0 = (frame[0].i);
		sp[3].o = (jobject) proxy;
	}
	SM_mindustry_ui_Menus_showFollowUpMenu_int_java_lang_String_java_lang_String_Array2_java_lang_String_arc_func_Intc(ctx, temp0, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_hideFollowUpMenu_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:hideFollowUpMenu", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(161);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_followUpMenus;
	jint temp0 = (jint)((func_arc_struct_IntMap_containsKey_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_containsKey_int_R_boolean])(ctx, sp[0].o, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(162);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_followUpMenus;
	sp[0].o = (jobject)((func_arc_struct_IntMap_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	((func_arc_scene_ui_Dialog_hide) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Dialog, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Dialog_hide])(ctx, (checkCast(ctx, &class_arc_scene_ui_Dialog, sp[0].o)));
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_Menus_newMenuDialog_java_lang_String_java_lang_String_Array2_java_lang_String_arc_func_Cons2_R_arc_scene_ui_Dialog(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:newMenuDialog", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(166);
	clinit_mindustry_ui_Menus$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Menus$1);
	init_mindustry_ui_Menus$1_java_lang_String_java_lang_String_Array2_java_lang_String_arc_func_Cons2(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_showMenu_java_lang_String_java_lang_String_Array2_java_lang_String_arc_func_Intc(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:showMenu", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Menus_invoke_arc_func_Cons2_2(ctx);
		auto proxy = (mindustry_ui_Menus_invoke_arc_func_Cons2_2 *) gcAlloc(ctx, &class_mindustry_ui_Menus_invoke_arc_func_Cons2_2);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_ui_Menus_newMenuDialog_java_lang_String_java_lang_String_Array2_java_lang_String_arc_func_Cons2_R_arc_scene_ui_Dialog(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(206);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Menus_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_ui_Menus_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_ui_Menus_invoke_java_lang_Runnable_9);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Dialog_closeOnBack_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_closeOnBack_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(207);
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[4].o));
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_showFollowUpMenu_int_java_lang_String_java_lang_String_Array2_java_lang_String_arc_func_Intc(jcontext ctx, jint param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:showFollowUpMenu", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(213);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Menus_invoke_arc_func_Cons2_3(ctx);
		auto proxy = (mindustry_ui_Menus_invoke_arc_func_Cons2_3 *) gcAlloc(ctx, &class_mindustry_ui_Menus_invoke_arc_func_Cons2_3);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_ui_Menus_newMenuDialog_java_lang_String_java_lang_String_Array2_java_lang_String_arc_func_Cons2_R_arc_scene_ui_Dialog(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(219);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Menus_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_ui_Menus_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_ui_Menus_invoke_java_lang_Runnable_10);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (frame[0].i);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Dialog_closeOnBack_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_closeOnBack_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(224);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_followUpMenus;
	sp[0].o = (jobject)((func_arc_struct_IntMap_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	frame[6].o = (checkCast(ctx, &class_arc_scene_ui_Dialog, sp[0].o));
	LINE_NUMBER(225);
	if ((frame[6].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = frame[5].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	LINE_NUMBER(227);
	((func_arc_scene_ui_Dialog_hide_arc_scene_Action) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_Dialog_hide_arc_scene_Action])(ctx, (frame[6].o), (jobject(nullptr)));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[5].o));
	}
label_7:;
	{
	LINE_NUMBER(231);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_followUpMenus;
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i), (frame[5].o));
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_menuChoose_mindustry_gen_Player_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:menuChoose", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(236);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(237);
	clinit_mindustry_game_EventType$MenuOptionChooseEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$MenuOptionChooseEvent);
	init_mindustry_game_EventType$MenuOptionChooseEvent_mindustry_gen_Player_int_int(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].i));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(238);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_menuListeners;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(239);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_menuListeners;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_mindustry_ui_Menus$MenuListener_get_mindustry_gen_Player_int) resolveInterfaceMethod(ctx, &class_mindustry_ui_Menus$MenuListener, INDEX_mindustry_ui_Menus$MenuListener_get_mindustry_gen_Player_int, (checkCast(ctx, &class_mindustry_ui_Menus$MenuListener, sp[0].o))))(ctx, (checkCast(ctx, &class_mindustry_ui_Menus$MenuListener, sp[0].o)), (frame[0].o), (frame[2].i));
	}
label_1:;
	LINE_NUMBER(242);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_textInput_int_java_lang_String_java_lang_String_int_java_lang_String_boolean(jcontext ctx, jint param0, jobject param1, jobject param2, jint param3, jobject param4, jbool param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:textInput", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(246);
	SM_mindustry_ui_Menus_textInput_int_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean(ctx, (frame[0].i), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].i), (jint(0)));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_textInput_int_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean(jcontext ctx, jint param0, jobject param1, jobject param2, jint param3, jobject param4, jbool param5, jbool param6) {
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:textInput", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(251);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	INST_ASTORE(1);
label_1:;
	{
	LINE_NUMBER(252);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	INST_ASTORE(2);
label_2:;
	{
	LINE_NUMBER(253);
	if ((frame[4].o) != nullptr) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	INST_ASTORE(4);
label_3:;
	{
	LINE_NUMBER(255);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[3].o = frame[4].o;
	jint temp1 = frame[5].i;
	jint temp2 = frame[6].i;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Menus_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_ui_Menus_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_ui_Menus_invoke_arc_func_Cons_5);
		proxy->F_field0 = (frame[0].i);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Menus_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_ui_Menus_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_ui_Menus_invoke_java_lang_Runnable_11);
		proxy->F_field0 = (frame[0].i);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean_arc_func_Cons_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean_arc_func_Cons_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, temp1, temp2, sp[4].o, sp[5].o);
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_textInputResult_mindustry_gen_Player_int_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:textInputResult", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(264);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(265);
	clinit_mindustry_game_EventType$TextInputEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$TextInputEvent);
	init_mindustry_game_EventType$TextInputEvent_mindustry_gen_Player_int_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(266);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_textInputListeners;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(267);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_textInputListeners;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_mindustry_ui_Menus$TextInputListener_get_mindustry_gen_Player_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_ui_Menus$TextInputListener, INDEX_mindustry_ui_Menus$TextInputListener_get_mindustry_gen_Player_java_lang_String, (checkCast(ctx, &class_mindustry_ui_Menus$TextInputListener, sp[0].o))))(ctx, (checkCast(ctx, &class_mindustry_ui_Menus$TextInputListener, sp[0].o)), (frame[0].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(270);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_setHudText_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:setHudText", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(274);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(276);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	((func_mindustry_ui_fragments_HudFragment_setHudText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_setHudText_java_lang_String])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_hideHudText(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:hideHudText", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	{
	LINE_NUMBER(281);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	((func_mindustry_ui_fragments_HudFragment_toggleHudText_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_toggleHudText_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_setHudTextReliable_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:setHudTextReliable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(287);
	SM_mindustry_ui_Menus_setHudText_java_lang_String(ctx, (frame[0].o));
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_announce_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:announce", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(292);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(294);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_announce_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_announce_java_lang_String])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_infoMessage_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:infoMessage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(299);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(301);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showText_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showText_java_lang_String_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))), (frame[0].o));
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_infoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jint param3, jint param4, jint param5, jint param6, jint param7) {
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:infoPopup", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(306);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int])(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_infoPopupReliable_java_lang_String_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jint param3, jint param4, jint param5, jint param6, jint param7) {
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:infoPopupReliable", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(311);
	SM_mindustry_ui_Menus_infoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i));
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_infoPopup_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jfloat param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:infoPopup", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(316);
	SM_mindustry_ui_Menus_infoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].f), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i));
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_infoPopupReliable_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jfloat param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:infoPopupReliable", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(321);
	SM_mindustry_ui_Menus_infoPopup_java_lang_String_float_int_int_int_int_int(ctx, (frame[0].o), (frame[1].f), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i));
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_label_java_lang_String_int_float_float_float_int(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jint param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:label", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(326);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showLabel_java_lang_String_int_float_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showLabel_java_lang_String_int_float_float_float_int])(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].i));
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_labelReliable_java_lang_String_int_float_float_float_int(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jint param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:labelReliable", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(331);
	SM_mindustry_ui_Menus_label_java_lang_String_int_float_float_float_int(ctx, (frame[0].o), (frame[1].i), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].i));
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_label_java_lang_String_int_float_float_float(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:label", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(336);
	SM_mindustry_ui_Menus_label_java_lang_String_int_float_float_float_int(ctx, (frame[0].o), (frame[1].i), (frame[2].f), (frame[3].f), (frame[4].f), (19));
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_labelReliable_java_lang_String_int_float_float_float(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:labelReliable", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(341);
	SM_mindustry_ui_Menus_label_java_lang_String_int_float_float_float(ctx, (frame[0].o), (frame[1].i), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_label_java_lang_String_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:label", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(346);
	SM_mindustry_ui_Menus_label_java_lang_String_int_float_float_float(ctx, (frame[0].o), (jint(-1)), (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_labelReliable_java_lang_String_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:labelReliable", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(351);
	SM_mindustry_ui_Menus_label_java_lang_String_int_float_float_float(ctx, (frame[0].o), (jint(-1)), (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_infoToast_java_lang_String_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:infoToast", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(356);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(358);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoToast_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoToast_java_lang_String_float])(ctx, sp[0].o, (frame[0].o), (frame[1].f));
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_warningToast_int_java_lang_String(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:warningToast", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(363);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, sp[0].o, (jchar((frame[0].i))));
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(365);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	clinit_mindustry_ui_Fonts(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[1].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[1].o, (jchar((frame[0].i))));
	((func_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_openURI_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:openURI", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(370);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(372);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"linkopen"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (frame[0].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Menus_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_ui_Menus_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_ui_Menus_invoke_java_lang_Runnable_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(373);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_copyToClipboard_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:copyToClipboard", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(377);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(379);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"clipboardcopy"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (frame[0].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Menus_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_ui_Menus_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_ui_Menus_invoke_java_lang_Runnable_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(380);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_removeWorldLabel_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:removeWorldLabel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(385);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_sync;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[0].i));
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Syncc, sp[0].o));
	LINE_NUMBER(386);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_WorldLabelc)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(387);
	((func_mindustry_gen_Syncc_remove) resolveInterfaceMethod(ctx, &class_mindustry_gen_Syncc, INDEX_mindustry_gen_Syncc_remove, (frame[1].o)))(ctx, (frame[1].o));
	}
label_2:;
	LINE_NUMBER(389);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_lambda$copyToClipboard$0_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:lambda$copyToClipboard$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(379);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	((func_arc_Application_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_lambda$openURI$0_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:lambda$openURI$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(372);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_openURI_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_openURI_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_lambda$textInput$1_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:lambda$textInput$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(258);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_textInputResult_mindustry_gen_Player_int_java_lang_String(ctx, sp[0].o, (frame[0].i), (jobject(nullptr)));
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_lambda$textInput$0_int_java_lang_String(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:lambda$textInput$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(256);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_textInputResult_mindustry_gen_Player_int_java_lang_String(ctx, sp[0].o, (frame[0].i), (frame[1].o));
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_lambda$showFollowUpMenu$1_int_arc_func_Intc(jcontext ctx, jint param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:lambda$showFollowUpMenu$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(220);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_followUpMenus;
	sp[0].o = (jobject)((func_arc_struct_IntMap_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(221);
	((func_arc_func_Intc_get_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc, INDEX_arc_func_Intc_get_int, (frame[1].o)))(ctx, (frame[1].o), (jint(-1)));
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_lambda$showFollowUpMenu$0_arc_func_Intc_java_lang_Integer_arc_scene_ui_Dialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:lambda$showFollowUpMenu$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[1].o));
	((func_arc_func_Intc_get_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc, INDEX_arc_func_Intc_get_int, sp[0].o))(ctx, sp[0].o, temp0);
	LINE_NUMBER(215);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp1 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp1 != 0) goto label_2;
	}
	{
	LINE_NUMBER(216);
	((func_arc_scene_ui_Dialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Dialog_hide])(ctx, (frame[2].o));
	}
label_2:;
	LINE_NUMBER(218);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_lambda$showMenu$1_arc_func_Intc(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:lambda$showMenu$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(206);
	((func_arc_func_Intc_get_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc, INDEX_arc_func_Intc_get_int, (frame[0].o)))(ctx, (frame[0].o), (jint(-1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_lambda$showMenu$0_arc_func_Intc_java_lang_Integer_arc_scene_ui_Dialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:lambda$showMenu$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(203);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[1].o));
	((func_arc_func_Intc_get_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc, INDEX_arc_func_Intc_get_int, sp[0].o))(ctx, sp[0].o, temp0);
	LINE_NUMBER(204);
	((func_arc_scene_ui_Dialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Dialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_lambda$followUpMenu$0_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:lambda$followUpMenu$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(156);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_menuChoose_mindustry_gen_Player_int_int(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_lambda$menu$0_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:lambda$menu$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(147);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_menuChoose_mindustry_gen_Player_int_int(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_lambda$menuBuilderUpdate$0_mindustry_ui_Menus$MenuDialog_mindustry_ui_builder_MenuResult(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:lambda$menuBuilderUpdate$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_ui_Menus$MenuDialog *) NULL_CHECK((frame[0].o)))->F_originalListener;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_lambda$menuBuilder$2_long_int_boolean_mindustry_ui_Menus$MenuDialog_mindustry_ui_builder_MenuResult(jcontext ctx, jlong param0, jint param1, jbool param2, jobject param3, jobject param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:lambda$menuBuilder$2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(77);
	((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[5].o)))->F_token = (frame[0].l);
	LINE_NUMBER(78);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_menuBuilderChoose_mindustry_gen_Player_int_mindustry_ui_builder_MenuResult(ctx, sp[0].o, (frame[2].i), (frame[5].o));
	}
label_2:;
	{
	LINE_NUMBER(80);
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(81);
	((mindustry_ui_Menus$MenuDialog *) NULL_CHECK((frame[4].o)))->F_wasHidden = (jint(1));
	LINE_NUMBER(82);
	((func_mindustry_ui_Menus$MenuDialog_hide) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ui_Menus$MenuDialog_hide])(ctx, (frame[4].o));
	}
label_3:;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_lambda$menuBuilder$1_int_mindustry_ui_Menus$MenuDialog_long(jcontext ctx, jint param0, jobject param1, jlong param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:lambda$menuBuilder$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].l = param2;
	{
	LINE_NUMBER(67);
	clinit_mindustry_ui_Menus(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Menus_menuDialogs;
	sp[0].o = (jobject)((func_arc_struct_IntMap_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(69);
	if (((jint)((mindustry_ui_Menus$MenuDialog *) NULL_CHECK((frame[1].o)))->F_wasHidden) != 0) goto label_2;
	}
	{
	LINE_NUMBER(70);
	clinit_mindustry_ui_builder_MenuResult(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_MenuResult);
	init_mindustry_ui_builder_MenuResult(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(71);
	((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[4].o)))->F_token = (frame[2].l);
	LINE_NUMBER(72);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_menuBuilderChoose_mindustry_gen_Player_int_mindustry_ui_builder_MenuResult(ctx, sp[0].o, (frame[0].i), (frame[4].o));
	}
label_2:;
	LINE_NUMBER(74);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_Menus_lambda$menuBuilder$0_mindustry_ui_Menus$MenuDialog(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:lambda$menuBuilder$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(61);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(62);
	((func_mindustry_ui_Menus$MenuDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_Menus$MenuDialog_hide])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_ui_Menus(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Menus:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Menus(ctx);
	{
	LINE_NUMBER(22);
	clinit_arc_struct_IntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[0].o);
	clinit_mindustry_ui_Menus(ctx);
	SF_mindustry_ui_Menus_followUpMenus = sp[0].o;
	LINE_NUMBER(23);
	clinit_arc_struct_IntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[0].o);
	clinit_mindustry_ui_Menus(ctx);
	SF_mindustry_ui_Menus_menuDialogs = sp[0].o;
	LINE_NUMBER(25);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_ui_Menus(ctx);
	SF_mindustry_ui_Menus_menuListeners = sp[0].o;
	LINE_NUMBER(26);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_ui_Menus(ctx);
	SF_mindustry_ui_Menus_menuBuilderListeners = sp[0].o;
	LINE_NUMBER(27);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_ui_Menus(ctx);
	SF_mindustry_ui_Menus_textInputListeners = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_Menus[] {
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

static jclass innerClasses[] {
	&class_mindustry_ui_Menus$MenuDialog,
	&class_mindustry_ui_Menus$MenuBuilderListener,
	&class_mindustry_ui_Menus$MenuListener,
	&class_mindustry_ui_Menus$TextInputListener,
};

static FieldMetadata fields[] {
	{ "followUpMenus", &class_arc_struct_IntMap, (intptr_t) &SF_mindustry_ui_Menus_followUpMenus, "Larc/struct/IntMap;", 10 },
	{ "menuDialogs", &class_arc_struct_IntMap, (intptr_t) &SF_mindustry_ui_Menus_menuDialogs, "Larc/struct/IntMap;", 10 },
	{ "menuListeners", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_ui_Menus_menuListeners, "Larc/struct/Seq;", 26 },
	{ "menuBuilderListeners", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_ui_Menus_menuBuilderListeners, "Larc/struct/Seq;", 26 },
	{ "textInputListeners", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_ui_Menus_textInputListeners, "Larc/struct/Seq;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_Menus, 0, "()V", 1 },
	{ "registerMenu", (intptr_t) SM_mindustry_ui_Menus_registerMenu_mindustry_ui_Menus$MenuListener_R_int, 0, "(Lmindustry/ui/Menus$MenuListener;)I", 9 },
	{ "registerMenuBuilder", (intptr_t) SM_mindustry_ui_Menus_registerMenuBuilder_mindustry_ui_Menus$MenuBuilderListener_R_int, 0, "(Lmindustry/ui/Menus$MenuBuilderListener;)I", 9 },
	{ "registerTextInput", (intptr_t) SM_mindustry_ui_Menus_registerTextInput_mindustry_ui_Menus$TextInputListener_R_int, 0, "(Lmindustry/ui/Menus$TextInputListener;)I", 9 },
	{ "menuBuilder", (intptr_t) SM_mindustry_ui_Menus_menuBuilder_int_long_java_lang_String_boolean_boolean_boolean_mindustry_ui_builder_UiBuilder$NodeBuilder, 0, "(IJLjava/lang/String;ZZZLmindustry/ui/builder/UiBuilder$NodeBuilder;)V", 9 },
	{ "menuBuilderUpdate", (intptr_t) SM_mindustry_ui_Menus_menuBuilderUpdate_int_java_lang_String_mindustry_ui_builder_UiBuilder$NodeBuilder, 0, "(ILjava/lang/String;Lmindustry/ui/builder/UiBuilder$NodeBuilder;)V", 9 },
	{ "hideMenuBuilder", (intptr_t) SM_mindustry_ui_Menus_hideMenuBuilder_int, 0, "(I)V", 9 },
	{ "menuBuilderChoose", (intptr_t) SM_mindustry_ui_Menus_menuBuilderChoose_mindustry_gen_Player_int_mindustry_ui_builder_MenuResult, 0, "(Lmindustry/gen/Player;ILmindustry/ui/builder/MenuResult;)V", 9 },
	{ "menu", (intptr_t) SM_mindustry_ui_Menus_menu_int_java_lang_String_java_lang_String_Array2_java_lang_String, 0, "(ILjava/lang/String;Ljava/lang/String;[[Ljava/lang/String;)V", 9 },
	{ "followUpMenu", (intptr_t) SM_mindustry_ui_Menus_followUpMenu_int_java_lang_String_java_lang_String_Array2_java_lang_String, 0, "(ILjava/lang/String;Ljava/lang/String;[[Ljava/lang/String;)V", 9 },
	{ "hideFollowUpMenu", (intptr_t) SM_mindustry_ui_Menus_hideFollowUpMenu_int, 0, "(I)V", 9 },
	{ "newMenuDialog", (intptr_t) SM_mindustry_ui_Menus_newMenuDialog_java_lang_String_java_lang_String_Array2_java_lang_String_arc_func_Cons2_R_arc_scene_ui_Dialog, 0, "(Ljava/lang/String;Ljava/lang/String;[[Ljava/lang/String;Larc/func/Cons2;)Larc/scene/ui/Dialog;", 8 },
	{ "showMenu", (intptr_t) SM_mindustry_ui_Menus_showMenu_java_lang_String_java_lang_String_Array2_java_lang_String_arc_func_Intc, 0, "(Ljava/lang/String;Ljava/lang/String;[[Ljava/lang/String;Larc/func/Intc;)V", 8 },
	{ "showFollowUpMenu", (intptr_t) SM_mindustry_ui_Menus_showFollowUpMenu_int_java_lang_String_java_lang_String_Array2_java_lang_String_arc_func_Intc, 0, "(ILjava/lang/String;Ljava/lang/String;[[Ljava/lang/String;Larc/func/Intc;)V", 8 },
	{ "menuChoose", (intptr_t) SM_mindustry_ui_Menus_menuChoose_mindustry_gen_Player_int_int, 0, "(Lmindustry/gen/Player;II)V", 9 },
	{ "textInput", (intptr_t) SM_mindustry_ui_Menus_textInput_int_java_lang_String_java_lang_String_int_java_lang_String_boolean, 0, "(ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;Z)V", 9 },
	{ "textInput", (intptr_t) SM_mindustry_ui_Menus_textInput_int_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean, 0, "(ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;ZZ)V", 9 },
	{ "textInputResult", (intptr_t) SM_mindustry_ui_Menus_textInputResult_mindustry_gen_Player_int_java_lang_String, 0, "(Lmindustry/gen/Player;ILjava/lang/String;)V", 9 },
	{ "setHudText", (intptr_t) SM_mindustry_ui_Menus_setHudText_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "hideHudText", (intptr_t) SM_mindustry_ui_Menus_hideHudText, 0, "()V", 9 },
	{ "setHudTextReliable", (intptr_t) SM_mindustry_ui_Menus_setHudTextReliable_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "announce", (intptr_t) SM_mindustry_ui_Menus_announce_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "infoMessage", (intptr_t) SM_mindustry_ui_Menus_infoMessage_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "infoPopup", (intptr_t) SM_mindustry_ui_Menus_infoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int, 0, "(Ljava/lang/String;Ljava/lang/String;FIIIII)V", 9 },
	{ "infoPopupReliable", (intptr_t) SM_mindustry_ui_Menus_infoPopupReliable_java_lang_String_java_lang_String_float_int_int_int_int_int, 0, "(Ljava/lang/String;Ljava/lang/String;FIIIII)V", 9 },
	{ "infoPopup", (intptr_t) SM_mindustry_ui_Menus_infoPopup_java_lang_String_float_int_int_int_int_int, 0, "(Ljava/lang/String;FIIIII)V", 9 },
	{ "infoPopupReliable", (intptr_t) SM_mindustry_ui_Menus_infoPopupReliable_java_lang_String_float_int_int_int_int_int, 0, "(Ljava/lang/String;FIIIII)V", 9 },
	{ "label", (intptr_t) SM_mindustry_ui_Menus_label_java_lang_String_int_float_float_float_int, 0, "(Ljava/lang/String;IFFFI)V", 9 },
	{ "labelReliable", (intptr_t) SM_mindustry_ui_Menus_labelReliable_java_lang_String_int_float_float_float_int, 0, "(Ljava/lang/String;IFFFI)V", 9 },
	{ "label", (intptr_t) SM_mindustry_ui_Menus_label_java_lang_String_int_float_float_float, 0, "(Ljava/lang/String;IFFF)V", 9 },
	{ "labelReliable", (intptr_t) SM_mindustry_ui_Menus_labelReliable_java_lang_String_int_float_float_float, 0, "(Ljava/lang/String;IFFF)V", 9 },
	{ "label", (intptr_t) SM_mindustry_ui_Menus_label_java_lang_String_float_float_float, 0, "(Ljava/lang/String;FFF)V", 9 },
	{ "labelReliable", (intptr_t) SM_mindustry_ui_Menus_labelReliable_java_lang_String_float_float_float, 0, "(Ljava/lang/String;FFF)V", 9 },
	{ "infoToast", (intptr_t) SM_mindustry_ui_Menus_infoToast_java_lang_String_float, 0, "(Ljava/lang/String;F)V", 9 },
	{ "warningToast", (intptr_t) SM_mindustry_ui_Menus_warningToast_int_java_lang_String, 0, "(ILjava/lang/String;)V", 9 },
	{ "openURI", (intptr_t) SM_mindustry_ui_Menus_openURI_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "copyToClipboard", (intptr_t) SM_mindustry_ui_Menus_copyToClipboard_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "removeWorldLabel", (intptr_t) SM_mindustry_ui_Menus_removeWorldLabel_int, 0, "(I)V", 9 },
	{ "lambda$copyToClipboard$0", (intptr_t) SM_mindustry_ui_Menus_lambda$copyToClipboard$0_java_lang_String, 0, "(Ljava/lang/String;)V", 4106 },
	{ "lambda$openURI$0", (intptr_t) SM_mindustry_ui_Menus_lambda$openURI$0_java_lang_String, 0, "(Ljava/lang/String;)V", 4106 },
	{ "lambda$textInput$1", (intptr_t) SM_mindustry_ui_Menus_lambda$textInput$1_int, 0, "(I)V", 4106 },
	{ "lambda$textInput$0", (intptr_t) SM_mindustry_ui_Menus_lambda$textInput$0_int_java_lang_String, 0, "(ILjava/lang/String;)V", 4106 },
	{ "lambda$showFollowUpMenu$1", (intptr_t) SM_mindustry_ui_Menus_lambda$showFollowUpMenu$1_int_arc_func_Intc, 0, "(ILarc/func/Intc;)V", 4106 },
	{ "lambda$showFollowUpMenu$0", (intptr_t) SM_mindustry_ui_Menus_lambda$showFollowUpMenu$0_arc_func_Intc_java_lang_Integer_arc_scene_ui_Dialog, 0, "(Larc/func/Intc;Ljava/lang/Integer;Larc/scene/ui/Dialog;)V", 4106 },
	{ "lambda$showMenu$1", (intptr_t) SM_mindustry_ui_Menus_lambda$showMenu$1_arc_func_Intc, 0, "(Larc/func/Intc;)V", 4106 },
	{ "lambda$showMenu$0", (intptr_t) SM_mindustry_ui_Menus_lambda$showMenu$0_arc_func_Intc_java_lang_Integer_arc_scene_ui_Dialog, 0, "(Larc/func/Intc;Ljava/lang/Integer;Larc/scene/ui/Dialog;)V", 4106 },
	{ "lambda$followUpMenu$0", (intptr_t) SM_mindustry_ui_Menus_lambda$followUpMenu$0_int_int, 0, "(II)V", 4106 },
	{ "lambda$menu$0", (intptr_t) SM_mindustry_ui_Menus_lambda$menu$0_int_int, 0, "(II)V", 4106 },
	{ "lambda$menuBuilderUpdate$0", (intptr_t) SM_mindustry_ui_Menus_lambda$menuBuilderUpdate$0_mindustry_ui_Menus$MenuDialog_mindustry_ui_builder_MenuResult, 0, "(Lmindustry/ui/Menus$MenuDialog;Lmindustry/ui/builder/MenuResult;)V", 4106 },
	{ "lambda$menuBuilder$2", (intptr_t) SM_mindustry_ui_Menus_lambda$menuBuilder$2_long_int_boolean_mindustry_ui_Menus$MenuDialog_mindustry_ui_builder_MenuResult, 0, "(JIZLmindustry/ui/Menus$MenuDialog;Lmindustry/ui/builder/MenuResult;)V", 4106 },
	{ "lambda$menuBuilder$1", (intptr_t) SM_mindustry_ui_Menus_lambda$menuBuilder$1_int_mindustry_ui_Menus$MenuDialog_long, 0, "(ILmindustry/ui/Menus$MenuDialog;J)V", 4106 },
	{ "lambda$menuBuilder$0", (intptr_t) SM_mindustry_ui_Menus_lambda$menuBuilder$0_mindustry_ui_Menus$MenuDialog, 0, "(Lmindustry/ui/Menus$MenuDialog;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_Menus, 0, "()V", 8 },
};

Class class_mindustry_ui_Menus{
		.nativeName = (intptr_t) "mindustry/ui/Menus",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_Menus),
		.classVtable = (intptr_t) vtable_mindustry_ui_Menus,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Menus,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_Menus,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 53,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_Menus = registerClass(&class_mindustry_ui_Menus);

}
