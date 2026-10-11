#include "mindustry/editor/MapGenerateDialog.h"
#include "arc/func/Prov.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "arc/Input.h"
#include "java/util/concurrent/Future.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/scene/ui/Image.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/maps/Maps.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Boolf.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput.h"
#include "mindustry/editor/MapGenerateDialog_invoke_mindustry_maps_filters_GenerateFilter_GenerateInput_TileProvider_2.h"
#include "arc/math/Mathf.h"
#include "mindustry/editor/MapGenerateDialog_invoke_arc_func_Cons_18.h"
#include "mindustry/editor/MapGenerateDialog_invoke_arc_func_Cons_19.h"
#include "arc/Core.h"
#include "mindustry/editor/MapGenerateDialog_invoke_arc_func_Cons_16.h"
#include "java/util/Iterator.h"
#include "mindustry/editor/MapGenerateDialog_invoke_arc_func_Cons_17.h"
#include "arc/util/Log.h"
#include "mindustry/editor/MapGenerateDialog_invoke_mindustry_maps_filters_GenerateFilter_GenerateInput_TileProvider_3.h"
#include "arc/util/Time.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/graphics/Texture.h"
#include "mindustry/editor/MapGenerateDialog_invoke_arc_func_Cons_14.h"
#include "mindustry/editor/MapGenerateDialog_invoke_arc_func_Cons_15.h"
#include "mindustry/editor/MapGenerateDialog_invoke_arc_func_Cons_12.h"
#include "mindustry/editor/MapGenerateDialog_invoke_arc_func_Cons_13.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_49.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_48.h"
#include "arc/Graphics.h"
#include "arc/scene/Scene.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_47.h"
#include "java/lang/Object.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_46.h"
#include "mindustry/editor/EditorRenderer.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_45.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_44.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_43.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_42.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_41.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_40.h"
#include "mindustry/editor/MapGenerateDialog_invoke_arc_func_Intc2_3.h"
#include "arc/graphics/GLTexture.h"
#include "mindustry/editor/MapGenerateDialog_invoke_arc_func_Intc2_2.h"
#include "mindustry/world/CachedTile.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/maps/filters/MirrorFilter.h"
#include "mindustry/editor/MapGenerateDialog_1.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "mindustry/editor/MapGenerateDialog_2.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/editor/MapGenerateDialog_3.h"
#include "mindustry/editor/MapGenerateDialog_4.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "mindustry/io/JsonIO.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/gen/PackTile.h"
#include "arc/scene/ui/ScrollPane.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/editor/MapEditor.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput_TileProvider.h"
#include "mindustry/ui/BorderImage.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/editor/MapGenerateDialog_invoke_arc_func_Boolf_1.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "java/util/concurrent/ExecutorService.h"
#include "mindustry/io/MapIO.h"
#include "arc/math/geom/Vec2.h"
#include "arc/func/Intc2.h"
#include "mindustry/world/Block.h"
#include "mindustry/editor/MapGenerateDialog_invoke_arc_func_Cons_21.h"
#include "mindustry/editor/MapGenerateDialog_invoke_arc_func_Cons_22.h"
#include "mindustry/editor/MapGenerateDialog_invoke_arc_func_Cons_20.h"
#include "arc/Application.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_39.h"
#include "mindustry/editor/MapGenerateDialog_invoke_arc_func_Cons_23.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_38.h"
#include "mindustry/world/Tiles.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_37.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_36.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_35.h"
#include "java/lang/String.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_34.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_33.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_32.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_31.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_30.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "java/lang/Math.h"
#include "mindustry/editor/MapGenerateDialog.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_29.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_28.h"
#include "mindustry/core/UI.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_27.h"
#include "java/lang/CharSequence.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_26.h"
#include "mindustry/editor/MapGenerateDialog_invoke_java_lang_Runnable_25.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "java/util/Objects.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"

extern "C" {


void mark_mindustry_editor_MapGenerateDialog(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_MapGenerateDialog *) object;
	if (self->F_pixmap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pixmap)->clazz)->markFunction)((jobject) self->F_pixmap, mark, depth + 1);
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
	if (self->F_input)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_input)->clazz)->markFunction)((jobject) self->F_input, mark, depth + 1);
	if (self->F_filters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filters)->clazz)->markFunction)((jobject) self->F_filters, mark, depth + 1);
	if (self->F_filterTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filterTable)->clazz)->markFunction)((jobject) self->F_filterTable, mark, depth + 1);
	if (self->F_preview)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_preview)->clazz)->markFunction)((jobject) self->F_preview, mark, depth + 1);
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
	if (self->F_dragging)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dragging)->clazz)->markFunction)((jobject) self->F_dragging, mark, depth + 1);
	if (self->F_dragRect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dragRect)->clazz)->markFunction)((jobject) self->F_dragRect, mark, depth + 1);
	if (self->F_dragAxis)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dragAxis)->clazz)->markFunction)((jobject) self->F_dragAxis, mark, depth + 1);
	if (self->F_buffer1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer1)->clazz)->markFunction)((jobject) self->F_buffer1, mark, depth + 1);
	if (self->F_buffer2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer2)->clazz)->markFunction)((jobject) self->F_buffer2, mark, depth + 1);
	if (self->F_applier)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_applier)->clazz)->markFunction)((jobject) self->F_applier, mark, depth + 1);
	if (self->F_ctile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ctile)->clazz)->markFunction)((jobject) self->F_ctile, mark, depth + 1);
}

void clinit_mindustry_editor_MapGenerateDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
}

void init_mindustry_editor_MapGenerateDialog_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapGenerateDialog(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(68);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@editor.generate"_j))));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_mindustry_maps_filters_GenerateFilter$GenerateInput(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_GenerateFilter$GenerateInput);
	init_mindustry_maps_filters_GenerateFilter$GenerateInput(ctx, sp[1].o);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_input = (jref) sp[1].o;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_filters = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_4;
	}
	INST_ICONST(3);
	goto label_5;
label_4:;
	INST_ICONST(1);
label_5:;
	{
	sp -= 2;
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_scaling = sp[1].i;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_dragRect = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_dragAxis = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_MapGenerateDialog$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog$1);
	init_mindustry_editor_MapGenerateDialog$1_mindustry_editor_MapGenerateDialog(ctx, sp[1].o, (frame[0].o));
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_ctile = (jref) sp[1].o;
	LINE_NUMBER(69);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_applied = (frame[1].i);
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_25);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapGenerateDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(72);
	((func_mindustry_editor_MapGenerateDialog_addCloseListener) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_addCloseListener])(ctx, (frame[0].o));
	LINE_NUMBER(74);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatt;
	frame[2].o = sp[0].o;
	LINE_NUMBER(76);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(180.0f)), (jfloat(64.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(77);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@back"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_left;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_26(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_26 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_26);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(79);
	if ((frame[1].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.apply"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_ok;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_27(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_27 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_27);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_16:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.randomize"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_refresh;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_28(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_28 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_28);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@edit"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_edit;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_29(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_29 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_29);
		proxy->F_field2 = (frame[1].i);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(139);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@add"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_30(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_30 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_30);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(141);
	if ((frame[1].i) != 0) goto label_21;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_31(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_31 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_31);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapGenerateDialog_hidden_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_hidden_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	}
label_21:;
	{
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_32(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_32 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_32);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapGenerateDialog_onResize_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_onResize_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_show_arc_struct_Seq_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:show", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(149);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters = (jref) (frame[1].o);
	LINE_NUMBER(150);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_applier = (jref) (frame[2].o);
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_mindustry_editor_MapGenerateDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[0].o));
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_show_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:show", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	((func_mindustry_editor_MapGenerateDialog_show_arc_struct_Seq_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_show_arc_struct_Seq_arc_func_Cons])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_applyToEditor_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:applyToEditor", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject) createArray(ctx, &class_long, (temp0 * temp1));
	frame[2].o = sp[0].o;
	LINE_NUMBER(162);
	sp[0].o = (jobject) createArray(ctx, &class_long, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	frame[3].o = sp[0].o;
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_maps_filters_GenerateFilter, sp[0].o));
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_input;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider_2(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider_2 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider_2);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_filters_GenerateFilter$GenerateInput_begin_int_int_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_begin_int_int_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(168);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[6].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_8;
	}
	{
	LINE_NUMBER(169);
	frame[7].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[7].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_11;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_input;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[6].i), (frame[7].i));
	((func_mindustry_maps_filters_GenerateFilter$GenerateInput_set_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_set_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(171);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_input;
	((func_mindustry_maps_filters_GenerateFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(172);
	sp[0].o = frame[2].o;
	jint temp0 = frame[6].i;
	jint temp1 = frame[7].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	jint temp3 = temp0 + (temp1 * temp2);
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_input;
	sp[1].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[1].o))->F_block;
	jint temp4 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_input;
	sp[1].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[1].o))->F_floor;
	jint temp5 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_input;
	sp[1].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[1].o))->F_overlay;
	jlong temp6 = (jlong)SM_mindustry_gen_PackTile_get_short_short_short_R_long(ctx, temp4, temp5, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	ARRAY_ACCESS(jlong, sp[0].o, temp3) = temp6;
	LINE_NUMBER(173);
	sp[0].o = frame[3].o;
	jint temp7 = frame[6].i;
	jint temp8 = frame[7].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp9 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	jint temp10 = temp7 + (temp8 * temp9);
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_input;
	ARRAY_ACCESS(jlong, sp[0].o, temp10) = ((jlong)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[1].o))->F_packedData);
	LINE_NUMBER(169);
	INST_IINC(7, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(168);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(177);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_33(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_33 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_33);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapEditor_load_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_load_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(196);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(199);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer;
	((func_mindustry_editor_EditorRenderer_recache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_recache])(ctx, sp[0].o);
	LINE_NUMBER(200);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((func_mindustry_editor_MapEditor_clearOp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_clearOp])(ctx, sp[0].o);
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapGenerateDialog_hit_float_float_R_mindustry_maps_filters_MirrorFilter(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:hit", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_preview;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_preview;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	SM_mindustry_maps_filters_MirrorFilter_getDrawRect_arc_scene_ui_Image_arc_math_geom_Rect(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width), (jfloat(0)), 1)) <= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height), (jfloat(0)), 1)) > 0) goto label_4;
	}
label_3:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(209);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(210);
	frame[4].f = (jfloat(3,402823e+38f));
	LINE_NUMBER(211);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(16.0f)));
	frame[5].f = temp0;
	LINE_NUMBER(212);
	frame[6].i = (jint(0));
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_maps_filters_GenerateFilter, sp[0].o));
	LINE_NUMBER(216);
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_maps_filters_MirrorFilter)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(217);
	frame[9].o = (checkCast(ctx, &class_mindustry_maps_filters_MirrorFilter, (frame[8].o)));
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[9].o)))->F_axisX), (jfloat(0)), (jfloat(1)));
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	frame[10].f = (temp0 + (temp1 * ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width)));
	LINE_NUMBER(219);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[9].o)))->F_axisY), (jfloat(0)), (jfloat(1)));
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	frame[11].f = (temp2 + (temp3 * ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height)));
	LINE_NUMBER(221);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragAxis;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat(((jint)((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[9].o)))->F_angle))) - (jfloat(90.0f))), (jfloat(1)));
	LINE_NUMBER(222);
	jfloat temp4 = (frame[1].f) - (frame[10].f);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragAxis;
	jfloat temp5 = temp4 * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	jfloat temp6 = (frame[2].f) - (frame[11].f);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragAxis;
	jfloat temp7 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp5 - (temp6 * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x))));
	frame[12].f = temp7;
	LINE_NUMBER(223);
	if ((floatCompare((frame[12].f), (frame[4].f), 1)) >= 0) goto label_19;
	}
	{
	LINE_NUMBER(224);
	frame[4].f = (frame[12].f);
	LINE_NUMBER(225);
	frame[3].o = (frame[9].o);
	}
label_19:;
	LINE_NUMBER(227);
	INST_IINC(6, 1);
label_12:;
	LINE_NUMBER(229);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(231);
	if ((frame[3].o) == nullptr) goto label_22;
	}
	{
	if ((floatCompare((frame[4].f), (frame[5].f), 1)) > 0) goto label_22;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_22:;
	{
	LINE_NUMBER(232);
	if ((frame[6].i) != (jint(1))) goto label_23;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_23;
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	if ((floatCompare(temp0, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x) - (frame[5].f)), -1)) < 0) goto label_23;
	}
	{
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	if ((floatCompare(temp0, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y) - (frame[5].f)), -1)) < 0) goto label_23;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	if ((floatCompare(temp0, ((temp1 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width)) + (frame[5].f)), 1)) > 0) goto label_23;
	}
	{
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	if ((floatCompare(temp0, ((temp1 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height)) + (frame[5].f)), 1)) > 0) goto label_23;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_23:;
	{
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_drag_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:drag", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_preview;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragging;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_preview;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	SM_mindustry_maps_filters_MirrorFilter_getDrawRect_arc_scene_ui_Image_arc_math_geom_Rect(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(240);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width), (jfloat(0)), 1)) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height), (jfloat(0)), 1)) > 0) goto label_5;
	}
label_4:;
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragging;
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	jfloat temp1 = temp0 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x);
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (temp1 / ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width)), (jfloat(0)), (jfloat(1)));
	((mindustry_maps_filters_MirrorFilter *) NULL_CHECK(sp[0].o))->F_axisX = temp2;
	LINE_NUMBER(244);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragging;
	jfloat temp3 = frame[2].f;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	jfloat temp4 = temp3 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y);
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragRect;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (temp4 / ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height)), (jfloat(0)), (jfloat(1)));
	((mindustry_maps_filters_MirrorFilter *) NULL_CHECK(sp[0].o))->F_axisY = temp5;
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_dragUpdate_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:dragUpdate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(248);
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	frame[2].l = temp0;
	LINE_NUMBER(249);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	if ((longCompare(((frame[2].l) - ((jlong)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_lastDrag)), (jlong(33ll)))) >= 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(250);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_lastDrag = (frame[2].l);
	LINE_NUMBER(251);
	((func_mindustry_editor_MapGenerateDialog_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_update])(ctx, (frame[0].o));
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:setup", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, sp[0].o);
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_Texture_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_dispose])(ctx, sp[0].o);
	LINE_NUMBER(258);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap = (jref) (jobject(nullptr));
	LINE_NUMBER(259);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(262);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Pixmap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[2].o);
	jint temp1 = temp0 / ((jint)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_scaling);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_editor;
	jint temp2 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[2].o);
	init_arc_graphics_Pixmap_int_int(ctx, sp[1].o, temp1, (temp2 / ((jint)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_scaling)));
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_pixmap = (jref) sp[1].o;
	LINE_NUMBER(263);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	sp[2].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	init_arc_graphics_Texture_arc_graphics_Pixmap(ctx, sp[1].o, sp[2].o);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(265);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(266);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(327);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_editor_MapGenerateDialog_create_R_Array1_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_create_R_Array1_long])(ctx, (frame[0].o));
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_buffer1 = (jref) sp[1].o;
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_editor_MapGenerateDialog_create_R_Array1_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_create_R_Array1_long])(ctx, (frame[0].o));
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_buffer2 = (jref) sp[1].o;
	LINE_NUMBER(332);
	((func_mindustry_editor_MapGenerateDialog_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_update])(ctx, (frame[0].o));
	LINE_NUMBER(333);
	((func_mindustry_editor_MapGenerateDialog_rebuildFilters) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_rebuildFilters])(ctx, (frame[0].o));
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapGenerateDialog_create_R_Array1_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:create", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(337);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[0].o);
	jint temp1 = temp0 / ((jint)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_scaling);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp2 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject) createArray(ctx, &class_long, (temp1 * (temp2 / ((jint)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_scaling))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_rebuildFilters(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:rebuildFilters", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(341);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp1 = (jfloat(temp0)) / (jfloat(2));
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(290.0f)));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint((temp1 / temp2))), (jint(1)));
	frame[1].i = temp3;
	LINE_NUMBER(342);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filterTable;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(343);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filterTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(344);
	frame[2].i = (jint(0));
	LINE_NUMBER(346);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_maps_filters_GenerateFilter, sp[0].o));
	LINE_NUMBER(349);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filterTable;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_pane;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_13);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(280.0f);
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(418);
	INST_IINC(2, 1);
	if (((frame[2].i) % (frame[1].i)) != 0) goto label_10;
	}
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filterTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_10:;
	LINE_NUMBER(421);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filterTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@filters.empty"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)));
	}
label_12:;
	LINE_NUMBER(426);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_showAdd(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:showAdd", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(429);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@add"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(430);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_14);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jint temp0 = jint(0);
	LINE_NUMBER(457);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(459);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(460);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_mindustry_editor_MapGenerateDialog_pack_mindustry_world_Tile_R_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:pack", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(464);
	jint temp0 = (jint)((func_mindustry_world_Tile_blockID_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_blockID_R_short])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_mindustry_world_Tile_floorID_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floorID_R_short])(ctx, (frame[1].o));
	jint temp2 = (jint)((func_mindustry_world_Tile_overlayID_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlayID_R_short])(ctx, (frame[1].o));
	jlong temp3 = (jlong)SM_mindustry_gen_PackTile_get_short_short_short_R_long(ctx, temp0, temp1, temp2);
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapGenerateDialog_unpack_long_R_mindustry_world_Tile(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:unpack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_ctile;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	jint temp0 = (jint)SM_mindustry_gen_PackTile_floor_long_R_short(ctx, (frame[1].l));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[1].o, temp0);
	((func_mindustry_world_CachedTile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_CachedTile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, sp[1].o)));
	LINE_NUMBER(469);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_ctile;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	jint temp1 = (jint)SM_mindustry_gen_PackTile_block_long_R_short(ctx, (frame[1].l));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[1].o, temp1);
	((func_mindustry_world_CachedTile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_CachedTile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(470);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_ctile;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	jint temp2 = (jint)SM_mindustry_gen_PackTile_overlay_long_R_short(ctx, (frame[1].l));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[1].o, temp2);
	((func_mindustry_world_CachedTile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_CachedTile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(471);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_ctile;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_apply(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:apply", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o == nullptr) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(478);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_result;
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(479);
	goto label_5;
label_2:;
	INST_ASTORE(1);
label_5:;
	{
	LINE_NUMBER(482);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_buffer1 = (jref) (jobject(nullptr));
	LINE_NUMBER(483);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_buffer2 = (jref) (jobject(nullptr));
	LINE_NUMBER(484);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_generating = (jint(0));
	LINE_NUMBER(485);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_preview = (jref) (jobject(nullptr));
	LINE_NUMBER(486);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_dragging = (jref) (jobject(nullptr));
	LINE_NUMBER(487);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(488);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, sp[0].o);
	LINE_NUMBER(489);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_Texture_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_dispose])(ctx, sp[0].o);
	LINE_NUMBER(490);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap = (jref) (jobject(nullptr));
	LINE_NUMBER(491);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_applier;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(495);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(499);
	if (((jint)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_generating) == 0) goto label_1;
	}
	{
	LINE_NUMBER(500);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_updateQueued = (jint(1));
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(504);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	init_arc_struct_Seq_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(506);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_maps_filters_GenerateFilter, sp[0].o));
	LINE_NUMBER(507);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_maps_filters_GenerateFilter_copy_R_mindustry_maps_filters_GenerateFilter) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_copy_R_mindustry_maps_filters_GenerateFilter])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(508);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(510);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_generating = (jint(1));
	LINE_NUMBER(511);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_updateQueued = (jint(0));
	LINE_NUMBER(513);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_mainExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_34(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_34 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_34);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[1].o))(ctx, sp[1].o, sp[2].o);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$update$0_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$update$0", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	frame[2].i = ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_width);
	LINE_NUMBER(516);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_setGenerating_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_setGenerating_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(518);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(520);
	frame[3].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	if (temp0 >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_width)) goto label_6;
	}
	{
	LINE_NUMBER(521);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	if (temp0 >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_height)) goto label_11;
	}
	{
	LINE_NUMBER(522);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_buffer1;
	jint temp0 = (frame[3].i) + ((frame[4].i) * (frame[2].i));
	sp[1].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_editor;
	sp[2].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, sp[2].o, ((frame[3].i) * ((jint)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_scaling)), ((frame[4].i) * ((jint)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_scaling)));
	jlong temp1 = (jlong)((func_mindustry_editor_MapGenerateDialog_pack_mindustry_world_Tile_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_pack_mindustry_world_Tile_R_long])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = temp1;
	LINE_NUMBER(521);
	INST_IINC(4, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(520);
	INST_IINC(3, 1);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(527);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_maps_filters_GenerateFilter, sp[0].o));
	LINE_NUMBER(528);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_input;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider_3(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider_3 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider_3);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_filters_GenerateFilter$GenerateInput_begin_int_int_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_begin_int_int_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(531);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_arc_func_Intc2_2(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_arc_func_Intc2_2 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_arc_func_Intc2_2);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_graphics_Pixmap_each_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_each_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(539);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_arc_func_Intc2_3(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_arc_func_Intc2_3 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_arc_func_Intc2_3);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_graphics_Pixmap_each_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_each_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(540);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(542);
	frame[3].i = (jint(0));
	}
label_20:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	if (temp0 >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_width)) goto label_21;
	}
	{
	LINE_NUMBER(543);
	frame[4].i = (jint(0));
	}
label_23:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	if (temp0 >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_height)) goto label_24;
	}
	{
	LINE_NUMBER(546);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(547);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[3].i) * ((jint)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_scaling)), ((frame[4].i) * ((jint)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_scaling)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[6].o));
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	sp[2].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	clinit_mindustry_game_Team(ctx);
	sp[3].o = (jobject)SF_mindustry_game_Team_derelict;
	jint temp0 = (jint)SM_mindustry_io_MapIO_colorFor_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_mindustry_game_Team_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[5].i = temp0;
	LINE_NUMBER(549);
	goto label_30;
	}
label_26:;
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_buffer1;
	frame[6].l = ((jlong)ARRAY_ACCESS(jlong, sp[0].o, ((frame[3].i) + ((frame[4].i) * (frame[2].i)))));
	LINE_NUMBER(551);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	jint temp0 = (jint)SM_mindustry_gen_PackTile_block_long_R_short(ctx, (frame[6].l));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, temp0);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	jint temp1 = (jint)SM_mindustry_gen_PackTile_floor_long_R_short(ctx, (frame[6].l));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[1].o, temp1);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_content;
	jint temp2 = (jint)SM_mindustry_gen_PackTile_overlay_long_R_short(ctx, (frame[6].l));
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[2].o, temp2);
	clinit_mindustry_game_Team(ctx);
	sp[3].o = (jobject)SF_mindustry_game_Team_derelict;
	jint temp3 = (jint)SM_mindustry_io_MapIO_colorFor_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_mindustry_game_Team_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[5].i = temp3;
	}
label_30:;
	{
	LINE_NUMBER(553);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, sp[0].o, temp0, ((((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[1].o))->F_height) - (jint(1))) - (frame[4].i)), (frame[5].i));
	LINE_NUMBER(543);
	INST_IINC(4, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(542);
	INST_IINC(3, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(557);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_35(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_35 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_35);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(577);
	goto label_33;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(569);
	frame[2].o = sp[0].o;
	LINE_NUMBER(570);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_generating = (jint(0));
	LINE_NUMBER(571);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	LINE_NUMBER(572);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_36(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_36 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_36);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_33:;
	{
	LINE_NUMBER(578);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_setGenerating_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_setGenerating_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(579);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$update$5(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$update$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(573);
	if (((jint)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_updateQueued) == 0) goto label_1;
	}
	{
	LINE_NUMBER(574);
	((func_mindustry_editor_MapGenerateDialog_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_update])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(576);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$update$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$update$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(558);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(559);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_generating = (jint(0));
	LINE_NUMBER(560);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(562);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_arc_graphics_Texture_draw_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_draw_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(563);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_generating = (jint(0));
	LINE_NUMBER(564);
	if (((jint)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_updateQueued) == 0) goto label_6;
	}
	{
	LINE_NUMBER(566);
	((func_mindustry_editor_MapGenerateDialog_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_update])(ctx, (frame[0].o));
	}
label_6:;
	LINE_NUMBER(568);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$update$3_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$update$3", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(539);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_buffer1;
	jint temp0 = (frame[2].i) + ((frame[3].i) * (frame[1].i));
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_buffer2;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = ((jlong)ARRAY_ACCESS(jlong, sp[1].o, ((frame[2].i) + ((frame[3].i) * (frame[1].i)))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$update$2_int_mindustry_maps_filters_GenerateFilter_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$update$2", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(532);
	frame[5].i = ((frame[3].i) * ((jint)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_scaling));
	frame[6].i = ((frame[4].i) * ((jint)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_scaling));
	LINE_NUMBER(533);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_buffer1;
	frame[7].l = ((jlong)ARRAY_ACCESS(jlong, sp[0].o, ((frame[3].i) + ((frame[4].i) * (frame[1].i)))));
	LINE_NUMBER(534);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_input;
	jint temp0 = frame[5].i;
	jint temp1 = frame[6].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	jint temp2 = (jint)SM_mindustry_gen_PackTile_block_long_R_short(ctx, (frame[7].l));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[1].o, temp2);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_content;
	jint temp3 = (jint)SM_mindustry_gen_PackTile_floor_long_R_short(ctx, (frame[7].l));
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[2].o, temp3);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_content;
	jint temp4 = (jint)SM_mindustry_gen_PackTile_overlay_long_R_short(ctx, (frame[7].l));
	sp[3].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[3].o, temp4);
	((func_mindustry_maps_filters_GenerateFilter$GenerateInput_set_int_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_set_int_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_long])(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o, sp[3].o, (jlong(0)));
	LINE_NUMBER(535);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_input;
	((func_mindustry_maps_filters_GenerateFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(536);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_buffer2;
	jint temp5 = (frame[3].i) + ((frame[4].i) * (frame[1].i));
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_input;
	sp[1].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[1].o))->F_block;
	jint temp6 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_input;
	sp[1].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[1].o))->F_floor;
	jint temp7 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_input;
	sp[1].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[1].o))->F_overlay;
	jlong temp8 = (jlong)SM_mindustry_gen_PackTile_get_short_short_short_R_long(ctx, temp6, temp7, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	ARRAY_ACCESS(jlong, sp[0].o, temp5) = temp8;
	LINE_NUMBER(537);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapGenerateDialog_lambda$update$1_int_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$update$1", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_buffer1;
	jint temp0 = (frame[2].i) / ((jint)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_scaling);
	jint temp1 = jint(0);
	sp[2].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp2 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, (((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[2].o))->F_width) - (jint(1))));
	jint temp3 = frame[1].i;
	jint temp4 = (frame[3].i) / ((jint)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_scaling);
	jint temp5 = jint(0);
	sp[2].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp6 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp4, temp5, (((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[2].o))->F_height) - (jint(1))));
	sp[0].o = (jobject)((func_mindustry_editor_MapGenerateDialog_unpack_long_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_unpack_long_R_mindustry_world_Tile])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (temp2 + (temp3 * temp6)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$showAdd$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$showAdd$0", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(431);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(432);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(14.0f)));
	LINE_NUMBER(433);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(195.0f)), (jfloat(56.0f)));
	LINE_NUMBER(434);
	frame[3].i = (jint(0));
	LINE_NUMBER(435);
	clinit_mindustry_maps_Maps(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_Maps_allFilterTypes;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_8;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(436);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_maps_filters_GenerateFilter, sp[0].o));
	LINE_NUMBER(437);
	jint temp0 = (jint)((func_mindustry_maps_filters_GenerateFilter_icon_R_char) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_icon_R_char])(ctx, (frame[8].o));
	frame[9].i = temp0;
	LINE_NUMBER(439);
	jint temp1 = (jint)((func_mindustry_maps_filters_GenerateFilter_isPost_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_isPost_R_boolean])(ctx, (frame[8].o));
	if (temp1 == 0) goto label_12;
	}
	{
	if (((jint)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_applied) == 0) goto label_12;
	}
	goto label_13;
label_12:;
	{
	LINE_NUMBER(441);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[9].i) != 0) goto label_14;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_15;
label_14:;
	INST_ILOAD(9);
	POP_N(1); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"\u0001 "_j.string, 1, boxCharacter(ctx, sp[0].i));
label_15:;
	{
	sp -= 2;
	sp[2].o = (jobject)((func_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String])(ctx, (frame[8].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatt;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_37(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_37 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_37);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_15);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(447);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (8));
	LINE_NUMBER(448);
	INST_IINC(3, 1);
	if (((frame[3].i) % (jint(3))) != 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_13:;
	{
	LINE_NUMBER(435);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(451);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"filter.defaultores"_j))));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\ue86a \u0001"_j.string, 1, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatt;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_38(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_38 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_38);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_16);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(456);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell])(ctx, (checkCast(ctx, &class_arc_scene_ui_TextButton, sp[0].o)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (8));
	LINE_NUMBER(457);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$showAdd$2_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$showAdd$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(452);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	((func_mindustry_maps_Maps_addDefaultOres_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_addDefaultOres_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(453);
	((func_mindustry_editor_MapGenerateDialog_rebuildFilters) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_rebuildFilters])(ctx, (frame[0].o));
	LINE_NUMBER(454);
	((func_mindustry_editor_MapGenerateDialog_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_update])(ctx, (frame[0].o));
	LINE_NUMBER(455);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(456);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$showAdd$1_mindustry_maps_filters_GenerateFilter_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$showAdd$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(442);
	((func_mindustry_maps_filters_GenerateFilter_randomize) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_randomize])(ctx, (frame[1].o));
	LINE_NUMBER(443);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(444);
	((func_mindustry_editor_MapGenerateDialog_rebuildFilters) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_rebuildFilters])(ctx, (frame[0].o));
	LINE_NUMBER(445);
	((func_mindustry_editor_MapGenerateDialog_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_update])(ctx, (frame[0].o));
	LINE_NUMBER(446);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$0_mindustry_maps_filters_GenerateFilter_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$rebuildFilters$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(0)));
	LINE_NUMBER(353);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_17);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(400);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(402);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(404);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_18);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(415);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$7_mindustry_maps_filters_GenerateFilter_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$rebuildFilters$7", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(406);
	sp[0].o = (jobject)((func_mindustry_maps_filters_GenerateFilter_options_R_Array1_mindustry_maps_filters_FilterOption) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_options_R_Array1_mindustry_maps_filters_FilterOption])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_5;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(407);
	sp[0].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_39(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_39 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_39);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_maps_filters_FilterOption *) NULL_CHECK(sp[0].o))->F_changed = (jref) sp[1].o;
	LINE_NUMBER(409);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_19);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(413);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(406);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(415);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$8_mindustry_maps_filters_FilterOption_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$rebuildFilters$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapGenerateDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(411);
	((func_mindustry_maps_filters_FilterOption_build_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_filters_FilterOption_build_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$1_mindustry_maps_filters_GenerateFilter_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$rebuildFilters$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(354);
	sp[0].o = frame[2].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(356);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(357);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(100.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(359);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(361);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_geni;
	frame[3].o = sp[0].o;
	LINE_NUMBER(362);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(42.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-5.0f)));
	LINE_NUMBER(364);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_refresh;
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_40(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_40 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_40);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(-16.0f);
	LINE_NUMBER(367);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.randomize"_j))));
	LINE_NUMBER(369);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(370);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_upOpen;
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_41(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_41 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_41);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.moveup"_j));
	LINE_NUMBER(375);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(378);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	sp[1].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_12;
	}
	{
	LINE_NUMBER(379);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_42(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_42 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_42);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.movedown"_j));
	LINE_NUMBER(384);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(387);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_copy;
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_43(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_43 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_43);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@editor.copy"_j));
	LINE_NUMBER(393);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(395);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_cancel;
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_44(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_44 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_44);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@waves.remove"_j));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(400);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$6_mindustry_maps_filters_GenerateFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$rebuildFilters$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(397);
	((func_mindustry_editor_MapGenerateDialog_rebuildFilters) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_rebuildFilters])(ctx, (frame[0].o));
	LINE_NUMBER(398);
	((func_mindustry_editor_MapGenerateDialog_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_update])(ctx, (frame[0].o));
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$5_mindustry_maps_filters_GenerateFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$rebuildFilters$5", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((func_mindustry_maps_filters_GenerateFilter_copy_R_mindustry_maps_filters_GenerateFilter) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_copy_R_mindustry_maps_filters_GenerateFilter])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(389);
	((func_mindustry_maps_filters_GenerateFilter_randomize) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_randomize])(ctx, (frame[2].o));
	LINE_NUMBER(390);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, sp[1].o, (frame[1].o));
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, (temp0 + (jint(1))), (frame[2].o));
	LINE_NUMBER(391);
	((func_mindustry_editor_MapGenerateDialog_rebuildFilters) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_rebuildFilters])(ctx, (frame[0].o));
	LINE_NUMBER(392);
	((func_mindustry_editor_MapGenerateDialog_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_update])(ctx, (frame[0].o));
	LINE_NUMBER(393);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$4_mindustry_maps_filters_GenerateFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$rebuildFilters$4", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(381);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))), ((frame[2].i) + (jint(1))));
	((func_arc_struct_Seq_swap_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_swap_int_int])(ctx, sp[0].o, temp1, temp2);
	LINE_NUMBER(382);
	((func_mindustry_editor_MapGenerateDialog_rebuildFilters) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_rebuildFilters])(ctx, (frame[0].o));
	LINE_NUMBER(383);
	((func_mindustry_editor_MapGenerateDialog_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_update])(ctx, (frame[0].o));
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$3_mindustry_maps_filters_GenerateFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$rebuildFilters$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(372);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((frame[2].i) - (jint(1))));
	((func_arc_struct_Seq_swap_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_swap_int_int])(ctx, sp[0].o, temp1, temp2);
	LINE_NUMBER(373);
	((func_mindustry_editor_MapGenerateDialog_rebuildFilters) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_rebuildFilters])(ctx, (frame[0].o));
	LINE_NUMBER(374);
	((func_mindustry_editor_MapGenerateDialog_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_update])(ctx, (frame[0].o));
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$2_mindustry_maps_filters_GenerateFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$rebuildFilters$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(365);
	((func_mindustry_maps_filters_GenerateFilter_randomize) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_randomize])(ctx, (frame[1].o));
	LINE_NUMBER(366);
	((func_mindustry_editor_MapGenerateDialog_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_update])(ctx, (frame[0].o));
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$setup$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$setup$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(8.0f)));
	LINE_NUMBER(268);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_MapGenerateDialog$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog$2);
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_texture;
	init_mindustry_editor_MapGenerateDialog$2_mindustry_editor_MapGenerateDialog_arc_graphics_Texture(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_preview = (jref) sp[1].o;
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_preview;
	clinit_mindustry_editor_MapGenerateDialog$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog$3);
	init_mindustry_editor_MapGenerateDialog$3_mindustry_editor_MapGenerateDialog(ctx, sp[1].o, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_ui_BorderImage_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_BorderImage_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(309);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	jint temp1 = jint(0);
	sp[2].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_preview;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(1);
	clinit_mindustry_editor_MapGenerateDialog$4(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog$4);
	init_mindustry_editor_MapGenerateDialog$4_mindustry_editor_MapGenerateDialog(ctx, sp[2].o, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(313);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(314);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_20);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(326);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$setup$2_arc_scene_ui_ScrollPane(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$setup$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(315);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Dialog)) == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	if (sp[0].o == (frame[0].o)) goto label_1;
	}
	LINE_NUMBER(316);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(319);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouse_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouse_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_ScrollPane_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(321);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x), (jfloat(0)), -1)) < 0) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y), (jfloat(0)), -1)) < 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_ScrollPane_getWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getWidth_R_float])(ctx, (frame[1].o));
	if ((floatCompare(temp0, temp1, 1)) > 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_ScrollPane_getHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_getHeight_R_float])(ctx, (frame[1].o));
	if ((floatCompare(temp0, temp1, 1)) > 0) goto label_4;
	}
	{
	LINE_NUMBER(322);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (frame[1].o));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(324);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_6:;
	LINE_NUMBER(326);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$setup$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$setup$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(6.0f)));
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_filterTable = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapGenerateDialog_lambda$applyToEditor$0_Array1_long_Array1_long(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$applyToEditor$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapGenerateDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(179);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp2 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[0].o);
	if (temp0 >= (temp1 * temp2)) goto label_2;
	}
	{
	LINE_NUMBER(180);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(181);
	frame[4].l = ((jlong)ARRAY_ACCESS(jlong, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(183);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	jint temp0 = (jint)SM_mindustry_gen_PackTile_block_long_R_short(ctx, (frame[4].l));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, temp0);
	frame[6].o = sp[0].o;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	jint temp1 = (jint)SM_mindustry_gen_PackTile_floor_long_R_short(ctx, (frame[4].l));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, temp1);
	frame[7].o = sp[0].o;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	jint temp2 = (jint)SM_mindustry_gen_PackTile_overlay_long_R_short(ctx, (frame[4].l));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, temp2);
	frame[8].o = sp[0].o;
	LINE_NUMBER(186);
	jint temp3 = (jint)((func_mindustry_world_Tile_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_synthetic_R_boolean])(ctx, (frame[3].o));
	if (temp3 != 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(187);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, (frame[3].o), (frame[6].o));
	}
label_9:;
	{
	LINE_NUMBER(190);
	((func_mindustry_world_Tile_setPackedData_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_setPackedData_long])(ctx, (frame[3].o), ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(192);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o), (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[7].o))));
	LINE_NUMBER(193);
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, (frame[3].o), (frame[8].o));
	LINE_NUMBER(179);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(195);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$new$3_arc_scene_ui_TextButton$TextButtonStyle_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$new$3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(96);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.export"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[3].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_22(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_22 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_22);
		proxy->F_field3 = (frame[2].i);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(135);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[3].o));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[3].o));
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$new$4_arc_scene_ui_TextButton$TextButtonStyle_mindustry_ui_dialogs_BaseDialog_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$new$4", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o), (jfloat(10.0f)));
	LINE_NUMBER(99);
	sp[0].o = frame[4].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_arc_func_Cons_23);
		proxy->F_field3 = (frame[3].i);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$new$5_arc_scene_ui_TextButton$TextButtonStyle_mindustry_ui_dialogs_BaseDialog_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$new$5", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(102);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@copy.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_copy;
	sp[3].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_45(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_45 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_45);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(107);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@load.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[3].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_46(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_46 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_46);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(12.0f);
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(118);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@clear"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_none;
	sp[3].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_47(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_47 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_47);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp2 = jfloat(12.0f);
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(124);
	if ((frame[3].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.reset"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_refresh;
	sp[3].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_48(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_48 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_48);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(130);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$new$10_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$new$10", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_maps;
	sp[1].o = (jobject)((func_mindustry_maps_Maps_readFilters_java_lang_String_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_maps_Maps_readFilters_java_lang_String_R_arc_struct_Seq])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	((func_arc_struct_Seq_set_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(128);
	((func_mindustry_editor_MapGenerateDialog_rebuildFilters) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_rebuildFilters])(ctx, (frame[0].o));
	LINE_NUMBER(129);
	((func_mindustry_editor_MapGenerateDialog_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_update])(ctx, (frame[0].o));
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$new$9_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$new$9", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(121);
	((func_mindustry_editor_MapGenerateDialog_rebuildFilters) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_rebuildFilters])(ctx, (frame[0].o));
	LINE_NUMBER(122);
	((func_mindustry_editor_MapGenerateDialog_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_update])(ctx, (frame[0].o));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapGenerateDialog_lambda$new$8_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$new$8", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapGenerateDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(117);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[0].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_1;
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

void M_mindustry_editor_MapGenerateDialog_lambda$new$7_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$new$7", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	sp[1].o = ((jobject) &class_arc_struct_Seq);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_app;
	sp[2].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[2].o))(ctx, sp[2].o);
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	((func_arc_struct_Seq_set_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_arc_struct_Seq])(ctx, sp[0].o, (checkCast(ctx, &class_arc_struct_Seq, sp[1].o)));
	LINE_NUMBER(112);
	((func_mindustry_editor_MapGenerateDialog_rebuildFilters) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_rebuildFilters])(ctx, (frame[0].o));
	LINE_NUMBER(113);
	((func_mindustry_editor_MapGenerateDialog_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_update])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(116);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(114);
	frame[2].o = sp[0].o;
	LINE_NUMBER(115);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[2].o));
	}
label_7:;
	LINE_NUMBER(117);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$new$6_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$new$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(103);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(105);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	((func_arc_Application_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$new$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$new$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK((frame[0].o)))->F_filters;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_maps_filters_GenerateFilter, sp[0].o));
	LINE_NUMBER(90);
	((func_mindustry_maps_filters_GenerateFilter_randomize) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_randomize])(ctx, (frame[2].o));
	LINE_NUMBER(91);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(92);
	((func_mindustry_editor_MapGenerateDialog_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_update])(ctx, (frame[0].o));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$new$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_49(ctx);
		auto proxy = (mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_49 *) gcAlloc(ctx, &class_mindustry_editor_MapGenerateDialog_invoke_java_lang_Runnable_49);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog:lambda$new$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	((func_mindustry_editor_MapGenerateDialog_apply) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_apply])(ctx, (frame[0].o));
	LINE_NUMBER(83);
	((func_mindustry_editor_MapGenerateDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapGenerateDialog[] {
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
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$new$1,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$new$0,
	(void *) M_mindustry_editor_MapGenerateDialog_show_arc_struct_Seq_arc_func_Cons,
	(void *) M_mindustry_editor_MapGenerateDialog_show_arc_func_Cons,
	(void *) M_mindustry_editor_MapGenerateDialog_applyToEditor_arc_struct_Seq,
	(void *) M_mindustry_editor_MapGenerateDialog_hit_float_float_R_mindustry_maps_filters_MirrorFilter,
	(void *) M_mindustry_editor_MapGenerateDialog_drag_float_float,
	(void *) M_mindustry_editor_MapGenerateDialog_dragUpdate_boolean,
	(void *) M_mindustry_editor_MapGenerateDialog_setup,
	(void *) M_mindustry_editor_MapGenerateDialog_create_R_Array1_long,
	(void *) M_mindustry_editor_MapGenerateDialog_rebuildFilters,
	(void *) M_mindustry_editor_MapGenerateDialog_showAdd,
	(void *) M_mindustry_editor_MapGenerateDialog_pack_mindustry_world_Tile_R_long,
	(void *) M_mindustry_editor_MapGenerateDialog_unpack_long_R_mindustry_world_Tile,
	(void *) M_mindustry_editor_MapGenerateDialog_apply,
	(void *) M_mindustry_editor_MapGenerateDialog_update,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$update$0_arc_struct_Seq,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$update$5,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$update$4,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$update$3_int_int_int,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$update$2_int_mindustry_maps_filters_GenerateFilter_int_int,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$update$1_int_int_int_R_mindustry_world_Tile,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$showAdd$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$showAdd$2_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$showAdd$1_mindustry_maps_filters_GenerateFilter_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$0_mindustry_maps_filters_GenerateFilter_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$7_mindustry_maps_filters_GenerateFilter_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$1_mindustry_maps_filters_GenerateFilter_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$6_mindustry_maps_filters_GenerateFilter,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$5_mindustry_maps_filters_GenerateFilter,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$4_mindustry_maps_filters_GenerateFilter,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$3_mindustry_maps_filters_GenerateFilter,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$2_mindustry_maps_filters_GenerateFilter,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$setup$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$setup$2_arc_scene_ui_ScrollPane,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$setup$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$new$3_arc_scene_ui_TextButton$TextButtonStyle_boolean,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$new$4_arc_scene_ui_TextButton$TextButtonStyle_mindustry_ui_dialogs_BaseDialog_boolean_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$new$5_arc_scene_ui_TextButton$TextButtonStyle_mindustry_ui_dialogs_BaseDialog_boolean_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$new$10_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$new$9_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$new$7_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$new$6_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_editor_MapGenerateDialog_lambda$new$2,
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
	{ "show", "(Larc/struct/Seq;Larc/func/Cons;)V" },
	{ "show", "(Larc/func/Cons;)V" },
	{ "applyToEditor", "(Larc/struct/Seq;)V" },
	{ "hit", "(FF)Lmindustry/maps/filters/MirrorFilter;" },
	{ "drag", "(FF)V" },
	{ "dragUpdate", "(Z)V" },
	{ "setup", "()V" },
	{ "create", "()[J" },
	{ "rebuildFilters", "()V" },
	{ "showAdd", "()V" },
	{ "pack", "(Lmindustry/world/Tile;)J" },
	{ "unpack", "(J)Lmindustry/world/Tile;" },
	{ "apply", "()V" },
	{ "update", "()V" },
	{ "lambda$update$0", "(Larc/struct/Seq;)V" },
	{ "lambda$update$5", "()V" },
	{ "lambda$update$4", "()V" },
	{ "lambda$update$3", "(III)V" },
	{ "lambda$update$2", "(ILmindustry/maps/filters/GenerateFilter;II)V" },
	{ "lambda$update$1", "(III)Lmindustry/world/Tile;" },
	{ "lambda$showAdd$0", "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showAdd$2", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$showAdd$1", "(Lmindustry/maps/filters/GenerateFilter;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$rebuildFilters$0", "(Lmindustry/maps/filters/GenerateFilter;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuildFilters$7", "(Lmindustry/maps/filters/GenerateFilter;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuildFilters$1", "(Lmindustry/maps/filters/GenerateFilter;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuildFilters$6", "(Lmindustry/maps/filters/GenerateFilter;)V" },
	{ "lambda$rebuildFilters$5", "(Lmindustry/maps/filters/GenerateFilter;)V" },
	{ "lambda$rebuildFilters$4", "(Lmindustry/maps/filters/GenerateFilter;)V" },
	{ "lambda$rebuildFilters$3", "(Lmindustry/maps/filters/GenerateFilter;)V" },
	{ "lambda$rebuildFilters$2", "(Lmindustry/maps/filters/GenerateFilter;)V" },
	{ "lambda$setup$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$2", "(Larc/scene/ui/ScrollPane;)V" },
	{ "lambda$setup$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$3", "(Larc/scene/ui/TextButton$TextButtonStyle;Z)V" },
	{ "lambda$new$4", "(Larc/scene/ui/TextButton$TextButtonStyle;Lmindustry/ui/dialogs/BaseDialog;ZLarc/scene/ui/layout/Table;)V" },
	{ "lambda$new$5", "(Larc/scene/ui/TextButton$TextButtonStyle;Lmindustry/ui/dialogs/BaseDialog;ZLarc/scene/ui/layout/Table;)V" },
	{ "lambda$new$10", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$new$9", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$new$7", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$new$6", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$new$2", "()V" },
};

static FieldMetadata fields[] {
	{ "applied", &class_boolean, offsetof(mindustry_editor_MapGenerateDialog, F_applied), "Z", 16 },
	{ "pixmap", &class_arc_graphics_Pixmap, offsetof(mindustry_editor_MapGenerateDialog, F_pixmap), "Larc/graphics/Pixmap;", 0 },
	{ "texture", &class_arc_graphics_Texture, offsetof(mindustry_editor_MapGenerateDialog, F_texture), "Larc/graphics/Texture;", 0 },
	{ "input", &class_mindustry_maps_filters_GenerateFilter$GenerateInput, offsetof(mindustry_editor_MapGenerateDialog, F_input), "Lmindustry/maps/filters/GenerateFilter$GenerateInput;", 0 },
	{ "filters", &class_arc_struct_Seq, offsetof(mindustry_editor_MapGenerateDialog, F_filters), "Larc/struct/Seq;", 0 },
	{ "scaling", &class_int, offsetof(mindustry_editor_MapGenerateDialog, F_scaling), "I", 0 },
	{ "filterTable", &class_arc_scene_ui_layout_Table, offsetof(mindustry_editor_MapGenerateDialog, F_filterTable), "Larc/scene/ui/layout/Table;", 0 },
	{ "preview", &class_mindustry_ui_BorderImage, offsetof(mindustry_editor_MapGenerateDialog, F_preview), "Lmindustry/ui/BorderImage;", 0 },
	{ "result", &class_java_util_concurrent_Future, offsetof(mindustry_editor_MapGenerateDialog, F_result), "Ljava/util/concurrent/Future;", 0 },
	{ "generating", &class_boolean, offsetof(mindustry_editor_MapGenerateDialog, F_generating), "Z", 0 },
	{ "updateQueued", &class_boolean, offsetof(mindustry_editor_MapGenerateDialog, F_updateQueued), "Z", 0 },
	{ "dragging", &class_mindustry_maps_filters_MirrorFilter, offsetof(mindustry_editor_MapGenerateDialog, F_dragging), "Lmindustry/maps/filters/MirrorFilter;", 0 },
	{ "dragRect", &class_arc_math_geom_Rect, offsetof(mindustry_editor_MapGenerateDialog, F_dragRect), "Larc/math/geom/Rect;", 0 },
	{ "dragAxis", &class_arc_math_geom_Vec2, offsetof(mindustry_editor_MapGenerateDialog, F_dragAxis), "Larc/math/geom/Vec2;", 0 },
	{ "lastDrag", &class_long, offsetof(mindustry_editor_MapGenerateDialog, F_lastDrag), "J", 0 },
	{ "buffer1", getArrayClass(&class_long, 1), offsetof(mindustry_editor_MapGenerateDialog, F_buffer1), "[J", 0 },
	{ "buffer2", getArrayClass(&class_long, 1), offsetof(mindustry_editor_MapGenerateDialog, F_buffer2), "[J", 0 },
	{ "applier", &class_arc_func_Cons, offsetof(mindustry_editor_MapGenerateDialog, F_applier), "Larc/func/Cons;", 0 },
	{ "ctile", &class_mindustry_world_CachedTile, offsetof(mindustry_editor_MapGenerateDialog, F_ctile), "Lmindustry/world/CachedTile;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapGenerateDialog_boolean, 0, "(Z)V", 1 },
	{ "show", (intptr_t) M_mindustry_editor_MapGenerateDialog_show_arc_struct_Seq_arc_func_Cons, VTABLE_mindustry_editor_MapGenerateDialog_show_arc_struct_Seq_arc_func_Cons, "(Larc/struct/Seq;Larc/func/Cons;)V", 1 },
	{ "show", (intptr_t) M_mindustry_editor_MapGenerateDialog_show_arc_func_Cons, VTABLE_mindustry_editor_MapGenerateDialog_show_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "applyToEditor", (intptr_t) M_mindustry_editor_MapGenerateDialog_applyToEditor_arc_struct_Seq, VTABLE_mindustry_editor_MapGenerateDialog_applyToEditor_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "hit", (intptr_t) M_mindustry_editor_MapGenerateDialog_hit_float_float_R_mindustry_maps_filters_MirrorFilter, VTABLE_mindustry_editor_MapGenerateDialog_hit_float_float_R_mindustry_maps_filters_MirrorFilter, "(FF)Lmindustry/maps/filters/MirrorFilter;", 0 },
	{ "drag", (intptr_t) M_mindustry_editor_MapGenerateDialog_drag_float_float, VTABLE_mindustry_editor_MapGenerateDialog_drag_float_float, "(FF)V", 0 },
	{ "dragUpdate", (intptr_t) M_mindustry_editor_MapGenerateDialog_dragUpdate_boolean, VTABLE_mindustry_editor_MapGenerateDialog_dragUpdate_boolean, "(Z)V", 0 },
	{ "setup", (intptr_t) M_mindustry_editor_MapGenerateDialog_setup, VTABLE_mindustry_editor_MapGenerateDialog_setup, "()V", 0 },
	{ "create", (intptr_t) M_mindustry_editor_MapGenerateDialog_create_R_Array1_long, VTABLE_mindustry_editor_MapGenerateDialog_create_R_Array1_long, "()[J", 0 },
	{ "rebuildFilters", (intptr_t) M_mindustry_editor_MapGenerateDialog_rebuildFilters, VTABLE_mindustry_editor_MapGenerateDialog_rebuildFilters, "()V", 0 },
	{ "showAdd", (intptr_t) M_mindustry_editor_MapGenerateDialog_showAdd, VTABLE_mindustry_editor_MapGenerateDialog_showAdd, "()V", 0 },
	{ "pack", (intptr_t) M_mindustry_editor_MapGenerateDialog_pack_mindustry_world_Tile_R_long, VTABLE_mindustry_editor_MapGenerateDialog_pack_mindustry_world_Tile_R_long, "(Lmindustry/world/Tile;)J", 0 },
	{ "unpack", (intptr_t) M_mindustry_editor_MapGenerateDialog_unpack_long_R_mindustry_world_Tile, VTABLE_mindustry_editor_MapGenerateDialog_unpack_long_R_mindustry_world_Tile, "(J)Lmindustry/world/Tile;", 0 },
	{ "apply", (intptr_t) M_mindustry_editor_MapGenerateDialog_apply, VTABLE_mindustry_editor_MapGenerateDialog_apply, "()V", 0 },
	{ "update", (intptr_t) M_mindustry_editor_MapGenerateDialog_update, VTABLE_mindustry_editor_MapGenerateDialog_update, "()V", 0 },
	{ "lambda$update$0", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$update$0_arc_struct_Seq, VTABLE_mindustry_editor_MapGenerateDialog_lambda$update$0_arc_struct_Seq, "(Larc/struct/Seq;)V", 4098 },
	{ "lambda$update$5", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$update$5, VTABLE_mindustry_editor_MapGenerateDialog_lambda$update$5, "()V", 4098 },
	{ "lambda$update$4", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$update$4, VTABLE_mindustry_editor_MapGenerateDialog_lambda$update$4, "()V", 4098 },
	{ "lambda$update$3", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$update$3_int_int_int, VTABLE_mindustry_editor_MapGenerateDialog_lambda$update$3_int_int_int, "(III)V", 4098 },
	{ "lambda$update$2", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$update$2_int_mindustry_maps_filters_GenerateFilter_int_int, VTABLE_mindustry_editor_MapGenerateDialog_lambda$update$2_int_mindustry_maps_filters_GenerateFilter_int_int, "(ILmindustry/maps/filters/GenerateFilter;II)V", 4098 },
	{ "lambda$update$1", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$update$1_int_int_int_R_mindustry_world_Tile, VTABLE_mindustry_editor_MapGenerateDialog_lambda$update$1_int_int_int_R_mindustry_world_Tile, "(III)Lmindustry/world/Tile;", 4098 },
	{ "lambda$showAdd$0", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$showAdd$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapGenerateDialog_lambda$showAdd$0_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showAdd$2", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$showAdd$2_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapGenerateDialog_lambda$showAdd$2_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$showAdd$1", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$showAdd$1_mindustry_maps_filters_GenerateFilter_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapGenerateDialog_lambda$showAdd$1_mindustry_maps_filters_GenerateFilter_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/maps/filters/GenerateFilter;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$rebuildFilters$0", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$0_mindustry_maps_filters_GenerateFilter_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$0_mindustry_maps_filters_GenerateFilter_arc_scene_ui_layout_Table, "(Lmindustry/maps/filters/GenerateFilter;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuildFilters$7", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$7_mindustry_maps_filters_GenerateFilter_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$7_mindustry_maps_filters_GenerateFilter_arc_scene_ui_layout_Table, "(Lmindustry/maps/filters/GenerateFilter;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuildFilters$8", (intptr_t) SM_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$8_mindustry_maps_filters_FilterOption_arc_scene_ui_layout_Table, 0, "(Lmindustry/maps/filters/FilterOption;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$rebuildFilters$1", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$1_mindustry_maps_filters_GenerateFilter_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$1_mindustry_maps_filters_GenerateFilter_arc_scene_ui_layout_Table, "(Lmindustry/maps/filters/GenerateFilter;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuildFilters$6", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$6_mindustry_maps_filters_GenerateFilter, VTABLE_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$6_mindustry_maps_filters_GenerateFilter, "(Lmindustry/maps/filters/GenerateFilter;)V", 4098 },
	{ "lambda$rebuildFilters$5", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$5_mindustry_maps_filters_GenerateFilter, VTABLE_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$5_mindustry_maps_filters_GenerateFilter, "(Lmindustry/maps/filters/GenerateFilter;)V", 4098 },
	{ "lambda$rebuildFilters$4", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$4_mindustry_maps_filters_GenerateFilter, VTABLE_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$4_mindustry_maps_filters_GenerateFilter, "(Lmindustry/maps/filters/GenerateFilter;)V", 4098 },
	{ "lambda$rebuildFilters$3", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$3_mindustry_maps_filters_GenerateFilter, VTABLE_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$3_mindustry_maps_filters_GenerateFilter, "(Lmindustry/maps/filters/GenerateFilter;)V", 4098 },
	{ "lambda$rebuildFilters$2", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$2_mindustry_maps_filters_GenerateFilter, VTABLE_mindustry_editor_MapGenerateDialog_lambda$rebuildFilters$2_mindustry_maps_filters_GenerateFilter, "(Lmindustry/maps/filters/GenerateFilter;)V", 4098 },
	{ "lambda$setup$0", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$setup$0_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapGenerateDialog_lambda$setup$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$2", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$setup$2_arc_scene_ui_ScrollPane, VTABLE_mindustry_editor_MapGenerateDialog_lambda$setup$2_arc_scene_ui_ScrollPane, "(Larc/scene/ui/ScrollPane;)V", 4098 },
	{ "lambda$setup$1", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$setup$1_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapGenerateDialog_lambda$setup$1_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$applyToEditor$0", (intptr_t) SM_mindustry_editor_MapGenerateDialog_lambda$applyToEditor$0_Array1_long_Array1_long, 0, "([J[J)V", 4106 },
	{ "lambda$new$3", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$new$3_arc_scene_ui_TextButton$TextButtonStyle_boolean, VTABLE_mindustry_editor_MapGenerateDialog_lambda$new$3_arc_scene_ui_TextButton$TextButtonStyle_boolean, "(Larc/scene/ui/TextButton$TextButtonStyle;Z)V", 4098 },
	{ "lambda$new$4", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$new$4_arc_scene_ui_TextButton$TextButtonStyle_mindustry_ui_dialogs_BaseDialog_boolean_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapGenerateDialog_lambda$new$4_arc_scene_ui_TextButton$TextButtonStyle_mindustry_ui_dialogs_BaseDialog_boolean_arc_scene_ui_layout_Table, "(Larc/scene/ui/TextButton$TextButtonStyle;Lmindustry/ui/dialogs/BaseDialog;ZLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$5", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$new$5_arc_scene_ui_TextButton$TextButtonStyle_mindustry_ui_dialogs_BaseDialog_boolean_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapGenerateDialog_lambda$new$5_arc_scene_ui_TextButton$TextButtonStyle_mindustry_ui_dialogs_BaseDialog_boolean_arc_scene_ui_layout_Table, "(Larc/scene/ui/TextButton$TextButtonStyle;Lmindustry/ui/dialogs/BaseDialog;ZLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$10", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$new$10_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapGenerateDialog_lambda$new$10_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$new$9", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$new$9_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapGenerateDialog_lambda$new$9_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$new$8", (intptr_t) SM_mindustry_editor_MapGenerateDialog_lambda$new$8_arc_scene_ui_TextButton_R_boolean, 0, "(Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$new$7", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$new$7_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapGenerateDialog_lambda$new$7_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$new$6", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$new$6_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_editor_MapGenerateDialog_lambda$new$6_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$new$2, VTABLE_mindustry_editor_MapGenerateDialog_lambda$new$2, "()V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$new$0, VTABLE_mindustry_editor_MapGenerateDialog_lambda$new$0, "()V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_editor_MapGenerateDialog_lambda$new$1, VTABLE_mindustry_editor_MapGenerateDialog_lambda$new$1, "()V", 4098 },
};

Class class_mindustry_editor_MapGenerateDialog{
		.nativeName = (intptr_t) "mindustry/editor/MapGenerateDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_editor_MapGenerateDialog),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapGenerateDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapGenerateDialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapGenerateDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 48,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 339,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapGenerateDialog = registerClass(&class_mindustry_editor_MapGenerateDialog);

}
