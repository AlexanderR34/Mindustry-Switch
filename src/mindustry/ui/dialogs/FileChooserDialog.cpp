#include "mindustry/ui/dialogs/FileChooserDialog.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_arc_func_Prov_1.h"
#include "arc/func/Prov.h"
#include "arc/scene/ui/TextField.h"
#include "arc/graphics/g2d/Font.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_java_lang_Runnable_16.h"
#include "arc/func/Boolp.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_java_lang_Runnable_15.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_java_lang_Runnable_14.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_java_lang_Runnable_13.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "arc/scene/ui/Button.h"
#include "arc/scene/ui/Image.h"
#include "arc/scene/event/Touchable.h"
#include "java/io/FileFilter.h"
#include "java/util/Arrays.h"
#include "arc/util/pooling/Pools.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/scene/ui/ImageButton.h"
#include "arc/Settings.h"
#include "java/io/File.h"
#include "arc/func/Boolf.h"
#include "arc/Core.h"
#include "arc/Files.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_java_lang_Runnable_25.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_java_lang_Runnable_24.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_java_io_FileFilter_1.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_java_lang_Runnable_23.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_java_lang_Runnable_22.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_java_lang_Runnable_21.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_java_lang_Runnable_20.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_java_lang_Runnable_19.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_java_lang_Runnable_18.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_java_lang_Runnable_17.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/files/Fi.h"
#include "arc/func/Cons.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_arc_func_Boolp_2.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "java/util/Comparator.h"
#include "arc/scene/style/Drawable.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/dialogs/FileChooserDialog.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_arc_func_Boolp_3.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/Fonts.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/ScrollPane.h"
#include "mindustry/ui/dialogs/FileChooserDialog_invoke_java_util_Comparator_1.h"
#include "mindustry/ui/dialogs/FileChooserDialog_FileHistory.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_ui_dialogs_FileChooserDialog_homeDirectory;
jobject SF_mindustry_ui_dialogs_FileChooserDialog_lastDirectory;

void mark_mindustry_ui_dialogs_FileChooserDialog(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_dialogs_FileChooserDialog_homeDirectory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_FileChooserDialog_homeDirectory)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_FileChooserDialog_homeDirectory, mark, depth + 1);
		if (SF_mindustry_ui_dialogs_FileChooserDialog_lastDirectory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_FileChooserDialog_lastDirectory)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_FileChooserDialog_lastDirectory, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ui_dialogs_BaseDialog(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_FileChooserDialog *) object;
	if (self->F_directory)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_directory)->clazz)->markFunction)((jobject) self->F_directory, mark, depth + 1);
	if (self->F_files)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_files)->clazz)->markFunction)((jobject) self->F_files, mark, depth + 1);
	if (self->F_pane)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pane)->clazz)->markFunction)((jobject) self->F_pane, mark, depth + 1);
	if (self->F_navigation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_navigation)->clazz)->markFunction)((jobject) self->F_navigation, mark, depth + 1);
	if (self->F_filefield)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filefield)->clazz)->markFunction)((jobject) self->F_filefield, mark, depth + 1);
	if (self->F_ok)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ok)->clazz)->markFunction)((jobject) self->F_ok, mark, depth + 1);
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
	if (self->F_filter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filter)->clazz)->markFunction)((jobject) self->F_filter, mark, depth + 1);
	if (self->F_selectListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selectListener)->clazz)->markFunction)((jobject) self->F_selectListener, mark, depth + 1);
}

void init_mindustry_ui_dialogs_FileChooserDialog_java_lang_String_arc_func_Boolf_boolean_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_FileChooserDialog(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(34);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_FileChooserDialog$FileHistory(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog$FileHistory);
	init_mindustry_ui_dialogs_FileChooserDialog$FileHistory_mindustry_ui_dialogs_FileChooserDialog(ctx, sp[1].o, (frame[0].o));
	((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(35);
	((func_mindustry_ui_dialogs_FileChooserDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_setFillParent_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(36);
	((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_open = (frame[3].i);
	LINE_NUMBER(37);
	((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filter = (jref) (frame[2].o);
	LINE_NUMBER(38);
	((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_selectListener = (jref) (frame[4].o);
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_ui_dialogs_FileChooserDialog_getLastDirectory_R_arc_files_Fi(ctx);
	((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK(sp[0].o))->F_directory = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_FileChooserDialog_onResize_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_onResize_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_FileChooserDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_enter;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_FileChooserDialog_keyDown_arc_input_KeyCode_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_keyDown_arc_input_KeyCode_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(56);
	((func_mindustry_ui_dialogs_FileChooserDialog_addCloseListener) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_addCloseListener])(ctx, (frame[0].o));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog_setupWidgets(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:setupWidgets", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(-10.0f)));
	LINE_NUMBER(62);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_TextField(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_TextField);
	init_arc_scene_ui_TextField(ctx, sp[1].o);
	((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK(sp[0].o))->F_filefield = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filefield;
	((func_arc_scene_ui_TextField_setOnlyFontChars_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setOnlyFontChars_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(66);
	if (((jint)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_open) != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filefield;
	((func_arc_scene_ui_TextField_addInputDialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_addInputDialog])(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filefield;
	((func_arc_scene_ui_TextField_setDisabled_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setDisabled_boolean])(ctx, sp[0].o, ((jint)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_open));
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_TextButton(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_TextButton);
	sp[2].o = sp[1].o;
	sp += 3;
	if (((jint)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_open) == 0) goto label_8;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@load"_j));
	goto label_9;
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@save"_j));
label_9:;
	{
	sp -= 4;
	init_arc_scene_ui_TextButton_java_lang_String(ctx, sp[1].o, sp[3].o);
	((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK(sp[0].o))->F_ok = (jref) sp[1].o;
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_ok;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_16);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filefield;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_17);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextField_changed_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_changed_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filefield;
	((func_arc_scene_ui_TextField_change) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_change])(ctx, sp[0].o);
	LINE_NUMBER(84);
	clinit_arc_scene_ui_TextButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextButton);
	init_arc_scene_ui_TextButton_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@cancel"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(85);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_18(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_18 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_18);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_TextField(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_TextField);
	init_arc_scene_ui_TextField_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK(sp[0].o))->F_navigation = (jref) sp[1].o;
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_navigation;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK(sp[0].o))->F_files = (jref) sp[1].o;
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_files;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_files;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_ScrollPane(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane);
	sp[2].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_files;
	init_arc_scene_ui_ScrollPane_arc_scene_Element(ctx, sp[1].o, sp[2].o);
	((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK(sp[0].o))->F_pane = (jref) sp[1].o;
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_pane;
	((func_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean])(ctx, sp[0].o, (jint(0)), (jint(0)));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_pane;
	((func_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(98);
	((func_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(100);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(102);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_upOpen;
	init_arc_scene_ui_ImageButton_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(103);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(109);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_left;
	init_arc_scene_ui_ImageButton_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(110);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_right;
	init_arc_scene_ui_ImageButton_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(112);
	sp[0].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_20);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(113);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	sp[0].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_arc_func_Boolp_2(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_arc_func_Boolp_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_arc_func_Boolp_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_ImageButton_setDisabled_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setDisabled_arc_func_Boolp])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(115);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_arc_func_Boolp_3(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_arc_func_Boolp_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_arc_func_Boolp_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_ImageButton_setDisabled_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setDisabled_arc_func_Boolp])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(117);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_home;
	init_arc_scene_ui_ImageButton_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(118);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_22);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_uniform_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_uniform_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(125);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[7].o));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[5].o));
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[6].o));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(130);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(131);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	clinit_arc_scene_ui_Label(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	init_arc_scene_ui_Label_java_lang_CharSequence(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"@filename"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(132);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filefield;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(134);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(135);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[9].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(60.0f)));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[9].o), (frame[2].o));
	LINE_NUMBER(137);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_ok;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(141);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_pane;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(144);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(146);
	if (((jint)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_open) != 0) goto label_53;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[8].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-2.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_53:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[9].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(153);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog_updateFileFieldStatus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:updateFileFieldStatus", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	if (((jint)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_open) != 0) goto label_1;
	}
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_ok;
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filefield;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" "_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[1].o);
	((func_arc_scene_ui_TextButton_setDisabled_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_setDisabled_boolean])(ctx, sp[0].o, temp0);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_ok;
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_directory;
	sp[2].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filefield;
	sp[2].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_directory;
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filefield;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_arc_files_Fi_isDirectory_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_isDirectory_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
label_4:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_TextButton_setDisabled_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_setDisabled_boolean])(ctx, sp[0].o, sp[1].i);
label_3:;
	LINE_NUMBER(162);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_FileChooserDialog_getFileNames_R_Array1_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:getFileNames", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_directory;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_java_io_FileFilter_1(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_java_io_FileFilter_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_java_io_FileFilter_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_files_Fi_list_java_io_FileFilter_R_Array1_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_list_java_io_FileFilter_R_Array1_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(167);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_java_util_Comparator_1(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_java_util_Comparator_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_java_util_Comparator_1);
		sp[1].o = (jobject) proxy;
	}
	SM_java_util_Arrays_sort_Array1_java_lang_Object_java_util_Comparator(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:updateFiles", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(176);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_directory;
	((func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_push_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_push_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_navigation;
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_directory;
	sp[1].o = (jobject)((func_arc_files_Fi_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(179);
	sp[0].o = ((jobject) &class_arc_graphics_g2d_GlyphLayout);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(181);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_Fonts(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[2].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_navigation;
	sp[2].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[2].o);
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(183);
	jfloat temp0 = (jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[2].o)))->F_width;
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_navigation;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_TextField_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getWidth_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, temp1, 1)) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_navigation;
	((func_arc_scene_ui_TextField_setCursorPosition_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setCursorPosition_int])(ctx, sp[0].o, (jint(0)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_navigation;
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_navigation;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((func_arc_scene_ui_TextField_setCursorPosition_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setCursorPosition_int])(ctx, sp[0].o, temp0);
	}
label_7:;
	{
	LINE_NUMBER(189);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_files;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_files;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(193);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_FileChooserDialog_getFileNames_R_Array1_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_getFileNames_R_Array1_arc_files_Fi])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(195);
	clinit_arc_scene_ui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_upOpen;
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(196);
	clinit_arc_scene_ui_TextButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextButton);
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_directory;
	sp[1].o = (jobject)((func_arc_files_Fi_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"..\u0001"_j.string, 1, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	init_arc_scene_ui_TextButton_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(197);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_23);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(203);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_TextButton_left_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (frame[5].o));
	((func_arc_scene_ui_Label_setAlignment_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int])(ctx, sp[0].o, (8));
	LINE_NUMBER(205);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getCells_R_arc_struct_Seq])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_reverse_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_reverse_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_files;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_align_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_align_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (10));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_files;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(210);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(211);
	((func_arc_scene_ui_ButtonGroup_setMinCheckCount_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_ButtonGroup_setMinCheckCount_int])(ctx, (frame[6].o), (jint(0)));
	LINE_NUMBER(213);
	frame[7].o = (frame[3].o);
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_22:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_23;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(214);
	jint temp0 = (jint)((func_arc_files_Fi_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_files_Fi_isDirectory_R_boolean])(ctx, (frame[10].o));
	if (temp0 != 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filter;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[10].o));
	if (temp0 != 0) goto label_25;
	}
	goto label_26;
label_25:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(218);
	clinit_arc_scene_ui_TextButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextButton);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8"["_j))), (((jobject) createStringLiteral(ctx, u8"[["_j))));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	init_arc_scene_ui_TextButton_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(219);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (frame[12].o));
	((func_arc_scene_ui_Label_setWrap_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setWrap_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (frame[12].o));
	((func_arc_scene_ui_Label_setEllipsis_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setEllipsis_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(221);
	((func_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button])(ctx, (frame[6].o), (frame[12].o));
	LINE_NUMBER(223);
	sp[0].o = frame[12].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_24);
		proxy->F_field2 = (jref) (frame[11].o);
		proxy->F_field1 = (jref) (frame[10].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filefield;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog_invoke_java_lang_Runnable_25);
		proxy->F_field2 = (jref) (frame[11].o);
		proxy->F_field1 = (jref) (frame[12].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextField_changed_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_changed_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(238);
	clinit_arc_scene_ui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	jint temp0 = (jint)((func_arc_files_Fi_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_files_Fi_isDirectory_R_boolean])(ctx, (frame[10].o));
	sp[1].o = sp[0].o;
	sp += 2;
	if (temp0 == 0) goto label_34;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_folder;
	goto label_35;
label_34:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_fileText;
label_35:;
	{
	sp -= 3;
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[0].o, sp[2].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(240);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_scene_ui_TextButton_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[12].o), (frame[13].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(241);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getCells_R_arc_struct_Seq])(ctx, (frame[12].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_reverse_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_reverse_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(242);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_files;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[12].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_align_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_align_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (10));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	jfloat temp0 = jfloat(50.0f);
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (frame[12].o));
	((func_arc_scene_ui_Label_setAlignment_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int])(ctx, sp[0].o, (8));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_files;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_26:;
	{
	LINE_NUMBER(213);
	INST_IINC(9, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_pane;
	((func_arc_scene_ui_ScrollPane_setScrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollY_float])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(249);
	((func_mindustry_ui_dialogs_FileChooserDialog_updateFileFieldStatus) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_updateFileFieldStatus])(ctx, (frame[0].o));
	LINE_NUMBER(251);
	if (((jint)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_open) == 0) goto label_44;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filefield;
	((func_arc_scene_ui_TextField_clearText) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_clearText])(ctx, sp[0].o);
	}
label_44:;
	LINE_NUMBER(252);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_FileChooserDialog_setLastDirectory_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:setLastDirectory", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_mindustry_ui_dialogs_FileChooserDialog);

	clinit_mindustry_ui_dialogs_FileChooserDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(255);
	clinit_mindustry_ui_dialogs_FileChooserDialog(ctx);
	SF_mindustry_ui_dialogs_FileChooserDialog_lastDirectory = (frame[0].o);
	LINE_NUMBER(256);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lastDirectory"_j));
	sp[2].o = (jobject)((func_arc_files_Fi_absolutePath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_absolutePath_R_java_lang_String])(ctx, (frame[0].o));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(257);
	popStackFrame(ctx, (jobject) &class_mindustry_ui_dialogs_FileChooserDialog);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_FileChooserDialog_getLastDirectory_R_arc_files_Fi(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:getLastDirectory", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_mindustry_ui_dialogs_FileChooserDialog);

	clinit_mindustry_ui_dialogs_FileChooserDialog(ctx);
	{
	LINE_NUMBER(260);
	clinit_mindustry_ui_dialogs_FileChooserDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_FileChooserDialog_lastDirectory;
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(261);
	clinit_mindustry_ui_dialogs_FileChooserDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_FileChooserDialog_homeDirectory;
	clinit_mindustry_ui_dialogs_FileChooserDialog(ctx);
	SF_mindustry_ui_dialogs_FileChooserDialog_lastDirectory = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(263);
	clinit_mindustry_ui_dialogs_FileChooserDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_FileChooserDialog_lastDirectory;
	popStackFrame(ctx, (jobject) &class_mindustry_ui_dialogs_FileChooserDialog);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog_lambda$updateFiles$2_arc_scene_ui_TextButton_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:lambda$updateFiles$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(235);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filefield;
	sp[2].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[2].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[1].o, sp[2].o);
	((func_arc_scene_ui_TextButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_setChecked_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog_lambda$updateFiles$1_arc_files_Fi_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:lambda$updateFiles$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(224);
	jint temp0 = (jint)((func_arc_files_Fi_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_isDirectory_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filefield;
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(226);
	((func_mindustry_ui_dialogs_FileChooserDialog_updateFileFieldStatus) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_updateFileFieldStatus])(ctx, (frame[0].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_directory;
	sp[1].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[1].o, (frame[2].o));
	((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK(sp[0].o))->F_directory = (jref) sp[1].o;
	LINE_NUMBER(229);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_directory;
	SM_mindustry_ui_dialogs_FileChooserDialog_setLastDirectory_arc_files_Fi(ctx, sp[0].o);
	LINE_NUMBER(230);
	((func_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean])(ctx, (frame[0].o), (jint(1)));
	}
label_4:;
	LINE_NUMBER(232);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog_lambda$updateFiles$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:lambda$updateFiles$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_directory;
	sp[1].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, sp[1].o);
	((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK(sp[0].o))->F_directory = (jref) sp[1].o;
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_directory;
	SM_mindustry_ui_dialogs_FileChooserDialog_setLastDirectory_arc_files_Fi(ctx, sp[0].o);
	LINE_NUMBER(200);
	((func_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_dialogs_FileChooserDialog_lambda$getFileNames$1_arc_files_Fi_arc_files_Fi_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:lambda$getFileNames$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_FileChooserDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(168);
	jint temp0 = (jint)((func_arc_files_Fi_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_isDirectory_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_files_Fi_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_isDirectory_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(169);
	jint temp0 = (jint)((func_arc_files_Fi_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_isDirectory_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_files_Fi_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_isDirectory_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(170);
	clinit_java_lang_String(ctx);
	sp[0].o = (jobject)SF_java_lang_String_CASE_INSENSITIVE_ORDER;
	sp[1].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_FileChooserDialog_lambda$getFileNames$0_java_io_File_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:lambda$getFileNames$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_FileChooserDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((func_java_io_File_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_File_getName_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$7(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:lambda$setupWidgets$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_FileChooserDialog(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_FileChooserDialog_homeDirectory;
	((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK(sp[0].o))->F_directory = (jref) sp[1].o;
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_directory;
	SM_mindustry_ui_dialogs_FileChooserDialog_setLastDirectory_arc_files_Fi(ctx, sp[0].o);
	LINE_NUMBER(121);
	((func_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$6_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:lambda$setupWidgets$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canBack_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canBack_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$5_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:lambda$setupWidgets$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canForward_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canForward_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:lambda$setupWidgets$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_stack;
	((func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_back) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_back])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:lambda$setupWidgets$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_stack;
	((func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_forward) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_forward])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:lambda$setupWidgets$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_directory;
	sp[1].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, sp[1].o);
	((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK(sp[0].o))->F_directory = (jref) sp[1].o;
	LINE_NUMBER(105);
	((func_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:lambda$setupWidgets$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_ok;
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filefield;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" "_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[1].o);
	((func_arc_scene_ui_TextButton_setDisabled_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_setDisabled_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:lambda$setupWidgets$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_ok;
	jint temp0 = (jint)((func_arc_scene_ui_TextButton_isDisabled_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_isDisabled_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_selectListener;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_selectListener;
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_directory;
	sp[2].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_filefield;
	sp[2].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[1].o, sp[2].o);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(75);
	((func_mindustry_ui_dialogs_FileChooserDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog_lambda$new$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:lambda$new$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK((frame[0].o)))->F_ok;
	((func_arc_scene_ui_TextButton_fireClick) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_fireClick])(ctx, sp[0].o);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:lambda$new$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(49);
	((func_mindustry_ui_dialogs_FileChooserDialog_setupWidgets) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_setupWidgets])(ctx, (frame[0].o));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog_lambda$new$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(44);
	((func_mindustry_ui_dialogs_FileChooserDialog_setupWidgets) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_setupWidgets])(ctx, (frame[0].o));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ui_dialogs_FileChooserDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_FileChooserDialog(ctx);
	{
	LINE_NUMBER(20);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)((func_arc_Files_getExternalStoragePath_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_getExternalStoragePath_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_Files_absolute_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_absolute_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_dialogs_FileChooserDialog(ctx);
	SF_mindustry_ui_dialogs_FileChooserDialog_homeDirectory = sp[0].o;
	LINE_NUMBER(21);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"lastDirectory"_j));
	clinit_mindustry_ui_dialogs_FileChooserDialog(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_dialogs_FileChooserDialog_homeDirectory;
	sp[3].o = (jobject)((func_arc_files_Fi_absolutePath_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_files_Fi_absolutePath_R_java_lang_String])(ctx, sp[3].o);
	sp[1].o = (jobject)((func_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_Files_absolute_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_absolute_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_dialogs_FileChooserDialog(ctx);
	SF_mindustry_ui_dialogs_FileChooserDialog_lastDirectory = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_FileChooserDialog[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Group_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_ui_Dialog_draw,
	(void *) M_arc_scene_ui_Dialog_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_ui_Dialog_hit_float_float_boolean_R_arc_scene_Element,
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
	(void *) M_arc_scene_Group_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_ui_Dialog_setScene_arc_scene_Scene,
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
	(void *) M_arc_scene_ui_layout_WidgetGroup_sizeChanged,
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
	(void *) M_arc_scene_ui_layout_Table_getMinWidth_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMinHeight_R_float,
	(void *) M_arc_scene_ui_layout_Table_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_layout_Table_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_validate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_needsLayout_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_invalidate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidateHierarchy,
	(void *) M_arc_scene_ui_layout_WidgetGroup_pack,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean,
	(void *) M_arc_scene_ui_layout_Table_layout,
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
	(void *) M_arc_scene_Group_setCullingArea_arc_math_geom_Rect,
	(void *) M_arc_scene_Group_drawChildren,
	(void *) M_arc_scene_Group_computeTransform_R_arc_math_Mat,
	(void *) M_arc_scene_Group_applyTransform_arc_math_Mat,
	(void *) M_arc_scene_Group_resetTransform,
	(void *) M_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect,
	(void *) M_arc_scene_ui_layout_WidgetGroup_childrenChanged,
	(void *) M_arc_scene_Group_forEach_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element,
	(void *) M_arc_scene_Group_fill_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_style_Drawable_arc_func_Cons,
	(void *) M_arc_scene_Group_addChild_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAt_int_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildBefore_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAfter_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_boolean_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_clearChildren,
	(void *) M_arc_scene_Group_find_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element,
	(void *) M_arc_scene_Group_swapActor_int_int_R_boolean,
	(void *) M_arc_scene_Group_swapActor_arc_scene_Element_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq,
	(void *) M_arc_scene_Group_hasChildren_R_boolean,
	(void *) M_arc_scene_Group_isTransform_R_boolean,
	(void *) M_arc_scene_Group_setTransform_boolean,
	(void *) M_arc_scene_Group_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Group_toString_java_lang_StringBuilder_int,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_arc_scene_Group_boolean,
	(void *) M_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_fill_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_drawBackground_float_float,
	(void *) M_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_getBackground_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_layout_Table_setBackground_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_layout_Table_getClip_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_setClip_boolean,
	(void *) M_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_Array1_arc_scene_Element,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_reset,
	(void *) M_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_endRow,
	(void *) M_arc_scene_ui_layout_Table_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq,
	(void *) M_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_getMarginTop_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginLeft_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginBottom_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginRight_R_float,
	(void *) M_arc_scene_ui_layout_Table_getAlign_R_int,
	(void *) M_arc_scene_ui_layout_Table_getRow_float_R_int,
	(void *) M_arc_scene_ui_layout_Table_setRound_boolean,
	(void *) M_arc_scene_ui_layout_Table_getRows_R_int,
	(void *) M_arc_scene_ui_layout_Table_getColumns_R_int,
	(void *) M_arc_scene_ui_layout_Table_getRowHeight_int_R_float,
	(void *) M_arc_scene_ui_layout_Table_getColumnWidth_int_R_float,
	(void *) M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float,
	(void *) M_arc_scene_ui_layout_Table_computeSize,
	(void *) M_arc_scene_ui_layout_Table_layout_float_float_float_float,
	(void *) M_arc_scene_ui_Dialog_getStyle_R_arc_scene_ui_Dialog$DialogStyle,
	(void *) M_arc_scene_ui_Dialog_setStyle_arc_scene_ui_Dialog$DialogStyle,
	(void *) M_arc_scene_ui_Dialog_keepWithinStage,
	(void *) M_arc_scene_ui_Dialog_drawStageBackground_float_float_float_float,
	(void *) M_arc_scene_ui_Dialog_centerWindow,
	(void *) M_arc_scene_ui_Dialog_isMovable_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setMovable_boolean,
	(void *) M_arc_scene_ui_Dialog_isModal_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setModal_boolean,
	(void *) M_arc_scene_ui_Dialog_setKeepWithinStage_boolean,
	(void *) M_arc_scene_ui_Dialog_isCentered_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setCentered_boolean,
	(void *) M_arc_scene_ui_Dialog_isResizable_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setResizable_boolean,
	(void *) M_arc_scene_ui_Dialog_setResizeBorder_int,
	(void *) M_arc_scene_ui_Dialog_isDragging_R_boolean,
	(void *) M_arc_scene_ui_Dialog_updateScrollFocus,
	(void *) M_arc_scene_ui_Dialog_shown_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_hidden_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_resizedShown_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_resized_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_resized_boolean_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_BaseDialog_addCloseButton,
	(void *) M_arc_scene_ui_Dialog_closeOnBack,
	(void *) M_arc_scene_ui_Dialog_closeOnBack_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_isShown_R_boolean,
	(void *) M_arc_scene_ui_Dialog_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_toggle,
	(void *) M_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_show_arc_scene_Scene_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_hide_arc_scene_Action,
	(void *) M_arc_scene_ui_Dialog_hide,
	(void *) M_arc_scene_ui_Dialog_lambda$closeOnBack$1_java_lang_Runnable_arc_input_KeyCode,
	(void *) M_arc_scene_ui_Dialog_lambda$updateScrollFocus$0_Array1_boolean,
	(void *) M_mindustry_ui_dialogs_BaseDialog_setTitleColor_arc_graphics_Color,
	(void *) M_mindustry_ui_dialogs_BaseDialog_makeButtonOverlay,
	(void *) M_mindustry_ui_dialogs_BaseDialog_onResize_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_BaseDialog_addCloseListener,
	(void *) M_mindustry_ui_dialogs_BaseDialog_addCloseButton_float,
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$onResize$0_java_lang_Runnable_mindustry_game_EventType$ResizeEvent,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_lambda$new$1,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_lambda$new$0,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_setupWidgets,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_updateFileFieldStatus,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_getFileNames_R_Array1_arc_files_Fi,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_lambda$updateFiles$2_arc_scene_ui_TextButton_java_lang_String,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_lambda$updateFiles$1_arc_files_Fi_java_lang_String,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_lambda$updateFiles$0,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$7,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$6_R_boolean,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$5_R_boolean,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$4,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$3,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$2,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$1,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$0,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog_lambda$new$2,
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
	{ "setCullingArea", "(Larc/math/geom/Rect;)V" },
	{ "drawChildren", "()V" },
	{ "computeTransform", "()Larc/math/Mat;" },
	{ "applyTransform", "(Larc/math/Mat;)V" },
	{ "resetTransform", "()V" },
	{ "getCullingArea", "()Larc/math/geom/Rect;" },
	{ "childrenChanged", "()V" },
	{ "forEach", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/Element;" },
	{ "fill", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/style/Drawable;Larc/func/Cons;)V" },
	{ "addChild", "(Larc/scene/Element;)V" },
	{ "addChildAt", "(ILarc/scene/Element;)V" },
	{ "addChildBefore", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "addChildAfter", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "removeChild", "(Larc/scene/Element;)Z" },
	{ "removeChild", "(Larc/scene/Element;Z)Z" },
	{ "clearChildren", "()V" },
	{ "find", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "findVisible", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "find", "(Larc/func/Boolf;)Larc/scene/Element;" },
	{ "swapActor", "(II)Z" },
	{ "swapActor", "(Larc/scene/Element;Larc/scene/Element;)Z" },
	{ "getChildren", "()Larc/struct/SnapshotSeq;" },
	{ "hasChildren", "()Z" },
	{ "isTransform", "()Z" },
	{ "setTransform", "(Z)V" },
	{ "localToDescendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "toString", "(Ljava/lang/StringBuilder;I)V" },
	{ "setLayoutEnabled", "(Larc/scene/Group;Z)V" },
	{ "obtainCell", "()Larc/scene/ui/layout/Cell;" },
	{ "fill", "()Larc/scene/ui/layout/Table;" },
	{ "drawBackground", "(FF)V" },
	{ "background", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Table;" },
	{ "getBackground", "()Larc/scene/style/Drawable;" },
	{ "setBackground", "(Larc/scene/style/Drawable;)V" },
	{ "getClip", "()Z" },
	{ "setClip", "(Z)V" },
	{ "add", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "add", "([Larc/scene/Element;)V" },
	{ "collapser", "(Larc/func/Cons;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/scene/ui/layout/Table;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/func/Cons;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/scene/ui/layout/Table;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "table", "()Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "wrapTable", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;ILarc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "label", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "labelWrap", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "labelWrap", "(Ljava/lang/String;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/graphics/Color;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "add", "()Larc/scene/ui/layout/Cell;" },
	{ "stack", "([Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "spacer", "(Larc/func/Floatp;Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "spacerX", "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "spacerY", "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "imageDraw", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "image", "()Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/scene/style/Drawable;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/graphics/g2d/TextureRegion;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;Larc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;ZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;FZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/func/Cons;Larc/scene/ui/Button$ButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "area", "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "area", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldFilter;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "rect", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/ui/layout/Cell;" },
	{ "buttonRow", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFFZLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "reset", "()V" },
	{ "row", "()Larc/scene/ui/layout/Table;" },
	{ "endRow", "()V" },
	{ "getCell", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "getCells", "()Larc/struct/Seq;" },
	{ "defaults", "()Larc/scene/ui/layout/Cell;" },
	{ "margin", "(F)Larc/scene/ui/layout/Table;" },
	{ "margin", "(FFFF)Larc/scene/ui/layout/Table;" },
	{ "marginTop", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginLeft", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginBottom", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginRight", "(F)Larc/scene/ui/layout/Table;" },
	{ "align", "(I)Larc/scene/ui/layout/Table;" },
	{ "center", "()Larc/scene/ui/layout/Table;" },
	{ "top", "()Larc/scene/ui/layout/Table;" },
	{ "left", "()Larc/scene/ui/layout/Table;" },
	{ "bottom", "()Larc/scene/ui/layout/Table;" },
	{ "right", "()Larc/scene/ui/layout/Table;" },
	{ "getMarginTop", "()F" },
	{ "getMarginLeft", "()F" },
	{ "getMarginBottom", "()F" },
	{ "getMarginRight", "()F" },
	{ "getAlign", "()I" },
	{ "getRow", "(F)I" },
	{ "setRound", "(Z)V" },
	{ "getRows", "()I" },
	{ "getColumns", "()I" },
	{ "getRowHeight", "(I)F" },
	{ "getColumnWidth", "(I)F" },
	{ "ensureSize", "([FI)[F" },
	{ "computeSize", "()V" },
	{ "layout", "(FFFF)V" },
	{ "getStyle", "()Larc/scene/ui/Dialog$DialogStyle;" },
	{ "setStyle", "(Larc/scene/ui/Dialog$DialogStyle;)V" },
	{ "keepWithinStage", "()V" },
	{ "drawStageBackground", "(FFFF)V" },
	{ "centerWindow", "()V" },
	{ "isMovable", "()Z" },
	{ "setMovable", "(Z)V" },
	{ "isModal", "()Z" },
	{ "setModal", "(Z)V" },
	{ "setKeepWithinStage", "(Z)V" },
	{ "isCentered", "()Z" },
	{ "setCentered", "(Z)V" },
	{ "isResizable", "()Z" },
	{ "setResizable", "(Z)V" },
	{ "setResizeBorder", "(I)V" },
	{ "isDragging", "()Z" },
	{ "updateScrollFocus", "()V" },
	{ "shown", "(Ljava/lang/Runnable;)V" },
	{ "hidden", "(Ljava/lang/Runnable;)V" },
	{ "resizedShown", "(Ljava/lang/Runnable;)V" },
	{ "resized", "(Ljava/lang/Runnable;)V" },
	{ "resized", "(ZLjava/lang/Runnable;)V" },
	{ "addCloseButton", "()V" },
	{ "closeOnBack", "()V" },
	{ "closeOnBack", "(Ljava/lang/Runnable;)V" },
	{ "isShown", "()Z" },
	{ "show", "(Larc/scene/Scene;Larc/scene/Action;)Larc/scene/ui/Dialog;" },
	{ "toggle", "()V" },
	{ "show", "()Larc/scene/ui/Dialog;" },
	{ "show", "(Larc/scene/Scene;)Larc/scene/ui/Dialog;" },
	{ "hide", "(Larc/scene/Action;)V" },
	{ "hide", "()V" },
	{ "lambda$closeOnBack$1", "(Ljava/lang/Runnable;Larc/input/KeyCode;)V" },
	{ "lambda$updateScrollFocus$0", "([Z)V" },
	{ "setTitleColor", "(Larc/graphics/Color;)V" },
	{ "makeButtonOverlay", "()V" },
	{ "onResize", "(Ljava/lang/Runnable;)V" },
	{ "addCloseListener", "()V" },
	{ "addCloseButton", "(F)V" },
	{ "lambda$onResize$0", "(Ljava/lang/Runnable;Lmindustry/game/EventType$ResizeEvent;)V" },
	{ "lambda$new$1", "()V" },
	{ "lambda$new$0", "()V" },
	{ "setupWidgets", "()V" },
	{ "updateFileFieldStatus", "()V" },
	{ "getFileNames", "()[Larc/files/Fi;" },
	{ "updateFiles", "(Z)V" },
	{ "lambda$updateFiles$2", "(Larc/scene/ui/TextButton;Ljava/lang/String;)V" },
	{ "lambda$updateFiles$1", "(Larc/files/Fi;Ljava/lang/String;)V" },
	{ "lambda$updateFiles$0", "()V" },
	{ "lambda$setupWidgets$7", "()V" },
	{ "lambda$setupWidgets$6", "()Z" },
	{ "lambda$setupWidgets$5", "()Z" },
	{ "lambda$setupWidgets$4", "()V" },
	{ "lambda$setupWidgets$3", "()V" },
	{ "lambda$setupWidgets$2", "()V" },
	{ "lambda$setupWidgets$1", "()V" },
	{ "lambda$setupWidgets$0", "()V" },
	{ "lambda$new$2", "()V" },
};

static jclass innerClasses[] {
	&class_mindustry_ui_dialogs_FileChooserDialog$FileHistory,
};

static FieldMetadata fields[] {
	{ "homeDirectory", &class_arc_files_Fi, (intptr_t) &SF_mindustry_ui_dialogs_FileChooserDialog_homeDirectory, "Larc/files/Fi;", 26 },
	{ "lastDirectory", &class_arc_files_Fi, (intptr_t) &SF_mindustry_ui_dialogs_FileChooserDialog_lastDirectory, "Larc/files/Fi;", 8 },
	{ "directory", &class_arc_files_Fi, offsetof(mindustry_ui_dialogs_FileChooserDialog, F_directory), "Larc/files/Fi;", 0 },
	{ "files", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_FileChooserDialog, F_files), "Larc/scene/ui/layout/Table;", 2 },
	{ "pane", &class_arc_scene_ui_ScrollPane, offsetof(mindustry_ui_dialogs_FileChooserDialog, F_pane), "Larc/scene/ui/ScrollPane;", 2 },
	{ "navigation", &class_arc_scene_ui_TextField, offsetof(mindustry_ui_dialogs_FileChooserDialog, F_navigation), "Larc/scene/ui/TextField;", 2 },
	{ "filefield", &class_arc_scene_ui_TextField, offsetof(mindustry_ui_dialogs_FileChooserDialog, F_filefield), "Larc/scene/ui/TextField;", 2 },
	{ "ok", &class_arc_scene_ui_TextButton, offsetof(mindustry_ui_dialogs_FileChooserDialog, F_ok), "Larc/scene/ui/TextButton;", 2 },
	{ "stack", &class_mindustry_ui_dialogs_FileChooserDialog$FileHistory, offsetof(mindustry_ui_dialogs_FileChooserDialog, F_stack), "Lmindustry/ui/dialogs/FileChooserDialog$FileHistory;", 2 },
	{ "filter", &class_arc_func_Boolf, offsetof(mindustry_ui_dialogs_FileChooserDialog, F_filter), "Larc/func/Boolf;", 2 },
	{ "selectListener", &class_arc_func_Cons, offsetof(mindustry_ui_dialogs_FileChooserDialog, F_selectListener), "Larc/func/Cons;", 2 },
	{ "open", &class_boolean, offsetof(mindustry_ui_dialogs_FileChooserDialog, F_open), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_FileChooserDialog_java_lang_String_arc_func_Boolf_boolean_arc_func_Cons, 0, "(Ljava/lang/String;Larc/func/Boolf;ZLarc/func/Cons;)V", 1 },
	{ "setupWidgets", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_setupWidgets, VTABLE_mindustry_ui_dialogs_FileChooserDialog_setupWidgets, "()V", 2 },
	{ "updateFileFieldStatus", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_updateFileFieldStatus, VTABLE_mindustry_ui_dialogs_FileChooserDialog_updateFileFieldStatus, "()V", 2 },
	{ "getFileNames", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_getFileNames_R_Array1_arc_files_Fi, VTABLE_mindustry_ui_dialogs_FileChooserDialog_getFileNames_R_Array1_arc_files_Fi, "()[Larc/files/Fi;", 2 },
	{ "updateFiles", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean, VTABLE_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean, "(Z)V", 0 },
	{ "setLastDirectory", (intptr_t) SM_mindustry_ui_dialogs_FileChooserDialog_setLastDirectory_arc_files_Fi, 0, "(Larc/files/Fi;)V", 41 },
	{ "getLastDirectory", (intptr_t) SM_mindustry_ui_dialogs_FileChooserDialog_getLastDirectory_R_arc_files_Fi, 0, "()Larc/files/Fi;", 41 },
	{ "lambda$updateFiles$2", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_lambda$updateFiles$2_arc_scene_ui_TextButton_java_lang_String, VTABLE_mindustry_ui_dialogs_FileChooserDialog_lambda$updateFiles$2_arc_scene_ui_TextButton_java_lang_String, "(Larc/scene/ui/TextButton;Ljava/lang/String;)V", 4098 },
	{ "lambda$updateFiles$1", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_lambda$updateFiles$1_arc_files_Fi_java_lang_String, VTABLE_mindustry_ui_dialogs_FileChooserDialog_lambda$updateFiles$1_arc_files_Fi_java_lang_String, "(Larc/files/Fi;Ljava/lang/String;)V", 4098 },
	{ "lambda$updateFiles$0", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_lambda$updateFiles$0, VTABLE_mindustry_ui_dialogs_FileChooserDialog_lambda$updateFiles$0, "()V", 4098 },
	{ "lambda$getFileNames$1", (intptr_t) SM_mindustry_ui_dialogs_FileChooserDialog_lambda$getFileNames$1_arc_files_Fi_arc_files_Fi_R_int, 0, "(Larc/files/Fi;Larc/files/Fi;)I", 4106 },
	{ "lambda$getFileNames$0", (intptr_t) SM_mindustry_ui_dialogs_FileChooserDialog_lambda$getFileNames$0_java_io_File_R_boolean, 0, "(Ljava/io/File;)Z", 4106 },
	{ "lambda$setupWidgets$7", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$7, VTABLE_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$7, "()V", 4098 },
	{ "lambda$setupWidgets$6", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$6_R_boolean, VTABLE_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$6_R_boolean, "()Z", 4098 },
	{ "lambda$setupWidgets$5", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$5_R_boolean, VTABLE_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$5_R_boolean, "()Z", 4098 },
	{ "lambda$setupWidgets$4", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$4, VTABLE_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$4, "()V", 4098 },
	{ "lambda$setupWidgets$3", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$3, VTABLE_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$3, "()V", 4098 },
	{ "lambda$setupWidgets$2", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$2, VTABLE_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$2, "()V", 4098 },
	{ "lambda$setupWidgets$1", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$1, VTABLE_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$1, "()V", 4098 },
	{ "lambda$setupWidgets$0", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$0, VTABLE_mindustry_ui_dialogs_FileChooserDialog_lambda$setupWidgets$0, "()V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_lambda$new$2, VTABLE_mindustry_ui_dialogs_FileChooserDialog_lambda$new$2, "()V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_lambda$new$1, VTABLE_mindustry_ui_dialogs_FileChooserDialog_lambda$new$1, "()V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog_lambda$new$0, VTABLE_mindustry_ui_dialogs_FileChooserDialog_lambda$new$0, "()V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_dialogs_FileChooserDialog, 0, "()V", 8 },
};

Class class_mindustry_ui_dialogs_FileChooserDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/FileChooserDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_ui_dialogs_FileChooserDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_FileChooserDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_FileChooserDialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_FileChooserDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 313,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_FileChooserDialog = registerClass(&class_mindustry_ui_dialogs_FileChooserDialog);

}
