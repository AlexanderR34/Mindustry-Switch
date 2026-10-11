#include "mindustry/ui/dialogs/SchematicsDialog.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_40.h"
#include "arc/Input.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_42.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_41.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "arc/scene/ui/Image.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "arc/struct/Seq.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_44.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_43.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_46.h"
#include "mindustry/mod/Mods_ModMeta.h"
#include "arc/Settings.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_45.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_48.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Boolf_2.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_47.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Boolf_3.h"
#include "arc/func/Boolf.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_49.h"
#include "arc/func/Floatf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_31.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_30.h"
#include "mindustry/input/Binding.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_33.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_32.h"
#include "mindustry/type/Publishable.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_35.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_34.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_37.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_36.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_39.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_38.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "java/util/regex/Matcher.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_41.h"
#include "arc/func/Cons.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_42.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_40.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_45.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_46.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_43.h"
#include "mindustry/ui/dialogs/SchematicsDialog_2.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_44.h"
#include "mindustry/ui/dialogs/SchematicsDialog_1.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/core/Control.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/input/KeyBind.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_51.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_50.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_53.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_52.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_49.h"
#include "mindustry/core/Platform.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_47.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_48.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_52.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_53.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_50.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_51.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_mindustry_core_Platform_FileWriter_1.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_56.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_57.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_54.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_55.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_55.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_54.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_57.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_56.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_59.h"
#include "mindustry/Vars.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Cons_58.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Floatf_1.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_58.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_59.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_63.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_64.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_61.h"
#include "java/util/regex/Pattern.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_62.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_67.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_68.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_65.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_66.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "mindustry/ui/FileChooser.h"
#include "java/lang/Throwable.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_60.h"
#include "java/lang/Exception.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_69.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_74.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_arc_func_Prov_1.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_75.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_72.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_73.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_78.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_79.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_76.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_77.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_70.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_71.h"
#include "mindustry/core/Platform_FileWriter.h"
#include "arc/files/Fi.h"
#include "arc/Application.h"
#include "java/lang/String.h"
#include "mindustry/game/Schematic.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/utils/Elem.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/dialogs/SchematicsDialog_SchematicInfoDialog.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/style/Style.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/ui/dialogs/SchematicsDialog.h"
#include "java/lang/Class.h"
#include "mindustry/core/GameState.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/ui/dialogs/SchematicsDialog_SchematicImage.h"

extern "C" {

jfloat SF_mindustry_ui_dialogs_SchematicsDialog_tagh;

void mark_mindustry_ui_dialogs_SchematicsDialog(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (mindustry_ui_dialogs_SchematicsDialog *) object;
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
	if (self->F_firstSchematic)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_firstSchematic)->clazz)->markFunction)((jobject) self->F_firstSchematic, mark, depth + 1);
	if (self->F_search)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_search)->clazz)->markFunction)((jobject) self->F_search, mark, depth + 1);
	if (self->F_searchField)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_searchField)->clazz)->markFunction)((jobject) self->F_searchField, mark, depth + 1);
	if (self->F_rebuildPane)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rebuildPane)->clazz)->markFunction)((jobject) self->F_rebuildPane, mark, depth + 1);
	if (self->F_rebuildTags)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rebuildTags)->clazz)->markFunction)((jobject) self->F_rebuildTags, mark, depth + 1);
	if (self->F_ignoreSymbols)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ignoreSymbols)->clazz)->markFunction)((jobject) self->F_ignoreSymbols, mark, depth + 1);
	if (self->F_tags)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tags)->clazz)->markFunction)((jobject) self->F_tags, mark, depth + 1);
	if (self->F_selectedTags)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selectedTags)->clazz)->markFunction)((jobject) self->F_selectedTags, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_SchematicsDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	SF_mindustry_ui_dialogs_SchematicsDialog_tagh = jfloat(42.0f);
}

void init_mindustry_ui_dialogs_SchematicsDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(42);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@schematics"_j))));
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_SchematicsDialog$SchematicInfoDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog$SchematicInfoDialog);
	init_mindustry_ui_dialogs_SchematicsDialog$SchematicInfoDialog_mindustry_ui_dialogs_SchematicsDialog(ctx, sp[1].o, (frame[0].o));
	((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK(sp[0].o))->F_info = (jref) sp[1].o;
	LINE_NUMBER(34);
	((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_search = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_40(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_40 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_40);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK(sp[0].o))->F_rebuildPane = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_41(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_41 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_41);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK(sp[0].o))->F_rebuildTags = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"[`~!@#$%^&*()\\-_=+{}|;:'\",<.>/?]"_j))));
	((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK(sp[0].o))->F_ignoreSymbols = (jref) sp[1].o;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK(sp[0].o))->F_selectedTags = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"schematic-tags"_j));
	sp[3].o = ((jobject) &class_arc_struct_Seq);
	sp[4].o = ((jobject) &class_java_lang_String);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Prov_1);
		sp[5].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK(sp[0].o))->F_tags = (jref) (checkCast(ctx, &class_arc_struct_Seq, sp[1].o));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_TextField(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_TextField);
	init_arc_scene_ui_TextField(ctx, sp[1].o);
	((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK(sp[0].o))->F_searchField = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_42(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_42 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_42);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextField_changed_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_changed_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@schematic.search"_j))));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_43(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_43 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_43);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(61);
	((mindustry_ui_dialogs_BaseDialog *) NULL_CHECK((frame[0].o)))->F_shouldPause = (jint(1));
	LINE_NUMBER(62);
	((func_mindustry_ui_dialogs_SchematicsDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_addCloseButton])(ctx, (frame[0].o));
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@schematic.import"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_44(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_44 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_44);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(64);
	((func_mindustry_ui_dialogs_SchematicsDialog_makeButtonOverlay) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_makeButtonOverlay])(ctx, (frame[0].o));
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_45(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_45 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_45);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SchematicsDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_46(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_46 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_46);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SchematicsDialog_onResize_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_onResize_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:setup", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	if (((jint)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_checkedTags) != 0) goto label_1;
	}
	{
	LINE_NUMBER(74);
	((func_mindustry_ui_dialogs_SchematicsDialog_checkTags) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_checkTags])(ctx, (frame[0].o));
	LINE_NUMBER(75);
	((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_checkedTags = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(79);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_30(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_30 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_30);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_31(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_31 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_31);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(42.0f);
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(117);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(119);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_32(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_32 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_32);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:showInfo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_info;
	((func_mindustry_ui_dialogs_SchematicsDialog$SchematicInfoDialog_show_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog$SchematicInfoDialog_show_mindustry_game_Schematic])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_showImport(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:showImport", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(226);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.import"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(227);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_33(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_33 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_33);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(281);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(282);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_importAndShow_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:importAndShow", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)SM_mindustry_game_Schematics_read_arc_files_Fi_R_mindustry_game_Schematic(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(288);
	((func_mindustry_game_Schematic_removeSteamID) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Schematic_removeSteamID])(ctx, (frame[2].o));
	LINE_NUMBER(289);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	((func_mindustry_game_Schematics_add_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_add_mindustry_game_Schematic])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(290);
	((func_mindustry_ui_dialogs_SchematicsDialog_checkTags_mindustry_game_Schematic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_checkTags_mindustry_game_Schematic])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(292);
	((func_mindustry_ui_dialogs_SchematicsDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(293);
	((func_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic])(ctx, (frame[0].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(296);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(294);
	frame[2].o = sp[0].o;
	LINE_NUMBER(295);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[2].o));
	}
label_9:;
	LINE_NUMBER(297);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_showExport_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:showExport", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(300);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.export"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(301);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_34(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_34 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_34);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(325);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[2].o));
	LINE_NUMBER(326);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_showEdit_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:showEdit", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(330);
	clinit_mindustry_ui_dialogs_SchematicsDialog$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog$1);
	init_mindustry_ui_dialogs_SchematicsDialog$1_mindustry_ui_dialogs_SchematicsDialog_java_lang_String_mindustry_game_Schematic(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@schematic.edit"_j))), (frame[1].o));
	LINE_NUMBER(364);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SchematicsDialog$1_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog$1_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_checkTags(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:checkTags", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(370);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(371);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	((func_arc_struct_ObjectSet_addAll_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_addAll_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(372);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	sp[0].o = (jobject)((func_mindustry_game_Schematics_all_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_all_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_game_Schematic, sp[0].o));
	LINE_NUMBER(373);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[3].o)))->F_labels;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(374);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_9:;
	LINE_NUMBER(377);
	goto label_6;
label_7:;
	LINE_NUMBER(378);
	goto label_3;
label_4:;
	LINE_NUMBER(379);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_checkTags_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:checkTags", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(384);
	frame[2].i = (jint(0));
	LINE_NUMBER(385);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_labels;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(386);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[4].o));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(388);
	frame[2].i = (jint(1));
	}
label_5:;
	LINE_NUMBER(390);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(391);
	if ((frame[2].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_rebuildTags;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(394);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_tagsChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:tagsChanged", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_rebuildTags;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(398);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_selectedTags;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_rebuildPane;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(402);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"schematic-tags"_j));
	sp[2].o = ((jobject) &class_java_lang_String);
	sp[3].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	((func_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_addTag_mindustry_game_Schematic_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:addTag", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_labels;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(407);
	((func_mindustry_game_Schematic_save) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Schematic_save])(ctx, (frame[1].o));
	LINE_NUMBER(408);
	((func_mindustry_ui_dialogs_SchematicsDialog_tagsChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_tagsChanged])(ctx, (frame[0].o));
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_removeTag_mindustry_game_Schematic_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:removeTag", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_labels;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(413);
	((func_mindustry_game_Schematic_save) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Schematic_save])(ctx, (frame[1].o));
	LINE_NUMBER(414);
	((func_mindustry_ui_dialogs_SchematicsDialog_tagsChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_tagsChanged])(ctx, (frame[0].o));
	LINE_NUMBER(415);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_showNewTag_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:showNewTag", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(419);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@schematic.addtag"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8""_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_35(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_35 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_35);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(428);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_showNewIconTag_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:showNewIconTag", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(431);
	clinit_mindustry_ui_dialogs_SchematicsDialog$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog$2);
	init_mindustry_ui_dialogs_SchematicsDialog$2_mindustry_ui_dialogs_SchematicsDialog_arc_func_Cons(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(485);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SchematicsDialog$2_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog$2_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_showAllTags(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:showAllTags", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(489);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@schematic.edittags"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(490);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(491);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Runnable, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[2].o = sp[0].o;
	LINE_NUMBER(492);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_36(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_36 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_36);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jint temp0 = jint(0);
	LINE_NUMBER(613);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(614);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(615);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_buildTags_mindustry_game_Schematic_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:buildTags", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(618);
	((func_mindustry_ui_dialogs_SchematicsDialog_buildTags_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_buildTags_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	LINE_NUMBER(619);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_buildTags_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:buildTags", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(622);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[2].o));
	LINE_NUMBER(625);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_labels;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Floatf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(627);
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@schematic.tags"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	}
label_3:;
	{
	LINE_NUMBER(628);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_37(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_37 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_37);
		proxy->F_field3 = (frame[3].i);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(641);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(42.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollY_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollY_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(643);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_addSmall;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_47(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_47 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_47);
		proxy->F_field3 = (frame[3].i);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(42.0f);
	LINE_NUMBER(697);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@schematic.addtag"_j))));
	LINE_NUMBER(698);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_SchematicsDialog_show_R_arc_scene_ui_Dialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:show", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(702);
	sp[0].o = (jobject)M_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog(ctx, (frame[0].o));
	LINE_NUMBER(704);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isDesktop_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isDesktop_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(705);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(708);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$4_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$buildTags$4", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(644);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@schematic.addtag"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(645);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[4].o));
	LINE_NUMBER(646);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[4].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_38(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_38 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_38);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (frame[3].i);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(696);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[4].o));
	LINE_NUMBER(697);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$5_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$buildTags$5", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(646);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_48(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_48 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_48);
		proxy->F_field5 = (jref) (frame[4].o);
		proxy->F_field4 = (frame[3].i);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SchematicsDialog_resized_boolean_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_resized_boolean_java_lang_Runnable])(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$6_arc_scene_ui_layout_Table_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$buildTags$6", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(647);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(648);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(650);
	frame[6].f = (jfloat(0));
	LINE_NUMBER(651);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(652);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(653);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[2].o)))->F_labels;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[9].o));
	if (temp0 == 0) goto label_8;
	}
	goto label_5;
label_8:;
	{
	LINE_NUMBER(655);
	sp[0].o = frame[9].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_49(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_49 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_49);
		proxy->F_field5 = (jref) (frame[5].o);
		proxy->F_field4 = (frame[4].i);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[9].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_utils_Elem_newButton_java_lang_String_java_lang_Runnable_R_arc_scene_ui_TextButton(ctx, sp[0].o, sp[1].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(660);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (frame[10].o));
	((func_arc_scene_ui_Label_setWrap_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setWrap_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(662);
	((func_arc_scene_ui_TextButton_pack) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_TextButton_pack])(ctx, (frame[10].o));
	LINE_NUMBER(663);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_TextButton_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getPrefWidth_R_float])(ctx, (frame[10].o));
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(6.0f)));
	frame[11].f = (temp0 + temp1);
	LINE_NUMBER(665);
	jfloat temp2 = (frame[11].f) + (frame[6].f);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp4 = jfloat(temp3);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp5 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	sp[0].f = temp2;
	sp[1].f = temp4;
	sp += 2;
	if (temp5 == 0) goto label_13;
	}
	INST_FCONST(1);
	goto label_14;
label_13:;
	(sp++)->f = jfloat(0.8f);
label_14:;
	{
	sp -= 3;
	if ((floatCompare(sp[0].f, (sp[1].f * sp[2].f), -1)) < 0) goto label_15;
	}
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[7].o));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(667);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(668);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[7].o));
	LINE_NUMBER(669);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[7].o), (frame[10].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(42.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(670);
	frame[6].f = (jfloat(0));
	goto label_21;
	}
label_15:;
	{
	LINE_NUMBER(672);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[7].o), (frame[10].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(42.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	}
label_21:;
	{
	LINE_NUMBER(675);
	frame[6].f = ((frame[6].f) + (frame[11].f));
	LINE_NUMBER(676);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(678);
	if ((floatCompare((frame[6].f), (jfloat(0)), -1)) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(679);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[7].o));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_23:;
	{
	LINE_NUMBER(682);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_39(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_39 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_39);
		proxy->F_field4 = (frame[4].i);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[8].o = sp[0].o;
	LINE_NUMBER(688);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(690);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_40(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_40 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_40);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(695);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$9_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$buildTags$9", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(691);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(42.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(692);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@schematic.texttag"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_50(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_50 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_50);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrapLabel_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrapLabel_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(693);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@schematic.icontag"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_51(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_51 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_51);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrapLabel_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrapLabel_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(694);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$11_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$buildTags$11", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(693);
	((func_mindustry_ui_dialogs_SchematicsDialog_showNewIconTag_arc_func_Cons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_showNewIconTag_arc_func_Cons])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$10_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$buildTags$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(692);
	((func_mindustry_ui_dialogs_SchematicsDialog_showNewTag_arc_func_Cons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_showNewTag_arc_func_Cons])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$8_mindustry_ui_dialogs_BaseDialog_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$buildTags$8", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(683);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(684);
	((func_mindustry_ui_dialogs_SchematicsDialog_addTag_mindustry_game_Schematic_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_addTag_mindustry_game_Schematic_java_lang_String])(ctx, (frame[0].o), (frame[2].o), (frame[5].o));
	LINE_NUMBER(685);
	((func_mindustry_ui_dialogs_SchematicsDialog_buildTags_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_buildTags_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean])(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(686);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$7_mindustry_game_Schematic_java_lang_String_arc_scene_ui_layout_Table_boolean_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$buildTags$7", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(656);
	((func_mindustry_ui_dialogs_SchematicsDialog_addTag_mindustry_game_Schematic_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_addTag_mindustry_game_Schematic_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(657);
	((func_mindustry_ui_dialogs_SchematicsDialog_buildTags_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_buildTags_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(658);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[5].o));
	LINE_NUMBER(659);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$1_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$buildTags$1", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(629);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(630);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(42.0f)));
	LINE_NUMBER(631);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_labels;
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
	frame[6].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(632);
	sp[0].o = frame[4].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_41(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_41 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_41);
		proxy->F_field4 = (frame[3].i);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(639);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(641);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$2_java_lang_String_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$buildTags$2", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(633);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[5].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(42.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(634);
	sp[0].o = frame[5].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_cancelSmall;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_52(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_52 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_52);
		proxy->F_field4 = (frame[4].i);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(42.0f);
	LINE_NUMBER(637);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-9.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-9.0f)));
	LINE_NUMBER(638);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$3_mindustry_game_Schematic_java_lang_String_arc_scene_ui_layout_Table_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$buildTags$3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(635);
	((func_mindustry_ui_dialogs_SchematicsDialog_removeTag_mindustry_game_Schematic_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_removeTag_mindustry_game_Schematic_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(636);
	((func_mindustry_ui_dialogs_SchematicsDialog_buildTags_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_buildTags_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(637);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$0_java_lang_String_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$buildTags$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(625);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$0_Array1_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(493);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_53(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_53 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_53);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(612);
	((func_mindustry_ui_dialogs_SchematicsDialog_resized_boolean_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_resized_boolean_java_lang_Runnable])(ctx, (frame[0].o), (jint(1)), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(613);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$1_arc_scene_ui_layout_Table_Array1_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$1", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(494);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(495);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(12.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(497);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(498);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(500);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(501);
	frame[8].f = (jfloat(40.0f));
	LINE_NUMBER(503);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_42(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_42 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_42);
		proxy->F_field4 = (jref) (frame[3].o);
		proxy->F_field3 = (frame[8].f);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(584);
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, (frame[9].o));
	LINE_NUMBER(585);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Table_getWidth_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getWidth_R_float])(ctx, (frame[9].o));
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(9.0f)));
	frame[10].f = (temp0 + temp1);
	LINE_NUMBER(587);
	jfloat temp2 = ((frame[10].f) * (jfloat(2))) + (frame[4].f);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	if ((floatCompare(temp2, ((jfloat(temp3)) * (jfloat(0.9f))), -1)) < 0) goto label_12;
	}
	{
	LINE_NUMBER(588);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[5].o));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(589);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(590);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	LINE_NUMBER(591);
	frame[4].f = (jfloat(0));
	}
label_12:;
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[5].o), (frame[9].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(210.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(596);
	frame[4].f = ((frame[4].f) + (frame[10].f));
	LINE_NUMBER(597);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(599);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(600);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[5].o));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_19:;
	{
	LINE_NUMBER(603);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_43(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_43 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_43);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(610);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$15_Array1_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$15", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(604);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(42.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(606);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@schematic.texttag"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_54(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_54 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_54);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrapLabel_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrapLabel_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(607);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@schematic.icontag"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_55(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_55 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_55);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrapLabel_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrapLabel_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(608);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$18_Array1_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$18", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(607);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_44(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_44 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_44);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SchematicsDialog_showNewIconTag_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_showNewIconTag_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$19_Array1_java_lang_Runnable_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$19", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(607);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$16_Array1_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$16", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(606);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_45(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_45 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_45);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SchematicsDialog_showNewTag_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_showNewTag_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$17_Array1_java_lang_Runnable_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$17", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(606);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$2_java_lang_String_Array1_java_lang_Runnable_float_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$2", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(504);
	sp[0].o = frame[5].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(505);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o), (jfloat(5.0f)));
	LINE_NUMBER(507);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_46(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_46 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_46);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(527);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(529);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_47(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_47 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_47);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(538);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(540);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_48(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_48 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_48);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(581);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(582);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$10_java_lang_String_Array1_java_lang_Runnable_float_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$10", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(541);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o), (jfloat(2)));
	LINE_NUMBER(544);
	sp[0].o = frame[4].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencil;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_56(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_56 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_56);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = frame[3].f;
	LINE_NUMBER(564);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@schematic.renametag"_j))));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(566);
	sp[0].o = frame[4].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_trash;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_57(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_57 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_57);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp1 = frame[3].f;
	LINE_NUMBER(580);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@save.delete"_j))));
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$13_java_lang_String_Array1_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$13", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(567);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@schematic.tagdelconfirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_58(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_58 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_58);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$14_java_lang_String_Array1_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$14", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(568);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	sp[0].o = (jobject)((func_mindustry_game_Schematics_all_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_all_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_game_Schematic, sp[0].o));
	LINE_NUMBER(569);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[4].o)))->F_labels;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(570);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[4].o)))->F_labels;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(571);
	((func_mindustry_game_Schematic_save) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_game_Schematic_save])(ctx, (frame[4].o));
	}
label_4:;
	LINE_NUMBER(573);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(574);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_selectedTags;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(575);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	jint temp1 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(576);
	((func_mindustry_ui_dialogs_SchematicsDialog_tagsChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_tagsChanged])(ctx, (frame[0].o));
	LINE_NUMBER(577);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_rebuildPane;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(578);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	LINE_NUMBER(579);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$11_java_lang_String_Array1_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$11", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(545);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@schematic.renametag"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@name"_j));
	sp[3].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_49(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_49 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_49);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(564);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$12_java_lang_String_Array1_java_lang_Runnable_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$12", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(547);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(549);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(550);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@schematic.tagexists"_j))));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(552);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	sp[0].o = (jobject)((func_mindustry_game_Schematics_all_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_all_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_game_Schematic, sp[0].o));
	LINE_NUMBER(553);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[5].o)))->F_labels;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(554);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[5].o)))->F_labels;
	jint temp0 = (jint)((func_arc_struct_Seq_replace_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_replace_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	LINE_NUMBER(555);
	((func_mindustry_game_Schematic_save) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_game_Schematic_save])(ctx, (frame[5].o));
	}
label_8:;
	LINE_NUMBER(557);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(558);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_selectedTags;
	jint temp0 = (jint)((func_arc_struct_Seq_replace_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_replace_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	LINE_NUMBER(559);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	jint temp1 = (jint)((func_arc_struct_Seq_replace_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_replace_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	LINE_NUMBER(560);
	((func_mindustry_ui_dialogs_SchematicsDialog_tagsChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_tagsChanged])(ctx, (frame[0].o));
	LINE_NUMBER(561);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	}
label_4:;
	LINE_NUMBER(563);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$6_java_lang_String_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$6", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(530);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(531);
	sp[0].o = frame[3].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"schematic.tagged"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[4].o = (jobject)SF_mindustry_Vars_schematics;
	sp[4].o = (jobject)((func_mindustry_game_Schematics_all_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_game_Schematics_all_R_arc_struct_Seq])(ctx, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Boolf_2);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[5].o = (jobject) proxy;
	}
	jint temp1 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[4].o, sp[5].o);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_50(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_50 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_50);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(532);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_59(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_59 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_59);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Label_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(538);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$9_mindustry_ui_dialogs_BaseDialog_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$9", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(533);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(534);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_selectedTags;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(535);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_rebuildTags;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(536);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_rebuildPane;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(537);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$8_arc_scene_ui_Label(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$8", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(532);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_scene_ui_Label_hasMouse_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_hasMouse_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
	goto label_2;
label_1:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_lightGray;
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_Label_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$7_java_lang_String_mindustry_game_Schematic_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_labels;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$3_java_lang_String_Array1_java_lang_Runnable_float_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$3", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(510);
	sp[0].o = frame[4].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_upOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_60(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_60 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_60);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = frame[3].f;
	LINE_NUMBER(517);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.moveup"_j))));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(519);
	sp[0].o = frame[4].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_61(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_61 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_61);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp1 = frame[3].f;
	LINE_NUMBER(526);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.movedown"_j))));
	LINE_NUMBER(527);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$5_java_lang_String_Array1_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$5", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(521);
	jint temp1 = frame[3].i;
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	if (temp1 >= (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)))) goto label_2;
	}
	{
	LINE_NUMBER(522);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	((func_arc_struct_Seq_swap_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_swap_int_int])(ctx, sp[0].o, (frame[3].i), ((frame[3].i) + (jint(1))));
	LINE_NUMBER(523);
	((func_mindustry_ui_dialogs_SchematicsDialog_tagsChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_tagsChanged])(ctx, (frame[0].o));
	LINE_NUMBER(524);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	}
label_2:;
	LINE_NUMBER(526);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$4_java_lang_String_Array1_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showAllTags$4", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(512);
	if ((frame[3].i) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	((func_arc_struct_Seq_swap_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_swap_int_int])(ctx, sp[0].o, (frame[3].i), ((frame[3].i) - (jint(1))));
	LINE_NUMBER(514);
	((func_mindustry_ui_dialogs_SchematicsDialog_tagsChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_tagsChanged])(ctx, (frame[0].o));
	LINE_NUMBER(515);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	}
label_2:;
	LINE_NUMBER(517);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showNewTag$0_arc_func_Cons_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showNewTag$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(421);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@schematic.tagexists"_j))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(424);
	((func_mindustry_ui_dialogs_SchematicsDialog_tagsChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_tagsChanged])(ctx, (frame[0].o));
	LINE_NUMBER(425);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	}
label_3:;
	LINE_NUMBER(427);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showExport$0_mindustry_game_Schematic_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showExport$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(10.0f)));
	LINE_NUMBER(303);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_51(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_51 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_51);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showExport$1_mindustry_game_Schematic_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showExport$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(304);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatt;
	frame[3].o = sp[0].o;
	LINE_NUMBER(305);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(306);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_steam) == 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_game_Schematic_hasSteamID_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematic_hasSteamID_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(307);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@workshop.share"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_book;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_62(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_62 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_62);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(308);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(309);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(310);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	}
label_3:;
	{
	LINE_NUMBER(312);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@copy.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_copy;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_63(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_63 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_63);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(316);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(317);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(318);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@export.file"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_export;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_64(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_64 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_64);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(12.0f);
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showExport$4_mindustry_ui_dialogs_BaseDialog_mindustry_game_Schematic(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showExport$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(319);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(320);
	sp[0].o = (jobject)((func_mindustry_game_Schematic_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Schematic_name_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"msch"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_mindustry_core_Platform$FileWriter_1(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_mindustry_core_Platform$FileWriter_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_mindustry_core_Platform$FileWriter_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_ui_FileChooser_export_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showExport$5_mindustry_game_Schematic_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showExport$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(320);
	SM_mindustry_game_Schematics_write_mindustry_game_Schematic_arc_files_Fi(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showExport$3_mindustry_ui_dialogs_BaseDialog_mindustry_game_Schematic(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showExport$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(313);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(314);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoFade_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@copied"_j))));
	LINE_NUMBER(315);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_schematics;
	sp[1].o = (jobject)((func_mindustry_game_Schematics_writeBase64_mindustry_game_Schematic_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Schematics_writeBase64_mindustry_game_Schematic_R_java_lang_String])(ctx, sp[1].o, (frame[1].o));
	((func_arc_Application_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showExport$2_mindustry_game_Schematic(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showExport$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(308);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_publish_mindustry_type_Publishable) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_publish_mindustry_type_Publishable, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showImport$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(10.0f)));
	LINE_NUMBER(229);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_52(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_52 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_52);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$1_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showImport$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(230);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatt;
	frame[3].o = sp[0].o;
	LINE_NUMBER(231);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(232);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(233);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@load.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_copy;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_65(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_65 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_65);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(247);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(248);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@import.file"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_66(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_66 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_66);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(12.0f);
	LINE_NUMBER(270);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(271);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(272);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_steam) == 0) goto label_10;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@workshop.browse"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_book;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_67(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_67 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_67);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(276);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	}
label_10:;
	LINE_NUMBER(278);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$6_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showImport$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(274);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(275);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_openWorkshop) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_openWorkshop, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$4_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showImport$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"msch"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_53(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_53 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_53);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$5_mindustry_ui_dialogs_BaseDialog_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showImport$5", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(249);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(251);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(253);
	frame[4].o = (frame[2].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_10;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)SM_mindustry_game_Schematics_read_arc_files_Fi_R_mindustry_game_Schematic(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(256);
	((func_mindustry_game_Schematic_removeSteamID) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_game_Schematic_removeSteamID])(ctx, (frame[8].o));
	LINE_NUMBER(257);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	((func_mindustry_game_Schematics_add_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_add_mindustry_game_Schematic])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(258);
	((func_mindustry_ui_dialogs_SchematicsDialog_checkTags_mindustry_game_Schematic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_checkTags_mindustry_game_Schematic])(ctx, (frame[0].o), (frame[8].o));
	LINE_NUMBER(259);
	frame[3].o = (frame[8].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(262);
	goto label_15;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(260);
	frame[8].o = sp[0].o;
	LINE_NUMBER(261);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[8].o));
	}
label_15:;
	{
	LINE_NUMBER(253);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(265);
	if ((frame[3].o) == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(266);
	((func_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic])(ctx, (frame[0].o), (frame[3].o));
	}
label_17:;
	{
	LINE_NUMBER(269);
	((func_mindustry_ui_dialogs_SchematicsDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$3_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showImport$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(246);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[0].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[0].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bXNjaA"_j))));
	if (temp0 != 0) goto label_2;
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

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$2_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$showImport$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(234);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(236);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[0].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)SM_mindustry_game_Schematics_readBase64_java_lang_String_R_mindustry_game_Schematic(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(237);
	((func_mindustry_game_Schematic_removeSteamID) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Schematic_removeSteamID])(ctx, (frame[2].o));
	LINE_NUMBER(238);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	((func_mindustry_game_Schematics_add_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_add_mindustry_game_Schematic])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(239);
	((func_mindustry_ui_dialogs_SchematicsDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(240);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoFade_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@schematic.saved"_j))));
	LINE_NUMBER(241);
	((func_mindustry_ui_dialogs_SchematicsDialog_checkTags_mindustry_game_Schematic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_checkTags_mindustry_game_Schematic])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(242);
	((func_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic])(ctx, (frame[0].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(245);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(243);
	frame[2].o = sp[0].o;
	LINE_NUMBER(244);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[2].o));
	}
label_11:;
	LINE_NUMBER(246);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$6_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(122);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_68(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_68 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_68);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_69(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_69 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_69);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK(sp[0].o))->F_rebuildPane = (jref) sp[1].o;
	LINE_NUMBER(217);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_rebuildPane;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$8_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$8", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(134);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp1 = jfloat(temp0);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(230.0f)));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint((temp1 / temp2))), (jint(1)));
	frame[2].i = temp3;
	LINE_NUMBER(136);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[1].o));
	LINE_NUMBER(137);
	frame[3].i = (jint(0));
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_ignoreSymbols;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_search;
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_replaceAll_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_replaceAll_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(140);
	((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_firstSchematic = (jref) (jobject(nullptr));
	LINE_NUMBER(142);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	sp[0].o = (jobject)((func_mindustry_game_Schematics_all_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_all_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_game_Schematic, sp[0].o));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_selectedTags;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[6].o)))->F_labels;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_selectedTags;
	jint temp0 = (jint)((func_arc_struct_Seq_containsAll_arc_struct_Seq_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_containsAll_arc_struct_Seq_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_9;
	}
	goto label_6;
label_9:;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_search;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_ignoreSymbols;
	sp[1].o = (jobject)((func_mindustry_game_Schematic_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_game_Schematic_name_R_java_lang_String])(ctx, (frame[6].o));
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_replaceAll_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_replaceAll_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (frame[4].o));
	if (temp0 != 0) goto label_10;
	}
	goto label_6;
label_10:;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_firstSchematic;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_firstSchematic = (jref) (frame[6].o);
	}
label_11:;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_ui_Button, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[7].o = sp[0].o;
	LINE_NUMBER(150);
	sp[0].o = frame[7].o;
	jint temp0 = jint(0);
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_54(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_54 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_54);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_70(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_70 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_70);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp1 = jfloat(4.0f);
	LINE_NUMBER(199);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, temp1);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flati;
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_arc_scene_ui_Button, sp[1].o));
	LINE_NUMBER(201);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_getStyle_R_arc_scene_ui_Button$ButtonStyle) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_Button_getStyle_R_arc_scene_ui_Button$ButtonStyle])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)))));
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_pane;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_up = (jref) sp[1].o;
	LINE_NUMBER(203);
	INST_IINC(3, 1);
	if (((frame[3].i) % (frame[2].i)) != 0) goto label_16;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_16:;
	LINE_NUMBER(206);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_firstSchematic;
	if (sp[0].o != nullptr) goto label_18;
	}
	{
	LINE_NUMBER(209);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_selectedTags;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@none.found"_j))));
	goto label_18;
	}
label_21:;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@none"_j))));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_18:;
	LINE_NUMBER(215);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$19_Array1_arc_scene_ui_Button_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$19", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(188);
	jint temp0 = (jint)((func_arc_scene_ui_Button_childrenPressed_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_Button_childrenPressed_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(189);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(190);
	((func_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic])(ctx, (frame[0].o), (frame[2].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(192);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_schematicsAllowed) != 0) goto label_5;
	}
	{
	LINE_NUMBER(193);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@schematic.disabled"_j))));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(195);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((func_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(196);
	((func_mindustry_ui_dialogs_SchematicsDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_hide])(ctx, (frame[0].o));
	}
label_4:;
	LINE_NUMBER(199);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$9_mindustry_game_Schematic_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$9", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Button_top_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Button_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(0)));
	LINE_NUMBER(153);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_55(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_55 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_55);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(177);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Button_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(179);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_ui_dialogs_SchematicsDialog$SchematicImage(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog$SchematicImage);
	init_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_mindustry_game_Schematic(ctx, sp[2].o, (frame[1].o));
	clinit_arc_util_Scaling(ctx);
	sp[3].o = (jobject)SF_arc_util_Scaling_fit;
	sp[2].o = (jobject)((func_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_56(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_56 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_56);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Table_arc_func_Cons(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = jfloat(200.0f);
	LINE_NUMBER(186);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$17_mindustry_game_Schematic_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$17", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(181);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black3;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_57(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_57 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_57);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(185);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(192.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$18_mindustry_game_Schematic_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$18", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(182);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_game_Schematic_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematic_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(192.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o));
	LINE_NUMBER(183);
	((func_arc_scene_ui_Label_setEllipsis_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Label_setEllipsis_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(184);
	((func_arc_scene_ui_Label_setAlignment_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$10_mindustry_game_Schematic_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$10", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	LINE_NUMBER(157);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	frame[3].o = sp[0].o;
	LINE_NUMBER(159);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_info;
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_71(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_71 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_71);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@info.title"_j))));
	LINE_NUMBER(160);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_upload;
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_72(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_72 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_72);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.export"_j))));
	LINE_NUMBER(161);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencil;
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_73(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_73 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_73);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@schematic.edit"_j))));
	LINE_NUMBER(163);
	jint temp0 = (jint)((func_mindustry_game_Schematic_hasSteamID_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Schematic_hasSteamID_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_link;
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_74(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_74 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_74);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@view.workshop"_j))));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(166);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_trash;
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_75(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_75 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_75);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@save.delete"_j));
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	LINE_NUMBER(177);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$15_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$15", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_mod;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(168);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"mod.item.remove"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_mod;
	sp[4].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[4].o))->F_meta;
	sp[4].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[4].o))->F_displayName;
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(170);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@schematic.delete.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_76(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_76 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_76);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_3:;
	LINE_NUMBER(175);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$16_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$16", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(171);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	((func_mindustry_game_Schematics_remove_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_remove_mindustry_game_Schematic])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(172);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_rebuildPane;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$14_mindustry_game_Schematic(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$14", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(164);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_viewListing_mindustry_type_Publishable) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_viewListing_mindustry_type_Publishable, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$13_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$13", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	((func_mindustry_ui_dialogs_SchematicsDialog_showEdit_mindustry_game_Schematic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_showEdit_mindustry_game_Schematic])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$12_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$12", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(160);
	((func_mindustry_ui_dialogs_SchematicsDialog_showExport_mindustry_game_Schematic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_showExport_mindustry_game_Schematic])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$11_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$11", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(159);
	((func_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$7(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_chat;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_firstSchematic;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(124);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_schematicsAllowed) != 0) goto label_3;
	}
	{
	LINE_NUMBER(125);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@schematic.disabled"_j))));
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(127);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_firstSchematic;
	((func_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(128);
	((func_mindustry_ui_dialogs_SchematicsDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_hide])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(131);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(91);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@schematic.tags"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(94);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_noBarPane;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_58(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_58 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_58);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(42.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollY_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollY_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(114);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencilSmall;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_77(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_77 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_77);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(42.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@schematic.edittags"_j))));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$2_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_78(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_78 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_78);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK(sp[0].o))->F_rebuildTags = (jref) sp[1].o;
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_rebuildTags;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$3_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(97);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(42.0f)));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(101);
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_togglet;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_79(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_79 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_79);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_selectedTags;
	sp[2].o = frame[3].o;
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_59(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_59 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog_invoke_arc_func_Cons_59);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(109);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$5_arc_scene_ui_TextButton(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (frame[0].o));
	((func_arc_scene_ui_Label_setWrap_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setWrap_boolean])(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$4_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_selectedTags;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_selectedTags;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_selectedTags;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_3:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_rebuildPane;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$setup$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(83);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(84);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$new$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$new$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK(sp[1].o))->F_search = (jref) sp[2].o;
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(67);
	((func_mindustry_ui_dialogs_SchematicsDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$new$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$new$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_search;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(55);
	((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_search = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	((func_arc_scene_ui_TextField_clearText) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_clearText])(ctx, sp[0].o);
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_rebuildPane;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog_lambda$new$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$new$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_searchField;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[1].o);
	((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK(sp[0].o))->F_search = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog *) NULL_CHECK((frame[0].o)))->F_rebuildPane;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SchematicsDialog_lambda$new$1(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$new$1", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_SchematicsDialog_lambda$new$0(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog:lambda$new$0", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog(ctx);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_SchematicsDialog[] {
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
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_show_R_arc_scene_ui_Dialog,
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
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$new$1,
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$new$0,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_setup,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_showImport,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_importAndShow_arc_files_Fi,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_showExport_mindustry_game_Schematic,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_showEdit_mindustry_game_Schematic,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_checkTags,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_checkTags_mindustry_game_Schematic,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_tagsChanged,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_addTag_mindustry_game_Schematic_java_lang_String,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_removeTag_mindustry_game_Schematic_java_lang_String,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_showNewTag_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_showNewIconTag_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_showAllTags,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_buildTags_mindustry_game_Schematic_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_buildTags_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$4_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$5_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$6_arc_scene_ui_layout_Table_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$9_arc_func_Cons_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$11_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$10_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$8_mindustry_ui_dialogs_BaseDialog_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_java_lang_String,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$7_mindustry_game_Schematic_java_lang_String_arc_scene_ui_layout_Table_boolean_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$1_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$2_java_lang_String_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$3_mindustry_game_Schematic_java_lang_String_arc_scene_ui_layout_Table_boolean,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$0_java_lang_String_R_float,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$0_Array1_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$1_arc_scene_ui_layout_Table_Array1_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$15_Array1_java_lang_Runnable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$18_Array1_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$16_Array1_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$2_java_lang_String_Array1_java_lang_Runnable_float_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$10_java_lang_String_Array1_java_lang_Runnable_float_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$13_java_lang_String_Array1_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$14_java_lang_String_Array1_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$11_java_lang_String_Array1_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$12_java_lang_String_Array1_java_lang_Runnable_java_lang_String,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$6_java_lang_String_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$9_mindustry_ui_dialogs_BaseDialog_java_lang_String,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$3_java_lang_String_Array1_java_lang_Runnable_float_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$5_java_lang_String_Array1_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$4_java_lang_String_Array1_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showNewTag$0_arc_func_Cons_java_lang_String,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$1_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$4_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$5_mindustry_ui_dialogs_BaseDialog_Array1_arc_files_Fi,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$2_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$6_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$8_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$19_Array1_arc_scene_ui_Button_mindustry_game_Schematic,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$9_mindustry_game_Schematic_arc_scene_ui_Button,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$10_mindustry_game_Schematic_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$15_mindustry_game_Schematic,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$16_mindustry_game_Schematic,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$13_mindustry_game_Schematic,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$12_mindustry_game_Schematic,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$11_mindustry_game_Schematic,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$7,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$2_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$3_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$4_java_lang_String,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$new$4,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$new$3,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_lambda$new$2,
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
	{ "setup", "()V" },
	{ "showInfo", "(Lmindustry/game/Schematic;)V" },
	{ "showImport", "()V" },
	{ "importAndShow", "(Larc/files/Fi;)V" },
	{ "showExport", "(Lmindustry/game/Schematic;)V" },
	{ "showEdit", "(Lmindustry/game/Schematic;)V" },
	{ "checkTags", "()V" },
	{ "checkTags", "(Lmindustry/game/Schematic;)V" },
	{ "tagsChanged", "()V" },
	{ "addTag", "(Lmindustry/game/Schematic;Ljava/lang/String;)V" },
	{ "removeTag", "(Lmindustry/game/Schematic;Ljava/lang/String;)V" },
	{ "showNewTag", "(Larc/func/Cons;)V" },
	{ "showNewIconTag", "(Larc/func/Cons;)V" },
	{ "showAllTags", "()V" },
	{ "buildTags", "(Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;)V" },
	{ "buildTags", "(Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;Z)V" },
	{ "lambda$buildTags$4", "(Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;Z)V" },
	{ "lambda$buildTags$5", "(Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;ZLmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildTags$6", "(Larc/scene/ui/layout/Table;Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;ZLmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$buildTags$9", "(Larc/func/Cons;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildTags$11", "(Larc/func/Cons;)V" },
	{ "lambda$buildTags$10", "(Larc/func/Cons;)V" },
	{ "lambda$buildTags$8", "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;ZLjava/lang/String;)V" },
	{ "lambda$buildTags$7", "(Lmindustry/game/Schematic;Ljava/lang/String;Larc/scene/ui/layout/Table;ZLmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$buildTags$1", "(Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;ZLarc/scene/ui/layout/Table;)V" },
	{ "lambda$buildTags$2", "(Ljava/lang/String;Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;ZLarc/scene/ui/layout/Table;)V" },
	{ "lambda$buildTags$3", "(Lmindustry/game/Schematic;Ljava/lang/String;Larc/scene/ui/layout/Table;Z)V" },
	{ "lambda$buildTags$0", "(Ljava/lang/String;)F" },
	{ "lambda$showAllTags$0", "([Ljava/lang/Runnable;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showAllTags$1", "(Larc/scene/ui/layout/Table;[Ljava/lang/Runnable;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$showAllTags$15", "([Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showAllTags$18", "([Ljava/lang/Runnable;)V" },
	{ "lambda$showAllTags$16", "([Ljava/lang/Runnable;)V" },
	{ "lambda$showAllTags$2", "(Ljava/lang/String;[Ljava/lang/Runnable;FLmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showAllTags$10", "(Ljava/lang/String;[Ljava/lang/Runnable;FLarc/scene/ui/layout/Table;)V" },
	{ "lambda$showAllTags$13", "(Ljava/lang/String;[Ljava/lang/Runnable;)V" },
	{ "lambda$showAllTags$14", "(Ljava/lang/String;[Ljava/lang/Runnable;)V" },
	{ "lambda$showAllTags$11", "(Ljava/lang/String;[Ljava/lang/Runnable;)V" },
	{ "lambda$showAllTags$12", "(Ljava/lang/String;[Ljava/lang/Runnable;Ljava/lang/String;)V" },
	{ "lambda$showAllTags$6", "(Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showAllTags$9", "(Lmindustry/ui/dialogs/BaseDialog;Ljava/lang/String;)V" },
	{ "lambda$showAllTags$3", "(Ljava/lang/String;[Ljava/lang/Runnable;FLarc/scene/ui/layout/Table;)V" },
	{ "lambda$showAllTags$5", "(Ljava/lang/String;[Ljava/lang/Runnable;)V" },
	{ "lambda$showAllTags$4", "(Ljava/lang/String;[Ljava/lang/Runnable;)V" },
	{ "lambda$showNewTag$0", "(Larc/func/Cons;Ljava/lang/String;)V" },
	{ "lambda$showImport$0", "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showImport$1", "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showImport$4", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$showImport$5", "(Lmindustry/ui/dialogs/BaseDialog;[Larc/files/Fi;)V" },
	{ "lambda$showImport$2", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$setup$6", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$8", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$19", "([Larc/scene/ui/Button;Lmindustry/game/Schematic;)V" },
	{ "lambda$setup$9", "(Lmindustry/game/Schematic;Larc/scene/ui/Button;)V" },
	{ "lambda$setup$10", "(Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$15", "(Lmindustry/game/Schematic;)V" },
	{ "lambda$setup$16", "(Lmindustry/game/Schematic;)V" },
	{ "lambda$setup$13", "(Lmindustry/game/Schematic;)V" },
	{ "lambda$setup$12", "(Lmindustry/game/Schematic;)V" },
	{ "lambda$setup$11", "(Lmindustry/game/Schematic;)V" },
	{ "lambda$setup$7", "()V" },
	{ "lambda$setup$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$2", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$3", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$4", "(Ljava/lang/String;)V" },
	{ "lambda$setup$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$4", "()V" },
	{ "lambda$new$3", "()V" },
	{ "lambda$new$2", "()V" },
};

static jclass innerClasses[] {
	&class_mindustry_ui_dialogs_SchematicsDialog$SchematicInfoDialog,
	&class_mindustry_ui_dialogs_SchematicsDialog$SchematicImage,
};

static FieldMetadata fields[] {
	{ "tagh", &class_float, (intptr_t) &SF_mindustry_ui_dialogs_SchematicsDialog_tagh, "F", 26 },
	{ "info", &class_mindustry_ui_dialogs_SchematicsDialog$SchematicInfoDialog, offsetof(mindustry_ui_dialogs_SchematicsDialog, F_info), "Lmindustry/ui/dialogs/SchematicsDialog$SchematicInfoDialog;", 2 },
	{ "firstSchematic", &class_mindustry_game_Schematic, offsetof(mindustry_ui_dialogs_SchematicsDialog, F_firstSchematic), "Lmindustry/game/Schematic;", 2 },
	{ "search", &class_java_lang_String, offsetof(mindustry_ui_dialogs_SchematicsDialog, F_search), "Ljava/lang/String;", 2 },
	{ "searchField", &class_arc_scene_ui_TextField, offsetof(mindustry_ui_dialogs_SchematicsDialog, F_searchField), "Larc/scene/ui/TextField;", 2 },
	{ "rebuildPane", &class_java_lang_Runnable, offsetof(mindustry_ui_dialogs_SchematicsDialog, F_rebuildPane), "Ljava/lang/Runnable;", 2 },
	{ "rebuildTags", &class_java_lang_Runnable, offsetof(mindustry_ui_dialogs_SchematicsDialog, F_rebuildTags), "Ljava/lang/Runnable;", 2 },
	{ "ignoreSymbols", &class_java_util_regex_Pattern, offsetof(mindustry_ui_dialogs_SchematicsDialog, F_ignoreSymbols), "Ljava/util/regex/Pattern;", 2 },
	{ "tags", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_SchematicsDialog, F_tags), "Larc/struct/Seq;", 2 },
	{ "selectedTags", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_SchematicsDialog, F_selectedTags), "Larc/struct/Seq;", 2 },
	{ "checkedTags", &class_boolean, offsetof(mindustry_ui_dialogs_SchematicsDialog, F_checkedTags), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_SchematicsDialog, 0, "()V", 1 },
	{ "setup", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_setup, VTABLE_mindustry_ui_dialogs_SchematicsDialog_setup, "()V", 0 },
	{ "showInfo", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic, VTABLE_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic, "(Lmindustry/game/Schematic;)V", 1 },
	{ "showImport", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_showImport, VTABLE_mindustry_ui_dialogs_SchematicsDialog_showImport, "()V", 1 },
	{ "importAndShow", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_importAndShow_arc_files_Fi, VTABLE_mindustry_ui_dialogs_SchematicsDialog_importAndShow_arc_files_Fi, "(Larc/files/Fi;)V", 1 },
	{ "showExport", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_showExport_mindustry_game_Schematic, VTABLE_mindustry_ui_dialogs_SchematicsDialog_showExport_mindustry_game_Schematic, "(Lmindustry/game/Schematic;)V", 1 },
	{ "showEdit", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_showEdit_mindustry_game_Schematic, VTABLE_mindustry_ui_dialogs_SchematicsDialog_showEdit_mindustry_game_Schematic, "(Lmindustry/game/Schematic;)V", 1 },
	{ "checkTags", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_checkTags, VTABLE_mindustry_ui_dialogs_SchematicsDialog_checkTags, "()V", 0 },
	{ "checkTags", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_checkTags_mindustry_game_Schematic, VTABLE_mindustry_ui_dialogs_SchematicsDialog_checkTags_mindustry_game_Schematic, "(Lmindustry/game/Schematic;)V", 0 },
	{ "tagsChanged", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_tagsChanged, VTABLE_mindustry_ui_dialogs_SchematicsDialog_tagsChanged, "()V", 0 },
	{ "addTag", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_addTag_mindustry_game_Schematic_java_lang_String, VTABLE_mindustry_ui_dialogs_SchematicsDialog_addTag_mindustry_game_Schematic_java_lang_String, "(Lmindustry/game/Schematic;Ljava/lang/String;)V", 0 },
	{ "removeTag", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_removeTag_mindustry_game_Schematic_java_lang_String, VTABLE_mindustry_ui_dialogs_SchematicsDialog_removeTag_mindustry_game_Schematic_java_lang_String, "(Lmindustry/game/Schematic;Ljava/lang/String;)V", 0 },
	{ "showNewTag", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_showNewTag_arc_func_Cons, VTABLE_mindustry_ui_dialogs_SchematicsDialog_showNewTag_arc_func_Cons, "(Larc/func/Cons;)V", 0 },
	{ "showNewIconTag", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_showNewIconTag_arc_func_Cons, VTABLE_mindustry_ui_dialogs_SchematicsDialog_showNewIconTag_arc_func_Cons, "(Larc/func/Cons;)V", 0 },
	{ "showAllTags", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_showAllTags, VTABLE_mindustry_ui_dialogs_SchematicsDialog_showAllTags, "()V", 0 },
	{ "buildTags", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_buildTags_mindustry_game_Schematic_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_buildTags_mindustry_game_Schematic_arc_scene_ui_layout_Table, "(Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;)V", 0 },
	{ "buildTags", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_buildTags_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean, VTABLE_mindustry_ui_dialogs_SchematicsDialog_buildTags_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean, "(Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;Z)V", 0 },
	{ "show", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_show_R_arc_scene_ui_Dialog, VTABLE_mindustry_ui_dialogs_SchematicsDialog_show_R_arc_scene_ui_Dialog, "()Larc/scene/ui/Dialog;", 1 },
	{ "lambda$buildTags$4", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$4_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$4_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean, "(Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;Z)V", 4098 },
	{ "lambda$buildTags$5", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$5_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$5_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;ZLmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildTags$6", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$6_arc_scene_ui_layout_Table_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$6_arc_scene_ui_layout_Table_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_mindustry_ui_dialogs_BaseDialog, "(Larc/scene/ui/layout/Table;Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;ZLmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$buildTags$9", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$9_arc_func_Cons_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$9_arc_func_Cons_arc_scene_ui_layout_Table, "(Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildTags$11", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$11_arc_func_Cons, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$11_arc_func_Cons, "(Larc/func/Cons;)V", 4098 },
	{ "lambda$buildTags$10", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$10_arc_func_Cons, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$10_arc_func_Cons, "(Larc/func/Cons;)V", 4098 },
	{ "lambda$buildTags$8", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$8_mindustry_ui_dialogs_BaseDialog_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_java_lang_String, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$8_mindustry_ui_dialogs_BaseDialog_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_java_lang_String, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;ZLjava/lang/String;)V", 4098 },
	{ "lambda$buildTags$7", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$7_mindustry_game_Schematic_java_lang_String_arc_scene_ui_layout_Table_boolean_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$7_mindustry_game_Schematic_java_lang_String_arc_scene_ui_layout_Table_boolean_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/game/Schematic;Ljava/lang/String;Larc/scene/ui/layout/Table;ZLmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$buildTags$1", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$1_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$1_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_arc_scene_ui_layout_Table, "(Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;ZLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildTags$2", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$2_java_lang_String_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$2_java_lang_String_mindustry_game_Schematic_arc_scene_ui_layout_Table_boolean_arc_scene_ui_layout_Table, "(Ljava/lang/String;Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;ZLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildTags$3", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$3_mindustry_game_Schematic_java_lang_String_arc_scene_ui_layout_Table_boolean, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$3_mindustry_game_Schematic_java_lang_String_arc_scene_ui_layout_Table_boolean, "(Lmindustry/game/Schematic;Ljava/lang/String;Larc/scene/ui/layout/Table;Z)V", 4098 },
	{ "lambda$buildTags$0", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$0_java_lang_String_R_float, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$buildTags$0_java_lang_String_R_float, "(Ljava/lang/String;)F", 4098 },
	{ "lambda$showAllTags$0", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$0_Array1_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$0_Array1_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "([Ljava/lang/Runnable;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showAllTags$1", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$1_arc_scene_ui_layout_Table_Array1_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$1_arc_scene_ui_layout_Table_Array1_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog, "(Larc/scene/ui/layout/Table;[Ljava/lang/Runnable;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$showAllTags$15", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$15_Array1_java_lang_Runnable_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$15_Array1_java_lang_Runnable_arc_scene_ui_layout_Table, "([Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showAllTags$18", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$18_Array1_java_lang_Runnable, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$18_Array1_java_lang_Runnable, "([Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$showAllTags$19", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$19_Array1_java_lang_Runnable_java_lang_String, 0, "([Ljava/lang/Runnable;Ljava/lang/String;)V", 4106 },
	{ "lambda$showAllTags$16", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$16_Array1_java_lang_Runnable, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$16_Array1_java_lang_Runnable, "([Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$showAllTags$17", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$17_Array1_java_lang_Runnable_java_lang_String, 0, "([Ljava/lang/Runnable;Ljava/lang/String;)V", 4106 },
	{ "lambda$showAllTags$2", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$2_java_lang_String_Array1_java_lang_Runnable_float_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$2_java_lang_String_Array1_java_lang_Runnable_float_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Ljava/lang/String;[Ljava/lang/Runnable;FLmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showAllTags$10", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$10_java_lang_String_Array1_java_lang_Runnable_float_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$10_java_lang_String_Array1_java_lang_Runnable_float_arc_scene_ui_layout_Table, "(Ljava/lang/String;[Ljava/lang/Runnable;FLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showAllTags$13", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$13_java_lang_String_Array1_java_lang_Runnable, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$13_java_lang_String_Array1_java_lang_Runnable, "(Ljava/lang/String;[Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$showAllTags$14", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$14_java_lang_String_Array1_java_lang_Runnable, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$14_java_lang_String_Array1_java_lang_Runnable, "(Ljava/lang/String;[Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$showAllTags$11", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$11_java_lang_String_Array1_java_lang_Runnable, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$11_java_lang_String_Array1_java_lang_Runnable, "(Ljava/lang/String;[Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$showAllTags$12", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$12_java_lang_String_Array1_java_lang_Runnable_java_lang_String, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$12_java_lang_String_Array1_java_lang_Runnable_java_lang_String, "(Ljava/lang/String;[Ljava/lang/Runnable;Ljava/lang/String;)V", 4098 },
	{ "lambda$showAllTags$6", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$6_java_lang_String_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$6_java_lang_String_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showAllTags$9", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$9_mindustry_ui_dialogs_BaseDialog_java_lang_String, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$9_mindustry_ui_dialogs_BaseDialog_java_lang_String, "(Lmindustry/ui/dialogs/BaseDialog;Ljava/lang/String;)V", 4098 },
	{ "lambda$showAllTags$8", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$8_arc_scene_ui_Label, 0, "(Larc/scene/ui/Label;)V", 4106 },
	{ "lambda$showAllTags$7", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$7_java_lang_String_mindustry_game_Schematic_R_boolean, 0, "(Ljava/lang/String;Lmindustry/game/Schematic;)Z", 4106 },
	{ "lambda$showAllTags$3", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$3_java_lang_String_Array1_java_lang_Runnable_float_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$3_java_lang_String_Array1_java_lang_Runnable_float_arc_scene_ui_layout_Table, "(Ljava/lang/String;[Ljava/lang/Runnable;FLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showAllTags$5", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$5_java_lang_String_Array1_java_lang_Runnable, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$5_java_lang_String_Array1_java_lang_Runnable, "(Ljava/lang/String;[Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$showAllTags$4", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$4_java_lang_String_Array1_java_lang_Runnable, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$4_java_lang_String_Array1_java_lang_Runnable, "(Ljava/lang/String;[Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$showNewTag$0", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showNewTag$0_arc_func_Cons_java_lang_String, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showNewTag$0_arc_func_Cons_java_lang_String, "(Larc/func/Cons;Ljava/lang/String;)V", 4098 },
	{ "lambda$showExport$0", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showExport$0_mindustry_game_Schematic_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, 0, "(Lmindustry/game/Schematic;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showExport$1", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showExport$1_mindustry_game_Schematic_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, 0, "(Lmindustry/game/Schematic;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showExport$4", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showExport$4_mindustry_ui_dialogs_BaseDialog_mindustry_game_Schematic, 0, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/game/Schematic;)V", 4106 },
	{ "lambda$showExport$5", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showExport$5_mindustry_game_Schematic_arc_files_Fi, 0, "(Lmindustry/game/Schematic;Larc/files/Fi;)V", 4106 },
	{ "lambda$showExport$3", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showExport$3_mindustry_ui_dialogs_BaseDialog_mindustry_game_Schematic, 0, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/game/Schematic;)V", 4106 },
	{ "lambda$showExport$2", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showExport$2_mindustry_game_Schematic, 0, "(Lmindustry/game/Schematic;)V", 4106 },
	{ "lambda$showImport$0", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showImport$1", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$1_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$1_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showImport$6", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$6_mindustry_ui_dialogs_BaseDialog, 0, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$showImport$4", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$4_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$4_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$showImport$5", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$5_mindustry_ui_dialogs_BaseDialog_Array1_arc_files_Fi, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$5_mindustry_ui_dialogs_BaseDialog_Array1_arc_files_Fi, "(Lmindustry/ui/dialogs/BaseDialog;[Larc/files/Fi;)V", 4098 },
	{ "lambda$showImport$3", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$3_arc_scene_ui_TextButton_R_boolean, 0, "(Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$showImport$2", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$2_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showImport$2_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$setup$6", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$6_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$6_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$8", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$8_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$8_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$19", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$19_Array1_arc_scene_ui_Button_mindustry_game_Schematic, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$19_Array1_arc_scene_ui_Button_mindustry_game_Schematic, "([Larc/scene/ui/Button;Lmindustry/game/Schematic;)V", 4098 },
	{ "lambda$setup$9", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$9_mindustry_game_Schematic_arc_scene_ui_Button, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$9_mindustry_game_Schematic_arc_scene_ui_Button, "(Lmindustry/game/Schematic;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$setup$17", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$17_mindustry_game_Schematic_arc_scene_ui_layout_Table, 0, "(Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$setup$18", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$18_mindustry_game_Schematic_arc_scene_ui_layout_Table, 0, "(Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$setup$10", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$10_mindustry_game_Schematic_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$10_mindustry_game_Schematic_arc_scene_ui_layout_Table, "(Lmindustry/game/Schematic;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$15", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$15_mindustry_game_Schematic, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$15_mindustry_game_Schematic, "(Lmindustry/game/Schematic;)V", 4098 },
	{ "lambda$setup$16", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$16_mindustry_game_Schematic, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$16_mindustry_game_Schematic, "(Lmindustry/game/Schematic;)V", 4098 },
	{ "lambda$setup$14", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$14_mindustry_game_Schematic, 0, "(Lmindustry/game/Schematic;)V", 4106 },
	{ "lambda$setup$13", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$13_mindustry_game_Schematic, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$13_mindustry_game_Schematic, "(Lmindustry/game/Schematic;)V", 4098 },
	{ "lambda$setup$12", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$12_mindustry_game_Schematic, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$12_mindustry_game_Schematic, "(Lmindustry/game/Schematic;)V", 4098 },
	{ "lambda$setup$11", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$11_mindustry_game_Schematic, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$11_mindustry_game_Schematic, "(Lmindustry/game/Schematic;)V", 4098 },
	{ "lambda$setup$7", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$7, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$7, "()V", 4098 },
	{ "lambda$setup$1", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$1_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$1_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$2", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$2_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$2_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$3", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$3_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$3_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$5", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$5_arc_scene_ui_TextButton, 0, "(Larc/scene/ui/TextButton;)V", 4106 },
	{ "lambda$setup$4", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$4_java_lang_String, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$4_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$setup$0", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$0_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$setup$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$4", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$new$4, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$new$4, "()V", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$new$3, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$new$3, "()V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_lambda$new$2, VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$new$2, "()V", 4098 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$new$1, 0, "()V", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_ui_dialogs_SchematicsDialog_lambda$new$0, 0, "()V", 4106 },
};

Class class_mindustry_ui_dialogs_SchematicsDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/SchematicsDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_ui_dialogs_SchematicsDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_SchematicsDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_SchematicsDialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_SchematicsDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 89,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 366,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_SchematicsDialog = registerClass(&class_mindustry_ui_dialogs_SchematicsDialog);

}
