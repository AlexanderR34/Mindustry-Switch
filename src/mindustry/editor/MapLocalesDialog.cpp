#include "mindustry/editor/MapLocalesDialog.h"
#include "mindustry/editor/MapLocalesDialog_PropertyStatus.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_51.h"
#include "java/lang/StringBuilder.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_50.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_57.h"
#include "arc/func/Boolp.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_56.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_59.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_58.h"
#include "arc/graphics/Color.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_53.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_52.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_55.h"
#include "java/lang/Runnable.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_54.h"
#include "arc/scene/ui/Image.h"
#include "arc/struct/Seq.h"
#include "arc/Settings.h"
#include "arc/func/Boolc.h"
#include "arc/func/Boolf.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_60.h"
#include "arc/Core.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_62.h"
#include "java/util/Iterator.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_61.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_scene_ui_TextField_TextFieldFilter_1.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_68.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_67.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_69.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_64.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_63.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_66.h"
#include "arc/struct/ObjectMap_Values.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_65.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Boolf_8.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Boolf_9.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Boolf_7.h"
#include "arc/struct/ObjectMap_Keys.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_71.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_48.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_70.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_73.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_72.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "arc/scene/ui/TextField_TextFieldFilter.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_79.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_78.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_75.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_74.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_49.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_77.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_76.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_50.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_51.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_82.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_81.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_84.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_83.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_80.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_89.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "mindustry/io/JsonIO.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_86.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_85.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_88.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_87.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/Vars.h"
#include "mindustry/editor/MapEditor.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_69.h"
#include "mindustry/type/MapLocales.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_67.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_68.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_65.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_66.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_63.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_64.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Boolf_13.h"
#include "arc/scene/ui/Button.h"
#include "arc/struct/StringMap.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_72.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_73.h"
#include "arc/scene/ui/TextButton.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_70.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_71.h"
#include "arc/scene/ui/ImageButton.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Boolf_10.h"
#include "mindustry/editor/MapLocalesDialog_1.h"
#include "java/util/Locale.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Boolf_11.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Boolf_12.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_58.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_59.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_56.h"
#include "mindustry/gen/Iconc.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_57.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_54.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_55.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_52.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_53.h"
#include "mindustry/editor/MapLocalesDialog.h"
#include "arc/struct/ObjectIntMap_Entry.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_61.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_62.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_60.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Boolp_1.h"
#include "arc/struct/ObjectIntMap_Keys.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_89.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_87.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_88.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_85.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_86.h"
#include "arc/Application.h"
#include "java/lang/String.h"
#include "arc/struct/ObjectIntMap_Entries.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_94.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_95.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_92.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_93.h"
#include "arc/scene/utils/Elem.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_90.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_91.h"
#include "arc/scene/ui/TextArea.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_78.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Boolc_1.h"
#include "mindustry/gen/Icon.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_79.h"
#include "arc/scene/Group.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_76.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_77.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_74.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_75.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_46.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_45.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_48.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_47.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/editor/MapLocalesDialog_invoke_arc_func_Cons_49.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_83.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_84.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_81.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_82.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/game/Team.h"
#include "arc/struct/SnapshotSeq.h"
#include "mindustry/editor/MapLocalesDialog_invoke_java_lang_Runnable_80.h"
#include "mindustry/core/GameState.h"

extern "C" {

jfloat SF_mindustry_editor_MapLocalesDialog_cardWidth;
jobject SF_mindustry_editor_MapLocalesDialog_filterStyle;
jobject SF_mindustry_editor_MapLocalesDialog_contentIcons;

void mark_mindustry_editor_MapLocalesDialog(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_editor_MapLocalesDialog_filterStyle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_MapLocalesDialog_filterStyle)->clazz)->markFunction)((jobject) SF_mindustry_editor_MapLocalesDialog_filterStyle, mark, depth + 1);
		if (SF_mindustry_editor_MapLocalesDialog_contentIcons)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_MapLocalesDialog_contentIcons)->clazz)->markFunction)((jobject) SF_mindustry_editor_MapLocalesDialog_contentIcons, mark, depth + 1);
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
	auto self = (mindustry_editor_MapLocalesDialog *) object;
	if (self->F_locales)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_locales)->clazz)->markFunction)((jobject) self->F_locales, mark, depth + 1);
	if (self->F_lastSaved)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastSaved)->clazz)->markFunction)((jobject) self->F_lastSaved, mark, depth + 1);
	if (self->F_langs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_langs)->clazz)->markFunction)((jobject) self->F_langs, mark, depth + 1);
	if (self->F_main)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_main)->clazz)->markFunction)((jobject) self->F_main, mark, depth + 1);
	if (self->F_propView)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_propView)->clazz)->markFunction)((jobject) self->F_propView, mark, depth + 1);
	if (self->F_selectedLocale)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selectedLocale)->clazz)->markFunction)((jobject) self->F_selectedLocale, mark, depth + 1);
	if (self->F_searchString)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_searchString)->clazz)->markFunction)((jobject) self->F_searchString, mark, depth + 1);
}

void init_mindustry_editor_MapLocalesDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(56);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@editor.locales"_j))));
	LINE_NUMBER(41);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(1));
	LINE_NUMBER(47);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_applytoall = (jint(1));
	LINE_NUMBER(48);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_collapsed = (jint(0));
	LINE_NUMBER(49);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchString = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(50);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchByValue = (jint(0));
	LINE_NUMBER(51);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showCorrect = (jint(1));
	LINE_NUMBER(52);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showMissing = (jint(1));
	LINE_NUMBER(53);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showSame = (jint(1));
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_type_MapLocales_currentLocale_R_java_lang_String(ctx);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK(sp[0].o))->F_selectedLocale = (jref) sp[1].o;
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	clinit_mindustry_gen_Tex(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Tex_button;
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, sp[1].o, sp[2].o);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK(sp[0].o))->F_langs = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK(sp[0].o))->F_main = (jref) sp[1].o;
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK(sp[0].o))->F_propView = (jref) sp[1].o;
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_uniform_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_uniform_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(66);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_45(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_45 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_45);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(91);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_48(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_48 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_48);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapLocalesDialog_resized_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_resized_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"?"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_49(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_49 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_49);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(60.0f)), (jfloat(64.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_uniform_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_uniform_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_50(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_50 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_50);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapLocalesDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_show_mindustry_type_MapLocales(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:show", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales = (jref) (frame[1].o);
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_type_MapLocales_copy_R_mindustry_type_MapLocales) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_MapLocales_copy_R_mindustry_type_MapLocales])(ctx, (frame[1].o));
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK(sp[0].o))->F_lastSaved = (jref) sp[1].o;
	LINE_NUMBER(103);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(1));
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_mindustry_editor_MapLocalesDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[0].o));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:setup", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(110);
	((func_mindustry_editor_MapLocalesDialog_buildTables) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildTables])(ctx, (frame[0].o));
	LINE_NUMBER(112);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_langs;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_46(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_46 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_46);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(10.0f);
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(145);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_47(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_47 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_47);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(163);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_buildTables(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:buildTables", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	clinit_arc_struct_StringMap(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[2].o);
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	{
	LINE_NUMBER(171);
	((func_mindustry_editor_MapLocalesDialog_buildLocalesTable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildLocalesTable])(ctx, (frame[0].o));
	LINE_NUMBER(172);
	((func_mindustry_editor_MapLocalesDialog_buildMain) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildMain])(ctx, (frame[0].o));
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_buildLocalesTable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:buildLocalesTable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_langs;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_langs;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_48(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_48 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_48);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(199);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_langs;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@add"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_51(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_51 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_51);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(250.0f)));
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_buildMain(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:buildMain", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_main;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o));
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_main;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_main;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_49(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_49 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_49);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(312);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_main;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:updateCard", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(317);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	sp[4].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	((func_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jint(0)));
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:updateCard", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_mindustry_editor_MapLocalesDialog_getPropertyStatus_java_lang_String_java_lang_String_java_lang_String_boolean_R_mindustry_editor_MapLocalesDialog$PropertyStatus) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_getPropertyStatus_java_lang_String_java_lang_String_java_lang_String_boolean_R_mindustry_editor_MapLocalesDialog$PropertyStatus])(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].i));
	jint temp0 = (jint)((func_mindustry_editor_MapLocalesDialog$PropertyStatus_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapLocalesDialog$PropertyStatus_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		default: goto label_4;
	}
	}
label_2:;
	{
	LINE_NUMBER(322);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(323);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_techBlue;
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(324);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(326);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapLocalesDialog_getPropertyStatus_java_lang_String_java_lang_String_java_lang_String_boolean_R_mindustry_editor_MapLocalesDialog$PropertyStatus(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:getPropertyStatus", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(330);
	if ((frame[4].i) == 0) goto label_1;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_1;
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	(sp++)->o = SF_mindustry_editor_MapLocalesDialog$PropertyStatus_missing;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_entries_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_entries_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(333);
	if ((frame[4].i) != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_key;
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	goto label_2;
label_5:;
	{
	LINE_NUMBER(334);
	if ((frame[4].i) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_key;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	goto label_2;
label_6:;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_value;
	frame[7].o = (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o));
	LINE_NUMBER(338);
	jint temp0 = (jint)((func_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean])(ctx, (frame[7].o), (frame[1].o));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(339);
	if ((frame[4].i) != 0) goto label_10;
	}
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	(sp++)->o = SF_mindustry_editor_MapLocalesDialog$PropertyStatus_missing;
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[7].o), (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (frame[2].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(342);
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapLocalesDialog$PropertyStatus_same;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	LINE_NUMBER(345);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(347);
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapLocalesDialog$PropertyStatus_correct;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_addLocaleDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:addLocaleDialog", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(351);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@add"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(353);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_50(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_50 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_50);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(372);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(373);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_propEditDialog_arc_scene_ui_layout_Table_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:propEditDialog", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(377);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@edit"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(379);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[4].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_51(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_51 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_51);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (jref) (frame[1].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(421);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[4].o));
	LINE_NUMBER(422);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[4].o));
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_localeEditDialog_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:localeEditDialog", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(426);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@edit"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(428);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_52(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_52 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_52);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(447);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[2].o));
	LINE_NUMBER(448);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_editDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:editDialog", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(452);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@edit"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(454);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_53(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_53 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_53);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(479);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(480);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_viewPropertyDialog_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:viewPropertyDialog", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(484);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"locales.viewing"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (frame[1].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(486);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_54(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_54 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_54);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(499);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(501);
	((func_mindustry_editor_MapLocalesDialog_buildPropView_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildPropView_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(502);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_propView;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(504);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[2].o));
	LINE_NUMBER(505);
	((func_mindustry_ui_dialogs_BaseDialog_closeOnBack) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_closeOnBack])(ctx, (frame[2].o));
	LINE_NUMBER(506);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_52(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_52 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_52);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_BaseDialog_hidden_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hidden_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(508);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(509);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_buildPropView_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:buildPropView", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(512);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_propView;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(514);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_propView;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(515);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_propView;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_55(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_55 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_55);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(576);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(577);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_propView;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_filterDialog_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:filterDialog", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(581);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@locales.filter"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(583);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_56(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_56 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_56);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(589);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(591);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@locales.showcorrect"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_ok;
	clinit_mindustry_editor_MapLocalesDialog(ctx);
	sp[3].o = (jobject)SF_mindustry_editor_MapLocalesDialog_filterStyle;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_53(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_53 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_53);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_57(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_57 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_57);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(450.0f);
	jfloat temp1 = jfloat(100.0f);
	LINE_NUMBER(594);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(65.0f)));
	LINE_NUMBER(596);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(598);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@locales.showmissing"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_ok;
	clinit_mindustry_editor_MapLocalesDialog(ctx);
	sp[3].o = (jobject)SF_mindustry_editor_MapLocalesDialog_filterStyle;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_54(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_54 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_54);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_58(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_58 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_58);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = jfloat(450.0f);
	jfloat temp3 = jfloat(100.0f);
	LINE_NUMBER(601);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2, temp3);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(65.0f)));
	LINE_NUMBER(603);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(605);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@locales.showsame"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_ok;
	clinit_mindustry_editor_MapLocalesDialog(ctx);
	sp[3].o = (jobject)SF_mindustry_editor_MapLocalesDialog_filterStyle;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_55(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_55 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_55);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_59(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_59 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_59);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp4 = jfloat(450.0f);
	jfloat temp5 = jfloat(100.0f);
	LINE_NUMBER(608);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp4, temp5);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_techBlue;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(65.0f)));
	LINE_NUMBER(610);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@back"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_left;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_56(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_56 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_56);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp6 = jfloat(210.0f);
	jfloat temp7 = jfloat(64.0f);
	LINE_NUMBER(613);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp6, temp7);
	LINE_NUMBER(614);
	((func_mindustry_ui_dialogs_BaseDialog_closeOnBack_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_closeOnBack_java_lang_Runnable])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(616);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_addIconDialog_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:addIconDialog", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(620);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@locales.addicon"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(622);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(623);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8""_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_60(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_60 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_60);
		proxy->F_field3 = (jref) (frame[1].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_utils_Elem_newField_java_lang_String_arc_func_Cons_R_arc_scene_ui_TextField(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(624);
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"@search"_j))));
	LINE_NUMBER(626);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_61(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_61 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_61);
		proxy->F_field4 = (jref) (frame[1].o);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(633);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(635);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(636);
	sp[0].o = frame[2].o;
	jint temp0 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_57(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_57 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_57);
		proxy->F_field4 = (jref) (frame[1].o);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_BaseDialog_resized_boolean_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_resized_boolean_java_lang_Runnable])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(638);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[2].o));
	LINE_NUMBER(639);
	((func_mindustry_ui_dialogs_BaseDialog_closeOnBack) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_closeOnBack])(ctx, (frame[2].o));
	LINE_NUMBER(640);
	((func_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(641);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(642);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_iconsTable_arc_scene_ui_layout_Table_java_lang_String_arc_scene_ui_Dialog_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:iconsTable", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(645);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[1].o));
	LINE_NUMBER(647);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(19.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(12.0f)));
	LINE_NUMBER(648);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(48.0f)));
	LINE_NUMBER(650);
	jfloat temp0 = jfloat(20.0f);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp2 = jfloat(temp1);
	jfloat temp3 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(52.0f)));
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (temp2 / temp3));
	frame[5].i = (jint(temp4));
	LINE_NUMBER(652);
	frame[6].i = (jint(0));
	LINE_NUMBER(654);
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	clinit_mindustry_gen_Iconc(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Iconc_codes;
	init_arc_struct_ObjectIntMap_arc_struct_ObjectIntMap(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(656);
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap_keys_R_arc_struct_ObjectIntMap$Keys) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_keys_R_arc_struct_ObjectIntMap$Keys])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap$Keys_iterator_R_arc_struct_ObjectIntMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap$Keys_iterator_R_arc_struct_ObjectIntMap$Keys])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(657);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 != 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_remove_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_remove_java_lang_Object_R_int])(ctx, (frame[7].o), (frame[9].o));
	}
label_10:;
	LINE_NUMBER(658);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(660);
	if (((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[7].o)))->F_size) <= 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-1.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap_iterator_R_arc_struct_ObjectIntMap$Entries) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_iterator_R_arc_struct_ObjectIntMap$Entries])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_arc_struct_ObjectIntMap$Entry, sp[0].o));
	LINE_NUMBER(663);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxCharacter(ctx, (jchar(((jint)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[9].o)))->F_value)))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(665);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[2].o = (jobject)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[9].o)))->F_key;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	sp[1].o = checkCast(ctx, &class_arc_scene_style_Drawable, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flati;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_58(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_58 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_58);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[10].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	sp[1].o = (jobject)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[9].o)))->F_key;
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	LINE_NUMBER(668);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(670);
	INST_IINC(6, 1);
	if (((frame[6].i) % (frame[5].i)) != 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_18:;
	LINE_NUMBER(671);
	goto label_12;
label_13:;
	{
	LINE_NUMBER(673);
	clinit_mindustry_editor_MapLocalesDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapLocalesDialog_contentIcons;
	frame[8].o = sp[0].o;
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[10].i = (jint(0));
	}
label_19:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_20;
	}
	{
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(674);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[0].o, (frame[11].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_7);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(676);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(677);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[12].o)))->F_size) <= 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-1.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_24:;
	{
	LINE_NUMBER(679);
	frame[6].i = (jint(0));
	LINE_NUMBER(680);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[12].o));
	frame[13].o = sp[0].o;
	}
label_26:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[13].o)))(ctx, (frame[13].o));
	if (temp0 == 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o));
	frame[14].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o));
	LINE_NUMBER(681);
	sp[0].o = frame[1].o;
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[14].o)))->F_uiIcon;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flati;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_59(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_59 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_59);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[14].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[14].o)))->F_localizedName;
	LINE_NUMBER(684);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(686);
	INST_IINC(6, 1);
	if (((frame[6].i) % (frame[5].i)) != 0) goto label_31;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_31:;
	LINE_NUMBER(687);
	goto label_26;
label_27:;
	{
	LINE_NUMBER(673);
	INST_IINC(10, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(690);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_baseTeams;
	init_arc_struct_Seq_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(691);
	sp[0].o = frame[8].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_8);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(693);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(694);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[8].o)))->F_size) <= 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-1.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_35:;
	{
	LINE_NUMBER(696);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	}
label_36:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_37;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_game_Team, sp[0].o));
	LINE_NUMBER(697);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[10].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"team-\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, sp[1].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(699);
	sp[0].o = frame[1].o;
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, (frame[11].o));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flati;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_60(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_60 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_60);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[10].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	sp[1].o = frame[10].o;
	LINE_NUMBER(702);
	sp[1].o = (jobject)((func_mindustry_game_Team_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Team_localized_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(704);
	INST_IINC(6, 1);
	if (((frame[6].i) % (frame[5].i)) != 0) goto label_42;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_42:;
	LINE_NUMBER(705);
	goto label_36;
label_37:;
	LINE_NUMBER(706);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapLocalesDialog_writeBundles_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:writeBundles", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(709);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(711);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_keys_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_keys_R_arc_struct_ObjectMap$Keys])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(712);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":\n"_j))));
	sp[1].o = (jobject)((func_mindustry_editor_MapLocalesDialog_writeLocale_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_writeLocale_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(713);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(715);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapLocalesDialog_writeLocale_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:writeLocale", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(719);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(721);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(723);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_StringMap_entries_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)))->vtable)[VTABLE_arc_struct_StringMap_entries_R_arc_struct_ObjectMap$Entries])(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(725);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[4].o)))->F_key;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" = "_j))));
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[4].o)))->F_value;
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"\\n"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"\\\\n"_j));
	LINE_NUMBER(726);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))), (((jobject) createStringLiteral(ctx, u8"\\n"_j))));
	LINE_NUMBER(725);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"\n"_j));
	LINE_NUMBER(726);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(727);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(729);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapLocalesDialog_readBundles_java_lang_String_R_mindustry_type_MapLocales(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:readBundles", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(733);
	clinit_mindustry_type_MapLocales(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_MapLocales);
	init_mindustry_type_MapLocales(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(735);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(737);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\r?\\n|\\r"_j))));
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_3:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_4;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(738);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8":"_j))));
	if (temp0 == 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"="_j))));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(739);
	sp[0].o = frame[7].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(740);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	clinit_arc_struct_StringMap(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[2].o);
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(742);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" = "_j))));
	frame[8].i = temp0;
	LINE_NUMBER(743);
	if ((frame[8].i) == (jint(-1))) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(745);
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].o));
	sp[0].o = checkCast(ctx, &class_arc_struct_StringMap, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[7].o), (jint(0)), (frame[8].i));
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[7].o), ((frame[8].i) + (jint(3))));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"\\n"_j));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"\n"_j));
	LINE_NUMBER(746);
	sp[2].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	sp[2].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"\\\n"_j))), (((jobject) createStringLiteral(ctx, u8"\\n"_j))));
	LINE_NUMBER(745);
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_9:;
	{
	LINE_NUMBER(737);
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(751);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapLocalesDialog_readLocale_java_lang_String_R_arc_struct_StringMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:readLocale", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(755);
	clinit_arc_struct_StringMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(757);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\r?\\n|\\r"_j))));
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(758);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8" = "_j))));
	frame[7].i = temp0;
	LINE_NUMBER(759);
	if ((frame[7].i) == (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(761);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[6].o), (jint(0)), (frame[7].i));
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[6].o), ((frame[7].i) + (jint(3))));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"\\n"_j));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"\n"_j));
	LINE_NUMBER(762);
	sp[2].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	sp[2].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"\\\n"_j))), (((jobject) createStringLiteral(ctx, u8"\\n"_j))));
	LINE_NUMBER(761);
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_6:;
	{
	LINE_NUMBER(757);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(766);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapLocalesDialog_lambda$iconsTable$4_arc_func_Cons_mindustry_game_Team_arc_scene_ui_Dialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$iconsTable$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(700);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_emoji;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(701);
	((func_arc_scene_ui_Dialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Dialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapLocalesDialog_lambda$iconsTable$3_java_lang_String_mindustry_game_Team_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$iconsTable$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(691);
	sp[0].o = (jobject)((func_mindustry_game_Team_localized_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Team_localized_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"team-\u0001"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
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

void SM_mindustry_editor_MapLocalesDialog_lambda$iconsTable$2_arc_func_Cons_mindustry_ctype_UnlockableContent_arc_scene_ui_Dialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$iconsTable$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(682);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, sp[1].o);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(683);
	((func_arc_scene_ui_Dialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Dialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(684);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapLocalesDialog_lambda$iconsTable$1_java_lang_String_mindustry_ctype_UnlockableContent_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$iconsTable$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(674);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_localizedName;
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_uiIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
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

void SM_mindustry_editor_MapLocalesDialog_lambda$iconsTable$0_arc_func_Cons_java_lang_String_arc_scene_ui_Dialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$iconsTable$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(666);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(667);
	((func_arc_scene_ui_Dialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Dialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(668);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$addIconDialog$3_arc_scene_ui_layout_Table_arc_scene_ui_TextField_mindustry_ui_dialogs_BaseDialog_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$addIconDialog$3", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(636);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8" "_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[2].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[2].o);
	((func_mindustry_editor_MapLocalesDialog_iconsTable_arc_scene_ui_layout_Table_java_lang_String_arc_scene_ui_Dialog_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_iconsTable_arc_scene_ui_layout_Table_java_lang_String_arc_scene_ui_Dialog_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$addIconDialog$1_arc_scene_ui_TextField_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$addIconDialog$1", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(627);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[5].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (64));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(250.0f)));
	LINE_NUMBER(629);
	sp[0].o = frame[5].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_cancel;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_61(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_61 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_61);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(10.0f);
	LINE_NUMBER(632);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(35.0f)));
	LINE_NUMBER(633);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$addIconDialog$2_arc_scene_ui_TextField_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$addIconDialog$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(630);
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(631);
	((func_mindustry_editor_MapLocalesDialog_iconsTable_arc_scene_ui_layout_Table_java_lang_String_arc_scene_ui_Dialog_arc_func_Cons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_iconsTable_arc_scene_ui_layout_Table_java_lang_String_arc_scene_ui_Dialog_arc_func_Cons])(ctx, (frame[0].o), (frame[2].o), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[3].o), (frame[4].o));
	LINE_NUMBER(632);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$addIconDialog$0_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$addIconDialog$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(623);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8" "_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[2].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[2].o);
	((func_mindustry_editor_MapLocalesDialog_iconsTable_arc_scene_ui_layout_Table_java_lang_String_arc_scene_ui_Dialog_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_iconsTable_arc_scene_ui_layout_Table_java_lang_String_arc_scene_ui_Dialog_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapLocalesDialog_lambda$filterDialog$12_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$filterDialog$12", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(611);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[0].o)))(ctx, (frame[0].o));
	LINE_NUMBER(612);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(613);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$11_arc_scene_ui_TextButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$filterDialog$11", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(606);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint(1)));
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o);
	sp += 1;
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showSame) == 0) goto label_1;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_ok;
	goto label_2;
label_1:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_cancel;
label_2:;
	{
	sp -= 2;
	((func_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(607);
	((func_arc_scene_ui_TextButton_setChecked_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextButton_setChecked_boolean])(ctx, (frame[1].o), ((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showSame));
	LINE_NUMBER(608);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$10(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$filterDialog$10", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(605);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showSame) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	sp -= 2;
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK(sp[0].o))->F_showSame = sp[1].i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$9_arc_scene_ui_TextButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$filterDialog$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(599);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint(1)));
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o);
	sp += 1;
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showMissing) == 0) goto label_1;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_ok;
	goto label_2;
label_1:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_cancel;
label_2:;
	{
	sp -= 2;
	((func_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(600);
	((func_arc_scene_ui_TextButton_setChecked_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextButton_setChecked_boolean])(ctx, (frame[1].o), ((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showMissing));
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$8(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$filterDialog$8", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(598);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showMissing) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	sp -= 2;
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK(sp[0].o))->F_showMissing = sp[1].i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$7_arc_scene_ui_TextButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$filterDialog$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(592);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint(1)));
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o);
	sp += 1;
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showCorrect) == 0) goto label_1;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_ok;
	goto label_2;
label_1:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_cancel;
label_2:;
	{
	sp -= 2;
	((func_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(593);
	((func_arc_scene_ui_TextButton_setChecked_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextButton_setChecked_boolean])(ctx, (frame[1].o), ((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showCorrect));
	LINE_NUMBER(594);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$6(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$filterDialog$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(591);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showCorrect) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	sp -= 2;
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK(sp[0].o))->F_showCorrect = sp[1].i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$filterDialog$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(584);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@search"_j))));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(585);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_62(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_62 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_62);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(5.0f);
	LINE_NUMBER(588);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(589);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$filterDialog$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(586);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@locales.byname"_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_togglet;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_62(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_62 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_62);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(300.0f)), (jfloat(50.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(587);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@locales.byvalue"_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_togglet;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_63(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_63 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_63);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(300.0f)), (jfloat(50.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(588);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$5_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$filterDialog$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(587);
	popStackFrame(ctx);
	return ((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchByValue);
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$filterDialog$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(587);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchByValue = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$3_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$filterDialog$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(586);
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchByValue) != 0) goto label_1;
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

void M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$filterDialog$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(586);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchByValue = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$0_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildPropView$0", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(516);
	jint temp0 = jint(1);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp2 = jfloat(temp1);
	jfloat temp3 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_R_float(ctx);
	jint temp4 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint((((temp2 / temp3) - (jfloat(100.0f))) / (jfloat(400.0f))))));
	frame[3].i = temp4;
	LINE_NUMBER(517);
	if ((frame[3].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_propView;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@empty"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(519);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(523);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_ui_layout_Table, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(524);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(525);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(524);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(527);
	frame[5].i = (jint(0));
	LINE_NUMBER(529);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_locales;
	frame[6].o = sp[0].o;
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_14:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_15;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(530);
	sp[0].o = (jobject)((func_java_util_Locale_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_util_Locale_toString_R_java_lang_String])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(531);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[10].o));
	if (temp0 != 0) goto label_18;
	}
	goto label_19;
label_18:;
	{
	LINE_NUMBER(533);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[2].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, (frame[10].o));
	sp[2].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[2].o)))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[2].o)), (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_editor_MapLocalesDialog_getPropertyStatus_java_lang_String_java_lang_String_java_lang_String_boolean_R_mindustry_editor_MapLocalesDialog$PropertyStatus) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_getPropertyStatus_java_lang_String_java_lang_String_java_lang_String_boolean_R_mindustry_editor_MapLocalesDialog$PropertyStatus])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)), (frame[10].o), (jint(1)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(534);
	sp[0].o = frame[11].o;
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_MapLocalesDialog$PropertyStatus_correct;
	if (sp[0].o != sp[1].o) goto label_21;
	}
	{
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showCorrect) != 0) goto label_21;
	}
	goto label_19;
label_21:;
	{
	LINE_NUMBER(535);
	sp[0].o = frame[11].o;
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_MapLocalesDialog$PropertyStatus_missing;
	if (sp[0].o != sp[1].o) goto label_22;
	}
	{
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showMissing) != 0) goto label_22;
	}
	goto label_19;
label_22:;
	{
	LINE_NUMBER(536);
	sp[0].o = frame[11].o;
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_MapLocalesDialog$PropertyStatus_same;
	if (sp[0].o != sp[1].o) goto label_23;
	}
	{
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showSame) != 0) goto label_23;
	}
	goto label_19;
label_23:;
	{
	LINE_NUMBER(538);
	sp[0].o = frame[11].o;
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_MapLocalesDialog$PropertyStatus_missing;
	if (sp[0].o == sp[1].o) goto label_24;
	}
	{
	LINE_NUMBER(539);
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchByValue) == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[10].o));
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)), (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	sp += 1;
	goto label_27;
	}
label_26:;
	{
	sp[0].o = frame[9].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_getLocale_R_java_util_Locale) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_getLocale_R_java_util_Locale])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_Locale_getDisplayName_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_getDisplayName_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_27:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(540);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchString;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_24;
	}
	{
	sp[0].o = frame[12].o;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchString;
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_24;
	}
	goto label_19;
label_24:;
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i));
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whitePane;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_63(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_63 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_63);
		proxy->F_field4 = (jref) (frame[1].o);
		proxy->F_field3 = (jref) (frame[10].o);
		proxy->F_field2 = (jref) (frame[11].o);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_64(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_64 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_64);
		proxy->F_field2 = (jref) (frame[10].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(566);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(400.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(568);
	INST_IINC(5, 1);
	frame[5].i = ((frame[5].i) % (frame[3].i));
	}
label_19:;
	{
	LINE_NUMBER(529);
	INST_IINC(8, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(571);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_hasChildren_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_layout_Table_hasChildren_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	if (temp0 != 0) goto label_31;
	}
	{
	LINE_NUMBER(572);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_propView;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@empty"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	goto label_33;
	}
label_31:;
	{
	LINE_NUMBER(574);
	((func_arc_scene_ui_layout_Table_add_Array1_arc_scene_Element) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_Array1_arc_scene_Element])(ctx, (frame[2].o), (frame[4].o));
	}
label_33:;
	LINE_NUMBER(576);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$6_java_lang_String_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildPropView$6", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(566);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[3].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[3].o, (frame[2].o));
	sp[3].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[3].o)))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[3].o)), (frame[1].o));
	((func_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (checkCast(ctx, &class_java_lang_String, sp[3].o)), (frame[2].o), (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$1_java_util_Locale_mindustry_editor_MapLocalesDialog$PropertyStatus_java_lang_String_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildPropView$1", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(544);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_getLocale_R_java_util_Locale) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_getLocale_R_java_util_Locale])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_util_Locale_getDisplayName_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Locale_getDisplayName_java_util_Locale_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(545);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[5].o));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(547);
	sp[0].o = frame[2].o;
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_MapLocalesDialog$PropertyStatus_missing;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(548);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_65(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_65 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_65);
		proxy->F_field3 = (jref) (frame[5].o);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(140.0f);
	LINE_NUMBER(559);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(561);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[1].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[1].o)))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[1].o)), (frame[4].o));
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_66(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_66 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_66);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jint temp0 = 1000;
	LINE_NUMBER(564);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(140.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_6:;
	LINE_NUMBER(566);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$5_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildPropView$5", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(562);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)))->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)), (frame[2].o), (frame[3].o));
	LINE_NUMBER(563);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(0));
	LINE_NUMBER(564);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$2_java_lang_String_java_lang_String_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildPropView$2", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(549);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@add"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_64(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_64 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_64);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(160.0f);
	jfloat temp1 = jfloat(50.0f);
	LINE_NUMBER(559);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(549);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$3_java_lang_String_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildPropView$3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)))->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)), (frame[2].o), (((jobject) createStringLiteral(ctx, u8"moai"_j))));
	LINE_NUMBER(552);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_clearElement_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_layout_Cell_clearElement_R_arc_scene_ui_layout_Cell])(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o)));
	LINE_NUMBER(553);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (jint(2)));
	LINE_NUMBER(555);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[1].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[1].o)))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[1].o)), (frame[2].o));
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_67(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_67 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_67);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jint temp0 = 1000;
	LINE_NUMBER(558);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(140.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(559);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$4_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildPropView$4", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(556);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)))->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o)), (frame[2].o), (frame[3].o));
	LINE_NUMBER(557);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(0));
	LINE_NUMBER(558);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$0_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$viewPropertyDialog$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(487);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_filter;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_65(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_65 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_65);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(35.0f)));
	LINE_NUMBER(489);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchString;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_68(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_68 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_68);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_69(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_69 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_69);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(492);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (64));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(250.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_70(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_70 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_70);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o));
	LINE_NUMBER(494);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_cancel;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_66(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_66 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_66);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(10.0f);
	LINE_NUMBER(498);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(35.0f)));
	LINE_NUMBER(499);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$6_arc_scene_ui_TextField_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$viewPropertyDialog$6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(495);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchString = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(496);
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(497);
	((func_mindustry_editor_MapLocalesDialog_buildPropView_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildPropView_java_lang_String])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$5_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$viewPropertyDialog$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(492);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchByValue) == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@locales.searchvalue"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@locales.searchlocale"_j));
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$4_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$viewPropertyDialog$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(492);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchString;
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$3_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$viewPropertyDialog$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(490);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchString = (jref) (frame[2].o);
	LINE_NUMBER(491);
	((func_mindustry_editor_MapLocalesDialog_buildPropView_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildPropView_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(492);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$viewPropertyDialog$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(487);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_67(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_67 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_67);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapLocalesDialog_filterDialog_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_filterDialog_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$2_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$viewPropertyDialog$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(487);
	((func_mindustry_editor_MapLocalesDialog_buildPropView_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildPropView_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$editDialog$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$editDialog$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(10.0f)));
	LINE_NUMBER(456);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_71(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_71 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_71);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(477);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$editDialog$1_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$editDialog$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(450.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(459);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@copy.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_copy;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_flatt;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_68(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_68 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_68);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(463);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(464);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@load.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_flatt;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_69(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_69 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_69);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	LINE_NUMBER(469);
	sp[1].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	sp += 1;
	if (sp[0].o != nullptr) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(470);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@locales.rollback"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_undo;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_flatt;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_70(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_70 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_70);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(475);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapLocalesDialog_lambda$editDialog$5_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$editDialog$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(475);
	popStackFrame(ctx);
	return ((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved);
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$editDialog$4_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$editDialog$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(471);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_lastSaved;
	sp[1].o = (jobject)((func_mindustry_type_MapLocales_copy_R_mindustry_type_MapLocales) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_MapLocales_copy_R_mindustry_type_MapLocales])(ctx, sp[1].o);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK(sp[0].o))->F_locales = (jref) sp[1].o;
	LINE_NUMBER(472);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(1));
	LINE_NUMBER(473);
	((func_mindustry_editor_MapLocalesDialog_buildTables) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildTables])(ctx, (frame[0].o));
	LINE_NUMBER(474);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(475);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$editDialog$3_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$editDialog$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(465);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_app;
	sp[2].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[2].o))(ctx, sp[2].o);
	sp[1].o = (jobject)((func_mindustry_editor_MapLocalesDialog_readBundles_java_lang_String_R_mindustry_type_MapLocales) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_readBundles_java_lang_String_R_mindustry_type_MapLocales])(ctx, sp[1].o, sp[2].o);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK(sp[0].o))->F_locales = (jref) sp[1].o;
	LINE_NUMBER(466);
	((func_mindustry_editor_MapLocalesDialog_buildTables) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildTables])(ctx, (frame[0].o));
	LINE_NUMBER(467);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(0));
	LINE_NUMBER(468);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$editDialog$2_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$editDialog$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(460);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((func_mindustry_editor_MapLocalesDialog_writeBundles_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_writeBundles_R_java_lang_String])(ctx, (frame[0].o));
	((func_arc_Application_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(461);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoFade_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@copied"_j))));
	LINE_NUMBER(462);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(463);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$localeEditDialog$0_java_lang_String_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$localeEditDialog$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(429);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o), (jfloat(10.0f)));
	LINE_NUMBER(430);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_72(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_72 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_72);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$localeEditDialog$1_java_lang_String_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$localeEditDialog$1", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(350.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(433);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@copy.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_copy;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_flatt;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_71(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_71 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_71);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(437);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(438);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@load.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_flatt;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_72(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_72 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_72);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	LINE_NUMBER(443);
	sp[1].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	sp += 1;
	if (sp[0].o != nullptr) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$localeEditDialog$3_java_lang_String_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$localeEditDialog$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[1].o = frame[1].o;
	sp[2].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_app;
	sp[3].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[3].o))(ctx, sp[3].o);
	sp[2].o = (jobject)((func_mindustry_editor_MapLocalesDialog_readLocale_java_lang_String_R_arc_struct_StringMap) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_readLocale_java_lang_String_R_arc_struct_StringMap])(ctx, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(440);
	((func_mindustry_editor_MapLocalesDialog_buildTables) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildTables])(ctx, (frame[0].o));
	LINE_NUMBER(441);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(0));
	LINE_NUMBER(442);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(443);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$localeEditDialog$2_java_lang_String_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$localeEditDialog$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(434);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((func_mindustry_editor_MapLocalesDialog_writeLocale_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_writeLocale_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	((func_arc_Application_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(435);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoFade_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@copied"_j))));
	LINE_NUMBER(436);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(437);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$0_java_lang_String_java_lang_String_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$propEditDialog$0", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o), (jfloat(10.0f)));
	LINE_NUMBER(381);
	sp[0].o = frame[5].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_73(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_73 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_73);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(419);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$1_java_lang_String_java_lang_String_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$propEditDialog$1", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(450.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(384);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@locales.addtoother"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_flatt;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_73(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_73 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_73);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(394);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(396);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@locales.viewproperty"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_zoom;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_flatt;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_74(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_74 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_74);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(12.0f);
	LINE_NUMBER(399);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(401);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@locales.addicon"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_image;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_flatt;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_75(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_75 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_75);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp2 = jfloat(12.0f);
	LINE_NUMBER(407);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(409);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@locales.rollback"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_undo;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_flatt;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_76(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_76 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_76);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_12(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_12 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_12);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(413);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp3 = jfloat(12.0f);
	LINE_NUMBER(417);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(418);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$7_java_lang_String_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$propEditDialog$7", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_lastSaved;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_lastSaved;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o));
	LINE_NUMBER(416);
	jint temp0 = (jint)((func_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (frame[1].o));
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[2].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	sp[1].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[1].o)))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[1].o)), (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$6_java_lang_String_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$propEditDialog$6", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_arc_struct_StringMap, sp[0].o);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_lastSaved;
	sp[3].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	sp[2].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[2].o)))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_StringMap, sp[2].o)), (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	LINE_NUMBER(411);
	((func_mindustry_editor_MapLocalesDialog_buildTables) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildTables])(ctx, (frame[0].o));
	LINE_NUMBER(412);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$4_java_lang_String_java_lang_String_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$propEditDialog$4", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(402);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_74(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_74 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_74);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapLocalesDialog_addIconDialog_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_addIconDialog_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(406);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[3].o));
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$5_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$propEditDialog$5", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_arc_struct_StringMap, sp[0].o);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(404);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(0));
	LINE_NUMBER(405);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$3_java_lang_String_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$propEditDialog$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(397);
	((func_mindustry_editor_MapLocalesDialog_viewPropertyDialog_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_viewPropertyDialog_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(398);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$2_java_lang_String_java_lang_String_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$propEditDialog$2", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o));
	LINE_NUMBER(386);
	jint temp0 = (jint)((func_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean])(ctx, (frame[6].o), (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[6].o), (frame[1].o), (frame[2].o));
	}
label_4:;
	LINE_NUMBER(389);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(391);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(0));
	LINE_NUMBER(392);
	((func_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String])(ctx, (frame[0].o), (frame[3].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(393);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[4].o));
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$addLocaleDialog$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$addLocaleDialog$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(354);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_locales;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(355);
	sp[0].o = (jobject)((func_java_util_Locale_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_Locale_toString_R_java_lang_String])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(357);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[7].o));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(358);
	sp[0].o = frame[2].o;
	sp[1].o = frame[6].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_getLocale_R_java_util_Locale) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_getLocale_R_java_util_Locale])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_util_Locale_getDisplayName_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Locale_getDisplayName_java_util_Locale_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_77(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_77 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_77);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_75(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_75 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_75);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(367);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(400.0f)), (jfloat(50.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_7:;
	{
	LINE_NUMBER(354);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(370);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$addLocaleDialog$2_java_lang_String_arc_scene_ui_TextButton(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$addLocaleDialog$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(367);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[1].o, (frame[1].o));
	((func_arc_scene_ui_TextButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_setChecked_boolean])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$addLocaleDialog$1_java_lang_String_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$addLocaleDialog$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(359);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[1].o = frame[1].o;
	clinit_arc_struct_StringMap(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[2].o);
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(363);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale = (jref) (frame[1].o);
	LINE_NUMBER(364);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(0));
	LINE_NUMBER(365);
	((func_mindustry_editor_MapLocalesDialog_buildTables) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildTables])(ctx, (frame[0].o));
	LINE_NUMBER(366);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildMain$0_arc_struct_StringMap_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildMain$0", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(210);
	jint temp0 = jint(1);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp2 = jfloat(temp1);
	jfloat temp3 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_R_float(ctx);
	jint temp4 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, ((jint((((temp2 / temp3) - (jfloat(410.0f))) / (jfloat(400.0f))))) - (jint(1))));
	frame[3].i = temp4;
	LINE_NUMBER(211);
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[1].o)))->F_size) != 0) goto label_2;
	}
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_main;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@empty"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(217);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_ui_layout_Table, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(218);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(219);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(218);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(221);
	frame[5].i = (jint(0));
	LINE_NUMBER(224);
	sp[0].o = (jobject)((func_arc_struct_StringMap_keys_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_StringMap_keys_R_arc_struct_ObjectMap$Keys])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Keys_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Keys_toSeq_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(226);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(227);
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchByValue) == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (frame[8].o));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	sp += 1;
	goto label_17;
	}
label_16:;
	INST_ALOAD(8);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_17:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchString;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_19;
	}
	{
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchString;
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_19;
	}
	goto label_13;
label_19:;
	{
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (frame[8].o));
	sp[2].o = checkCast(ctx, &class_java_lang_String, sp[2].o);
	sp[3].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	sp[0].o = (jobject)((func_mindustry_editor_MapLocalesDialog_getPropertyStatus_java_lang_String_java_lang_String_java_lang_String_boolean_R_mindustry_editor_MapLocalesDialog$PropertyStatus) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_getPropertyStatus_java_lang_String_java_lang_String_java_lang_String_boolean_R_mindustry_editor_MapLocalesDialog$PropertyStatus])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jint(0)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(231);
	sp[0].o = frame[10].o;
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_MapLocalesDialog$PropertyStatus_correct;
	if (sp[0].o != sp[1].o) goto label_21;
	}
	{
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showCorrect) != 0) goto label_21;
	}
	goto label_13;
label_21:;
	{
	LINE_NUMBER(232);
	sp[0].o = frame[10].o;
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_MapLocalesDialog$PropertyStatus_missing;
	if (sp[0].o != sp[1].o) goto label_22;
	}
	{
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showMissing) != 0) goto label_22;
	}
	goto label_13;
label_22:;
	{
	LINE_NUMBER(233);
	sp[0].o = frame[10].o;
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_MapLocalesDialog$PropertyStatus_same;
	if (sp[0].o != sp[1].o) goto label_23;
	}
	{
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_showSame) != 0) goto label_23;
	}
	goto label_13;
label_23:;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i));
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whitePane;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_76(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_76 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_76);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(302);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(400.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(304);
	INST_IINC(5, 1);
	frame[5].i = ((frame[5].i) % (frame[3].i));
	LINE_NUMBER(305);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(307);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_hasChildren_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_layout_Table_hasChildren_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	if (temp0 != 0) goto label_27;
	}
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_main;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@empty"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(310);
	((func_arc_scene_ui_layout_Table_add_Array1_arc_scene_Element) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_Array1_arc_scene_Element])(ctx, (frame[2].o), (frame[4].o));
	}
label_29:;
	LINE_NUMBER(312);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildMain$1_java_lang_String_arc_struct_StringMap_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildMain$1", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_collapsed) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 4;
	ARRAY_ACCESS(jbyte, sp[0].o, sp[2].i) = sp[3].i;
	frame[4].o = sp[0].o;
	LINE_NUMBER(237);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(238);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[1].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_java_lang_String, sp[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(241);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_78(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_78 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_78);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_77(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_77 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_77);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = jfloat(35.0f);
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(247);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_scene_ui_TextField$TextFieldFilter_1(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_scene_ui_TextField$TextFieldFilter_1 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_scene_ui_TextField$TextFieldFilter_1);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_78(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_78 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_78);
		proxy->F_field4 = (jref) (frame[6].o);
		proxy->F_field3 = (jref) (frame[5].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jint temp2 = 64;
	LINE_NUMBER(273);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(275.0f)));
	LINE_NUMBER(276);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_trash;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_79(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_79 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_79);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp3 = jfloat(35.0f);
	LINE_NUMBER(286);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	LINE_NUMBER(289);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_edit;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_80(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_80 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_80);
		proxy->F_field3 = (jref) (frame[6].o);
		proxy->F_field2 = (jref) (frame[5].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(35.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(292);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_79(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_79 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_79);
		proxy->F_field4 = (jref) (frame[3].o);
		proxy->F_field3 = (jref) (frame[5].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolp_1);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jint temp4 = jint(4);
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp4);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(301);
	((func_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String])(ctx, (frame[0].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(0)))));
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapLocalesDialog_lambda$buildMain$11_Array1_boolean_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildMain$11", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0))));
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildMain$8_Array1_java_lang_String_arc_struct_StringMap_Array1_java_lang_String_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildMain$8", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(292);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_80(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_80 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_80);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jint temp0 = 1000;
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(140.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_81(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_81 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_81);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapLocalesDialog_lambda$buildMain$10_Array1_java_lang_String_arc_struct_StringMap_Array1_java_lang_String_arc_scene_ui_TextArea(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildMain$10", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_java_lang_String, sp[1].o));
	LINE_NUMBER(298);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	((func_arc_scene_ui_TextArea_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextArea_setText_java_lang_String])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildMain$9_arc_struct_StringMap_Array1_java_lang_String_arc_scene_ui_layout_Table_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildMain$9", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), (frame[4].o));
	LINE_NUMBER(294);
	((func_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String])(ctx, (frame[0].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), (frame[4].o));
	LINE_NUMBER(295);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(0));
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildMain$7_arc_scene_ui_layout_Table_Array1_java_lang_String_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildMain$7", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(289);
	((func_mindustry_editor_MapLocalesDialog_propEditDialog_arc_scene_ui_layout_Table_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_propEditDialog_arc_scene_ui_layout_Table_java_lang_String_java_lang_String])(ctx, (frame[0].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildMain$6_Array1_java_lang_String_arc_struct_StringMap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildMain$6", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(277);
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_applytoall) == 0) goto label_1;
	}
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o));
	LINE_NUMBER(279);
	sp[0].o = (jobject)((func_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object])(ctx, (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(280);
	goto label_3;
	}
label_4:;
	goto label_7;
label_1:;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((func_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	}
label_7:;
	{
	LINE_NUMBER(284);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(0));
	LINE_NUMBER(285);
	((func_mindustry_editor_MapLocalesDialog_buildMain) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildMain])(ctx, (frame[0].o));
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildMain$5_arc_struct_StringMap_arc_scene_ui_layout_Table_Array1_java_lang_String_Array1_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildMain$5", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(248);
	jint temp0 = (jint)((func_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[5].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(249);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f25555"_j))));
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(253);
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_applytoall) == 0) goto label_4;
	}
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o));
	LINE_NUMBER(255);
	jint temp0 = (jint)((func_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean])(ctx, (frame[7].o), (frame[5].o));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[7].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	frame[8].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(257);
	if ((frame[8].o) != nullptr) goto label_12;
	}
	goto label_6;
label_12:;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object])(ctx, (frame[7].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	LINE_NUMBER(260);
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[7].o), (frame[5].o), (frame[8].o));
	}
label_9:;
	LINE_NUMBER(262);
	goto label_6;
label_7:;
	goto label_14;
label_4:;
	{
	LINE_NUMBER(264);
	jint temp0 = (jint)((func_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[5].o));
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((func_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (frame[5].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	}
label_14:;
	{
	LINE_NUMBER(270);
	ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))) = (frame[5].o);
	LINE_NUMBER(271);
	((func_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String])(ctx, (frame[0].o), (frame[2].o), (frame[5].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	LINE_NUMBER(272);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(0));
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapLocalesDialog_lambda$buildMain$4_arc_scene_ui_TextField_char_R_boolean(jcontext ctx, jobject param0, jchar param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildMain$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(247);
	if ((frame[1].i) == (61)) goto label_1;
	}
	{
	if ((frame[1].i) == (58)) goto label_1;
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

void SM_mindustry_editor_MapLocalesDialog_lambda$buildMain$3_Array1_boolean_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildMain$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(242);
	sp[0].o = frame[1].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[2].o = sp[1].o;
	sp += 3;
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)))) == 0) goto label_2;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_upOpen;
	goto label_3;
label_2:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_downOpen;
label_3:;
	{
	sp -= 4;
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[1].o, sp[3].o);
	((func_arc_scene_ui_ImageButton_replaceImage_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_replaceImage_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(243);
	((func_arc_scene_ui_ImageButton_setChecked_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_setChecked_boolean])(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)))));
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapLocalesDialog_lambda$buildMain$2_Array1_boolean(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildMain$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(241);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	sp[1].i = temp0;
	sp += 2;
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)))) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	INST_BASTORE();
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildLocalesTable$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(179);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_locales;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(180);
	sp[0].o = (jobject)((func_java_util_Locale_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_Locale_toString_R_java_lang_String])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[6].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = frame[1].o;
	sp[1].o = frame[5].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_getLocale_R_java_util_Locale) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_getLocale_R_java_util_Locale])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_util_Locale_getDisplayName_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Locale_getDisplayName_java_util_Locale_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_81(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_81 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_81);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_82(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_82 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_82);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(188);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_minHeight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minHeight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	LINE_NUMBER(189);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_edit;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flati;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_82(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_82 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_82);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	LINE_NUMBER(190);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_trash;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flati;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_83(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_83 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_83);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(50.0f);
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_7:;
	{
	LINE_NUMBER(179);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(199);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$4_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildLocalesTable$4", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(190);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@locales.deletelocale"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_84(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_84 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_84);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$5_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildLocalesTable$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp += 1;
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_keys_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_keys_R_arc_struct_ObjectMap$Keys])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Keys_next_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Keys_next_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"locale"_j))));
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK(sp[0].o))->F_selectedLocale = (jref) sp[1].o;
	LINE_NUMBER(194);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(0));
	LINE_NUMBER(195);
	((func_mindustry_editor_MapLocalesDialog_buildTables) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildTables])(ctx, (frame[0].o));
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$3_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildLocalesTable$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(189);
	((func_mindustry_editor_MapLocalesDialog_localeEditDialog_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_localeEditDialog_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$2_java_lang_String_arc_scene_ui_TextButton(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildLocalesTable$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(188);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[1].o, (frame[1].o));
	((func_arc_scene_ui_TextButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_setChecked_boolean])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$buildLocalesTable$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(184);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(186);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale = (jref) (frame[1].o);
	LINE_NUMBER(187);
	((func_mindustry_editor_MapLocalesDialog_buildTables) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildTables])(ctx, (frame[0].o));
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$setup$10_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$setup$10", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"locales.property.name"_j))));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_83(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_83 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_83);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (64));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(148);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"locales.property.text"_j))));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_84(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_84 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_84);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (1000));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(140.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(151);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@add"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_85(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_85 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_85);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(10.0f);
	LINE_NUMBER(162);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(400.0f)), (jfloat(50.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$setup$13_arc_scene_ui_TextField_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$setup$13", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(152);
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_applytoall) == 0) goto label_1;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_struct_StringMap, sp[0].o));
	LINE_NUMBER(154);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(155);
	goto label_3;
	}
label_4:;
	goto label_7;
label_1:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_selectedLocale;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_arc_struct_StringMap, sp[0].o);
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_7:;
	{
	LINE_NUMBER(160);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(0));
	LINE_NUMBER(161);
	((func_mindustry_editor_MapLocalesDialog_buildMain) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildMain])(ctx, (frame[0].o));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapLocalesDialog_lambda$setup$12_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$setup$12", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog(ctx);
	frame[0].o = param0;
	LINE_NUMBER(148);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapLocalesDialog_lambda$setup$11_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$setup$11", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog(ctx);
	frame[0].o = param0;
	LINE_NUMBER(146);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$setup$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$setup$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(116);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_85(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_85 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_85);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(137);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(139);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@locales.applytoall"_j));
	jint temp0 = (jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_applytoall;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolc_1(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolc_1 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolc_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(141);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_main;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$setup$9_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$setup$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(139);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_applytoall = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$setup$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$setup$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_86(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_86 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_86);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_86(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_86 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_86);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(35.0f);
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(125);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_filter;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_87(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_87 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_87);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(35.0f)));
	LINE_NUMBER(127);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8""_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_87(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_87 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_87);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_88(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_88 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_88);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(130);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (64));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(250.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_89(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_89 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Cons_89);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o));
	LINE_NUMBER(132);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_cancel;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_88(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_88 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_88);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp1 = jfloat(10.0f);
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(35.0f)));
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$setup$8_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$setup$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchString = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(134);
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(135);
	((func_mindustry_editor_MapLocalesDialog_buildMain) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildMain])(ctx, (frame[0].o));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$setup$7_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$setup$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(130);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchByValue) == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@locales.searchvalue"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@locales.searchname"_j));
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$setup$6_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$setup$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(130);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchString;
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$setup$5_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$setup$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(128);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_searchString = (jref) (frame[1].o);
	LINE_NUMBER(129);
	((func_mindustry_editor_MapLocalesDialog_buildMain) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildMain])(ctx, (frame[0].o));
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$setup$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$setup$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_89(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_89 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_89);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapLocalesDialog_filterDialog_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_filterDialog_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$setup$3_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$setup$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(121);
	sp[0].o = frame[1].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[2].o = sp[1].o;
	sp += 3;
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_collapsed) == 0) goto label_2;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_upOpen;
	goto label_3;
label_2:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_downOpen;
label_3:;
	{
	sp -= 4;
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[1].o, sp[3].o);
	((func_arc_scene_ui_ImageButton_replaceImage_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_replaceImage_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(122);
	((func_arc_scene_ui_ImageButton_setChecked_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_setChecked_boolean])(ctx, (frame[1].o), ((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_collapsed));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$setup$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$setup$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_collapsed) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK(sp[0].o))->F_collapsed = sp[1].i;
	LINE_NUMBER(119);
	((func_mindustry_editor_MapLocalesDialog_buildMain) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_buildMain])(ctx, (frame[0].o));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapLocalesDialog_lambda$new$7(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$new$7", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog(ctx);
	{
	LINE_NUMBER(95);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@locales.info"_j))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$new$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$new$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(69);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@back"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_left;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_90(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_90 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_90);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(210.0f);
	jfloat temp1 = jfloat(64.0f);
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_91(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_91 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_91);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapLocalesDialog_closeOnBack_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_closeOnBack_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(83);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.apply"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_ok;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_92(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_92 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_92);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp2 = jfloat(210.0f);
	jfloat temp3 = jfloat(64.0f);
	LINE_NUMBER(88);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2, temp3);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_13(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_13 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_arc_func_Boolf_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(90);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@edit"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_edit;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_93(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_93 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_93);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(210.0f)), (jfloat(64.0f)));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapLocalesDialog_lambda$new$6_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$new$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return ((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved);
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$new$5(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$new$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"locales"_j));
	sp[2].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[2].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(85);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales = (jref) sp[1].o;
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[1].o = (jobject)((func_mindustry_type_MapLocales_copy_R_mindustry_type_MapLocales) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_MapLocales_copy_R_mindustry_type_MapLocales])(ctx, sp[1].o);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK(sp[0].o))->F_lastSaved = (jref) sp[1].o;
	LINE_NUMBER(87);
	((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved = (jint(1));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$new$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$new$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.locales"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@editor.savechanges"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_94(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_94 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_94);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_1:;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$new$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$new$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"locales"_j));
	sp[2].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[2].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(79);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales = (jref) sp[1].o;
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$new$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	if (((jint)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_saved) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.locales"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@editor.savechanges"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_95(ctx);
		auto proxy = (mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_95 *) gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog_invoke_java_lang_Runnable_95);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_1:;
	{
	LINE_NUMBER(74);
	((func_mindustry_editor_MapLocalesDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapLocalesDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapLocalesDialog_lambda$new$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:lambda$new$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"locales"_j));
	sp[2].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	sp[2].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(72);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_editor_MapLocalesDialog *) NULL_CHECK((frame[0].o)))->F_locales;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales = (jref) sp[1].o;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_editor_MapLocalesDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	SF_mindustry_editor_MapLocalesDialog_cardWidth = jfloat(400.0f);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog(ctx);
	{
	LINE_NUMBER(28);
	clinit_mindustry_editor_MapLocalesDialog$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog$1);
	init_mindustry_editor_MapLocalesDialog$1(ctx, sp[0].o);
	clinit_mindustry_editor_MapLocalesDialog(ctx);
	SF_mindustry_editor_MapLocalesDialog_filterStyle = sp[0].o;
	LINE_NUMBER(37);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ctype_ContentType, (jint(5)));
	jint temp0 = jint(0);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_item;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_status;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	clinit_mindustry_editor_MapLocalesDialog(ctx);
	SF_mindustry_editor_MapLocalesDialog_contentIcons = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapLocalesDialog[] {
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
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$new$1,
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$new$0,
	(void *) M_mindustry_editor_MapLocalesDialog_show_mindustry_type_MapLocales,
	(void *) M_mindustry_editor_MapLocalesDialog_setup,
	(void *) M_mindustry_editor_MapLocalesDialog_buildTables,
	(void *) M_mindustry_editor_MapLocalesDialog_buildLocalesTable,
	(void *) M_mindustry_editor_MapLocalesDialog_buildMain,
	(void *) M_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_java_lang_String_boolean,
	(void *) M_mindustry_editor_MapLocalesDialog_getPropertyStatus_java_lang_String_java_lang_String_java_lang_String_boolean_R_mindustry_editor_MapLocalesDialog$PropertyStatus,
	(void *) M_mindustry_editor_MapLocalesDialog_addLocaleDialog,
	(void *) M_mindustry_editor_MapLocalesDialog_propEditDialog_arc_scene_ui_layout_Table_java_lang_String_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_localeEditDialog_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_editDialog,
	(void *) M_mindustry_editor_MapLocalesDialog_viewPropertyDialog_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_buildPropView_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_filterDialog_java_lang_Runnable,
	(void *) M_mindustry_editor_MapLocalesDialog_addIconDialog_arc_func_Cons,
	(void *) M_mindustry_editor_MapLocalesDialog_iconsTable_arc_scene_ui_layout_Table_java_lang_String_arc_scene_ui_Dialog_arc_func_Cons,
	(void *) M_mindustry_editor_MapLocalesDialog_writeBundles_R_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_writeLocale_java_lang_String_R_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_readBundles_java_lang_String_R_mindustry_type_MapLocales,
	(void *) M_mindustry_editor_MapLocalesDialog_readLocale_java_lang_String_R_arc_struct_StringMap,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$addIconDialog$3_arc_scene_ui_layout_Table_arc_scene_ui_TextField_mindustry_ui_dialogs_BaseDialog_arc_func_Cons,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$addIconDialog$1_arc_scene_ui_TextField_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$addIconDialog$2_arc_scene_ui_TextField_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_func_Cons,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$addIconDialog$0_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$11_arc_scene_ui_TextButton,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$10,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$9_arc_scene_ui_TextButton,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$8,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$7_arc_scene_ui_TextButton,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$6,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$5_arc_scene_ui_TextButton_R_boolean,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$4,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$3_arc_scene_ui_TextButton_R_boolean,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$2,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$0_java_lang_String_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$6_java_lang_String_java_lang_String_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$1_java_util_Locale_mindustry_editor_MapLocalesDialog$PropertyStatus_java_lang_String_java_lang_String_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$5_java_lang_String_java_lang_String_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$2_java_lang_String_java_lang_String_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$3_java_lang_String_java_lang_String_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$4_java_lang_String_java_lang_String_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$0_java_lang_String_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$6_arc_scene_ui_TextField_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$5_arc_scene_ui_TextField,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$4_arc_scene_ui_TextField,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$3_java_lang_String_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$1_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$2_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$editDialog$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$editDialog$1_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$editDialog$5_arc_scene_ui_TextButton_R_boolean,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$editDialog$4_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$editDialog$3_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$editDialog$2_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$localeEditDialog$0_java_lang_String_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$localeEditDialog$1_java_lang_String_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$localeEditDialog$3_java_lang_String_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$localeEditDialog$2_java_lang_String_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$0_java_lang_String_java_lang_String_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$1_java_lang_String_java_lang_String_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$7_java_lang_String_arc_scene_ui_TextButton_R_boolean,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$6_java_lang_String_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$4_java_lang_String_java_lang_String_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$5_java_lang_String_java_lang_String_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$3_java_lang_String_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$2_java_lang_String_java_lang_String_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$addLocaleDialog$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$addLocaleDialog$2_java_lang_String_arc_scene_ui_TextButton,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$addLocaleDialog$1_java_lang_String_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildMain$0_arc_struct_StringMap_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildMain$1_java_lang_String_arc_struct_StringMap_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildMain$8_Array1_java_lang_String_arc_struct_StringMap_Array1_java_lang_String_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildMain$9_arc_struct_StringMap_Array1_java_lang_String_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildMain$7_arc_scene_ui_layout_Table_Array1_java_lang_String_Array1_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildMain$6_Array1_java_lang_String_arc_struct_StringMap,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildMain$5_arc_struct_StringMap_arc_scene_ui_layout_Table_Array1_java_lang_String_Array1_java_lang_String_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$4_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$5_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$3_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$2_java_lang_String_arc_scene_ui_TextButton,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$1_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$setup$10_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$setup$13_arc_scene_ui_TextField_arc_scene_ui_TextField,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$setup$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$setup$9_boolean,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$setup$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$setup$8_arc_scene_ui_TextField,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$setup$7_arc_scene_ui_TextField,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$setup$6_arc_scene_ui_TextField,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$setup$5_java_lang_String,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$setup$4,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$setup$3_arc_scene_ui_ImageButton,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$setup$2,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$new$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$new$6_arc_scene_ui_TextButton_R_boolean,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$new$5,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$new$3,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$new$4,
	(void *) M_mindustry_editor_MapLocalesDialog_lambda$new$2,
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
	{ "show", "(Lmindustry/type/MapLocales;)V" },
	{ "setup", "()V" },
	{ "buildTables", "()V" },
	{ "buildLocalesTable", "()V" },
	{ "buildMain", "()V" },
	{ "updateCard", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Ljava/lang/String;)V" },
	{ "updateCard", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V" },
	{ "getPropertyStatus", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Lmindustry/editor/MapLocalesDialog$PropertyStatus;" },
	{ "addLocaleDialog", "()V" },
	{ "propEditDialog", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Ljava/lang/String;)V" },
	{ "localeEditDialog", "(Ljava/lang/String;)V" },
	{ "editDialog", "()V" },
	{ "viewPropertyDialog", "(Ljava/lang/String;)V" },
	{ "buildPropView", "(Ljava/lang/String;)V" },
	{ "filterDialog", "(Ljava/lang/Runnable;)V" },
	{ "addIconDialog", "(Larc/func/Cons;)V" },
	{ "iconsTable", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/scene/ui/Dialog;Larc/func/Cons;)V" },
	{ "writeBundles", "()Ljava/lang/String;" },
	{ "writeLocale", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "readBundles", "(Ljava/lang/String;)Lmindustry/type/MapLocales;" },
	{ "readLocale", "(Ljava/lang/String;)Larc/struct/StringMap;" },
	{ "lambda$addIconDialog$3", "(Larc/scene/ui/layout/Table;Larc/scene/ui/TextField;Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;)V" },
	{ "lambda$addIconDialog$1", "(Larc/scene/ui/TextField;Larc/scene/ui/layout/Table;Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$addIconDialog$2", "(Larc/scene/ui/TextField;Larc/scene/ui/layout/Table;Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;)V" },
	{ "lambda$addIconDialog$0", "(Larc/scene/ui/layout/Table;Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;Ljava/lang/String;)V" },
	{ "lambda$filterDialog$11", "(Larc/scene/ui/TextButton;)V" },
	{ "lambda$filterDialog$10", "()V" },
	{ "lambda$filterDialog$9", "(Larc/scene/ui/TextButton;)V" },
	{ "lambda$filterDialog$8", "()V" },
	{ "lambda$filterDialog$7", "(Larc/scene/ui/TextButton;)V" },
	{ "lambda$filterDialog$6", "()V" },
	{ "lambda$filterDialog$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$filterDialog$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$filterDialog$5", "(Larc/scene/ui/TextButton;)Z" },
	{ "lambda$filterDialog$4", "()V" },
	{ "lambda$filterDialog$3", "(Larc/scene/ui/TextButton;)Z" },
	{ "lambda$filterDialog$2", "()V" },
	{ "lambda$buildPropView$0", "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildPropView$6", "(Ljava/lang/String;Ljava/lang/String;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildPropView$1", "(Ljava/util/Locale;Lmindustry/editor/MapLocalesDialog$PropertyStatus;Ljava/lang/String;Ljava/lang/String;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildPropView$5", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V" },
	{ "lambda$buildPropView$2", "(Ljava/lang/String;Ljava/lang/String;Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildPropView$3", "(Ljava/lang/String;Ljava/lang/String;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildPropView$4", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V" },
	{ "lambda$viewPropertyDialog$0", "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$viewPropertyDialog$6", "(Larc/scene/ui/TextField;Ljava/lang/String;)V" },
	{ "lambda$viewPropertyDialog$5", "(Larc/scene/ui/TextField;)V" },
	{ "lambda$viewPropertyDialog$4", "(Larc/scene/ui/TextField;)V" },
	{ "lambda$viewPropertyDialog$3", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "lambda$viewPropertyDialog$1", "(Ljava/lang/String;)V" },
	{ "lambda$viewPropertyDialog$2", "(Ljava/lang/String;)V" },
	{ "lambda$editDialog$0", "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$editDialog$1", "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$editDialog$5", "(Larc/scene/ui/TextButton;)Z" },
	{ "lambda$editDialog$4", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$editDialog$3", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$editDialog$2", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$localeEditDialog$0", "(Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$localeEditDialog$1", "(Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$localeEditDialog$3", "(Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$localeEditDialog$2", "(Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$propEditDialog$0", "(Ljava/lang/String;Ljava/lang/String;Larc/scene/ui/layout/Table;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$propEditDialog$1", "(Ljava/lang/String;Ljava/lang/String;Larc/scene/ui/layout/Table;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$propEditDialog$7", "(Ljava/lang/String;Larc/scene/ui/TextButton;)Z" },
	{ "lambda$propEditDialog$6", "(Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$propEditDialog$4", "(Ljava/lang/String;Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$propEditDialog$5", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V" },
	{ "lambda$propEditDialog$3", "(Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$propEditDialog$2", "(Ljava/lang/String;Ljava/lang/String;Larc/scene/ui/layout/Table;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$addLocaleDialog$0", "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$addLocaleDialog$2", "(Ljava/lang/String;Larc/scene/ui/TextButton;)V" },
	{ "lambda$addLocaleDialog$1", "(Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$buildMain$0", "(Larc/struct/StringMap;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildMain$1", "(Ljava/lang/String;Larc/struct/StringMap;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildMain$8", "([Ljava/lang/String;Larc/struct/StringMap;[Ljava/lang/String;Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildMain$9", "(Larc/struct/StringMap;[Ljava/lang/String;Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "lambda$buildMain$7", "(Larc/scene/ui/layout/Table;[Ljava/lang/String;[Ljava/lang/String;)V" },
	{ "lambda$buildMain$6", "([Ljava/lang/String;Larc/struct/StringMap;)V" },
	{ "lambda$buildMain$5", "(Larc/struct/StringMap;Larc/scene/ui/layout/Table;[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V" },
	{ "lambda$buildLocalesTable$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildLocalesTable$4", "(Ljava/lang/String;)V" },
	{ "lambda$buildLocalesTable$5", "(Ljava/lang/String;)V" },
	{ "lambda$buildLocalesTable$3", "(Ljava/lang/String;)V" },
	{ "lambda$buildLocalesTable$2", "(Ljava/lang/String;Larc/scene/ui/TextButton;)V" },
	{ "lambda$buildLocalesTable$1", "(Ljava/lang/String;)V" },
	{ "lambda$setup$10", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$13", "(Larc/scene/ui/TextField;Larc/scene/ui/TextField;)V" },
	{ "lambda$setup$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$9", "(Z)V" },
	{ "lambda$setup$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$8", "(Larc/scene/ui/TextField;)V" },
	{ "lambda$setup$7", "(Larc/scene/ui/TextField;)V" },
	{ "lambda$setup$6", "(Larc/scene/ui/TextField;)V" },
	{ "lambda$setup$5", "(Ljava/lang/String;)V" },
	{ "lambda$setup$4", "()V" },
	{ "lambda$setup$3", "(Larc/scene/ui/ImageButton;)V" },
	{ "lambda$setup$2", "()V" },
	{ "lambda$new$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$6", "(Larc/scene/ui/TextButton;)Z" },
	{ "lambda$new$5", "()V" },
	{ "lambda$new$3", "()V" },
	{ "lambda$new$4", "()V" },
	{ "lambda$new$2", "()V" },
};

static jclass innerClasses[] {
	&class_mindustry_editor_MapLocalesDialog$PropertyStatus,
};

static FieldMetadata fields[] {
	{ "cardWidth", &class_float, (intptr_t) &SF_mindustry_editor_MapLocalesDialog_cardWidth, "F", 26 },
	{ "filterStyle", &class_arc_scene_ui_TextButton$TextButtonStyle, (intptr_t) &SF_mindustry_editor_MapLocalesDialog_filterStyle, "Larc/scene/ui/TextButton$TextButtonStyle;", 26 },
	{ "contentIcons", getArrayClass(&class_mindustry_ctype_ContentType, 1), (intptr_t) &SF_mindustry_editor_MapLocalesDialog_contentIcons, "[Lmindustry/ctype/ContentType;", 26 },
	{ "locales", &class_mindustry_type_MapLocales, offsetof(mindustry_editor_MapLocalesDialog, F_locales), "Lmindustry/type/MapLocales;", 2 },
	{ "lastSaved", &class_mindustry_type_MapLocales, offsetof(mindustry_editor_MapLocalesDialog, F_lastSaved), "Lmindustry/type/MapLocales;", 2 },
	{ "saved", &class_boolean, offsetof(mindustry_editor_MapLocalesDialog, F_saved), "Z", 2 },
	{ "langs", &class_arc_scene_ui_layout_Table, offsetof(mindustry_editor_MapLocalesDialog, F_langs), "Larc/scene/ui/layout/Table;", 2 },
	{ "main", &class_arc_scene_ui_layout_Table, offsetof(mindustry_editor_MapLocalesDialog, F_main), "Larc/scene/ui/layout/Table;", 2 },
	{ "propView", &class_arc_scene_ui_layout_Table, offsetof(mindustry_editor_MapLocalesDialog, F_propView), "Larc/scene/ui/layout/Table;", 2 },
	{ "selectedLocale", &class_java_lang_String, offsetof(mindustry_editor_MapLocalesDialog, F_selectedLocale), "Ljava/lang/String;", 2 },
	{ "applytoall", &class_boolean, offsetof(mindustry_editor_MapLocalesDialog, F_applytoall), "Z", 2 },
	{ "collapsed", &class_boolean, offsetof(mindustry_editor_MapLocalesDialog, F_collapsed), "Z", 2 },
	{ "searchString", &class_java_lang_String, offsetof(mindustry_editor_MapLocalesDialog, F_searchString), "Ljava/lang/String;", 2 },
	{ "searchByValue", &class_boolean, offsetof(mindustry_editor_MapLocalesDialog, F_searchByValue), "Z", 2 },
	{ "showCorrect", &class_boolean, offsetof(mindustry_editor_MapLocalesDialog, F_showCorrect), "Z", 2 },
	{ "showMissing", &class_boolean, offsetof(mindustry_editor_MapLocalesDialog, F_showMissing), "Z", 2 },
	{ "showSame", &class_boolean, offsetof(mindustry_editor_MapLocalesDialog, F_showSame), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapLocalesDialog, 0, "()V", 1 },
	{ "show", (intptr_t) M_mindustry_editor_MapLocalesDialog_show_mindustry_type_MapLocales, VTABLE_mindustry_editor_MapLocalesDialog_show_mindustry_type_MapLocales, "(Lmindustry/type/MapLocales;)V", 1 },
	{ "setup", (intptr_t) M_mindustry_editor_MapLocalesDialog_setup, VTABLE_mindustry_editor_MapLocalesDialog_setup, "()V", 2 },
	{ "buildTables", (intptr_t) M_mindustry_editor_MapLocalesDialog_buildTables, VTABLE_mindustry_editor_MapLocalesDialog_buildTables, "()V", 2 },
	{ "buildLocalesTable", (intptr_t) M_mindustry_editor_MapLocalesDialog_buildLocalesTable, VTABLE_mindustry_editor_MapLocalesDialog_buildLocalesTable, "()V", 2 },
	{ "buildMain", (intptr_t) M_mindustry_editor_MapLocalesDialog_buildMain, VTABLE_mindustry_editor_MapLocalesDialog_buildMain, "()V", 2 },
	{ "updateCard", (intptr_t) M_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String, "(Larc/scene/ui/layout/Table;Ljava/lang/String;Ljava/lang/String;)V", 2 },
	{ "updateCard", (intptr_t) M_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_java_lang_String_boolean, VTABLE_mindustry_editor_MapLocalesDialog_updateCard_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_java_lang_String_boolean, "(Larc/scene/ui/layout/Table;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", 2 },
	{ "getPropertyStatus", (intptr_t) M_mindustry_editor_MapLocalesDialog_getPropertyStatus_java_lang_String_java_lang_String_java_lang_String_boolean_R_mindustry_editor_MapLocalesDialog$PropertyStatus, VTABLE_mindustry_editor_MapLocalesDialog_getPropertyStatus_java_lang_String_java_lang_String_java_lang_String_boolean_R_mindustry_editor_MapLocalesDialog$PropertyStatus, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Lmindustry/editor/MapLocalesDialog$PropertyStatus;", 2 },
	{ "addLocaleDialog", (intptr_t) M_mindustry_editor_MapLocalesDialog_addLocaleDialog, VTABLE_mindustry_editor_MapLocalesDialog_addLocaleDialog, "()V", 2 },
	{ "propEditDialog", (intptr_t) M_mindustry_editor_MapLocalesDialog_propEditDialog_arc_scene_ui_layout_Table_java_lang_String_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_propEditDialog_arc_scene_ui_layout_Table_java_lang_String_java_lang_String, "(Larc/scene/ui/layout/Table;Ljava/lang/String;Ljava/lang/String;)V", 2 },
	{ "localeEditDialog", (intptr_t) M_mindustry_editor_MapLocalesDialog_localeEditDialog_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_localeEditDialog_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "editDialog", (intptr_t) M_mindustry_editor_MapLocalesDialog_editDialog, VTABLE_mindustry_editor_MapLocalesDialog_editDialog, "()V", 2 },
	{ "viewPropertyDialog", (intptr_t) M_mindustry_editor_MapLocalesDialog_viewPropertyDialog_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_viewPropertyDialog_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "buildPropView", (intptr_t) M_mindustry_editor_MapLocalesDialog_buildPropView_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_buildPropView_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "filterDialog", (intptr_t) M_mindustry_editor_MapLocalesDialog_filterDialog_java_lang_Runnable, VTABLE_mindustry_editor_MapLocalesDialog_filterDialog_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 2 },
	{ "addIconDialog", (intptr_t) M_mindustry_editor_MapLocalesDialog_addIconDialog_arc_func_Cons, VTABLE_mindustry_editor_MapLocalesDialog_addIconDialog_arc_func_Cons, "(Larc/func/Cons;)V", 2 },
	{ "iconsTable", (intptr_t) M_mindustry_editor_MapLocalesDialog_iconsTable_arc_scene_ui_layout_Table_java_lang_String_arc_scene_ui_Dialog_arc_func_Cons, VTABLE_mindustry_editor_MapLocalesDialog_iconsTable_arc_scene_ui_layout_Table_java_lang_String_arc_scene_ui_Dialog_arc_func_Cons, "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/scene/ui/Dialog;Larc/func/Cons;)V", 2 },
	{ "writeBundles", (intptr_t) M_mindustry_editor_MapLocalesDialog_writeBundles_R_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_writeBundles_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "writeLocale", (intptr_t) M_mindustry_editor_MapLocalesDialog_writeLocale_java_lang_String_R_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_writeLocale_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 2 },
	{ "readBundles", (intptr_t) M_mindustry_editor_MapLocalesDialog_readBundles_java_lang_String_R_mindustry_type_MapLocales, VTABLE_mindustry_editor_MapLocalesDialog_readBundles_java_lang_String_R_mindustry_type_MapLocales, "(Ljava/lang/String;)Lmindustry/type/MapLocales;", 2 },
	{ "readLocale", (intptr_t) M_mindustry_editor_MapLocalesDialog_readLocale_java_lang_String_R_arc_struct_StringMap, VTABLE_mindustry_editor_MapLocalesDialog_readLocale_java_lang_String_R_arc_struct_StringMap, "(Ljava/lang/String;)Larc/struct/StringMap;", 2 },
	{ "lambda$iconsTable$4", (intptr_t) SM_mindustry_editor_MapLocalesDialog_lambda$iconsTable$4_arc_func_Cons_mindustry_game_Team_arc_scene_ui_Dialog, 0, "(Larc/func/Cons;Lmindustry/game/Team;Larc/scene/ui/Dialog;)V", 4106 },
	{ "lambda$iconsTable$3", (intptr_t) SM_mindustry_editor_MapLocalesDialog_lambda$iconsTable$3_java_lang_String_mindustry_game_Team_R_boolean, 0, "(Ljava/lang/String;Lmindustry/game/Team;)Z", 4106 },
	{ "lambda$iconsTable$2", (intptr_t) SM_mindustry_editor_MapLocalesDialog_lambda$iconsTable$2_arc_func_Cons_mindustry_ctype_UnlockableContent_arc_scene_ui_Dialog, 0, "(Larc/func/Cons;Lmindustry/ctype/UnlockableContent;Larc/scene/ui/Dialog;)V", 4106 },
	{ "lambda$iconsTable$1", (intptr_t) SM_mindustry_editor_MapLocalesDialog_lambda$iconsTable$1_java_lang_String_mindustry_ctype_UnlockableContent_R_boolean, 0, "(Ljava/lang/String;Lmindustry/ctype/UnlockableContent;)Z", 4106 },
	{ "lambda$iconsTable$0", (intptr_t) SM_mindustry_editor_MapLocalesDialog_lambda$iconsTable$0_arc_func_Cons_java_lang_String_arc_scene_ui_Dialog, 0, "(Larc/func/Cons;Ljava/lang/String;Larc/scene/ui/Dialog;)V", 4106 },
	{ "lambda$addIconDialog$3", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$addIconDialog$3_arc_scene_ui_layout_Table_arc_scene_ui_TextField_mindustry_ui_dialogs_BaseDialog_arc_func_Cons, VTABLE_mindustry_editor_MapLocalesDialog_lambda$addIconDialog$3_arc_scene_ui_layout_Table_arc_scene_ui_TextField_mindustry_ui_dialogs_BaseDialog_arc_func_Cons, "(Larc/scene/ui/layout/Table;Larc/scene/ui/TextField;Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;)V", 4098 },
	{ "lambda$addIconDialog$1", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$addIconDialog$1_arc_scene_ui_TextField_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$addIconDialog$1_arc_scene_ui_TextField_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_arc_scene_ui_layout_Table, "(Larc/scene/ui/TextField;Larc/scene/ui/layout/Table;Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$addIconDialog$2", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$addIconDialog$2_arc_scene_ui_TextField_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_func_Cons, VTABLE_mindustry_editor_MapLocalesDialog_lambda$addIconDialog$2_arc_scene_ui_TextField_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_func_Cons, "(Larc/scene/ui/TextField;Larc/scene/ui/layout/Table;Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;)V", 4098 },
	{ "lambda$addIconDialog$0", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$addIconDialog$0_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_lambda$addIconDialog$0_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_func_Cons_java_lang_String, "(Larc/scene/ui/layout/Table;Lmindustry/ui/dialogs/BaseDialog;Larc/func/Cons;Ljava/lang/String;)V", 4098 },
	{ "lambda$filterDialog$12", (intptr_t) SM_mindustry_editor_MapLocalesDialog_lambda$filterDialog$12_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog, 0, "(Ljava/lang/Runnable;Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$filterDialog$11", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$11_arc_scene_ui_TextButton, VTABLE_mindustry_editor_MapLocalesDialog_lambda$filterDialog$11_arc_scene_ui_TextButton, "(Larc/scene/ui/TextButton;)V", 4098 },
	{ "lambda$filterDialog$10", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$10, VTABLE_mindustry_editor_MapLocalesDialog_lambda$filterDialog$10, "()V", 4098 },
	{ "lambda$filterDialog$9", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$9_arc_scene_ui_TextButton, VTABLE_mindustry_editor_MapLocalesDialog_lambda$filterDialog$9_arc_scene_ui_TextButton, "(Larc/scene/ui/TextButton;)V", 4098 },
	{ "lambda$filterDialog$8", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$8, VTABLE_mindustry_editor_MapLocalesDialog_lambda$filterDialog$8, "()V", 4098 },
	{ "lambda$filterDialog$7", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$7_arc_scene_ui_TextButton, VTABLE_mindustry_editor_MapLocalesDialog_lambda$filterDialog$7_arc_scene_ui_TextButton, "(Larc/scene/ui/TextButton;)V", 4098 },
	{ "lambda$filterDialog$6", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$6, VTABLE_mindustry_editor_MapLocalesDialog_lambda$filterDialog$6, "()V", 4098 },
	{ "lambda$filterDialog$0", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$0_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$filterDialog$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$filterDialog$1", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$1_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$filterDialog$1_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$filterDialog$5", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$5_arc_scene_ui_TextButton_R_boolean, VTABLE_mindustry_editor_MapLocalesDialog_lambda$filterDialog$5_arc_scene_ui_TextButton_R_boolean, "(Larc/scene/ui/TextButton;)Z", 4098 },
	{ "lambda$filterDialog$4", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$4, VTABLE_mindustry_editor_MapLocalesDialog_lambda$filterDialog$4, "()V", 4098 },
	{ "lambda$filterDialog$3", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$3_arc_scene_ui_TextButton_R_boolean, VTABLE_mindustry_editor_MapLocalesDialog_lambda$filterDialog$3_arc_scene_ui_TextButton_R_boolean, "(Larc/scene/ui/TextButton;)Z", 4098 },
	{ "lambda$filterDialog$2", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$filterDialog$2, VTABLE_mindustry_editor_MapLocalesDialog_lambda$filterDialog$2, "()V", 4098 },
	{ "lambda$buildPropView$0", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$0_java_lang_String_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildPropView$0_java_lang_String_arc_scene_ui_layout_Table, "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildPropView$6", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$6_java_lang_String_java_lang_String_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildPropView$6_java_lang_String_java_lang_String_arc_scene_ui_layout_Table, "(Ljava/lang/String;Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildPropView$1", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$1_java_util_Locale_mindustry_editor_MapLocalesDialog$PropertyStatus_java_lang_String_java_lang_String_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildPropView$1_java_util_Locale_mindustry_editor_MapLocalesDialog$PropertyStatus_java_lang_String_java_lang_String_arc_scene_ui_layout_Table, "(Ljava/util/Locale;Lmindustry/editor/MapLocalesDialog$PropertyStatus;Ljava/lang/String;Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildPropView$5", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$5_java_lang_String_java_lang_String_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildPropView$5_java_lang_String_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 4098 },
	{ "lambda$buildPropView$2", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$2_java_lang_String_java_lang_String_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildPropView$2_java_lang_String_java_lang_String_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, "(Ljava/lang/String;Ljava/lang/String;Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildPropView$3", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$3_java_lang_String_java_lang_String_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildPropView$3_java_lang_String_java_lang_String_arc_scene_ui_layout_Table, "(Ljava/lang/String;Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildPropView$4", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildPropView$4_java_lang_String_java_lang_String_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildPropView$4_java_lang_String_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 4098 },
	{ "lambda$viewPropertyDialog$0", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$0_java_lang_String_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$0_java_lang_String_arc_scene_ui_layout_Table, "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$viewPropertyDialog$6", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$6_arc_scene_ui_TextField_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$6_arc_scene_ui_TextField_java_lang_String, "(Larc/scene/ui/TextField;Ljava/lang/String;)V", 4098 },
	{ "lambda$viewPropertyDialog$5", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$5_arc_scene_ui_TextField, VTABLE_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$5_arc_scene_ui_TextField, "(Larc/scene/ui/TextField;)V", 4098 },
	{ "lambda$viewPropertyDialog$4", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$4_arc_scene_ui_TextField, VTABLE_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$4_arc_scene_ui_TextField, "(Larc/scene/ui/TextField;)V", 4098 },
	{ "lambda$viewPropertyDialog$3", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$3_java_lang_String_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$3_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 4098 },
	{ "lambda$viewPropertyDialog$1", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$1_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$viewPropertyDialog$2", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$2_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_lambda$viewPropertyDialog$2_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$editDialog$0", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$editDialog$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$editDialog$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$editDialog$1", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$editDialog$1_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$editDialog$1_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$editDialog$5", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$editDialog$5_arc_scene_ui_TextButton_R_boolean, VTABLE_mindustry_editor_MapLocalesDialog_lambda$editDialog$5_arc_scene_ui_TextButton_R_boolean, "(Larc/scene/ui/TextButton;)Z", 4098 },
	{ "lambda$editDialog$4", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$editDialog$4_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapLocalesDialog_lambda$editDialog$4_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$editDialog$3", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$editDialog$3_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapLocalesDialog_lambda$editDialog$3_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$editDialog$2", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$editDialog$2_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapLocalesDialog_lambda$editDialog$2_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$localeEditDialog$0", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$localeEditDialog$0_java_lang_String_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$localeEditDialog$0_java_lang_String_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$localeEditDialog$1", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$localeEditDialog$1_java_lang_String_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$localeEditDialog$1_java_lang_String_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$localeEditDialog$3", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$localeEditDialog$3_java_lang_String_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapLocalesDialog_lambda$localeEditDialog$3_java_lang_String_mindustry_ui_dialogs_BaseDialog, "(Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$localeEditDialog$2", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$localeEditDialog$2_java_lang_String_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapLocalesDialog_lambda$localeEditDialog$2_java_lang_String_mindustry_ui_dialogs_BaseDialog, "(Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$propEditDialog$0", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$0_java_lang_String_java_lang_String_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$0_java_lang_String_java_lang_String_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Ljava/lang/String;Ljava/lang/String;Larc/scene/ui/layout/Table;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$propEditDialog$1", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$1_java_lang_String_java_lang_String_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$1_java_lang_String_java_lang_String_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Ljava/lang/String;Ljava/lang/String;Larc/scene/ui/layout/Table;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$propEditDialog$7", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$7_java_lang_String_arc_scene_ui_TextButton_R_boolean, VTABLE_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$7_java_lang_String_arc_scene_ui_TextButton_R_boolean, "(Ljava/lang/String;Larc/scene/ui/TextButton;)Z", 4098 },
	{ "lambda$propEditDialog$6", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$6_java_lang_String_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$6_java_lang_String_mindustry_ui_dialogs_BaseDialog, "(Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$propEditDialog$4", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$4_java_lang_String_java_lang_String_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$4_java_lang_String_java_lang_String_mindustry_ui_dialogs_BaseDialog, "(Ljava/lang/String;Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$propEditDialog$5", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$5_java_lang_String_java_lang_String_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$5_java_lang_String_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 4098 },
	{ "lambda$propEditDialog$3", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$3_java_lang_String_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$3_java_lang_String_mindustry_ui_dialogs_BaseDialog, "(Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$propEditDialog$2", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$2_java_lang_String_java_lang_String_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapLocalesDialog_lambda$propEditDialog$2_java_lang_String_java_lang_String_arc_scene_ui_layout_Table_mindustry_ui_dialogs_BaseDialog, "(Ljava/lang/String;Ljava/lang/String;Larc/scene/ui/layout/Table;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$addLocaleDialog$0", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$addLocaleDialog$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$addLocaleDialog$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$addLocaleDialog$2", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$addLocaleDialog$2_java_lang_String_arc_scene_ui_TextButton, VTABLE_mindustry_editor_MapLocalesDialog_lambda$addLocaleDialog$2_java_lang_String_arc_scene_ui_TextButton, "(Ljava/lang/String;Larc/scene/ui/TextButton;)V", 4098 },
	{ "lambda$addLocaleDialog$1", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$addLocaleDialog$1_java_lang_String_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapLocalesDialog_lambda$addLocaleDialog$1_java_lang_String_mindustry_ui_dialogs_BaseDialog, "(Ljava/lang/String;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$buildMain$0", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildMain$0_arc_struct_StringMap_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildMain$0_arc_struct_StringMap_arc_scene_ui_layout_Table, "(Larc/struct/StringMap;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildMain$1", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildMain$1_java_lang_String_arc_struct_StringMap_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildMain$1_java_lang_String_arc_struct_StringMap_arc_scene_ui_layout_Table, "(Ljava/lang/String;Larc/struct/StringMap;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildMain$11", (intptr_t) SM_mindustry_editor_MapLocalesDialog_lambda$buildMain$11_Array1_boolean_R_boolean, 0, "([Z)Z", 4106 },
	{ "lambda$buildMain$8", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildMain$8_Array1_java_lang_String_arc_struct_StringMap_Array1_java_lang_String_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildMain$8_Array1_java_lang_String_arc_struct_StringMap_Array1_java_lang_String_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, "([Ljava/lang/String;Larc/struct/StringMap;[Ljava/lang/String;Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildMain$10", (intptr_t) SM_mindustry_editor_MapLocalesDialog_lambda$buildMain$10_Array1_java_lang_String_arc_struct_StringMap_Array1_java_lang_String_arc_scene_ui_TextArea, 0, "([Ljava/lang/String;Larc/struct/StringMap;[Ljava/lang/String;Larc/scene/ui/TextArea;)V", 4106 },
	{ "lambda$buildMain$9", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildMain$9_arc_struct_StringMap_Array1_java_lang_String_arc_scene_ui_layout_Table_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildMain$9_arc_struct_StringMap_Array1_java_lang_String_arc_scene_ui_layout_Table_java_lang_String, "(Larc/struct/StringMap;[Ljava/lang/String;Larc/scene/ui/layout/Table;Ljava/lang/String;)V", 4098 },
	{ "lambda$buildMain$7", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildMain$7_arc_scene_ui_layout_Table_Array1_java_lang_String_Array1_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildMain$7_arc_scene_ui_layout_Table_Array1_java_lang_String_Array1_java_lang_String, "(Larc/scene/ui/layout/Table;[Ljava/lang/String;[Ljava/lang/String;)V", 4098 },
	{ "lambda$buildMain$6", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildMain$6_Array1_java_lang_String_arc_struct_StringMap, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildMain$6_Array1_java_lang_String_arc_struct_StringMap, "([Ljava/lang/String;Larc/struct/StringMap;)V", 4098 },
	{ "lambda$buildMain$5", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildMain$5_arc_struct_StringMap_arc_scene_ui_layout_Table_Array1_java_lang_String_Array1_java_lang_String_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildMain$5_arc_struct_StringMap_arc_scene_ui_layout_Table_Array1_java_lang_String_Array1_java_lang_String_java_lang_String, "(Larc/struct/StringMap;Larc/scene/ui/layout/Table;[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V", 4098 },
	{ "lambda$buildMain$4", (intptr_t) SM_mindustry_editor_MapLocalesDialog_lambda$buildMain$4_arc_scene_ui_TextField_char_R_boolean, 0, "(Larc/scene/ui/TextField;C)Z", 4106 },
	{ "lambda$buildMain$3", (intptr_t) SM_mindustry_editor_MapLocalesDialog_lambda$buildMain$3_Array1_boolean_arc_scene_ui_ImageButton, 0, "([ZLarc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$buildMain$2", (intptr_t) SM_mindustry_editor_MapLocalesDialog_lambda$buildMain$2_Array1_boolean, 0, "([Z)V", 4106 },
	{ "lambda$buildLocalesTable$0", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$0_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildLocalesTable$4", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$4_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$4_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$buildLocalesTable$5", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$5_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$5_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$buildLocalesTable$3", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$3_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$3_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$buildLocalesTable$2", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$2_java_lang_String_arc_scene_ui_TextButton, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$2_java_lang_String_arc_scene_ui_TextButton, "(Ljava/lang/String;Larc/scene/ui/TextButton;)V", 4098 },
	{ "lambda$buildLocalesTable$1", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$1_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_lambda$buildLocalesTable$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$setup$10", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$setup$10_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$setup$10_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$13", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$setup$13_arc_scene_ui_TextField_arc_scene_ui_TextField, VTABLE_mindustry_editor_MapLocalesDialog_lambda$setup$13_arc_scene_ui_TextField_arc_scene_ui_TextField, "(Larc/scene/ui/TextField;Larc/scene/ui/TextField;)V", 4098 },
	{ "lambda$setup$12", (intptr_t) SM_mindustry_editor_MapLocalesDialog_lambda$setup$12_java_lang_String, 0, "(Ljava/lang/String;)V", 4106 },
	{ "lambda$setup$11", (intptr_t) SM_mindustry_editor_MapLocalesDialog_lambda$setup$11_java_lang_String, 0, "(Ljava/lang/String;)V", 4106 },
	{ "lambda$setup$0", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$setup$0_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$setup$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$9", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$setup$9_boolean, VTABLE_mindustry_editor_MapLocalesDialog_lambda$setup$9_boolean, "(Z)V", 4098 },
	{ "lambda$setup$1", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$setup$1_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$setup$1_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$8", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$setup$8_arc_scene_ui_TextField, VTABLE_mindustry_editor_MapLocalesDialog_lambda$setup$8_arc_scene_ui_TextField, "(Larc/scene/ui/TextField;)V", 4098 },
	{ "lambda$setup$7", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$setup$7_arc_scene_ui_TextField, VTABLE_mindustry_editor_MapLocalesDialog_lambda$setup$7_arc_scene_ui_TextField, "(Larc/scene/ui/TextField;)V", 4098 },
	{ "lambda$setup$6", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$setup$6_arc_scene_ui_TextField, VTABLE_mindustry_editor_MapLocalesDialog_lambda$setup$6_arc_scene_ui_TextField, "(Larc/scene/ui/TextField;)V", 4098 },
	{ "lambda$setup$5", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$setup$5_java_lang_String, VTABLE_mindustry_editor_MapLocalesDialog_lambda$setup$5_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$setup$4", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$setup$4, VTABLE_mindustry_editor_MapLocalesDialog_lambda$setup$4, "()V", 4098 },
	{ "lambda$setup$3", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$setup$3_arc_scene_ui_ImageButton, VTABLE_mindustry_editor_MapLocalesDialog_lambda$setup$3_arc_scene_ui_ImageButton, "(Larc/scene/ui/ImageButton;)V", 4098 },
	{ "lambda$setup$2", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$setup$2, VTABLE_mindustry_editor_MapLocalesDialog_lambda$setup$2, "()V", 4098 },
	{ "lambda$new$7", (intptr_t) SM_mindustry_editor_MapLocalesDialog_lambda$new$7, 0, "()V", 4106 },
	{ "lambda$new$0", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$new$0_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapLocalesDialog_lambda$new$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$6", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$new$6_arc_scene_ui_TextButton_R_boolean, VTABLE_mindustry_editor_MapLocalesDialog_lambda$new$6_arc_scene_ui_TextButton_R_boolean, "(Larc/scene/ui/TextButton;)Z", 4098 },
	{ "lambda$new$5", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$new$5, VTABLE_mindustry_editor_MapLocalesDialog_lambda$new$5, "()V", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$new$3, VTABLE_mindustry_editor_MapLocalesDialog_lambda$new$3, "()V", 4098 },
	{ "lambda$new$4", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$new$4, VTABLE_mindustry_editor_MapLocalesDialog_lambda$new$4, "()V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$new$1, VTABLE_mindustry_editor_MapLocalesDialog_lambda$new$1, "()V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_editor_MapLocalesDialog_lambda$new$2, VTABLE_mindustry_editor_MapLocalesDialog_lambda$new$2, "()V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_editor_MapLocalesDialog, 0, "()V", 8 },
};

Class class_mindustry_editor_MapLocalesDialog{
		.nativeName = (intptr_t) "mindustry/editor/MapLocalesDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_editor_MapLocalesDialog),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapLocalesDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapLocalesDialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapLocalesDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 120,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 400,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapLocalesDialog = registerClass(&class_mindustry_editor_MapLocalesDialog);

}
