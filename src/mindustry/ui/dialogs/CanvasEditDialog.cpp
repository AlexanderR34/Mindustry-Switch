#include "mindustry/ui/dialogs/CanvasEditDialog.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/Pixmap.h"
#include "arc/util/Tmp.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/FileChooser.h"
#include "mindustry/world/blocks/logic/CanvasBlock_CanvasBuild.h"
#include "arc/scene/ui/ImageButton.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_invoke_java_lang_Runnable_12.h"
#include "java/lang/Exception.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_invoke_java_lang_Runnable_13.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_invoke_java_lang_Runnable_10.h"
#include "arc/Core.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_invoke_java_lang_Runnable_11.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_invoke_java_lang_Runnable_14.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_invoke_java_lang_Runnable_15.h"
#include "arc/util/Time.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/graphics/Texture.h"
#include "mindustry/gen/Building.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/world/blocks/logic/CanvasBlock.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_invoke_java_lang_Runnable_8.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_invoke_java_lang_Runnable_9.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_invoke_mindustry_core_Platform_FileWriter_1.h"
#include "arc/graphics/GLTexture.h"
#include "mindustry/world/Block.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_invoke_arc_func_Cons_9.h"
#include "mindustry/core/Platform_FileWriter.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_invoke_arc_func_Boolf_1.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_invoke_arc_func_Cons_5.h"
#include "arc/files/Fi.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_invoke_arc_func_Cons_6.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_invoke_arc_func_Cons_7.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_invoke_arc_func_Cons_8.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_1.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/dialogs/CanvasEditDialog.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "java/lang/Math.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/core/UI.h"
#include "arc/scene/Element.h"
#include "mindustry/Vars.h"

extern "C" {

jfloat SF_mindustry_ui_dialogs_CanvasEditDialog_refreshTime;

void mark_mindustry_ui_dialogs_CanvasEditDialog(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_CanvasEditDialog *) object;
	if (self->F_canvas)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_canvas)->clazz)->markFunction)((jobject) self->F_canvas, mark, depth + 1);
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_pix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pix)->clazz)->markFunction)((jobject) self->F_pix, mark, depth + 1);
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_CanvasEditDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	SF_mindustry_ui_dialogs_CanvasEditDialog_refreshTime = jfloat(120.0f);
}

void init_mindustry_ui_dialogs_CanvasEditDialog_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CanvasEditDialog(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(27);
	((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_grid = (jint(1));
	LINE_NUMBER(36);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_titleTable;
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(37);
	((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_canvas = (jref) (frame[1].o);
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_block = (jref) (checkCast(ctx, &class_mindustry_world_blocks_logic_CanvasBlock, sp[1].o));
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_block;
	frame[2].i = ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_canvasSize);
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_block;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[1].o)))->F_data;
	clinit_arc_graphics_Pixmap(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[3].o, (frame[2].i), (frame[2].i));
	sp[1].o = (jobject)((func_mindustry_world_blocks_logic_CanvasBlock_makePixmap_Array1_byte_arc_graphics_Pixmap_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock_makePixmap_Array1_byte_arc_graphics_Pixmap_R_arc_graphics_Pixmap])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_pix = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	sp[2].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_pix;
	init_arc_graphics_Texture_arc_graphics_Pixmap(ctx, sp[1].o, sp[2].o);
	((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[1].o))->F_palette;
	((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_curColor = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))));
	LINE_NUMBER(44);
	((func_mindustry_ui_dialogs_CanvasEditDialog_addCloseButton_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog_addCloseButton_float])(ctx, (frame[0].o), (jfloat(160.0f)));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@import"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_image;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(48);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@export"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_export;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CanvasEditDialog_hidden_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog_hidden_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CanvasEditDialog_resized_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog_resized_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_12);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_CanvasEditDialog_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_pane;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Cons_5);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jint temp1 = jint(3);
	LINE_NUMBER(186);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(188);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(190);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(194);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(209);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(213);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(150.0f)), (jfloat(64.0f)));
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog_exportTo_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:exportTo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(218);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_pix;
	((func_arc_files_Fi_writePng_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_writePng_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(221);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(219);
	frame[2].o = sp[0].o;
	LINE_NUMBER(220);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(222);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog_importFrom_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:importFrom", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(226);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_arc_files_Fi(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(227);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_pix;
	frame[3].i = ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_width);
	LINE_NUMBER(228);
	if (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_width) > (frame[3].i)) goto label_6;
	}
	{
	if (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_height) <= (frame[3].i)) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(229);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_height));
	frame[4].f = ((jfloat(temp0)) / (jfloat((frame[3].i))));
	LINE_NUMBER(230);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (frame[3].i), (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(231);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int])(ctx, (frame[5].o), (frame[2].o), (jint(0)), (jint(0)), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_height), (((frame[3].i) - (jint(((jfloat(((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_width))) / (frame[4].f))))) / (jint(2))), (((frame[3].i) - (jint(((jfloat(((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_height))) / (frame[4].f))))) / (jint(2))), (jint(((jfloat(((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_width))) / (frame[4].f)))), (jint(((jfloat(((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_height))) / (frame[4].f)))));
	LINE_NUMBER(232);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[2].o));
	LINE_NUMBER(233);
	frame[2].o = (frame[5].o);
	LINE_NUMBER(234);
	goto label_13;
	}
label_7:;
	{
	if (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_width) < (frame[3].i)) goto label_14;
	}
	{
	if (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_height) >= (frame[3].i)) goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_pix;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[1].o))->F_palette;
	((func_arc_graphics_Pixmap_fill_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_fill_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	LINE_NUMBER(236);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (frame[3].i), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(237);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int])(ctx, (frame[4].o), (frame[2].o), (((frame[3].i) - ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_width)) / (jint(2))), (((frame[3].i) - ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_height)) / (jint(2))));
	LINE_NUMBER(238);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[2].o));
	LINE_NUMBER(239);
	frame[2].o = (frame[4].o);
	}
label_13:;
	{
	LINE_NUMBER(241);
	jint temp0 = (jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_width;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_pix;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_width));
	frame[4].i = temp1;
	jint temp2 = (jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_height;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_pix;
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp2, ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_height));
	frame[5].i = temp3;
	LINE_NUMBER(242);
	frame[6].i = (jint(0));
	}
label_21:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_22;
	}
	{
	LINE_NUMBER(243);
	frame[7].i = (jint(0));
	}
label_24:;
	{
	if ((frame[7].i) >= (frame[5].i)) goto label_25;
	}
	{
	LINE_NUMBER(244);
	jint temp0 = (jint)((func_arc_graphics_Pixmap_getRaw_int_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int])(ctx, (frame[2].o), (frame[6].i), (frame[7].i));
	frame[8].i = temp0;
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_pix;
	jint temp1 = frame[6].i;
	jint temp2 = frame[7].i;
	jint temp3 = (jint)((func_mindustry_ui_dialogs_CanvasEditDialog_findClosest_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog_findClosest_int_R_int])(ctx, (frame[0].o), (frame[8].i));
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, temp1, temp2, temp3);
	LINE_NUMBER(243);
	INST_IINC(7, 1);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(242);
	INST_IINC(6, 1);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_pix;
	((func_arc_graphics_Texture_draw_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_draw_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(250);
	((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_modified = (jint(1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(253);
	goto label_30;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(251);
	frame[2].o = sp[0].o;
	LINE_NUMBER(252);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.errorload"_j))), (frame[2].o));
	}
label_30:;
	LINE_NUMBER(254);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_ui_dialogs_CanvasEditDialog_findClosest_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:findClosest", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(258);
	jint temp0 = (jint)SM_arc_graphics_Color_ai_int_R_int(ctx, (frame[1].i));
	if (temp0 >= (255)) goto label_1;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_palette;
	jint temp0 = (jint)SM_arc_graphics_Pixmap_blend_int_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))), (frame[1].i));
	frame[1].i = temp0;
	}
label_1:;
	{
	LINE_NUMBER(261);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_int_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(262);
	frame[2].f = (jfloat(100.0f));
	LINE_NUMBER(263);
	frame[3].i = (jint(0));
	LINE_NUMBER(264);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_palette;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_palette;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i))) != (frame[1].i)) goto label_9;
	}
	INST_ILOAD(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(266);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c2;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[1].o))->F_palette;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_int_R_arc_graphics_Color])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[4].i))));
	LINE_NUMBER(267);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c2;
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_dst_arc_graphics_Color_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_dst_arc_graphics_Color_R_float])(ctx, sp[0].o, sp[1].o);
	frame[5].f = temp0;
	LINE_NUMBER(268);
	if ((floatCompare((frame[5].f), (frame[2].f), 1)) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(269);
	frame[3].i = (frame[4].i);
	LINE_NUMBER(270);
	frame[2].f = (frame[5].f);
	}
label_12:;
	{
	LINE_NUMBER(264);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_palette;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog_save(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:save", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(277);
	if (((jint)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_modified) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[2].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_pix;
	sp[1].o = (jobject)((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_packPixmap_arc_graphics_Pixmap_R_Array1_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_packPixmap_arc_graphics_Pixmap_R_Array1_byte])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(279);
	((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_modified = (jint(0));
	}
label_1:;
	LINE_NUMBER(281);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$10_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:lambda$new$10", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(210);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_fill;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(44.0f)));
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$11(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:lambda$new$11", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_fill) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	sp -= 2;
	((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_fill = sp[1].i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$7_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:lambda$new$7", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(195);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_palette;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(196);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(198);
	if (((frame[2].i) % (8)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_5:;
	{
	LINE_NUMBER(202);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_squareTogglei;
	jfloat temp0 = jfloat(30.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_14);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = jfloat(44.0f);
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Boolf_1);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[4].o = (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[0].o));
	LINE_NUMBER(205);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[4].o));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	sp[2].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_block;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[2].o))->F_palette;
	init_arc_graphics_Color_int(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[2].i))));
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUpColor = (jref) sp[1].o;
	LINE_NUMBER(195);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(207);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$9_int_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:lambda$new$9", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(204);
	jint temp0 = (jint)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_curColor;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_palette;
	if (temp0 != ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)))) goto label_1;
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

void M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$8_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:lambda$new$8", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(203);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[1].o))->F_palette;
	((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_curColor = ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i)));
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$5_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:lambda$new$5", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(191);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_grid;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog_invoke_java_lang_Runnable_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((jint)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_grid));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(44.0f)));
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$6(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:lambda$new$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_grid) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	sp -= 2;
	((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_grid = sp[1].i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$4_int_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:lambda$new$4", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_dialogs_CanvasEditDialog$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog$1);
	init_mindustry_ui_dialogs_CanvasEditDialog$1_mindustry_ui_dialogs_CanvasEditDialog_int(ctx, sp[1].o, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(185);
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	jfloat temp0 = jfloat(290.0f);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	jfloat temp2 = jfloat(temp1);
	jfloat temp3 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	jfloat temp4 = temp2 / temp3;
	jfloat temp5 = jfloat(75.0f);
	jfloat temp6 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	jfloat temp7 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (temp4 - (temp5 / temp6)));
	sp[0].f = temp7;
	sp += 1;
	goto label_3;
	}
label_2:;
	(sp++)->f = jfloat(480.0f);
label_3:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$3_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:lambda$new$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_isValid_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(62);
	((func_mindustry_ui_dialogs_CanvasEditDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog_hide])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_time) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(67);
	if ((floatCompare(((jfloat)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_time), (jfloat(120.0f)), -1)) < 0) goto label_4;
	}
	{
	LINE_NUMBER(68);
	((func_mindustry_ui_dialogs_CanvasEditDialog_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog_save])(ctx, (frame[0].o));
	LINE_NUMBER(69);
	((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	}
label_4:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:lambda$new$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	((func_mindustry_ui_dialogs_CanvasEditDialog_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog_save])(ctx, (frame[0].o));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_Texture_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_dispose])(ctx, sp[0].o);
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK((frame[0].o)))->F_pix;
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, sp[0].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"canvas"_j));
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"png"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CanvasEditDialog_invoke_mindustry_core_Platform$FileWriter_1(ctx);
		auto proxy = (mindustry_ui_dialogs_CanvasEditDialog_invoke_mindustry_core_Platform$FileWriter_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog_invoke_mindustry_core_Platform$FileWriter_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_ui_FileChooser_export_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog:lambda$new$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"png"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"jpeg"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_CanvasEditDialog[] {
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
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$1,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$0,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog_exportTo_arc_files_Fi,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog_importFrom_arc_files_Fi,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog_findClosest_int_R_int,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog_save,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$10_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$11,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$7_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$9_int_arc_scene_ui_ImageButton_R_boolean,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$8_int,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$5_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$6,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$4_int_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$3_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$2,
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
	{ "exportTo", "(Larc/files/Fi;)V" },
	{ "importFrom", "(Larc/files/Fi;)V" },
	{ "findClosest", "(I)I" },
	{ "save", "()V" },
	{ "lambda$new$10", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$11", "()V" },
	{ "lambda$new$7", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$9", "(ILarc/scene/ui/ImageButton;)Z" },
	{ "lambda$new$8", "(I)V" },
	{ "lambda$new$5", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$6", "()V" },
	{ "lambda$new$4", "(ILarc/scene/ui/layout/Table;)V" },
	{ "lambda$new$3", "(Lmindustry/world/blocks/logic/CanvasBlock$CanvasBuild;)V" },
	{ "lambda$new$2", "()V" },
};

static FieldMetadata fields[] {
	{ "refreshTime", &class_float, (intptr_t) &SF_mindustry_ui_dialogs_CanvasEditDialog_refreshTime, "F", 24 },
	{ "curColor", &class_int, offsetof(mindustry_ui_dialogs_CanvasEditDialog, F_curColor), "I", 0 },
	{ "fill", &class_boolean, offsetof(mindustry_ui_dialogs_CanvasEditDialog, F_fill), "Z", 0 },
	{ "modified", &class_boolean, offsetof(mindustry_ui_dialogs_CanvasEditDialog, F_modified), "Z", 0 },
	{ "grid", &class_boolean, offsetof(mindustry_ui_dialogs_CanvasEditDialog, F_grid), "Z", 0 },
	{ "time", &class_float, offsetof(mindustry_ui_dialogs_CanvasEditDialog, F_time), "F", 0 },
	{ "canvas", &class_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild, offsetof(mindustry_ui_dialogs_CanvasEditDialog, F_canvas), "Lmindustry/world/blocks/logic/CanvasBlock$CanvasBuild;", 0 },
	{ "block", &class_mindustry_world_blocks_logic_CanvasBlock, offsetof(mindustry_ui_dialogs_CanvasEditDialog, F_block), "Lmindustry/world/blocks/logic/CanvasBlock;", 0 },
	{ "pix", &class_arc_graphics_Pixmap, offsetof(mindustry_ui_dialogs_CanvasEditDialog, F_pix), "Larc/graphics/Pixmap;", 0 },
	{ "texture", &class_arc_graphics_Texture, offsetof(mindustry_ui_dialogs_CanvasEditDialog, F_texture), "Larc/graphics/Texture;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_CanvasEditDialog_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild, 0, "(Lmindustry/world/blocks/logic/CanvasBlock$CanvasBuild;)V", 1 },
	{ "exportTo", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog_exportTo_arc_files_Fi, VTABLE_mindustry_ui_dialogs_CanvasEditDialog_exportTo_arc_files_Fi, "(Larc/files/Fi;)V", 0 },
	{ "importFrom", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog_importFrom_arc_files_Fi, VTABLE_mindustry_ui_dialogs_CanvasEditDialog_importFrom_arc_files_Fi, "(Larc/files/Fi;)V", 0 },
	{ "findClosest", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog_findClosest_int_R_int, VTABLE_mindustry_ui_dialogs_CanvasEditDialog_findClosest_int_R_int, "(I)I", 0 },
	{ "save", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog_save, VTABLE_mindustry_ui_dialogs_CanvasEditDialog_save, "()V", 0 },
	{ "lambda$new$10", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$10_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$10_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$11", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$11, VTABLE_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$11, "()V", 4098 },
	{ "lambda$new$7", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$7_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$7_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$9", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$9_int_arc_scene_ui_ImageButton_R_boolean, VTABLE_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$9_int_arc_scene_ui_ImageButton_R_boolean, "(ILarc/scene/ui/ImageButton;)Z", 4098 },
	{ "lambda$new$8", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$8_int, VTABLE_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$8_int, "(I)V", 4098 },
	{ "lambda$new$5", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$5_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$5_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$6", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$6, VTABLE_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$6, "()V", 4098 },
	{ "lambda$new$4", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$4_int_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$4_int_arc_scene_ui_layout_Table, "(ILarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$3_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild, VTABLE_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$3_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild, "(Lmindustry/world/blocks/logic/CanvasBlock$CanvasBuild;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$2, VTABLE_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$2, "()V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$1, VTABLE_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$1, "()V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$0, VTABLE_mindustry_ui_dialogs_CanvasEditDialog_lambda$new$0, "()V", 4098 },
};

Class class_mindustry_ui_dialogs_CanvasEditDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/CanvasEditDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_ui_dialogs_CanvasEditDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_CanvasEditDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_CanvasEditDialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_CanvasEditDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 311,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_CanvasEditDialog = registerClass(&class_mindustry_ui_dialogs_CanvasEditDialog);

}
