#include "mindustry/ui/dialogs/ModsDialog.h"
#include "arc/func/Boolp.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "mindustry/mod/Mods.h"
#include "java/lang/reflect/Method.h"
#include "arc/func/Floatp.h"
#include "arc/func/Boolf.h"
#include "arc/util/Log.h"
#include "arc/util/Time.h"
#include "arc/func/Floatc.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Http_HttpStatusException.h"
#include "java/lang/Object.h"
#include "arc/struct/ObjectMap.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "java/util/regex/Matcher.h"
#include "mindustry/ui/fragments/LoadingFragment.h"
#include "arc/func/Cons.h"
#include "java/lang/NoSuchMethodError.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/core/Platform.h"
#include "arc/scene/event/ClickListener.h"
#include "java/io/OutputStream.h"
#include "arc/util/Http.h"
#include "mindustry/Vars.h"
#include "mindustry/ui/dialogs/ModsDialog.h"
#include "arc/Events.h"
#include "mindustry/ui/BorderImage.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_40.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_41.h"
#include "arc/func/ConsT.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Floatc_3.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Floatc_4.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Floatc_5.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_46.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_47.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_48.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_49.h"
#include "java/util/regex/Pattern.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_42.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_43.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_44.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_45.h"
#include "mindustry/ui/FileChooser.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_ConsT_10.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_ConsT_12.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_ConsT_11.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_50.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_51.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_52.h"
#include "mindustry/mod/ModListing.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_57.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_58.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_59.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_53.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_54.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_55.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_56.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_ConsT_14.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_ConsT_13.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_ConsT_16.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_ConsT_15.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_ConsT_17.h"
#include "mindustry/ui/dialogs/ModBrowserDialog.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "java/lang/Math.h"
#include "mindustry/mod/Mods_ModState.h"
#include "mindustry/gen/Tex.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_37.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_38.h"
#include "mindustry/ctype/Content.h"
#include "arc/util/io/Streams.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_39.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "mindustry/core/Version.h"
#include "arc/scene/ui/Image.h"
#include "arc/struct/Seq.h"
#include "mindustry/mod/Mods_ModMeta.h"
#include "arc/Settings.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/util/Nullable.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_36.h"
#include "arc/Graphics.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Boolp_1.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/util/ArcRuntimeException.h"
#include "mindustry/ui/dialogs/ContentInfoDialog.h"
#include "mindustry/type/Publishable.h"
#include "arc/struct/ObjectSet.h"
#include "arc/util/Http_HttpResponse.h"
#include "mindustry/ctype/Content_ModContentInfo.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_60.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_61.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_62.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_63.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_68.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_69.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_64.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_65.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_66.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_67.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_71.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_72.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_73.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_java_lang_Runnable_70.h"
#include "arc/scene/ui/ScrollPane.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_59.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_69.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_68.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_67.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_66.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_65.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_64.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_63.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_62.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_61.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_60.h"
#include "arc/scene/ui/ImageButton.h"
#include "java/util/Locale.h"
#include "arc/scene/ui/Tooltip.h"
#include "arc/util/Structs.h"
#include "mindustry/mod/ModListing_ModRelease.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Boolf_9.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Boolf_7.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Boolf_8.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_71.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_70.h"
#include "java/lang/RuntimeException.h"
#include "arc/util/serialization/Jval_JsonArray.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_ConsT_9.h"
#include "arc/util/Http_HttpStatus.h"
#include "arc/files/Fi.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_39.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_38.h"
#include "arc/Application.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_37.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_47.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_46.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_45.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_44.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_43.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Boolf_12.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_42.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Boolf_13.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_41.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Boolf_10.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_40.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Boolf_11.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Floatp_1.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/util/serialization/Jval.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_49.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_48.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_58.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_57.h"
#include "arc/scene/Element.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_56.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_55.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_54.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_53.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_52.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_51.h"
#include "mindustry/ui/dialogs/ModsDialog_invoke_arc_func_Cons_50.h"
#include "mindustry/game/EventType_ResizeEvent.h"

extern "C" {

jobject SF_mindustry_ui_dialogs_ModsDialog_modVersionPattern;

void mark_mindustry_ui_dialogs_ModsDialog(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_dialogs_ModsDialog_modVersionPattern)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_ModsDialog_modVersionPattern)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_ModsDialog_modVersionPattern, mark, depth + 1);
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
	auto self = (mindustry_ui_dialogs_ModsDialog *) object;
	if (self->F_browser)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_browser)->clazz)->markFunction)((jobject) self->F_browser, mark, depth + 1);
	if (self->F_currentContent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentContent)->clazz)->markFunction)((jobject) self->F_currentContent, mark, depth + 1);
	if (self->F_downloads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_downloads)->clazz)->markFunction)((jobject) self->F_downloads, mark, depth + 1);
	if (self->F_modDetails)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_modDetails)->clazz)->markFunction)((jobject) self->F_modDetails, mark, depth + 1);
	if (self->F_modToListing)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_modToListing)->clazz)->markFunction)((jobject) self->F_modToListing, mark, depth + 1);
	if (self->F_withUpdates)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_withUpdates)->clazz)->markFunction)((jobject) self->F_withUpdates, mark, depth + 1);
	if (self->F_updaterElement)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_updaterElement)->clazz)->markFunction)((jobject) self->F_updaterElement, mark, depth + 1);
}

void init_mindustry_ui_dialogs_ModsDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(52);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@mods"_j))));
	LINE_NUMBER(45);
	((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_scroll = (jfloat(0));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK(sp[0].o))->F_modToListing = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK(sp[0].o))->F_withUpdates = (jref) sp[1].o;
	LINE_NUMBER(53);
	((func_mindustry_ui_dialogs_ModsDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_addCloseButton])(ctx, (frame[0].o));
	LINE_NUMBER(55);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_list_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_list_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_7);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mods.restore"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_power;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_37(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_37 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_37);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mods.guide"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_link;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_38(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_38 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_38);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(210.0f)), (jfloat(64.0f)));
	}
label_8:;
	{
	LINE_NUMBER(64);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_9;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mods.openfolder"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_link;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_39(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_39 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_39);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_9:;
	{
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_40(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_40 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_40);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_ModsDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_41(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_41 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_41);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_ModsDialog_onResize_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_onResize_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(76);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResizeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_36(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_36 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_36);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_42(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_42 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_42);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_ModsDialog_hidden_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_hidden_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog);
	init_mindustry_ui_dialogs_ModBrowserDialog(ctx, sp[1].o);
	((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK(sp[0].o))->F_browser = (jref) sp[1].o;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_refreshModUpdates(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:refreshModUpdates", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(99);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_getMods_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_getMods_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_mod_Mods$LoadedMod, sp[0].o));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(101);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_hasSteamID_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_hasSteamID_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_6;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_6;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (frame[4].o), (frame[3].o));
	}
label_6:;
	LINE_NUMBER(104);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_browser;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_37(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_37 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_37);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_ModBrowserDialog_getModList_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog_getModList_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_ModsDialog_hasUpdate_mindustry_mod_Mods$LoadedMod_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:hasUpdate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_withUpdates;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:setup", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	frame[1].f = (jfloat(110.0f));
	LINE_NUMBER(132);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp1 = jfloat(temp0);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1.05f)));
	jfloat temp3 = temp1 / temp2;
	jfloat temp4 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(28.0f)));
	jfloat temp5 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp3 - temp4), (jfloat(520.0f)));
	frame[2].f = temp5;
	LINE_NUMBER(134);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(135);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp6 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp7 = jfloat(temp6);
	jfloat temp8 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1.05f)));
	jfloat temp9 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp7 / temp8), (jfloat(556.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp9);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@mod.reloadrequired"_j))));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_mods;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolp_1);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	((func_arc_scene_ui_Label_setAlignment_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int])(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)), (jint(1)));
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(139);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_38(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_38 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_38);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp10 = frame[2].f;
	LINE_NUMBER(201);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp10);
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(205);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_list_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_list_R_arc_struct_Seq])(ctx, sp[0].o);
	jint temp11 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp11 != 0) goto label_10;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	frame[3].o = sp[0].o;
	LINE_NUMBER(207);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_ui_layout_Table, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[4].o = sp[0].o;
	LINE_NUMBER(209);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_39(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_39 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_39);
		proxy->F_field4 = (frame[2].f);
		proxy->F_field3 = (frame[1].f);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[5].o = sp[0].o;
	LINE_NUMBER(318);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_15;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_40(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_40 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_40);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(322);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	}
label_16:;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(326);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_41(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_41 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_41);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jint temp0 = jint(0);
	LINE_NUMBER(329);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_42(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_42 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_42);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	((func_arc_scene_ui_ScrollPane_setScrollYForce_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_ScrollPane, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollYForce_float])(ctx, (checkCast(ctx, &class_arc_scene_ui_ScrollPane, sp[0].o)), ((jfloat)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_scroll));
	LINE_NUMBER(331);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(333);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_withUpdates;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_22;
	}
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_43(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_43 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_43);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_grayt;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_43(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_43 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_43);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(8.0f);
	LINE_NUMBER(360);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_22:;
	LINE_NUMBER(362);
	goto label_25;
label_10:;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_44(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_44 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_44);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(80.0f)));
	}
label_25:;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_ModsDialog_getStateText_mindustry_mod_Mods$LoadedMod_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:getStateText", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(370);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_isOutdated_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_isOutdated_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"@mod.incompatiblemod"_j)));
	}
label_1:;
	{
	LINE_NUMBER(372);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_isBlacklisted_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_isBlacklisted_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(373);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"@mod.blacklisted"_j)));
	}
label_3:;
	{
	LINE_NUMBER(374);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"@mod.incompatiblegame"_j)));
	}
label_5:;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_state;
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_Mods$ModState_circularDependencies;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"@mod.circulardependencies"_j)));
	}
label_7:;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_state;
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_Mods$ModState_incompleteDependencies;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"@mod.incompletedependencies"_j)));
	}
label_9:;
	{
	LINE_NUMBER(380);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_hasUnmetDependencies_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_hasUnmetDependencies_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"@mod.unmetdependencies"_j)));
	}
label_11:;
	{
	LINE_NUMBER(382);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_hasContentErrors_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_hasContentErrors_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(383);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"@mod.erroredcontent"_j)));
	}
label_13:;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_meta;
	if (((jint)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_hidden) == 0) goto label_15;
	}
	{
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"@mod.multiplayer.compatible"_j)));
	}
label_15:;
	{
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_ModsDialog_getStateDetails_mindustry_mod_Mods$LoadedMod_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:getStateDetails", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(391);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_isOutdated_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_isOutdated_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"@mod.incompatiblemod.details"_j)));
	}
label_1:;
	{
	LINE_NUMBER(393);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_isBlacklisted_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_isBlacklisted_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"@mod.blacklisted.details"_j)));
	}
label_3:;
	{
	LINE_NUMBER(395);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(396);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mod.requiresversion.details"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_meta;
	sp[3].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[3].o))->F_minGameVersion;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_state;
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_Mods$ModState_circularDependencies;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"@mod.circulardependencies.details"_j)));
	}
label_7:;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_state;
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_Mods$ModState_incompleteDependencies;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(400);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mod.incompletedependencies.details"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_missingDependencies;
	sp[3].o = (jobject)((func_arc_struct_Seq_toString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_Seq_toString_java_lang_String_R_java_lang_String])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8", "_j))));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(401);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_hasUnmetDependencies_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_hasUnmetDependencies_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(402);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mod.missingdependencies.details"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_missingDependencies;
	sp[3].o = (jobject)((func_arc_struct_Seq_toString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_Seq_toString_java_lang_String_R_java_lang_String])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8", "_j))));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(403);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_hasContentErrors_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_hasContentErrors_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"@mod.erroredcontent.details"_j)));
	}
label_13:;
	{
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_showMod_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:showMod", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(410);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	sp[2].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_meta;
	sp[2].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[2].o))->F_displayName;
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[1].o, sp[2].o);
	((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK(sp[0].o))->F_modDetails = (jref) sp[1].o;
	LINE_NUMBER(412);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_modDetails;
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, sp[0].o);
	LINE_NUMBER(414);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_3;
	}
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_modDetails;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mods.openfolder"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_link;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_44(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_44 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_44);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_3:;
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((func_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(419);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_hasSteamID_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_hasSteamID_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(420);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_modDetails;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mods.github.open"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_link;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_45(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_45 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_45);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(421);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_11;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_11;
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_modDetails;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(422);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_modDetails;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mods.browser.reinstall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_46(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_46 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_46);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_5:;
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_modDetails;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_45(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_45 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_45);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	LINE_NUMBER(459);
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp1 / temp2), (jfloat(600.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	LINE_NUMBER(461);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_flatten_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_flatten_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_8);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(462);
	jint temp4 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, (frame[2].o));
	if (temp4 == 0) goto label_15;
	}
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_modDetails;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(464);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_modDetails;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mods.viewcontent"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_book;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_47(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_47 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_47);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(300.0f);
	jfloat temp1 = jfloat(50.0f);
	LINE_NUMBER(483);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	}
label_15:;
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_modDetails;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(487);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_handleMod_java_lang_String_arc_util_Http$HttpResponse_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:handleMod", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(491);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tmpDirectory;
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"/"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.zip"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(492);
	jlong temp0 = (jlong)((func_arc_util_Http$HttpResponse_getContentLength_R_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getContentLength_R_long])(ctx, (frame[2].o));
	frame[5].l = temp0;
	LINE_NUMBER(493);
	if ((longCompare((frame[5].l), (jlong(0)))) > 0) goto label_17;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Floatc_3(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Floatc_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Floatc_3);
		PUSH_OBJECT((jobject) proxy);
	}
	goto label_18;
label_17:;
	INST_ALOAD(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Floatc_4(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Floatc_4 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Floatc_4);
		proxy->F_field0 = (jref) (--sp)->o;
		PUSH_OBJECT((jobject) proxy);
	}
label_18:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(495);
	sp[0].o = (jobject)((func_arc_files_Fi_write_boolean_R_java_io_OutputStream) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_files_Fi_write_boolean_R_java_io_OutputStream])(ctx, (frame[4].o), (jint(0)));
	frame[8].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(496);
	sp[0].o = (jobject)((func_arc_util_Http$HttpResponse_getResultAsStream_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getResultAsStream_R_java_io_InputStream])(ctx, (frame[2].o));
	sp[1].o = frame[8].o;
	jlong temp0 = frame[5].l;
	jint temp1 = 4096;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Floatc_5(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Floatc_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Floatc_5);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_arc_util_io_Streams_copyProgress_java_io_InputStream_java_io_OutputStream_long_int_arc_func_Floatc(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(500);
	if ((frame[8].o) == nullptr) goto label_20;
	}
	{
	((func_java_io_OutputStream_close) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_io_OutputStream_close])(ctx, (frame[8].o));
	goto label_20;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(495);
	frame[9].o = sp[0].o;
	if ((frame[8].o) == nullptr) goto label_21;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(8);
	POP_N(1); // Pop method args
	((func_java_io_OutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_21;
label_6:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[9].o), (frame[10].o));
	}
label_21:;
	INST_ALOAD(9);
	INST_ATHROW();
	label_20:;
	{
	LINE_NUMBER(502);
	if (((jint)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_cancelledImport) == 0) { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_12:;
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(504);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_importMod_arc_files_Fi_boolean_R_mindustry_mod_Mods$LoadedMod) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_importMod_arc_files_Fi_boolean_R_mindustry_mod_Mods$LoadedMod])(ctx, sp[0].o, (frame[4].o), (frame[3].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(505);
	((func_mindustry_mod_Mods$LoadedMod_setRepo_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_setRepo_java_lang_String])(ctx, (frame[8].o), (frame[1].o));
	LINE_NUMBER(506);
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, (frame[4].o));
	LINE_NUMBER(507);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_48(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_48 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_48);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(523);
	goto label_25;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(520);
	frame[4].o = sp[0].o;
	LINE_NUMBER(521);
	if (((jint)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_cancelledImport) == 0) goto label_27;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_27:;
	{
	LINE_NUMBER(522);
	((func_mindustry_ui_dialogs_ModsDialog_showModError_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_showModError_java_lang_Throwable])(ctx, (frame[0].o), (frame[4].o));
	}
label_25:;
	LINE_NUMBER(524);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_importFail_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:importFail", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(527);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_49(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_49 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_49);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(528);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_showModError_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:showModError", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(531);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(533);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_NoSuchMethodError)) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)SM_arc_util_Strings_getCauses_java_lang_Throwable_R_arc_struct_Seq(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_9);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(534);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@feature.unsupported"_j))));
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(535);
	if ((isInstance(ctx, (frame[1].o), &class_arc_util_Http$HttpStatusException)) == 0) goto label_5;
	}
	{
	frame[2].o = (checkCast(ctx, &class_arc_util_Http$HttpStatusException, (frame[1].o)));
	LINE_NUMBER(536);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"connectfail"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((arc_util_Http$HttpStatusException *) NULL_CHECK((frame[2].o)))->F_status;
	sp[4].o = (jobject)((func_arc_util_Http$HttpStatus_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_util_Http$HttpStatus_toString_R_java_lang_String])(ctx, sp[4].o);
	sp[4].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[4].o);
	sp[4].o = (jobject)SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(ctx, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(537);
	sp[0].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"writable dex"_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(538);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@error.moddex"_j))), (frame[1].o));
	goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(540);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[1].o));
	}
label_4:;
	LINE_NUMBER(542);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_viewReleases_java_lang_String_boolean_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:viewReleases", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(545);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(546);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[4].o)))->F_cont;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"mods.browser.fetching"_j))));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(547);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[4].o));
	LINE_NUMBER(548);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"https://api.github.com/repos/\u0001/releases"_j.string, 1, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_9(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_9);
		proxy->F_field4 = (jref) (frame[1].o);
		proxy->F_field3 = (frame[2].i);
		proxy->F_field2 = (frame[3].i);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_46(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_46 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_46);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_arc_util_Http_get_java_lang_String_arc_func_ConsT_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(612);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_githubImportMod_mindustry_mod_ModListing(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:githubImportMod", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((func_mindustry_mod_ModListing_getMatchingRelease_R_mindustry_mod_ModListing$ModRelease) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_ModListing_getMatchingRelease_R_mindustry_mod_ModListing$ModRelease])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(616);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_repo;
	jint temp0 = (jint)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_hasJava;
	sp[2].i = temp0;
	sp += 3;
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(2);
	sp[-1].o = (jobject) ((mindustry_mod_ModListing$ModRelease *) NULL_CHECK(sp[-1].o))->F_id;
label_3:;
	{
	sp -= 4;
	((func_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].o, (jint(1)));
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:githubImportMod", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(620);
	((func_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jobject(nullptr)), (frame[3].i));
	LINE_NUMBER(621);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:githubImportMod", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(624);
	((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_modImportProgress = (jfloat(0));
	LINE_NUMBER(625);
	((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_cancelledImport = (jint(0));
	LINE_NUMBER(626);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"mods.downloading"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (frame[1].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_ui_fragments_LoadingFragment_show_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_show_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(627);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Floatp_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_LoadingFragment_setProgress_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_setProgress_arc_func_Floatp])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(628);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_50(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_50 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_50);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(633);
	if ((frame[2].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(634);
	((func_mindustry_ui_dialogs_ModsDialog_githubImportJavaMod_java_lang_String_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportJavaMod_java_lang_String_java_lang_String_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[4].i));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(636);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"https://api.github.com/repos/\u0001"_j.string, 1, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_10(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_10 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_10);
		proxy->F_field3 = (frame[4].i);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_47(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_47 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_47);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_arc_util_Http_get_java_lang_String_arc_func_ConsT_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_8:;
	LINE_NUMBER(651);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_githubImportJavaMod_java_lang_String_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:githubImportJavaMod", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(655);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((frame[2].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"latest"_j));
	goto label_2;
label_1:;
	INST_ALOAD(2);
label_2:;
	{
	sp -= 2;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"https://api.github.com/repos/\u0001/releases/\u0001"_j.string, 2, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_11(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_11 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_11);
		proxy->F_field2 = (frame[3].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_48(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_48 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_48);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_arc_util_Http_get_java_lang_String_arc_func_ConsT_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(676);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_githubImportBranch_java_lang_String_java_lang_String_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:githubImportBranch", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(679);
	if ((frame[3].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(680);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"https://api.github.com/repos/\u0001/releases/\u0001"_j.string, 2, (frame[2].o), (frame[3].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_12(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_12);
		proxy->F_field2 = (frame[4].i);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_util_Http_get_java_lang_String_arc_func_ConsT(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(696);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"https://api.github.com/repos/\u0001/zipball/\u0001"_j.string, 2, (frame[2].o), (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_13(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_13);
		proxy->F_field2 = (frame[4].i);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_49(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_49 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_49);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_arc_util_Http_get_java_lang_String_arc_func_ConsT_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_3:;
	LINE_NUMBER(708);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_ModsDialog_parseVersionTag_java_lang_String_R_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:parseVersionTag", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(712);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(714);
	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_ModsDialog_modVersionPattern;
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(715);
	jint temp0 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(716);
	jint temp0 = (jint)((func_java_util_regex_Matcher_start_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_regex_Matcher_start_R_int])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_util_regex_Matcher_end_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_regex_Matcher_end_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 != temp1) goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(717);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)));
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(719);
	if ((frame[2].i) == (bit_cast<jint>(0x80000000))) goto label_7;
	}
	{
	if ((frame[2].i) >= (15)) goto label_8;
	}
label_7:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(720);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, (frame[1].o), (jint(2)));
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, (frame[1].o), (jint(2)));
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(721);
	if ((frame[3].i) != (bit_cast<jint>(0x80000000))) goto label_12;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_12:;
	{
	LINE_NUMBER(722);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[2].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (frame[3].i);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(725);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_ModsDialog_parseVersion_java_lang_String_R_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:parseVersion", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(729);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(731);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[0].o), (46));
	frame[1].i = temp0;
	LINE_NUMBER(732);
	if ((frame[1].i) != (jint(-1))) goto label_4;
	}
	INST_ALOAD(0);
	goto label_5;
label_4:;
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (jint(0)), (frame[1].i));
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(733);
	if ((frame[1].i) != (jint(-1))) goto label_7;
	}
	INST_ACONST_NULL();
	goto label_8;
label_7:;
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(735);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_10;
	}
	{
	if ((frame[1].i) == (jint(-1))) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[0].o), (46), ((frame[1].i) + (jint(1))));
	if (temp0 == (jint(-1))) goto label_11;
	}
label_10:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_11:;
	{
	LINE_NUMBER(737);
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(738);
	if ((frame[4].i) != (bit_cast<jint>(0x80000000))) goto label_13;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
	{
	LINE_NUMBER(739);
	if ((frame[3].o) == nullptr) goto label_14;
	}
	{
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(740);
	if ((frame[5].i) != (bit_cast<jint>(0x80000000))) goto label_17;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_17:;
	{
	LINE_NUMBER(742);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[4].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (frame[5].i);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_ModsDialog_matchesGameVersion_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:matchesGameVersion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(747);
	sp[0].o = (jobject)SM_mindustry_ui_dialogs_ModsDialog_parseVersionTag_java_lang_String_R_Array1_int(ctx, (frame[0].o));
	jint temp0 = (jint)SM_mindustry_ui_dialogs_ModsDialog_matchesGameVersion_Array1_int_R_boolean(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_ModsDialog_matchesGameVersion_Array1_int_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:matchesGameVersion", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(752);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(755);
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build) != ((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(0))))) goto label_2;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(1)))) == 0) goto label_3;
	}
	{
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_revision) != ((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(1))))) goto label_2;
	}
label_3:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$3_java_lang_String_boolean_arc_util_Http$HttpResponse(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$githubImportBranch$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(697);
	if (((jint)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_cancelledImport) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(698);
	sp[0].o = (jobject)((func_arc_util_Http$HttpResponse_getHeader_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getHeader_java_lang_String_R_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"Location"_j))));
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(699);
	sp[0].o = (jobject)((func_arc_util_Http$HttpResponse_getHeader_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getHeader_java_lang_String_R_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"Location"_j))));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_14(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_14);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_50(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_50 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_50);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_arc_util_Http_get_java_lang_String_arc_func_ConsT_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(704);
	((func_mindustry_ui_dialogs_ModsDialog_handleMod_java_lang_String_arc_util_Http$HttpResponse_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_handleMod_java_lang_String_arc_util_Http$HttpResponse_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[2].i));
	}
label_4:;
	LINE_NUMBER(706);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$4_java_lang_String_boolean_arc_util_Http$HttpResponse(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$githubImportBranch$4", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(700);
	if (((jint)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_cancelledImport) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(701);
	((func_mindustry_ui_dialogs_ModsDialog_handleMod_java_lang_String_arc_util_Http$HttpResponse_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_handleMod_java_lang_String_arc_util_Http$HttpResponse_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[2].i));
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$0_java_lang_String_boolean_arc_util_Http$HttpResponse(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$githubImportBranch$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(681);
	if (((jint)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_cancelledImport) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(682);
	sp[0].o = (jobject)((func_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_arc_util_serialization_Jval_read_java_lang_String_R_arc_util_serialization_Jval(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"zipball_url"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(683);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_15(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_15);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_51(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_51 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_51);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_arc_util_Http_get_java_lang_String_arc_func_ConsT_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(694);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$1_java_lang_String_boolean_arc_util_Http$HttpResponse(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$githubImportBranch$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(684);
	if (((jint)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_cancelledImport) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(685);
	sp[0].o = (jobject)((func_arc_util_Http$HttpResponse_getHeader_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getHeader_java_lang_String_R_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"Location"_j))));
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(686);
	sp[0].o = (jobject)((func_arc_util_Http$HttpResponse_getHeader_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getHeader_java_lang_String_R_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"Location"_j))));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_16(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_16 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_16);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_52(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_52 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_52);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_arc_util_Http_get_java_lang_String_arc_func_ConsT_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(691);
	((func_mindustry_ui_dialogs_ModsDialog_handleMod_java_lang_String_arc_util_Http$HttpResponse_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_handleMod_java_lang_String_arc_util_Http$HttpResponse_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[2].i));
	}
label_4:;
	LINE_NUMBER(693);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$2_java_lang_String_boolean_arc_util_Http$HttpResponse(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$githubImportBranch$2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(687);
	if (((jint)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_cancelledImport) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(688);
	((func_mindustry_ui_dialogs_ModsDialog_handleMod_java_lang_String_arc_util_Http$HttpResponse_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_handleMod_java_lang_String_arc_util_Http$HttpResponse_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[2].i));
	LINE_NUMBER(689);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportJavaMod$0_java_lang_String_boolean_arc_util_Http$HttpResponse(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$githubImportJavaMod$0", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(656);
	if (((jint)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_cancelledImport) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((func_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_arc_util_serialization_Jval_read_java_lang_String_R_arc_util_serialization_Jval(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(658);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"assets"_j))));
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(661);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_10);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$JsonArray_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$JsonArray_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_arc_util_serialization_Jval, sp[0].o));
	LINE_NUMBER(662);
	if ((frame[6].o) != nullptr) goto label_5;
	}
	{
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_11);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$JsonArray_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$JsonArray_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_arc_util_serialization_Jval, sp[0].o);
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ALOAD(6);
label_6:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(664);
	if ((frame[7].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"browser_download_url"_j))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(668);
	sp[0].o = frame[8].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_17(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_17 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_ConsT_17);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_53(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_53 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_53);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_arc_util_Http_get_java_lang_String_arc_func_ConsT_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(672);
	goto label_12;
	}
label_8:;
	{
	LINE_NUMBER(673);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No JAR file found in releases. Make sure you have a valid jar file in the mod's latest Github Release."_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	LINE_NUMBER(675);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportJavaMod$3_java_lang_String_boolean_arc_util_Http$HttpResponse(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$githubImportJavaMod$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(669);
	if (((jint)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_cancelledImport) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(670);
	((func_mindustry_ui_dialogs_ModsDialog_handleMod_java_lang_String_arc_util_Http$HttpResponse_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_handleMod_java_lang_String_arc_util_Http$HttpResponse_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[2].i));
	LINE_NUMBER(671);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_ModsDialog_lambda$githubImportJavaMod$2_arc_util_serialization_Jval_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$githubImportJavaMod$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".jar"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_ModsDialog_lambda$githubImportJavaMod$1_arc_util_serialization_Jval_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$githubImportJavaMod$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(661);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dexed"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".jar"_j))));
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

void M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportMod$2_java_lang_String_java_lang_String_boolean_arc_util_Http$HttpResponse(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$githubImportMod$2", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(637);
	if (((jint)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_cancelledImport) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(638);
	sp[0].o = (jobject)((func_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String])(ctx, (frame[4].o));
	sp[0].o = (jobject)SM_arc_util_serialization_Jval_read_java_lang_String_R_arc_util_serialization_Jval(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(639);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"default_branch"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(640);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_serialization_Jval_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"language"_j))), (((jobject) createStringLiteral(ctx, u8"<none>"_j))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(644);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"Java"_j))));
	if (temp0 != 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"Kotlin"_j))));
	if (temp0 != 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"Groovy"_j))));
	if (temp0 != 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"Scala"_j))));
	if (temp0 == 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(645);
	((func_mindustry_ui_dialogs_ModsDialog_githubImportJavaMod_java_lang_String_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportJavaMod_java_lang_String_java_lang_String_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(647);
	((func_mindustry_ui_dialogs_ModsDialog_githubImportBranch_java_lang_String_java_lang_String_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportBranch_java_lang_String_java_lang_String_java_lang_String_boolean])(ctx, (frame[0].o), (frame[6].o), (frame[1].o), (frame[2].o), (frame[3].i));
	}
label_7:;
	LINE_NUMBER(649);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportMod$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$githubImportMod$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(629);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(630);
	((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_cancelledImport = (jint(1));
	LINE_NUMBER(631);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportMod$0_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$githubImportMod$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(627);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_modImportProgress);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$12_mindustry_ui_dialogs_BaseDialog_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$viewReleases$12", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(608);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_51(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_51 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_51);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$13_java_lang_Throwable_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$viewReleases$13", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(609);
	((func_mindustry_ui_dialogs_ModsDialog_showModError_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_showModError_java_lang_Throwable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(610);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$0_mindustry_ui_dialogs_BaseDialog_boolean_boolean_java_lang_String_arc_util_Http$HttpResponse(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$viewReleases$0", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(549);
	sp[0].o = (jobject)((func_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String])(ctx, (frame[5].o));
	sp[0].o = (jobject)SM_arc_util_serialization_Jval_read_java_lang_String_R_arc_util_serialization_Jval(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(552);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_52(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_52 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_52);
		proxy->F_field5 = (jref) (frame[4].o);
		proxy->F_field4 = (frame[3].i);
		proxy->F_field3 = (frame[2].i);
		proxy->F_field2 = (jref) (frame[7].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(608);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$1_mindustry_ui_dialogs_BaseDialog_arc_util_serialization_Jval$JsonArray_boolean_boolean_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jbool param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$viewReleases$1", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(553);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(555);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size) != 0) goto label_2;
	}
	{
	LINE_NUMBER(556);
	if ((frame[3].i) == 0) goto label_4;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_4;
	{
	LINE_NUMBER(557);
	((func_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean])(ctx, (frame[0].o), (frame[5].o), (frame[4].i), (jobject(nullptr)), (jint(0)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(559);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@mods.browser.noreleases"_j))));
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(562);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"@mods.browser.releases"_j))));
	((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK(sp[0].o))->F_downloads = (jref) sp[1].o;
	LINE_NUMBER(563);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_downloads;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_54(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_54 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_54);
		proxy->F_field4 = (jref) (frame[2].o);
		proxy->F_field3 = (jref) (frame[5].o);
		proxy->F_field2 = (frame[4].i);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(500.0f);
	LINE_NUMBER(598);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(599);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_downloads;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@back"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_left;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_53(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_53 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_53);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp1 = jfloat(150.0f);
	jfloat temp2 = jfloat(54.0f);
	LINE_NUMBER(602);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1, temp2);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(603);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_downloads;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_escape;
	sp[2].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_downloads;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_54(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_54 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_54);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(604);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_downloads;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_back;
	sp[2].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_downloads;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_55(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_55 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_55);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(605);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_downloads;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	}
label_6:;
	LINE_NUMBER(607);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$11(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$viewReleases$11", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(600);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_downloads;
	((func_mindustry_ui_dialogs_BaseDialog_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_clear])(ctx, sp[0].o);
	LINE_NUMBER(601);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_downloads;
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$2_boolean_boolean_java_lang_String_arc_util_serialization_Jval$JsonArray_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jbool param0, jbool param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$viewReleases$2", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(564);
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_1;
	{
	LINE_NUMBER(565);
	sp[0].o = frame[5].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	sp[1].o = checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_darkestGray;
	sp[1].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable])(ctx, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_55(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_55 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_55);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(5.0f);
	LINE_NUMBER(573);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(574);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	}
label_1:;
	{
	LINE_NUMBER(577);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(578);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$JsonArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_Jval$JsonArray_get_int_R_java_lang_Object])(ctx, (frame[4].o), (frame[6].i));
	frame[7].o = (checkCast(ctx, &class_arc_util_serialization_Jval, sp[0].o));
	LINE_NUMBER(580);
	frame[8].i = (frame[6].i);
	LINE_NUMBER(581);
	sp[0].o = frame[5].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	sp[1].o = checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_darkestGray;
	sp[1].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable])(ctx, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_56(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_56 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_56);
		proxy->F_field4 = (frame[2].i);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (frame[8].i);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(5.0f);
	LINE_NUMBER(594);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(596);
	if ((frame[6].i) >= (((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size) - (jint(1)))) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	}
label_12:;
	{
	LINE_NUMBER(577);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(598);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$7_arc_util_serialization_Jval_int_java_lang_String_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$viewReleases$7", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(582);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	sp += 2;
	if ((frame[2].i) != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mods.browser.latest"_j))));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8" \u0001"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_2:;
	{
	sp -= 3;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(583);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	LINE_NUMBER(584);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"published_at"_j))));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, (jint(0)), (10));
	sp[1].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-"_j))), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(585);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	LINE_NUMBER(586);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_57(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_57 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_57);
		proxy->F_field3 = (frame[4].i);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(593);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(594);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$8_arc_util_serialization_Jval_java_lang_String_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$viewReleases$8", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(587);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(150.0f)), (jfloat(54.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(588);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mods.github.open-release"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_link;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_56(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_56 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_56);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(589);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mods.browser.add"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_57(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_57 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_57);
		proxy->F_field3 = (frame[3].i);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$10_arc_util_serialization_Jval_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$viewReleases$10", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"url"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(591);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[2].o = frame[4].o;
	jint temp1 = (jint)((func_java_lang_String_lastIndexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_java_lang_String_R_int])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, (temp1 + (jint(1))));
	((func_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (jint(1)));
	LINE_NUMBER(592);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$9_arc_util_serialization_Jval(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$viewReleases$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(588);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((func_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"html_url"_j))));
	jint temp0 = (jint)((func_arc_Application_openURI_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_openURI_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$3_java_lang_String_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$viewReleases$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(566);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"@mods.browser.current"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(15.0f)));
	LINE_NUMBER(567);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(568);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_58(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_58 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_58);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(572);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(573);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$4_java_lang_String_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$viewReleases$4", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(150.0f)), (jfloat(54.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(570);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mods.github.open"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_link;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_58(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_58 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_58);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(571);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mods.browser.add"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_59(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_59 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_59);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(572);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$6_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$viewReleases$6", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(571);
	((func_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jobject(nullptr)), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$5_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$viewReleases$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(570);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"https://github.com/\u0001"_j.string, 1, (frame[0].o));
	jint temp0 = (jint)((func_arc_Application_openURI_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_openURI_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_ModsDialog_lambda$showModError$0_java_lang_Throwable_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$showModError$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(533);
	sp[0].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"trust anchor"_j))));
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SSL"_j))));
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"protocol"_j))));
	if (temp0 == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$importFail$0_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$importFail$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(527);
	((func_mindustry_ui_dialogs_ModsDialog_showModError_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_showModError_java_lang_Throwable])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$handleMod$3_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$handleMod$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(508);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_withUpdates;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_12(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_12);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_mod_Mods$LoadedMod, sp[0].o));
	LINE_NUMBER(509);
	if ((frame[2].o) == nullptr) goto label_0;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_withUpdates;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(512);
	((func_mindustry_ui_dialogs_ModsDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(513);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(514);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_downloads;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_downloads;
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_modDetails;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_modDetails;
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, sp[0].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(518);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(516);
	frame[3].o = sp[0].o;
	LINE_NUMBER(517);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[3].o));
	}
label_9:;
	LINE_NUMBER(519);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_ModsDialog_lambda$handleMod$4_java_lang_String_mindustry_mod_Mods$LoadedMod_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$handleMod$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(508);
	sp[0].o = (jobject)((func_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)SM_arc_util_Structs_eq_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$handleMod$2_arc_func_Floatc_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$handleMod$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(497);
	if (((jint)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_cancelledImport) == 0) goto label_1;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cancelled"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(498);
	((func_arc_func_Floatc_get_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc, INDEX_arc_func_Floatc_get_float, (frame[1].o)))(ctx, (frame[1].o), (frame[2].f));
	LINE_NUMBER(499);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$handleMod$1_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$handleMod$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(493);
	((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_modImportProgress = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$handleMod$0_float(jcontext ctx, jfloat param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$handleMod$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].f = param0;
	LINE_NUMBER(493);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$showMod$5_mindustry_mod_Mods$LoadedMod_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$showMod$5", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(465);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_meta;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[1].o))->F_displayName;
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(466);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[3].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_59(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_59 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_59);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(479);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(480);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[3].o));
	LINE_NUMBER(481);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[3].o));
	LINE_NUMBER(482);
	((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_currentContent = (jref) (frame[3].o);
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$showMod$6_arc_struct_Seq_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$showMod$6", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(467);
	frame[2].i = (jint(0));
	LINE_NUMBER(468);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o));
	LINE_NUMBER(469);
	sp[0].o = frame[1].o;
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[4].o)))->F_uiIcon;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flati;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_60(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_60 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_60);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = jfloat(50.0f);
	LINE_NUMBER(471);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_60(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_60 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_60);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[4].o)))->F_localizedName;
	LINE_NUMBER(475);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(477);
	INST_IINC(2, 1);
	jint temp2 = frame[2].i;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp4 = jfloat(temp3);
	jfloat temp5 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(110.0f)));
	jfloat temp6 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp4 / temp5), (jfloat(14.0f)));
	if ((temp2 % (jint(temp6))) != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_8:;
	LINE_NUMBER(478);
	goto label_2;
label_3:;
	LINE_NUMBER(479);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$showMod$8_arc_scene_ui_ImageButton(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$showMod$8", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getClickListener_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getClickListener_R_arc_scene_event_ClickListener])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_61(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_61 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_61);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(475);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$showMod$9_arc_scene_ui_ImageButton_arc_scene_event_ClickListener(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$showMod$9", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image])(ctx, (frame[0].o));
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_color;
	jint temp0 = (jint)((func_arc_scene_event_ClickListener_isOver_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_event_ClickListener_isOver_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_lightGray;
	goto label_2;
label_1:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_2:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, ((jfloat(0.4f)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$showMod$7_mindustry_ctype_UnlockableContent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$showMod$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(470);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_content;
	((func_mindustry_ui_dialogs_ContentInfoDialog_show_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ContentInfoDialog_show_mindustry_ctype_UnlockableContent])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(471);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_ModsDialog_lambda$showMod$4_mindustry_mod_Mods$LoadedMod_mindustry_ctype_Content_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$showMod$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_mod;
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[1].o)));
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_isHidden_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$showMod$3_mindustry_mod_Mods$LoadedMod_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$showMod$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(427);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(429);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@editor.name"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(430);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(431);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_meta;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[1].o))->F_displayName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(432);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(433);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_author;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@editor.author"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(435);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(436);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_meta;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[1].o))->F_author;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(437);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_7:;
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_version;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@mod.version"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(441);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(442);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_meta;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[1].o))->F_version;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(443);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_12:;
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_description;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@editor.description"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(447);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(448);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_meta;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[1].o))->F_description;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(449);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_17:;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_ModsDialog_getStateDetails_mindustry_mod_Mods$LoadedMod_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_getStateDetails_mindustry_mod_Mods$LoadedMod_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(454);
	if ((frame[3].o) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@mod.disabled"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(13.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-6.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(456);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_23:;
	LINE_NUMBER(459);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$showMod$2_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$showMod$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(422);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_isJava_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_isJava_R_boolean])(ctx, (frame[1].o));
	((func_mindustry_ui_dialogs_ModsDialog_viewReleases_java_lang_String_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_viewReleases_java_lang_String_boolean_boolean])(ctx, sp[0].o, sp[1].o, temp0, (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$showMod$1_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$showMod$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(420);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((func_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"https://github.com/\u0001"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_Application_openURI_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_openURI_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$showMod$0_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$showMod$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(415);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_arc_files_Fi_absolutePath_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_absolutePath_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_Application_openFolder_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_openFolder_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$setup$29_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$29", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@mods.none"_j))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$27(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$27", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_withUpdates;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(342);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	frame[2].o = sp[0].o;
	LINE_NUMBER(346);
	((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_cancelledImport = (jint(0));
	LINE_NUMBER(347);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_updaterElement;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_updaterElement;
	jint temp0 = (jint)((func_arc_scene_Element_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_remove_R_boolean])(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(348);
	sp[0].o = frame[0].o;
	clinit_arc_scene_Element(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_Element);
	init_arc_scene_Element(ctx, sp[1].o);
	((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK(sp[0].o))->F_updaterElement = (jref) sp[1].o;
	LINE_NUMBER(350);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_updaterElement;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_62(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_62 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_62);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(359);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_updaterElement;
	((func_mindustry_ui_dialogs_ModsDialog_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_addChild_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$28_Array1_int_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$28", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(351);
	if (((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0)))) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size)) goto label_1;
	}
	{
	if (((jint)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_cancelledImport) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_updaterElement;
	jint temp0 = (jint)((func_arc_scene_Element_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_remove_R_boolean])(ctx, sp[0].o);
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(353);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_LoadingFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(354);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, temp0);
	ARRAY_ACCESS(jint, sp[1].o, temp0) = (temp3 + (jint(1)));
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, temp3);
	frame[3].o = (checkCast(ctx, &class_mindustry_mod_Mods$LoadedMod, sp[0].o));
	LINE_NUMBER(356);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String])(ctx, (frame[3].o));
	jint temp7 = (jint)((func_mindustry_mod_Mods$LoadedMod_isJava_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_isJava_R_boolean])(ctx, (frame[3].o));
	((func_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, temp7, (jobject(nullptr)), (jint(0)));
	}
label_3:;
	LINE_NUMBER(358);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$setup$26_arc_scene_ui_Button(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$26", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (jfloat(6.0f)));
	LINE_NUMBER(336);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(337);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@mods.update.all"_j))));
	LINE_NUMBER(338);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$25_arc_scene_ui_ScrollPane(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$25", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_ScrollPane_getScrollY_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getScrollY_R_float])(ctx, (frame[1].o));
	((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK(sp[0].o))->F_scroll = temp0;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$setup$24_Array1_arc_scene_ui_layout_Table_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$24", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(327);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(10.0f)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(328);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$setup$23_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$23", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(320);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$8_Array1_arc_scene_ui_layout_Table_Array1_boolean_float_float_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$8", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(210);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))));
	LINE_NUMBER(211);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[6].o));
	LINE_NUMBER(212);
	frame[7].i = (jint(0));
	LINE_NUMBER(213);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_list_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_list_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_mod_Mods$LoadedMod, sp[0].o));
	LINE_NUMBER(214);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[9].o)))->F_meta;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[1].o))->F_displayName;
	jint temp0 = (jint)SM_arc_util_Strings_matches_java_lang_String_java_lang_String_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(215);
	frame[7].i = (jint(1));
	LINE_NUMBER(216);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_enabled_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_enabled_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_10;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (jint(0)))) != 0) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_list_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_list_R_arc_struct_Seq])(ctx, sp[0].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(217);
	ARRAY_ACCESS(jbyte, (frame[2].o), (jint(0))) = (jint(1));
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[6].o));
	LINE_NUMBER(219);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_10:;
	{
	LINE_NUMBER(222);
	sp[0].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_61(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_61 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_61);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_grayt;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_63(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_63 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_63);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = frame[4].f;
	jfloat temp1 = frame[3].f;
	LINE_NUMBER(297);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(299);
	jint temp2 = (jint)((func_mindustry_ui_dialogs_ModsDialog_hasUpdate_mindustry_mod_Mods$LoadedMod_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_hasUpdate_mindustry_mod_Mods$LoadedMod_R_boolean])(ctx, (frame[0].o), (frame[9].o));
	if (temp2 == 0) goto label_7;
	}
	{
	LINE_NUMBER(300);
	sp[0].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_62(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_62 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_62);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_grayt;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_64(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_64 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_64);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = frame[4].f;
	LINE_NUMBER(308);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(48.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-4.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_7:;
	LINE_NUMBER(311);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(313);
	if ((frame[7].i) != 0) goto label_18;
	}
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"@none.found"_j))));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	}
label_18:;
	LINE_NUMBER(316);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$22_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$22", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_isJava_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_isJava_R_boolean])(ctx, (frame[1].o));
	((func_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, temp0, (jobject(nullptr)), (jint(0)));
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$21_mindustry_mod_Mods$LoadedMod_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$21", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Button_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(6.0f)));
	LINE_NUMBER(302);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(303);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(304);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_modToListing;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_mod_ModListing, sp[0].o));
	LINE_NUMBER(305);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"mods.update.available"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = sp[3].o;
	sp[5].i = temp0;
	sp += 6;
	if ((frame[3].o) != nullptr) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"<unknown>"_j));
	goto label_6;
label_5:;
	INST_ALOAD(3);
	sp[-1].o = (jobject) ((mindustry_mod_ModListing *) NULL_CHECK(sp[-1].o))->F_version;
label_6:;
	{
	sp -= 7;
	ARRAY_ACCESS(jobject, sp[3].o, sp[5].i) = sp[6].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$20_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$20", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(297);
	((func_mindustry_ui_dialogs_ModsDialog_showMod_mindustry_mod_Mods$LoadedMod) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_showMod_mindustry_mod_Mods$LoadedMod])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$9_mindustry_mod_Mods$LoadedMod_float_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$9", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_Button_top_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(224);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_Button_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o), (jfloat(12.0f)));
	LINE_NUMBER(226);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_ModsDialog_getStateDetails_mindustry_mod_Mods$LoadedMod_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_getStateDetails_mindustry_mod_Mods$LoadedMod_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(227);
	if ((frame[4].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = frame[3].o;
	clinit_arc_scene_ui_Tooltip(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Tooltip);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_63(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_63 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_63);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[2].o = (jobject) proxy;
	}
	init_arc_scene_ui_Tooltip_arc_func_Cons(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_arc_scene_ui_Button_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_Button_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(232);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_64(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_64 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_64);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(269);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(271);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_65(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_65 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_65);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-8.0f)));
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$15_mindustry_mod_Mods$LoadedMod_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$15", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(273);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_enabled_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_enabled_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 == 0) goto label_2;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_downOpen;
	goto label_3;
label_2:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_upOpen;
label_3:;
	{
	sp -= 2;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNonei;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_65(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_65 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_65);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(50.0f);
	LINE_NUMBER(276);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	jint temp1 = (jint)((func_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp1 != 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(278);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_hasSteamID_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_hasSteamID_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 == 0) goto label_8;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_link;
	goto label_9;
label_8:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_trash;
label_9:;
	{
	sp -= 2;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNonei;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_66(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_66 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_66);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(50.0f);
	LINE_NUMBER(288);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(290);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_steam) == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_hasSteamID_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_hasSteamID_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(292);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_export;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNonei;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_67(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_67 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_67);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(50.0f);
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	}
label_12:;
	LINE_NUMBER(296);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$setup$19_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$19", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(293);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_publish_mindustry_type_Publishable) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_publish_mindustry_type_Publishable, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$17_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$17", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(279);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_hasSteamID_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_hasSteamID_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(280);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@mod.remove.confirm"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_68(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_68 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_68);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(286);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_viewListing_mindustry_type_Publishable) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_viewListing_mindustry_type_Publishable, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
label_3:;
	LINE_NUMBER(288);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$18_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$18", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(281);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	((func_mindustry_mod_Mods_removeMod_mindustry_mod_Mods$LoadedMod) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_removeMod_mindustry_mod_Mods$LoadedMod])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_withUpdates;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(283);
	((func_mindustry_ui_dialogs_ModsDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$16_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$16", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(274);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_enabled_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_enabled_R_boolean])(ctx, (frame[1].o));
	sp += 2;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 3;
	((func_mindustry_mod_Mods_setEnabled_mindustry_mod_Mods$LoadedMod_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_setEnabled_mindustry_mod_Mods$LoadedMod_boolean])(ctx, sp[0].o, sp[1].o, sp[2].i);
	LINE_NUMBER(275);
	((func_mindustry_ui_dialogs_ModsDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$11_float_mindustry_mod_Mods$LoadedMod_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jfloat param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$11", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(235);
	sp[0].o = frame[3].o;
	clinit_mindustry_ui_BorderImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_BorderImage);
	init_mindustry_ui_BorderImage(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((frame[1].f) - (jfloat(8.0f))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_66(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_66 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_66);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(252);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_67(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_67 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_67);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(268);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(269);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$14_mindustry_mod_Mods$LoadedMod_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$14", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(253);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_hasUnmetDependencies_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_hasUnmetDependencies_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_hasContentErrors_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_hasContentErrors_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_meta;
	sp[0].o = (jobject)((func_mindustry_mod_Mods$ModMeta_shortDescription_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods$ModMeta_shortDescription_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(256);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_meta;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[1].o))->F_displayName;
	sp[1].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[1].o);
	LINE_NUMBER(257);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_enabled_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_enabled_R_boolean])(ctx, (frame[1].o));
	sp += 2;
	if (temp0 != 0) goto label_7;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_8;
label_7:;
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	if (temp0 <= 0) goto label_9;
	}
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray]\u0001"_j.string, 1, (frame[4].o));
	sp += 1;
	goto label_10;
	}
label_9:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_10;
label_8:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_failed_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_failed_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 == 0) goto label_11;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"mod.failed"_j));
	goto label_12;
label_11:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"mod.disabled"_j));
label_12:;
	POP_N(2); // Pop method args
	sp->o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp++;
label_10:;
	{
	sp -= 3;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001\n\u0001"_j.string, 2, sp[1].o, sp[2].o);
	LINE_NUMBER(256);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jint temp0 = jint(1);
	LINE_NUMBER(258);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_ellipsis_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_ellipsis_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(300.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(260);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(262);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_ModsDialog_getStateText_mindustry_mod_Mods$LoadedMod_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_getStateText_mindustry_mod_Mods$LoadedMod_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(263);
	if ((frame[5].o) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_18:;
	LINE_NUMBER(266);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$setup$12_mindustry_mod_Mods$LoadedMod_mindustry_ui_BorderImage(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$12", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_iconTexture;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = frame[1].o;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	sp[2].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_iconTexture;
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[1].o, sp[2].o);
	((func_mindustry_ui_BorderImage_setDrawable_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_BorderImage_setDrawable_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(239);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_nomap;
	((func_mindustry_ui_BorderImage_setDrawable_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_BorderImage_setDrawable_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(241);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_69(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_69 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_69);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_BorderImage_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_BorderImage_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(249);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_mindustry_ui_BorderImage_border_arc_graphics_Color_R_mindustry_ui_BorderImage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_BorderImage_border_arc_graphics_Color_R_mindustry_ui_BorderImage])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$setup$13_mindustry_mod_Mods$LoadedMod_mindustry_ui_BorderImage(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$13", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_iconTexture;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = frame[1].o;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	sp[2].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_iconTexture;
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[1].o, sp[2].o);
	((func_mindustry_ui_BorderImage_setDrawable_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_BorderImage_setDrawable_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(245);
	sp[0].o = (jobject)((func_mindustry_ui_BorderImage_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_BorderImage_update_java_lang_Runnable_R_arc_scene_Element])(ctx, (frame[1].o), (jobject(nullptr)));
	}
label_1:;
	LINE_NUMBER(247);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$setup$10_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(228);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black8;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(400.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(142);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatBordert;
	frame[2].o = sp[0].o;
	LINE_NUMBER(143);
	frame[3].f = (jfloat(12.0f));
	LINE_NUMBER(145);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mod.import"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_70(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_70 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_70);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = frame[3].f;
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(200);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mods.browser"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_menu;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_71(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_71 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_71);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].f));
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$7(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$7", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_browser;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_ModBrowserDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@mod.import"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(148);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatt;
	frame[2].o = sp[0].o;
	LINE_NUMBER(150);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_68(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_68 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_68);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(194);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$2_arc_scene_ui_TextButton$TextButtonStyle_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(300.0f)), (jfloat(70.0f)));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o), (jfloat(12.0f)));
	LINE_NUMBER(154);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mod.import.file"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_file;
	sp[3].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_72(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_72 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_72);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(169);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(173);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mod.import.github"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_github;
	sp[3].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_73(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_73 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_java_lang_Runnable_73);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(12.0f);
	LINE_NUMBER(192);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$5_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$5", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(174);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(176);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mod.import.github"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	jint temp0 = 64;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_settings;
	sp[3].o = (jobject)((func_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"lastmod"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_69(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_69 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_69);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o);
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$6_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$6", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(179);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"https://github.com/"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"https://github.com/"_j))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (((jobject) createStringLiteral(ctx, u8"https://github.com/"_j))));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, temp0);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(181);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lastmod"_j))), (frame[1].o));
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_browser;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_ModBrowserDialog_getCachedMod_java_lang_String_R_mindustry_mod_ModListing) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog_getCachedMod_java_lang_String_R_mindustry_mod_ModListing])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(183);
	if ((frame[2].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(185);
	((func_mindustry_ui_dialogs_ModsDialog_githubImportMod_mindustry_mod_ModListing) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportMod_mindustry_mod_ModListing])(ctx, (frame[0].o), (frame[2].o));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(189);
	((func_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jobject(nullptr)), (jint(1)));
	}
label_7:;
	LINE_NUMBER(191);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$3_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(155);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(157);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"zip"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"jar"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_70(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_70 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_70);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$setup$4_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$setup$4", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(158);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_8;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(160);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_importMod_arc_files_Fi_R_mindustry_mod_Mods$LoadedMod) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_importMod_arc_files_Fi_R_mindustry_mod_Mods$LoadedMod])(ctx, sp[0].o, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(164);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(161);
	frame[6].o = sp[0].o;
	LINE_NUMBER(162);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[6].o));
	sp += 1;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[6].o));
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"writable dex"_j))));
	if (temp0 == 0) goto label_11;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@error.moddex"_j));
	goto label_12;
label_11:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_12:;
	{
	sp -= 2;
	((func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable])(ctx, sp[0].o, sp[1].o, (frame[6].o));
	LINE_NUMBER(163);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[6].o));
	}
label_9:;
	{
	LINE_NUMBER(158);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(167);
	((func_mindustry_ui_dialogs_ModsDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$refreshModUpdates$0_arc_struct_ObjectMap_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$refreshModUpdates$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_withUpdates;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_mod_ModListing, sp[0].o));
	LINE_NUMBER(109);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[4].o)))->F_repo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_mindustry_mod_Mods$LoadedMod, sp[0].o));
	LINE_NUMBER(110);
	if ((frame[5].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_modToListing;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[5].o), (frame[4].o));
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_mindustry_mod_ModListing_getMatchingRelease_R_mindustry_mod_ModListing$ModRelease) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_mod_ModListing_getMatchingRelease_R_mindustry_mod_ModListing$ModRelease])(ctx, (frame[4].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[4].o)))->F_version;
	sp += 1;
	if ((frame[6].o) != nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[5].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_version;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ALOAD(6);
	sp[-1].o = (jobject) ((mindustry_mod_ModListing$ModRelease *) NULL_CHECK(sp[-1].o))->F_version;
label_11:;
	POP_N(2); // Pop method args
	sp->i = (jint)SM_arc_util_Strings_checkNewerSemver_java_lang_String_java_lang_String_R_boolean(ctx, sp[0].o, sp[1].o);
	sp++;
	if ((--sp)->i == 0) goto label_6;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_withUpdates;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[5].o));
	}
label_6:;
	LINE_NUMBER(118);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_withUpdates;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(121);
	((func_mindustry_ui_dialogs_ModsDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_setup])(ctx, (frame[0].o));
	}
label_13:;
	LINE_NUMBER(123);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$new$6(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$new$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	jint temp0 = (jint)((func_mindustry_mod_Mods_requiresReload_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_requiresReload_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(85);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	((func_mindustry_mod_Mods_reload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_reload])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_updaterElement;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_updaterElement;
	jint temp0 = (jint)((func_arc_scene_Element_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_remove_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(90);
	((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_updaterElement = (jref) (jobject(nullptr));
	}
label_3:;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$new$5_mindustry_game_EventType$ResizeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$new$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_currentContent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_currentContent;
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(79);
	((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_currentContent = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$new$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$new$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	((func_mindustry_ui_dialogs_ModsDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModsDialog *) NULL_CHECK((frame[0].o)))->F_withUpdates;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(72);
	((func_mindustry_ui_dialogs_ModsDialog_refreshModUpdates) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_refreshModUpdates])(ctx, (frame[0].o));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$new$3(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$new$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	{
	LINE_NUMBER(65);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_modDirectory;
	sp[1].o = (jobject)((func_arc_files_Fi_absolutePath_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_absolutePath_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_Application_openFolder_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_openFolder_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$new$2(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$new$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	{
	LINE_NUMBER(61);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_openURI_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_openURI_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"https://mindustrygame.github.io/wiki/modding/1-modding/"_j))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModsDialog_lambda$new$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_list_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_list_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_13(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Boolf_13);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_71(ctx);
		auto proxy = (mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_71 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModsDialog_invoke_arc_func_Cons_71);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(58);
	((func_mindustry_ui_dialogs_ModsDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModsDialog_lambda$new$1_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(57);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	((func_mindustry_mod_Mods_setEnabled_mindustry_mod_Mods$LoadedMod_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_setEnabled_mindustry_mod_Mods$LoadedMod_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ui_dialogs_ModsDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModsDialog:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"\\[[vb](\\d+)(?:\\.(\\d+))?\\]"_j))));
	clinit_mindustry_ui_dialogs_ModsDialog(ctx);
	SF_mindustry_ui_dialogs_ModsDialog_modVersionPattern = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_dialogs_ModsDialog;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field updaterElement
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getStateText
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getStateDetails
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	{ // Method parseVersionTag
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[15]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method parseVersion
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[16]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ui_dialogs_ModsDialog[] {
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
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$new$1,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$new$0,
	(void *) M_mindustry_ui_dialogs_ModsDialog_refreshModUpdates,
	(void *) M_mindustry_ui_dialogs_ModsDialog_hasUpdate_mindustry_mod_Mods$LoadedMod_R_boolean,
	(void *) M_mindustry_ui_dialogs_ModsDialog_setup,
	(void *) M_mindustry_ui_dialogs_ModsDialog_getStateText_mindustry_mod_Mods$LoadedMod_R_java_lang_String,
	(void *) M_mindustry_ui_dialogs_ModsDialog_getStateDetails_mindustry_mod_Mods$LoadedMod_R_java_lang_String,
	(void *) M_mindustry_ui_dialogs_ModsDialog_showMod_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_ui_dialogs_ModsDialog_handleMod_java_lang_String_arc_util_Http$HttpResponse_boolean,
	(void *) M_mindustry_ui_dialogs_ModsDialog_importFail_java_lang_Throwable,
	(void *) M_mindustry_ui_dialogs_ModsDialog_showModError_java_lang_Throwable,
	(void *) M_mindustry_ui_dialogs_ModsDialog_viewReleases_java_lang_String_boolean_boolean,
	(void *) M_mindustry_ui_dialogs_ModsDialog_githubImportMod_mindustry_mod_ModListing,
	(void *) M_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_boolean,
	(void *) M_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean,
	(void *) M_mindustry_ui_dialogs_ModsDialog_githubImportJavaMod_java_lang_String_java_lang_String_boolean,
	(void *) M_mindustry_ui_dialogs_ModsDialog_githubImportBranch_java_lang_String_java_lang_String_java_lang_String_boolean,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$3_java_lang_String_boolean_arc_util_Http$HttpResponse,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$4_java_lang_String_boolean_arc_util_Http$HttpResponse,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$0_java_lang_String_boolean_arc_util_Http$HttpResponse,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$1_java_lang_String_boolean_arc_util_Http$HttpResponse,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$2_java_lang_String_boolean_arc_util_Http$HttpResponse,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportJavaMod$0_java_lang_String_boolean_arc_util_Http$HttpResponse,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportJavaMod$3_java_lang_String_boolean_arc_util_Http$HttpResponse,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportMod$2_java_lang_String_java_lang_String_boolean_arc_util_Http$HttpResponse,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportMod$1,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportMod$0_R_float,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$12_mindustry_ui_dialogs_BaseDialog_java_lang_Throwable,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$13_java_lang_Throwable_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$0_mindustry_ui_dialogs_BaseDialog_boolean_boolean_java_lang_String_arc_util_Http$HttpResponse,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$1_mindustry_ui_dialogs_BaseDialog_arc_util_serialization_Jval$JsonArray_boolean_boolean_java_lang_String,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$11,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$2_boolean_boolean_java_lang_String_arc_util_serialization_Jval$JsonArray_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$7_arc_util_serialization_Jval_int_java_lang_String_boolean_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$8_arc_util_serialization_Jval_java_lang_String_boolean_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$10_arc_util_serialization_Jval_java_lang_String_boolean,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$3_java_lang_String_boolean_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$4_java_lang_String_boolean_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$6_java_lang_String_boolean,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$importFail$0_java_lang_Throwable,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$handleMod$3_java_lang_String,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$handleMod$2_arc_func_Floatc_float,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$handleMod$1_float,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$showMod$5_mindustry_mod_Mods$LoadedMod_arc_struct_Seq,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$showMod$3_mindustry_mod_Mods$LoadedMod_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$showMod$2_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$27,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$28_Array1_int_arc_struct_Seq,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$25_arc_scene_ui_ScrollPane,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$8_Array1_arc_scene_ui_layout_Table_Array1_boolean_float_float_java_lang_String,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$22_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$21_mindustry_mod_Mods$LoadedMod_arc_scene_ui_Button,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$20_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$9_mindustry_mod_Mods$LoadedMod_float_arc_scene_ui_Button,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$15_mindustry_mod_Mods$LoadedMod_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$17_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$18_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$16_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$11_float_mindustry_mod_Mods$LoadedMod_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$14_mindustry_mod_Mods$LoadedMod_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$7,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$1,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$2_arc_scene_ui_TextButton$TextButtonStyle_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$5_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$6_java_lang_String,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$3_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$4_Array1_arc_files_Fi,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$refreshModUpdates$0_arc_struct_ObjectMap_arc_struct_Seq,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$new$6,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$new$5_mindustry_game_EventType$ResizeEvent,
	(void *) M_mindustry_ui_dialogs_ModsDialog_lambda$new$4,
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
	{ "refreshModUpdates", "()V" },
	{ "hasUpdate", "(Lmindustry/mod/Mods$LoadedMod;)Z" },
	{ "setup", "()V" },
	{ "getStateText", "(Lmindustry/mod/Mods$LoadedMod;)Ljava/lang/String;" },
	{ "getStateDetails", "(Lmindustry/mod/Mods$LoadedMod;)Ljava/lang/String;" },
	{ "showMod", "(Lmindustry/mod/Mods$LoadedMod;)V" },
	{ "handleMod", "(Ljava/lang/String;Larc/util/Http$HttpResponse;Z)V" },
	{ "importFail", "(Ljava/lang/Throwable;)V" },
	{ "showModError", "(Ljava/lang/Throwable;)V" },
	{ "viewReleases", "(Ljava/lang/String;ZZ)V" },
	{ "githubImportMod", "(Lmindustry/mod/ModListing;)V" },
	{ "githubImportMod", "(Ljava/lang/String;ZZ)V" },
	{ "githubImportMod", "(Ljava/lang/String;ZLjava/lang/String;Z)V" },
	{ "githubImportJavaMod", "(Ljava/lang/String;Ljava/lang/String;Z)V" },
	{ "githubImportBranch", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V" },
	{ "lambda$githubImportBranch$3", "(Ljava/lang/String;ZLarc/util/Http$HttpResponse;)V" },
	{ "lambda$githubImportBranch$4", "(Ljava/lang/String;ZLarc/util/Http$HttpResponse;)V" },
	{ "lambda$githubImportBranch$0", "(Ljava/lang/String;ZLarc/util/Http$HttpResponse;)V" },
	{ "lambda$githubImportBranch$1", "(Ljava/lang/String;ZLarc/util/Http$HttpResponse;)V" },
	{ "lambda$githubImportBranch$2", "(Ljava/lang/String;ZLarc/util/Http$HttpResponse;)V" },
	{ "lambda$githubImportJavaMod$0", "(Ljava/lang/String;ZLarc/util/Http$HttpResponse;)V" },
	{ "lambda$githubImportJavaMod$3", "(Ljava/lang/String;ZLarc/util/Http$HttpResponse;)V" },
	{ "lambda$githubImportMod$2", "(Ljava/lang/String;Ljava/lang/String;ZLarc/util/Http$HttpResponse;)V" },
	{ "lambda$githubImportMod$1", "()V" },
	{ "lambda$githubImportMod$0", "()F" },
	{ "lambda$viewReleases$12", "(Lmindustry/ui/dialogs/BaseDialog;Ljava/lang/Throwable;)V" },
	{ "lambda$viewReleases$13", "(Ljava/lang/Throwable;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$viewReleases$0", "(Lmindustry/ui/dialogs/BaseDialog;ZZLjava/lang/String;Larc/util/Http$HttpResponse;)V" },
	{ "lambda$viewReleases$1", "(Lmindustry/ui/dialogs/BaseDialog;Larc/util/serialization/Jval$JsonArray;ZZLjava/lang/String;)V" },
	{ "lambda$viewReleases$11", "()V" },
	{ "lambda$viewReleases$2", "(ZZLjava/lang/String;Larc/util/serialization/Jval$JsonArray;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$viewReleases$7", "(Larc/util/serialization/Jval;ILjava/lang/String;ZLarc/scene/ui/layout/Table;)V" },
	{ "lambda$viewReleases$8", "(Larc/util/serialization/Jval;Ljava/lang/String;ZLarc/scene/ui/layout/Table;)V" },
	{ "lambda$viewReleases$10", "(Larc/util/serialization/Jval;Ljava/lang/String;Z)V" },
	{ "lambda$viewReleases$3", "(Ljava/lang/String;ZLarc/scene/ui/layout/Table;)V" },
	{ "lambda$viewReleases$4", "(Ljava/lang/String;ZLarc/scene/ui/layout/Table;)V" },
	{ "lambda$viewReleases$6", "(Ljava/lang/String;Z)V" },
	{ "lambda$importFail$0", "(Ljava/lang/Throwable;)V" },
	{ "lambda$handleMod$3", "(Ljava/lang/String;)V" },
	{ "lambda$handleMod$2", "(Larc/func/Floatc;F)V" },
	{ "lambda$handleMod$1", "(F)V" },
	{ "lambda$showMod$5", "(Lmindustry/mod/Mods$LoadedMod;Larc/struct/Seq;)V" },
	{ "lambda$showMod$3", "(Lmindustry/mod/Mods$LoadedMod;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMod$2", "(Lmindustry/mod/Mods$LoadedMod;)V" },
	{ "lambda$setup$27", "()V" },
	{ "lambda$setup$28", "([ILarc/struct/Seq;)V" },
	{ "lambda$setup$25", "(Larc/scene/ui/ScrollPane;)V" },
	{ "lambda$setup$8", "([Larc/scene/ui/layout/Table;[ZFFLjava/lang/String;)V" },
	{ "lambda$setup$22", "(Lmindustry/mod/Mods$LoadedMod;)V" },
	{ "lambda$setup$21", "(Lmindustry/mod/Mods$LoadedMod;Larc/scene/ui/Button;)V" },
	{ "lambda$setup$20", "(Lmindustry/mod/Mods$LoadedMod;)V" },
	{ "lambda$setup$9", "(Lmindustry/mod/Mods$LoadedMod;FLarc/scene/ui/Button;)V" },
	{ "lambda$setup$15", "(Lmindustry/mod/Mods$LoadedMod;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$17", "(Lmindustry/mod/Mods$LoadedMod;)V" },
	{ "lambda$setup$18", "(Lmindustry/mod/Mods$LoadedMod;)V" },
	{ "lambda$setup$16", "(Lmindustry/mod/Mods$LoadedMod;)V" },
	{ "lambda$setup$11", "(FLmindustry/mod/Mods$LoadedMod;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$14", "(Lmindustry/mod/Mods$LoadedMod;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$7", "()V" },
	{ "lambda$setup$1", "()V" },
	{ "lambda$setup$2", "(Larc/scene/ui/TextButton$TextButtonStyle;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$5", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$setup$6", "(Ljava/lang/String;)V" },
	{ "lambda$setup$3", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$setup$4", "([Larc/files/Fi;)V" },
	{ "lambda$refreshModUpdates$0", "(Larc/struct/ObjectMap;Larc/struct/Seq;)V" },
	{ "lambda$new$6", "()V" },
	{ "lambda$new$5", "(Lmindustry/game/EventType$ResizeEvent;)V" },
	{ "lambda$new$4", "()V" },
};

static FieldMetadata fields[] {
	{ "modVersionPattern", &class_java_util_regex_Pattern, (intptr_t) &SF_mindustry_ui_dialogs_ModsDialog_modVersionPattern, "Ljava/util/regex/Pattern;", 26 },
	{ "browser", &class_mindustry_ui_dialogs_ModBrowserDialog, offsetof(mindustry_ui_dialogs_ModsDialog, F_browser), "Lmindustry/ui/dialogs/ModBrowserDialog;", 1 },
	{ "modImportProgress", &class_float, offsetof(mindustry_ui_dialogs_ModsDialog, F_modImportProgress), "F", 4 },
	{ "cancelledImport", &class_boolean, offsetof(mindustry_ui_dialogs_ModsDialog, F_cancelledImport), "Z", 4 },
	{ "currentContent", &class_mindustry_ui_dialogs_BaseDialog, offsetof(mindustry_ui_dialogs_ModsDialog, F_currentContent), "Lmindustry/ui/dialogs/BaseDialog;", 4 },
	{ "downloads", &class_mindustry_ui_dialogs_BaseDialog, offsetof(mindustry_ui_dialogs_ModsDialog, F_downloads), "Lmindustry/ui/dialogs/BaseDialog;", 4 },
	{ "modDetails", &class_mindustry_ui_dialogs_BaseDialog, offsetof(mindustry_ui_dialogs_ModsDialog, F_modDetails), "Lmindustry/ui/dialogs/BaseDialog;", 4 },
	{ "scroll", &class_float, offsetof(mindustry_ui_dialogs_ModsDialog, F_scroll), "F", 4 },
	{ "modToListing", &class_arc_struct_ObjectMap, offsetof(mindustry_ui_dialogs_ModsDialog, F_modToListing), "Larc/struct/ObjectMap;", 4 },
	{ "withUpdates", &class_arc_struct_ObjectSet, offsetof(mindustry_ui_dialogs_ModsDialog, F_withUpdates), "Larc/struct/ObjectSet;", 4 },
	{ "updaterElement", &class_arc_scene_Element, offsetof(mindustry_ui_dialogs_ModsDialog, F_updaterElement), "Larc/scene/Element;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ModsDialog, 0, "()V", 1 },
	{ "refreshModUpdates", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_refreshModUpdates, VTABLE_mindustry_ui_dialogs_ModsDialog_refreshModUpdates, "()V", 1 },
	{ "hasUpdate", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_hasUpdate_mindustry_mod_Mods$LoadedMod_R_boolean, VTABLE_mindustry_ui_dialogs_ModsDialog_hasUpdate_mindustry_mod_Mods$LoadedMod_R_boolean, "(Lmindustry/mod/Mods$LoadedMod;)Z", 1 },
	{ "setup", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_setup, VTABLE_mindustry_ui_dialogs_ModsDialog_setup, "()V", 0 },
	{ "getStateText", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_getStateText_mindustry_mod_Mods$LoadedMod_R_java_lang_String, VTABLE_mindustry_ui_dialogs_ModsDialog_getStateText_mindustry_mod_Mods$LoadedMod_R_java_lang_String, "(Lmindustry/mod/Mods$LoadedMod;)Ljava/lang/String;", 2 },
	{ "getStateDetails", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_getStateDetails_mindustry_mod_Mods$LoadedMod_R_java_lang_String, VTABLE_mindustry_ui_dialogs_ModsDialog_getStateDetails_mindustry_mod_Mods$LoadedMod_R_java_lang_String, "(Lmindustry/mod/Mods$LoadedMod;)Ljava/lang/String;", 2 },
	{ "showMod", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_showMod_mindustry_mod_Mods$LoadedMod, VTABLE_mindustry_ui_dialogs_ModsDialog_showMod_mindustry_mod_Mods$LoadedMod, "(Lmindustry/mod/Mods$LoadedMod;)V", 2 },
	{ "handleMod", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_handleMod_java_lang_String_arc_util_Http$HttpResponse_boolean, VTABLE_mindustry_ui_dialogs_ModsDialog_handleMod_java_lang_String_arc_util_Http$HttpResponse_boolean, "(Ljava/lang/String;Larc/util/Http$HttpResponse;Z)V", 4 },
	{ "importFail", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_importFail_java_lang_Throwable, VTABLE_mindustry_ui_dialogs_ModsDialog_importFail_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 4 },
	{ "showModError", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_showModError_java_lang_Throwable, VTABLE_mindustry_ui_dialogs_ModsDialog_showModError_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 1 },
	{ "viewReleases", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_viewReleases_java_lang_String_boolean_boolean, VTABLE_mindustry_ui_dialogs_ModsDialog_viewReleases_java_lang_String_boolean_boolean, "(Ljava/lang/String;ZZ)V", 1 },
	{ "githubImportMod", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_githubImportMod_mindustry_mod_ModListing, VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportMod_mindustry_mod_ModListing, "(Lmindustry/mod/ModListing;)V", 1 },
	{ "githubImportMod", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_boolean, VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_boolean, "(Ljava/lang/String;ZZ)V", 1 },
	{ "githubImportMod", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean, VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_java_lang_String_boolean, "(Ljava/lang/String;ZLjava/lang/String;Z)V", 1 },
	{ "githubImportJavaMod", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_githubImportJavaMod_java_lang_String_java_lang_String_boolean, VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportJavaMod_java_lang_String_java_lang_String_boolean, "(Ljava/lang/String;Ljava/lang/String;Z)V", 1 },
	{ "githubImportBranch", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_githubImportBranch_java_lang_String_java_lang_String_java_lang_String_boolean, VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportBranch_java_lang_String_java_lang_String_java_lang_String_boolean, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", 1 },
	{ "parseVersionTag", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_parseVersionTag_java_lang_String_R_Array1_int, 0, "(Ljava/lang/String;)[I", 9 },
	{ "parseVersion", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_parseVersion_java_lang_String_R_Array1_int, 0, "(Ljava/lang/String;)[I", 9 },
	{ "matchesGameVersion", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_matchesGameVersion_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "matchesGameVersion", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_matchesGameVersion_Array1_int_R_boolean, 0, "([I)Z", 9 },
	{ "lambda$githubImportBranch$3", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$3_java_lang_String_boolean_arc_util_Http$HttpResponse, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$3_java_lang_String_boolean_arc_util_Http$HttpResponse, "(Ljava/lang/String;ZLarc/util/Http$HttpResponse;)V", 4098 },
	{ "lambda$githubImportBranch$4", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$4_java_lang_String_boolean_arc_util_Http$HttpResponse, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$4_java_lang_String_boolean_arc_util_Http$HttpResponse, "(Ljava/lang/String;ZLarc/util/Http$HttpResponse;)V", 4098 },
	{ "lambda$githubImportBranch$0", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$0_java_lang_String_boolean_arc_util_Http$HttpResponse, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$0_java_lang_String_boolean_arc_util_Http$HttpResponse, "(Ljava/lang/String;ZLarc/util/Http$HttpResponse;)V", 4098 },
	{ "lambda$githubImportBranch$1", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$1_java_lang_String_boolean_arc_util_Http$HttpResponse, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$1_java_lang_String_boolean_arc_util_Http$HttpResponse, "(Ljava/lang/String;ZLarc/util/Http$HttpResponse;)V", 4098 },
	{ "lambda$githubImportBranch$2", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$2_java_lang_String_boolean_arc_util_Http$HttpResponse, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$githubImportBranch$2_java_lang_String_boolean_arc_util_Http$HttpResponse, "(Ljava/lang/String;ZLarc/util/Http$HttpResponse;)V", 4098 },
	{ "lambda$githubImportJavaMod$0", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportJavaMod$0_java_lang_String_boolean_arc_util_Http$HttpResponse, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$githubImportJavaMod$0_java_lang_String_boolean_arc_util_Http$HttpResponse, "(Ljava/lang/String;ZLarc/util/Http$HttpResponse;)V", 4098 },
	{ "lambda$githubImportJavaMod$3", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportJavaMod$3_java_lang_String_boolean_arc_util_Http$HttpResponse, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$githubImportJavaMod$3_java_lang_String_boolean_arc_util_Http$HttpResponse, "(Ljava/lang/String;ZLarc/util/Http$HttpResponse;)V", 4098 },
	{ "lambda$githubImportJavaMod$2", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$githubImportJavaMod$2_arc_util_serialization_Jval_R_boolean, 0, "(Larc/util/serialization/Jval;)Z", 4106 },
	{ "lambda$githubImportJavaMod$1", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$githubImportJavaMod$1_arc_util_serialization_Jval_R_boolean, 0, "(Larc/util/serialization/Jval;)Z", 4106 },
	{ "lambda$githubImportMod$2", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportMod$2_java_lang_String_java_lang_String_boolean_arc_util_Http$HttpResponse, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$githubImportMod$2_java_lang_String_java_lang_String_boolean_arc_util_Http$HttpResponse, "(Ljava/lang/String;Ljava/lang/String;ZLarc/util/Http$HttpResponse;)V", 4098 },
	{ "lambda$githubImportMod$1", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportMod$1, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$githubImportMod$1, "()V", 4098 },
	{ "lambda$githubImportMod$0", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$githubImportMod$0_R_float, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$githubImportMod$0_R_float, "()F", 4098 },
	{ "lambda$viewReleases$12", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$12_mindustry_ui_dialogs_BaseDialog_java_lang_Throwable, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$12_mindustry_ui_dialogs_BaseDialog_java_lang_Throwable, "(Lmindustry/ui/dialogs/BaseDialog;Ljava/lang/Throwable;)V", 4098 },
	{ "lambda$viewReleases$13", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$13_java_lang_Throwable_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$13_java_lang_Throwable_mindustry_ui_dialogs_BaseDialog, "(Ljava/lang/Throwable;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$viewReleases$0", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$0_mindustry_ui_dialogs_BaseDialog_boolean_boolean_java_lang_String_arc_util_Http$HttpResponse, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$0_mindustry_ui_dialogs_BaseDialog_boolean_boolean_java_lang_String_arc_util_Http$HttpResponse, "(Lmindustry/ui/dialogs/BaseDialog;ZZLjava/lang/String;Larc/util/Http$HttpResponse;)V", 4098 },
	{ "lambda$viewReleases$1", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$1_mindustry_ui_dialogs_BaseDialog_arc_util_serialization_Jval$JsonArray_boolean_boolean_java_lang_String, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$1_mindustry_ui_dialogs_BaseDialog_arc_util_serialization_Jval$JsonArray_boolean_boolean_java_lang_String, "(Lmindustry/ui/dialogs/BaseDialog;Larc/util/serialization/Jval$JsonArray;ZZLjava/lang/String;)V", 4098 },
	{ "lambda$viewReleases$11", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$11, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$11, "()V", 4098 },
	{ "lambda$viewReleases$2", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$2_boolean_boolean_java_lang_String_arc_util_serialization_Jval$JsonArray_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$2_boolean_boolean_java_lang_String_arc_util_serialization_Jval$JsonArray_arc_scene_ui_layout_Table, "(ZZLjava/lang/String;Larc/util/serialization/Jval$JsonArray;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$viewReleases$7", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$7_arc_util_serialization_Jval_int_java_lang_String_boolean_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$7_arc_util_serialization_Jval_int_java_lang_String_boolean_arc_scene_ui_layout_Table, "(Larc/util/serialization/Jval;ILjava/lang/String;ZLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$viewReleases$8", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$8_arc_util_serialization_Jval_java_lang_String_boolean_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$8_arc_util_serialization_Jval_java_lang_String_boolean_arc_scene_ui_layout_Table, "(Larc/util/serialization/Jval;Ljava/lang/String;ZLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$viewReleases$10", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$10_arc_util_serialization_Jval_java_lang_String_boolean, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$10_arc_util_serialization_Jval_java_lang_String_boolean, "(Larc/util/serialization/Jval;Ljava/lang/String;Z)V", 4098 },
	{ "lambda$viewReleases$9", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$9_arc_util_serialization_Jval, 0, "(Larc/util/serialization/Jval;)V", 4106 },
	{ "lambda$viewReleases$3", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$3_java_lang_String_boolean_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$3_java_lang_String_boolean_arc_scene_ui_layout_Table, "(Ljava/lang/String;ZLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$viewReleases$4", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$4_java_lang_String_boolean_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$4_java_lang_String_boolean_arc_scene_ui_layout_Table, "(Ljava/lang/String;ZLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$viewReleases$6", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$6_java_lang_String_boolean, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$6_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 4098 },
	{ "lambda$viewReleases$5", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$viewReleases$5_java_lang_String, 0, "(Ljava/lang/String;)V", 4106 },
	{ "lambda$showModError$0", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$showModError$0_java_lang_Throwable_R_boolean, 0, "(Ljava/lang/Throwable;)Z", 4106 },
	{ "lambda$importFail$0", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$importFail$0_java_lang_Throwable, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$importFail$0_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 4098 },
	{ "lambda$handleMod$3", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$handleMod$3_java_lang_String, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$handleMod$3_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$handleMod$4", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$handleMod$4_java_lang_String_mindustry_mod_Mods$LoadedMod_R_boolean, 0, "(Ljava/lang/String;Lmindustry/mod/Mods$LoadedMod;)Z", 4106 },
	{ "lambda$handleMod$2", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$handleMod$2_arc_func_Floatc_float, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$handleMod$2_arc_func_Floatc_float, "(Larc/func/Floatc;F)V", 4098 },
	{ "lambda$handleMod$1", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$handleMod$1_float, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$handleMod$1_float, "(F)V", 4098 },
	{ "lambda$handleMod$0", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$handleMod$0_float, 0, "(F)V", 4106 },
	{ "lambda$showMod$5", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$showMod$5_mindustry_mod_Mods$LoadedMod_arc_struct_Seq, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$showMod$5_mindustry_mod_Mods$LoadedMod_arc_struct_Seq, "(Lmindustry/mod/Mods$LoadedMod;Larc/struct/Seq;)V", 4098 },
	{ "lambda$showMod$6", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$showMod$6_arc_struct_Seq_arc_scene_ui_layout_Table, 0, "(Larc/struct/Seq;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showMod$8", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$showMod$8_arc_scene_ui_ImageButton, 0, "(Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$showMod$9", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$showMod$9_arc_scene_ui_ImageButton_arc_scene_event_ClickListener, 0, "(Larc/scene/ui/ImageButton;Larc/scene/event/ClickListener;)V", 4106 },
	{ "lambda$showMod$7", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$showMod$7_mindustry_ctype_UnlockableContent, 0, "(Lmindustry/ctype/UnlockableContent;)V", 4106 },
	{ "lambda$showMod$4", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$showMod$4_mindustry_mod_Mods$LoadedMod_mindustry_ctype_Content_R_boolean, 0, "(Lmindustry/mod/Mods$LoadedMod;Lmindustry/ctype/Content;)Z", 4106 },
	{ "lambda$showMod$3", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$showMod$3_mindustry_mod_Mods$LoadedMod_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$showMod$3_mindustry_mod_Mods$LoadedMod_arc_scene_ui_layout_Table, "(Lmindustry/mod/Mods$LoadedMod;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showMod$2", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$showMod$2_mindustry_mod_Mods$LoadedMod, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$showMod$2_mindustry_mod_Mods$LoadedMod, "(Lmindustry/mod/Mods$LoadedMod;)V", 4098 },
	{ "lambda$showMod$1", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$showMod$1_mindustry_mod_Mods$LoadedMod, 0, "(Lmindustry/mod/Mods$LoadedMod;)V", 4106 },
	{ "lambda$showMod$0", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$showMod$0_mindustry_mod_Mods$LoadedMod, 0, "(Lmindustry/mod/Mods$LoadedMod;)V", 4106 },
	{ "lambda$setup$29", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$setup$29_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$setup$27", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$27, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$27, "()V", 4098 },
	{ "lambda$setup$28", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$28_Array1_int_arc_struct_Seq, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$28_Array1_int_arc_struct_Seq, "([ILarc/struct/Seq;)V", 4098 },
	{ "lambda$setup$26", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$setup$26_arc_scene_ui_Button, 0, "(Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$setup$25", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$25_arc_scene_ui_ScrollPane, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$25_arc_scene_ui_ScrollPane, "(Larc/scene/ui/ScrollPane;)V", 4098 },
	{ "lambda$setup$24", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$setup$24_Array1_arc_scene_ui_layout_Table_arc_func_Cons_arc_scene_ui_layout_Table, 0, "([Larc/scene/ui/layout/Table;Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$setup$23", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$setup$23_arc_func_Cons_arc_scene_ui_layout_Table, 0, "(Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$setup$8", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$8_Array1_arc_scene_ui_layout_Table_Array1_boolean_float_float_java_lang_String, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$8_Array1_arc_scene_ui_layout_Table_Array1_boolean_float_float_java_lang_String, "([Larc/scene/ui/layout/Table;[ZFFLjava/lang/String;)V", 4098 },
	{ "lambda$setup$22", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$22_mindustry_mod_Mods$LoadedMod, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$22_mindustry_mod_Mods$LoadedMod, "(Lmindustry/mod/Mods$LoadedMod;)V", 4098 },
	{ "lambda$setup$21", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$21_mindustry_mod_Mods$LoadedMod_arc_scene_ui_Button, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$21_mindustry_mod_Mods$LoadedMod_arc_scene_ui_Button, "(Lmindustry/mod/Mods$LoadedMod;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$setup$20", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$20_mindustry_mod_Mods$LoadedMod, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$20_mindustry_mod_Mods$LoadedMod, "(Lmindustry/mod/Mods$LoadedMod;)V", 4098 },
	{ "lambda$setup$9", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$9_mindustry_mod_Mods$LoadedMod_float_arc_scene_ui_Button, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$9_mindustry_mod_Mods$LoadedMod_float_arc_scene_ui_Button, "(Lmindustry/mod/Mods$LoadedMod;FLarc/scene/ui/Button;)V", 4098 },
	{ "lambda$setup$15", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$15_mindustry_mod_Mods$LoadedMod_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$15_mindustry_mod_Mods$LoadedMod_arc_scene_ui_layout_Table, "(Lmindustry/mod/Mods$LoadedMod;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$19", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$setup$19_mindustry_mod_Mods$LoadedMod, 0, "(Lmindustry/mod/Mods$LoadedMod;)V", 4106 },
	{ "lambda$setup$17", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$17_mindustry_mod_Mods$LoadedMod, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$17_mindustry_mod_Mods$LoadedMod, "(Lmindustry/mod/Mods$LoadedMod;)V", 4098 },
	{ "lambda$setup$18", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$18_mindustry_mod_Mods$LoadedMod, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$18_mindustry_mod_Mods$LoadedMod, "(Lmindustry/mod/Mods$LoadedMod;)V", 4098 },
	{ "lambda$setup$16", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$16_mindustry_mod_Mods$LoadedMod, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$16_mindustry_mod_Mods$LoadedMod, "(Lmindustry/mod/Mods$LoadedMod;)V", 4098 },
	{ "lambda$setup$11", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$11_float_mindustry_mod_Mods$LoadedMod_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$11_float_mindustry_mod_Mods$LoadedMod_arc_scene_ui_layout_Table, "(FLmindustry/mod/Mods$LoadedMod;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$14", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$14_mindustry_mod_Mods$LoadedMod_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$14_mindustry_mod_Mods$LoadedMod_arc_scene_ui_layout_Table, "(Lmindustry/mod/Mods$LoadedMod;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$12", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$setup$12_mindustry_mod_Mods$LoadedMod_mindustry_ui_BorderImage, 0, "(Lmindustry/mod/Mods$LoadedMod;Lmindustry/ui/BorderImage;)V", 4106 },
	{ "lambda$setup$13", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$setup$13_mindustry_mod_Mods$LoadedMod_mindustry_ui_BorderImage, 0, "(Lmindustry/mod/Mods$LoadedMod;Lmindustry/ui/BorderImage;)V", 4106 },
	{ "lambda$setup$10", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$setup$10_java_lang_String_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$setup$0", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$0_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$7", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$7, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$7, "()V", 4098 },
	{ "lambda$setup$1", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$1, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$1, "()V", 4098 },
	{ "lambda$setup$2", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$2_arc_scene_ui_TextButton$TextButtonStyle_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$2_arc_scene_ui_TextButton$TextButtonStyle_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Larc/scene/ui/TextButton$TextButtonStyle;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$5", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$5_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$5_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$setup$6", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$6_java_lang_String, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$6_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$setup$3", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$3_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$3_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$setup$4", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$setup$4_Array1_arc_files_Fi, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$setup$4_Array1_arc_files_Fi, "([Larc/files/Fi;)V", 4098 },
	{ "lambda$refreshModUpdates$0", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$refreshModUpdates$0_arc_struct_ObjectMap_arc_struct_Seq, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$refreshModUpdates$0_arc_struct_ObjectMap_arc_struct_Seq, "(Larc/struct/ObjectMap;Larc/struct/Seq;)V", 4098 },
	{ "lambda$new$6", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$new$6, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$new$6, "()V", 4098 },
	{ "lambda$new$5", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$new$5_mindustry_game_EventType$ResizeEvent, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$new$5_mindustry_game_EventType$ResizeEvent, "(Lmindustry/game/EventType$ResizeEvent;)V", 4098 },
	{ "lambda$new$4", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$new$4, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$new$4, "()V", 4098 },
	{ "lambda$new$3", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$new$3, 0, "()V", 4106 },
	{ "lambda$new$2", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$new$2, 0, "()V", 4106 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_dialogs_ModsDialog_lambda$new$0, VTABLE_mindustry_ui_dialogs_ModsDialog_lambda$new$0, "()V", 4098 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_ui_dialogs_ModsDialog_lambda$new$1_mindustry_mod_Mods$LoadedMod, 0, "(Lmindustry/mod/Mods$LoadedMod;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_dialogs_ModsDialog, 0, "()V", 8 },
};

Class class_mindustry_ui_dialogs_ModsDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ModsDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_ui_dialogs_ModsDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ModsDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ModsDialog,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ModsDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 102,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 367,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_ModsDialog = registerClass(&class_mindustry_ui_dialogs_ModsDialog);

}
