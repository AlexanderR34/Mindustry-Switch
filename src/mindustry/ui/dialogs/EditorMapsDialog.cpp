#include "mindustry/ui/dialogs/EditorMapsDialog.h"
#include "mindustry/ui/dialogs/EditorMapsDialog_invoke_java_lang_Runnable_15.h"
#include "mindustry/ui/dialogs/EditorMapsDialog_invoke_java_lang_Runnable_14.h"
#include "mindustry/ui/dialogs/EditorMapsDialog_invoke_java_lang_Runnable_13.h"
#include "arc/func/Prov.h"
#include "mindustry/ui/dialogs/EditorMapsDialog_invoke_java_lang_Runnable_12.h"
#include "mindustry/ui/BorderImage.h"
#include "arc/Events.h"
#include "mindustry/ui/dialogs/EditorMapsDialog_invoke_java_lang_Runnable_17.h"
#include "mindustry/ui/dialogs/EditorMapsDialog_invoke_java_lang_Runnable_16.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/maps/Maps.h"
#include "arc/struct/StringMap.h"
#include "mindustry/ui/dialogs/EditorMapsDialog_invoke_arc_util_UnsafeRunnable_3.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/dialogs/EditorMapsDialog_invoke_arc_util_UnsafeRunnable_2.h"
#include "mindustry/ui/FileChooser.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "mindustry/maps/Map.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "arc/util/Log.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/graphics/Texture.h"
#include "mindustry/io/MapIO.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/type/Publishable.h"
#include "mindustry/ui/dialogs/EditorMapsDialog_invoke_arc_func_Boolf_1.h"
#include "mindustry/ui/dialogs/EditorMapsDialog_invoke_java_lang_Runnable_11.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/ui/dialogs/EditorMapsDialog_invoke_java_lang_Runnable_10.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/editor/MapEditorDialog.h"
#include "mindustry/game/EventType_MapMakeEvent.h"
#include "arc/files/Fi.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/dialogs/EditorMapsDialog_invoke_java_lang_Runnable_9.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "mindustry/gen/Icon.h"
#include "arc/util/Scaling.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/core/Platform.h"
#include "mindustry/ui/dialogs/EditorMapsDialog.h"
#include "arc/util/UnsafeRunnable.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/dialogs/MapListDialog.h"
#include "mindustry/ui/dialogs/EditorMapsDialog_invoke_arc_func_Prov_1.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/ScrollPane.h"
#include "mindustry/ui/dialogs/EditorMapsDialog_invoke_arc_func_Cons_4.h"
#include "mindustry/ui/dialogs/EditorMapsDialog_invoke_arc_func_Cons_3.h"
#include "mindustry/ui/dialogs/EditorMapsDialog_invoke_arc_func_Cons_5.h"
#include "mindustry/Vars.h"
#include "mindustry/editor/MapEditor.h"

extern "C" {


void mark_mindustry_ui_dialogs_EditorMapsDialog(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ui_dialogs_MapListDialog(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_EditorMapsDialog *) object;
}

void clinit_mindustry_ui_dialogs_EditorMapsDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_MapListDialog(ctx);
}

void init_mindustry_ui_dialogs_EditorMapsDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_EditorMapsDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_mindustry_ui_dialogs_MapListDialog_java_lang_String_boolean(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@maps"_j))), (jint(1)));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EditorMapsDialog_buildButtons(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:buildButtons", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.newmap"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(210.0f);
	jfloat temp1 = jfloat(64.0f);
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(44);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.importmap"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_upload;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp2 = jfloat(210.0f);
	jfloat temp3 = jfloat(64.0f);
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EditorMapsDialog_tryImportMap_arc_files_Fi_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:tryImportMap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(56);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_util_UnsafeRunnable_2(ctx);
		auto proxy = (mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_util_UnsafeRunnable_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_util_UnsafeRunnable_2);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_Maps_tryCatchMapError_arc_util_UnsafeRunnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_tryCatchMapError_arc_util_UnsafeRunnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EditorMapsDialog_showMap_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:showMap", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"@editor.mapinfo"_j))));
	((mindustry_ui_dialogs_MapListDialog *) NULL_CHECK(sp[0].o))->F_activeDialog = (jref) sp[1].o;
	frame[2].o = sp[1].o;
	LINE_NUMBER(103);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[2].o));
	LINE_NUMBER(105);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	(sp++)->f = jfloat(160.0f);
	goto label_4;
label_3:;
	(sp++)->f = jfloat(300.0f);
label_4:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(106);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	frame[4].o = sp[0].o;
	LINE_NUMBER(108);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	jint temp0 = jint(0);
	clinit_arc_scene_ui_Image(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[3].o = (jobject)((func_mindustry_maps_Map_safeTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_Map_safeTexture_R_arc_graphics_Texture])(ctx, (frame[1].o));
	init_arc_scene_ui_Image_arc_graphics_Texture(ctx, sp[2].o, sp[3].o);
	clinit_arc_util_Scaling(ctx);
	sp[3].o = (jobject)SF_arc_util_Scaling_fit;
	sp[2].o = (jobject)((func_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_ui_BorderImage(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_BorderImage);
	sp[3].o = (jobject)((func_mindustry_maps_Map_safeTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_Map_safeTexture_R_arc_graphics_Texture])(ctx, (frame[1].o));
	init_mindustry_ui_BorderImage_arc_graphics_Texture(ctx, sp[2].o, sp[3].o);
	clinit_arc_util_Scaling(ctx);
	sp[3].o = (jobject)SF_arc_util_Scaling_fit;
	sp[2].o = (jobject)((func_mindustry_ui_BorderImage_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_ui_BorderImage_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].f));
	LINE_NUMBER(110);
	sp[0].o = frame[4].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp2 = frame[3].f;
	LINE_NUMBER(135);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].f));
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(139);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.openin"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_export;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_11);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(54.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(150);
	sp[0].o = frame[4].o;
	sp += 1;
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_workshop) == 0) goto label_13;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_steam;
	if ((--sp)->i == 0) goto label_13;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@view.workshop"_j));
	goto label_14;
label_13:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@delete"_j));
label_14:;
	{
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_workshop) == 0) goto label_15;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_steam;
	if ((--sp)->i == 0) goto label_15;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_link;
	goto label_16;
label_15:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_trash;
label_16:;
	{
	sp -= 3;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_12);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(54.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp += 1;
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_workshop) != 0) goto label_18;
	}
	{
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_custom) != 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(162);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EditorMapsDialog_lambda$showMap$2_mindustry_maps_Map_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:lambda$showMap$2", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(151);
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_workshop) == 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_steam;
	if ((--sp)->i == 0) goto label_1;
	{
	LINE_NUMBER(152);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_viewListing_mindustry_type_Publishable) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_viewListing_mindustry_type_Publishable, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(154);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"map.delete"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_13);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_3:;
	LINE_NUMBER(160);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EditorMapsDialog_lambda$showMap$3_mindustry_maps_Map_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:lambda$showMap$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(155);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	((func_mindustry_maps_Maps_removeMap_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_removeMap_mindustry_maps_Map])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(156);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(157);
	((func_mindustry_ui_dialogs_EditorMapsDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_EditorMapsDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EditorMapsDialog_lambda$showMap$1_mindustry_maps_Map_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:lambda$showMap$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(141);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	sp[1].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_file;
	((func_mindustry_editor_MapEditorDialog_beginEditMap_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_beginEditMap_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(142);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(143);
	((func_mindustry_ui_dialogs_EditorMapsDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_EditorMapsDialog_hide])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(147);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(144);
	frame[3].o = sp[0].o;
	LINE_NUMBER(145);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[3].o));
	LINE_NUMBER(146);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@error.mapnotfound"_j))));
	}
label_6:;
	LINE_NUMBER(148);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_EditorMapsDialog_lambda$showMap$0_mindustry_maps_Map_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:lambda$showMap$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_EditorMapsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(112);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(6.0f)));
	LINE_NUMBER(115);
	clinit_arc_scene_ui_ScrollPane(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane);
	init_arc_scene_ui_ScrollPane_arc_scene_Element(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@editor.mapname"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(123);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(125);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@editor.author"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(127);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_custom) != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"author"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	if (temp0 == 0) goto label_14;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Anuke"_j));
	goto label_15;
label_14:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_maps_Map_author_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Map_author_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_15:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"description"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	if (temp0 != 0) goto label_18;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@editor.description"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(133);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_maps_Map_description_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_description_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	}
label_18:;
	LINE_NUMBER(135);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EditorMapsDialog_lambda$tryImportMap$0_arc_files_Fi_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:lambda$tryImportMap$0", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(57);
	jint temp0 = (jint)SM_mindustry_io_MapIO_isImage_arc_files_Fi_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(58);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.errorimage"_j))));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)SM_mindustry_io_MapIO_createMap_arc_files_Fi_boolean_R_mindustry_maps_Map(ctx, (frame[1].o), (jint(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[3].o)))->F_tags;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"name"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_func_Prov_1);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(73);
	if ((frame[4].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(74);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.errorname"_j))));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(78);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	sp[0].o = (jobject)((func_mindustry_maps_Maps_all_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_all_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_mindustry_maps_Map, sp[0].o));
	LINE_NUMBER(80);
	if ((frame[5].o) == nullptr) goto label_10;
	}
	{
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[5].o)))->F_custom) != 0) goto label_10;
	}
	{
	LINE_NUMBER(81);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"editor.import.exists"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (frame[4].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(82);
	if ((frame[5].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(83);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"editor.overwrite.confirm"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, (frame[3].o));
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_14);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(93);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	sp[1].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[3].o)))->F_file;
	sp[0].o = (jobject)((func_mindustry_maps_Maps_importMap_arc_files_Fi_R_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_importMap_arc_files_Fi_R_mindustry_maps_Map])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(94);
	((func_mindustry_ui_dialogs_EditorMapsDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_EditorMapsDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(95);
	if ((frame[2].o) == nullptr) goto label_12;
	}
	{
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[6].o));
	}
label_12:;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EditorMapsDialog_lambda$tryImportMap$3_mindustry_maps_Map_mindustry_maps_Map_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:lambda$tryImportMap$3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(84);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_util_UnsafeRunnable_3(ctx);
		auto proxy = (mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_util_UnsafeRunnable_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_util_UnsafeRunnable_3);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_Maps_tryCatchMapError_arc_util_UnsafeRunnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_tryCatchMapError_arc_util_UnsafeRunnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EditorMapsDialog_lambda$tryImportMap$4_mindustry_maps_Map_mindustry_maps_Map_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:lambda$tryImportMap$4", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(85);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	((func_mindustry_maps_Maps_removeMap_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_removeMap_mindustry_maps_Map])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(86);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	sp[1].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[2].o)))->F_file;
	sp[0].o = (jobject)((func_mindustry_maps_Maps_importMap_arc_files_Fi_R_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_importMap_arc_files_Fi_R_mindustry_maps_Map])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(87);
	((func_mindustry_ui_dialogs_EditorMapsDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_EditorMapsDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(89);
	if ((frame[3].o) == nullptr) goto label_4;
	}
	{
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[4].o));
	}
label_4:;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_EditorMapsDialog_lambda$tryImportMap$2_java_lang_String_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:lambda$tryImportMap$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_EditorMapsDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_EditorMapsDialog_lambda$tryImportMap$1_R_java_lang_String(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:lambda$tryImportMap$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_EditorMapsDialog(ctx);
	{
	LINE_NUMBER(66);
	frame[0].o = (((jobject) createStringLiteral(ctx, u8"unknown"_j)));
	LINE_NUMBER(67);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(68);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	sp[1].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, boxInteger(ctx, temp0));
	sp[0].o = (jobject)((func_mindustry_maps_Maps_byName_java_lang_String_R_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_byName_java_lang_String_R_mindustry_maps_Map])(ctx, sp[0].o, sp[1].o);
	if (sp[0].o == nullptr) goto label_3;
	}
	goto label_2;
label_3:;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, (frame[0].o), boxInteger(ctx, (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:lambda$buildButtons$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"msav"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$5_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:lambda$buildButtons$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_15);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$6_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:lambda$buildButtons$6", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(48);
	((func_mindustry_ui_dialogs_EditorMapsDialog_tryImportMap_arc_files_Fi_arc_func_Cons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_EditorMapsDialog_tryImportMap_arc_files_Fi_arc_func_Cons])(ctx, (frame[0].o), (frame[5].o), (jobject(nullptr)));
	LINE_NUMBER(47);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:lambda$buildButtons$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.newmap"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@editor.mapname"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8""_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:lambda$buildButtons$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_16);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[2].o = sp[0].o;
	LINE_NUMBER(36);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	sp[0].o = (jobject)((func_mindustry_maps_Maps_byName_java_lang_String_R_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_byName_java_lang_String_R_mindustry_maps_Map])(ctx, sp[0].o, (frame[1].o));
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(37);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.exists"_j))));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(39);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$2_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:lambda$buildButtons$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_EditorMapsDialog_invoke_java_lang_Runnable_17);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$3_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EditorMapsDialog:lambda$buildButtons$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	((func_mindustry_ui_dialogs_EditorMapsDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_EditorMapsDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(31);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	sp[0].o = (jobject)((func_mindustry_editor_MapEditorDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(32);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name"_j))), (frame[1].o));
	LINE_NUMBER(33);
	clinit_mindustry_game_EventType$MapMakeEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$MapMakeEvent);
	init_mindustry_game_EventType$MapMakeEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_EditorMapsDialog[] {
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
	(void *) M_mindustry_ui_dialogs_MapListDialog_show_R_arc_scene_ui_Dialog,
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
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$new$1,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$new$0,
	(void *) M_mindustry_ui_dialogs_EditorMapsDialog_buildButtons,
	(void *) M_mindustry_ui_dialogs_EditorMapsDialog_showMap_mindustry_maps_Map,
	(void *) M_mindustry_ui_dialogs_MapListDialog_setup,
	(void *) M_mindustry_ui_dialogs_MapListDialog_rebuildMaps,
	(void *) M_mindustry_ui_dialogs_MapListDialog_showMapFilters,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$18_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$21,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$20,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$19,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$14_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$17,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$16,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$15,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$9_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$10_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$12_arc_scene_ui_ImageButton_R_boolean,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$13_java_lang_String_R_boolean,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$11,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$5_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$6_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$7_mindustry_ui_dialogs_MapListDialog$MapPriority,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$2_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$3_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$showMapFilters$4_mindustry_game_Gamemode,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$rebuildMaps$1_mindustry_maps_Map,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$rebuildMaps$0_java_lang_String_R_boolean,
	(void *) M_mindustry_ui_dialogs_MapListDialog_lambda$setup$2_java_lang_String,
	(void *) M_mindustry_ui_dialogs_EditorMapsDialog_tryImportMap_arc_files_Fi_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$showMap$2_mindustry_maps_Map_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$showMap$3_mindustry_maps_Map_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$showMap$1_mindustry_maps_Map_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$tryImportMap$0_arc_files_Fi_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$tryImportMap$3_mindustry_maps_Map_mindustry_maps_Map_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$tryImportMap$4_mindustry_maps_Map_mindustry_maps_Map_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$4,
	(void *) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$5_Array1_arc_files_Fi,
	(void *) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$6_Array1_arc_files_Fi,
	(void *) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$0,
	(void *) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$1_java_lang_String,
	(void *) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$2_java_lang_String,
	(void *) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$3_java_lang_String,
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
	{ "buildButtons", "()V" },
	{ "showMap", "(Lmindustry/maps/Map;)V" },
	{ "setup", "()V" },
	{ "rebuildMaps", "()V" },
	{ "showMapFilters", "()V" },
	{ "lambda$showMapFilters$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$18", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$21", "()V" },
	{ "lambda$showMapFilters$20", "()V" },
	{ "lambda$showMapFilters$19", "()V" },
	{ "lambda$showMapFilters$14", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$17", "()V" },
	{ "lambda$showMapFilters$16", "()V" },
	{ "lambda$showMapFilters$15", "()V" },
	{ "lambda$showMapFilters$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$9", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$10", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$12", "(Larc/scene/ui/ImageButton;)Z" },
	{ "lambda$showMapFilters$13", "(Ljava/lang/String;)Z" },
	{ "lambda$showMapFilters$11", "()V" },
	{ "lambda$showMapFilters$5", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$6", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$7", "(Lmindustry/ui/dialogs/MapListDialog$MapPriority;)V" },
	{ "lambda$showMapFilters$2", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$3", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showMapFilters$4", "(Lmindustry/game/Gamemode;)V" },
	{ "lambda$rebuildMaps$1", "(Lmindustry/maps/Map;)V" },
	{ "lambda$rebuildMaps$0", "(Ljava/lang/String;)Z" },
	{ "lambda$setup$2", "(Ljava/lang/String;)V" },
	{ "tryImportMap", "(Larc/files/Fi;Larc/func/Cons;)V" },
	{ "lambda$showMap$2", "(Lmindustry/maps/Map;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$showMap$3", "(Lmindustry/maps/Map;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$showMap$1", "(Lmindustry/maps/Map;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$tryImportMap$0", "(Larc/files/Fi;Larc/func/Cons;)V" },
	{ "lambda$tryImportMap$3", "(Lmindustry/maps/Map;Lmindustry/maps/Map;Larc/func/Cons;)V" },
	{ "lambda$tryImportMap$4", "(Lmindustry/maps/Map;Lmindustry/maps/Map;Larc/func/Cons;)V" },
	{ "lambda$buildButtons$4", "()V" },
	{ "lambda$buildButtons$5", "([Larc/files/Fi;)V" },
	{ "lambda$buildButtons$6", "([Larc/files/Fi;)V" },
	{ "lambda$buildButtons$0", "()V" },
	{ "lambda$buildButtons$1", "(Ljava/lang/String;)V" },
	{ "lambda$buildButtons$2", "(Ljava/lang/String;)V" },
	{ "lambda$buildButtons$3", "(Ljava/lang/String;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_EditorMapsDialog, 0, "()V", 1 },
	{ "buildButtons", (intptr_t) M_mindustry_ui_dialogs_EditorMapsDialog_buildButtons, VTABLE_mindustry_ui_dialogs_EditorMapsDialog_buildButtons, "()V", 0 },
	{ "tryImportMap", (intptr_t) M_mindustry_ui_dialogs_EditorMapsDialog_tryImportMap_arc_files_Fi_arc_func_Cons, VTABLE_mindustry_ui_dialogs_EditorMapsDialog_tryImportMap_arc_files_Fi_arc_func_Cons, "(Larc/files/Fi;Larc/func/Cons;)V", 1 },
	{ "showMap", (intptr_t) M_mindustry_ui_dialogs_EditorMapsDialog_showMap_mindustry_maps_Map, VTABLE_mindustry_ui_dialogs_EditorMapsDialog_showMap_mindustry_maps_Map, "(Lmindustry/maps/Map;)V", 1 },
	{ "lambda$showMap$2", (intptr_t) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$showMap$2_mindustry_maps_Map_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_EditorMapsDialog_lambda$showMap$2_mindustry_maps_Map_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/maps/Map;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$showMap$3", (intptr_t) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$showMap$3_mindustry_maps_Map_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_EditorMapsDialog_lambda$showMap$3_mindustry_maps_Map_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/maps/Map;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$showMap$1", (intptr_t) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$showMap$1_mindustry_maps_Map_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_EditorMapsDialog_lambda$showMap$1_mindustry_maps_Map_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/maps/Map;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$showMap$0", (intptr_t) SM_mindustry_ui_dialogs_EditorMapsDialog_lambda$showMap$0_mindustry_maps_Map_arc_scene_ui_layout_Table, 0, "(Lmindustry/maps/Map;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$tryImportMap$0", (intptr_t) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$tryImportMap$0_arc_files_Fi_arc_func_Cons, VTABLE_mindustry_ui_dialogs_EditorMapsDialog_lambda$tryImportMap$0_arc_files_Fi_arc_func_Cons, "(Larc/files/Fi;Larc/func/Cons;)V", 4098 },
	{ "lambda$tryImportMap$3", (intptr_t) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$tryImportMap$3_mindustry_maps_Map_mindustry_maps_Map_arc_func_Cons, VTABLE_mindustry_ui_dialogs_EditorMapsDialog_lambda$tryImportMap$3_mindustry_maps_Map_mindustry_maps_Map_arc_func_Cons, "(Lmindustry/maps/Map;Lmindustry/maps/Map;Larc/func/Cons;)V", 4098 },
	{ "lambda$tryImportMap$4", (intptr_t) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$tryImportMap$4_mindustry_maps_Map_mindustry_maps_Map_arc_func_Cons, VTABLE_mindustry_ui_dialogs_EditorMapsDialog_lambda$tryImportMap$4_mindustry_maps_Map_mindustry_maps_Map_arc_func_Cons, "(Lmindustry/maps/Map;Lmindustry/maps/Map;Larc/func/Cons;)V", 4098 },
	{ "lambda$tryImportMap$2", (intptr_t) SM_mindustry_ui_dialogs_EditorMapsDialog_lambda$tryImportMap$2_java_lang_String_mindustry_maps_Map_R_boolean, 0, "(Ljava/lang/String;Lmindustry/maps/Map;)Z", 4106 },
	{ "lambda$tryImportMap$1", (intptr_t) SM_mindustry_ui_dialogs_EditorMapsDialog_lambda$tryImportMap$1_R_java_lang_String, 0, "()Ljava/lang/String;", 4106 },
	{ "lambda$buildButtons$4", (intptr_t) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$4, VTABLE_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$4, "()V", 4098 },
	{ "lambda$buildButtons$5", (intptr_t) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$5_Array1_arc_files_Fi, VTABLE_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$5_Array1_arc_files_Fi, "([Larc/files/Fi;)V", 4098 },
	{ "lambda$buildButtons$6", (intptr_t) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$6_Array1_arc_files_Fi, VTABLE_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$6_Array1_arc_files_Fi, "([Larc/files/Fi;)V", 4098 },
	{ "lambda$buildButtons$0", (intptr_t) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$0, VTABLE_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$0, "()V", 4098 },
	{ "lambda$buildButtons$1", (intptr_t) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$1_java_lang_String, VTABLE_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$buildButtons$2", (intptr_t) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$2_java_lang_String, VTABLE_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$2_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$buildButtons$3", (intptr_t) M_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$3_java_lang_String, VTABLE_mindustry_ui_dialogs_EditorMapsDialog_lambda$buildButtons$3_java_lang_String, "(Ljava/lang/String;)V", 4098 },
};

Class class_mindustry_ui_dialogs_EditorMapsDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/EditorMapsDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_MapListDialog,
		.size = sizeof(mindustry_ui_dialogs_EditorMapsDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_EditorMapsDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_EditorMapsDialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_EditorMapsDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 340,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_EditorMapsDialog = registerClass(&class_mindustry_ui_dialogs_EditorMapsDialog);

}
