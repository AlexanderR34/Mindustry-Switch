#include "mindustry/ui/dialogs/ColorPicker.h"
#include "arc/graphics/Pixmaps.h"
#include "arc/graphics/GLTexture.h"
#include "arc/scene/ui/TextField.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/dialogs/ColorPicker.h"
#include "arc/scene/ui/TextField_TextFieldValidator.h"
#include "java/lang/Runnable.h"
#include "arc/scene/ui/ProgressBar.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/Image.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/dialogs/ColorPicker_invoke_arc_scene_ui_TextField_TextFieldValidator_1.h"
#include "mindustry/ui/dialogs/ColorPicker_4.h"
#include "arc/scene/ui/Slider.h"
#include "mindustry/ui/dialogs/ColorPicker_5.h"
#include "java/lang/Exception.h"
#include "mindustry/gen/Tex.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/ui/dialogs/ColorPicker_2.h"
#include "mindustry/gen/Icon.h"
#include "mindustry/ui/dialogs/ColorPicker_3.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/dialogs/ColorPicker_invoke_java_lang_Runnable_1.h"
#include "mindustry/ui/dialogs/ColorPicker_1.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/graphics/Texture.h"
#include "mindustry/ui/dialogs/ColorPicker_8.h"
#include "mindustry/ui/dialogs/ColorPicker_6.h"
#include "mindustry/ui/dialogs/ColorPicker_7.h"
#include "mindustry/ui/dialogs/ColorPicker_invoke_arc_func_Cons_7.h"
#include "mindustry/ui/dialogs/ColorPicker_invoke_arc_func_Cons_6.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "mindustry/ui/dialogs/ColorPicker_invoke_arc_func_Cons_5.h"
#include "mindustry/ui/dialogs/ColorPicker_invoke_arc_func_Cons_4.h"

extern "C" {

jobject SF_mindustry_ui_dialogs_ColorPicker_hueTex;

void mark_mindustry_ui_dialogs_ColorPicker(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_dialogs_ColorPicker_hueTex)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_ColorPicker_hueTex)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_ColorPicker_hueTex, mark, depth + 1);
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
	auto self = (mindustry_ui_dialogs_ColorPicker *) object;
	if (self->F_cons)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cons)->clazz)->markFunction)((jobject) self->F_cons, mark, depth + 1);
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
	if (self->F_hexField)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hexField)->clazz)->markFunction)((jobject) self->F_hexField, mark, depth + 1);
	if (self->F_hSlider)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hSlider)->clazz)->markFunction)((jobject) self->F_hSlider, mark, depth + 1);
	if (self->F_sSlider)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sSlider)->clazz)->markFunction)((jobject) self->F_sSlider, mark, depth + 1);
	if (self->F_vSlider)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vSlider)->clazz)->markFunction)((jobject) self->F_vSlider, mark, depth + 1);
	if (self->F_aSlider)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_aSlider)->clazz)->markFunction)((jobject) self->F_aSlider, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_ColorPicker(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
}

void init_mindustry_ui_dialogs_ColorPicker(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ColorPicker:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ColorPicker(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@pickcolor"_j))));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ColorPicker_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_ui_dialogs_ColorPicker_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ColorPicker_invoke_arc_func_Cons_4);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK(sp[0].o))->F_cons = (jref) sp[1].o;
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[1].o);
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ColorPicker_show_arc_graphics_Color_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ColorPicker:show", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(26);
	((func_mindustry_ui_dialogs_ColorPicker_show_arc_graphics_Color_boolean_arc_func_Cons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ColorPicker_show_arc_graphics_Color_boolean_arc_func_Cons])(ctx, (frame[0].o), (frame[1].o), (jint(1)), (frame[2].o));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ColorPicker_show_arc_graphics_Color_boolean_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ColorPicker:show", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(31);
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_cons = (jref) (frame[3].o);
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_ColorPicker_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ColorPicker_show_R_arc_scene_ui_Dialog])(ctx, (frame[0].o));
	LINE_NUMBER(34);
	clinit_mindustry_ui_dialogs_ColorPicker(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_ColorPicker_hueTex;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_hueTexture_int_int_R_arc_graphics_Texture(ctx, (128), (jint(1)));
	clinit_mindustry_ui_dialogs_ColorPicker(ctx);
	SF_mindustry_ui_dialogs_ColorPicker_hueTex = sp[0].o;
	LINE_NUMBER(36);
	clinit_mindustry_ui_dialogs_ColorPicker(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_ColorPicker_hueTex;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(39);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(3)));
	sp[0].o = (jobject)((func_arc_graphics_Color_toHsv_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toHsv_Array1_float_R_Array1_float])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(40);
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_h = ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(0))));
	LINE_NUMBER(41);
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_s = ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(1))));
	LINE_NUMBER(42);
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_v = ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(2))));
	LINE_NUMBER(43);
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_a = ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a);
	LINE_NUMBER(45);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ColorPicker_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_ui_dialogs_ColorPicker_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ColorPicker_invoke_arc_func_Cons_5);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(163);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(164);
	((func_mindustry_ui_dialogs_ColorPicker_addCloseButton) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ColorPicker_addCloseButton])(ctx, (frame[0].o));
	LINE_NUMBER(165);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@ok"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_ok;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ColorPicker_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_ui_dialogs_ColorPicker_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ColorPicker_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ColorPicker_updateColor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ColorPicker:updateColor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	((func_mindustry_ui_dialogs_ColorPicker_updateColor_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ColorPicker_updateColor_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ColorPicker_updateColor_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ColorPicker:updateColor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((func_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color])(ctx, sp[0].o, ((jfloat)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_h), ((jfloat)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_s), ((jfloat)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_v));
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_current;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = ((jfloat)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_a);
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_hexField;
	if (sp[0].o == nullptr) goto label_3;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_3;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((func_arc_graphics_Color_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_current;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a), (jfloat(0.9999f)), -1)) < 0) goto label_6;
	}
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[2].o), (jint(0)), (6));
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_hexField;
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	}
label_3:;
	LINE_NUMBER(186);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ColorPicker_lambda$show$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ColorPicker:lambda$show$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_cons;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_current;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(167);
	((func_mindustry_ui_dialogs_ColorPicker_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ColorPicker_hide])(ctx, (frame[0].o));
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ColorPicker_lambda$show$0_boolean_Array1_float_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jbool param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ColorPicker:lambda$show$0", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_pane;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ColorPicker_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_ui_dialogs_ColorPicker_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ColorPicker_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jint temp0 = jint(2);
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(370.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(44.0f)));
	LINE_NUMBER(58);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	jint temp1 = jint(0);
	clinit_arc_scene_ui_Image(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	clinit_mindustry_ui_dialogs_ColorPicker(ctx);
	sp[4].o = (jobject)SF_mindustry_ui_dialogs_ColorPicker_hueTex;
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[3].o, sp[4].o);
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(1);
	sp[2].o = frame[0].o;
	clinit_mindustry_ui_dialogs_ColorPicker$2(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ColorPicker$2);
	init_mindustry_ui_dialogs_ColorPicker$2_mindustry_ui_dialogs_ColorPicker_float_float_float_boolean(ctx, sp[3].o, (frame[0].o), (jfloat(0)), (jfloat(360.0f)), (jfloat(1,000000e-04f)), (jint(0)));
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK(sp[2].o))->F_hSlider = (jref) sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[3].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(64);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(66);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	jint temp3 = jint(0);
	clinit_mindustry_ui_dialogs_ColorPicker$3(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ColorPicker$3);
	init_mindustry_ui_dialogs_ColorPicker$3_mindustry_ui_dialogs_ColorPicker(ctx, sp[2].o, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(1);
	sp[2].o = frame[0].o;
	clinit_mindustry_ui_dialogs_ColorPicker$4(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ColorPicker$4);
	init_mindustry_ui_dialogs_ColorPicker$4_mindustry_ui_dialogs_ColorPicker_float_float_float_boolean(ctx, sp[3].o, (frame[0].o), (jfloat(0)), (jfloat(1)), (jfloat(1,000000e-04f)), (jint(0)));
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK(sp[2].o))->F_sSlider = (jref) sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[3].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(85);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(87);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	jint temp5 = jint(0);
	clinit_mindustry_ui_dialogs_ColorPicker$5(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ColorPicker$5);
	init_mindustry_ui_dialogs_ColorPicker$5_mindustry_ui_dialogs_ColorPicker(ctx, sp[2].o, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	jint temp6 = jint(1);
	sp[2].o = frame[0].o;
	clinit_mindustry_ui_dialogs_ColorPicker$6(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ColorPicker$6);
	init_mindustry_ui_dialogs_ColorPicker$6_mindustry_ui_dialogs_ColorPicker_float_float_float_boolean(ctx, sp[3].o, (frame[0].o), (jfloat(0)), (jfloat(1)), (jfloat(1,000000e-04f)), (jint(0)));
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK(sp[2].o))->F_vSlider = (jref) sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[3].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(107);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(109);
	if ((frame[1].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(3)));
	jint temp0 = jint(0);
	clinit_arc_scene_ui_Image(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	clinit_mindustry_gen_Tex(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Tex_alphaBgLine;
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_ui_dialogs_ColorPicker$7(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ColorPicker$7);
	init_mindustry_ui_dialogs_ColorPicker$7_mindustry_ui_dialogs_ColorPicker(ctx, sp[2].o, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = frame[0].o;
	clinit_mindustry_ui_dialogs_ColorPicker$8(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ColorPicker$8);
	init_mindustry_ui_dialogs_ColorPicker$8_mindustry_ui_dialogs_ColorPicker_float_float_float_boolean(ctx, sp[3].o, (frame[0].o), (jfloat(0)), (jfloat(1)), (jfloat(1,000000e-04f)), (jint(0)));
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK(sp[2].o))->F_aSlider = (jref) sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[3].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(130);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_current;
	sp[2].o = (jobject)((func_arc_graphics_Color_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_toString_R_java_lang_String])(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ColorPicker_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_ui_dialogs_ColorPicker_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ColorPicker_invoke_arc_func_Cons_7);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(130.0f);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(152);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, temp0, temp1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ColorPicker_invoke_arc_scene_ui_TextField$TextFieldValidator_1(ctx);
		auto proxy = (mindustry_ui_dialogs_ColorPicker_invoke_arc_scene_ui_TextField$TextFieldValidator_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ColorPicker_invoke_arc_scene_ui_TextField$TextFieldValidator_1);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o);
	LINE_NUMBER(160);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK(sp[0].o))->F_hexField = (jref) (checkCast(ctx, &class_arc_scene_ui_TextField, sp[1].o));
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_ColorPicker_lambda$show$3_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ColorPicker:lambda$show$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ColorPicker(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (frame[0].o));
	LINE_NUMBER(156);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(157);
	frame[1].o = sp[0].o;
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ColorPicker_lambda$show$2_Array1_float_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ColorPicker:lambda$show$2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_arc_graphics_Color_java_lang_String_R_arc_graphics_Color(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((func_arc_graphics_Color_toHsv_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toHsv_Array1_float_R_Array1_float])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(137);
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_h = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))));
	LINE_NUMBER(138);
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_s = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))));
	LINE_NUMBER(139);
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_v = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))));
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_current;
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK(sp[0].o))->F_a = ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a);
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_hSlider;
	jint temp0 = (jint)((func_arc_scene_ui_Slider_setValue_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_setValue_float_R_boolean])(ctx, sp[0].o, ((jfloat)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_h));
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_sSlider;
	jint temp1 = (jint)((func_arc_scene_ui_Slider_setValue_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_setValue_float_R_boolean])(ctx, sp[0].o, ((jfloat)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_s));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_vSlider;
	jint temp2 = (jint)((func_arc_scene_ui_Slider_setValue_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_setValue_float_R_boolean])(ctx, sp[0].o, ((jfloat)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_v));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_aSlider;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_aSlider;
	jint temp0 = (jint)((func_arc_scene_ui_Slider_setValue_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_setValue_float_R_boolean])(ctx, sp[0].o, ((jfloat)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK((frame[0].o)))->F_a));
	}
label_13:;
	{
	LINE_NUMBER(149);
	((func_mindustry_ui_dialogs_ColorPicker_updateColor_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ColorPicker_updateColor_boolean])(ctx, (frame[0].o), (jint(0)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(151);
	goto label_15;
label_2:;
	LINE_NUMBER(150);
	INST_ASTORE(3);
label_15:;
	LINE_NUMBER(152);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ColorPicker_lambda$show$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ColorPicker:lambda$show$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	jint temp0 = jint(0);
	clinit_arc_scene_ui_Image(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	clinit_mindustry_gen_Tex(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Tex_alphaBg;
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_ui_dialogs_ColorPicker$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ColorPicker$1);
	init_mindustry_ui_dialogs_ColorPicker$1_mindustry_ui_dialogs_ColorPicker(ctx, sp[2].o, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = jfloat(200.0f);
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ColorPicker_lambda$new$0_arc_graphics_Color(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ColorPicker:lambda$new$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ColorPicker(ctx);
	frame[0].o = param0;
	LINE_NUMBER(15);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_ColorPicker[] {
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
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$new$0,
	(void *) M_mindustry_ui_dialogs_ColorPicker_show_arc_graphics_Color_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_ColorPicker_show_arc_graphics_Color_boolean_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_ColorPicker_updateColor,
	(void *) M_mindustry_ui_dialogs_ColorPicker_updateColor_boolean,
	(void *) M_mindustry_ui_dialogs_ColorPicker_lambda$show$4,
	(void *) M_mindustry_ui_dialogs_ColorPicker_lambda$show$0_boolean_Array1_float_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ColorPicker_lambda$show$2_Array1_float_java_lang_String,
	(void *) M_mindustry_ui_dialogs_ColorPicker_lambda$show$1_arc_scene_ui_layout_Table,
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
	{ "show", "(Larc/graphics/Color;Larc/func/Cons;)V" },
	{ "show", "(Larc/graphics/Color;ZLarc/func/Cons;)V" },
	{ "updateColor", "()V" },
	{ "updateColor", "(Z)V" },
	{ "lambda$show$4", "()V" },
	{ "lambda$show$0", "(Z[FLarc/scene/ui/layout/Table;)V" },
	{ "lambda$show$2", "([FLjava/lang/String;)V" },
	{ "lambda$show$1", "(Larc/scene/ui/layout/Table;)V" },
};

static FieldMetadata fields[] {
	{ "hueTex", &class_arc_graphics_Texture, (intptr_t) &SF_mindustry_ui_dialogs_ColorPicker_hueTex, "Larc/graphics/Texture;", 10 },
	{ "cons", &class_arc_func_Cons, offsetof(mindustry_ui_dialogs_ColorPicker, F_cons), "Larc/func/Cons;", 2 },
	{ "current", &class_arc_graphics_Color, offsetof(mindustry_ui_dialogs_ColorPicker, F_current), "Larc/graphics/Color;", 0 },
	{ "h", &class_float, offsetof(mindustry_ui_dialogs_ColorPicker, F_h), "F", 0 },
	{ "s", &class_float, offsetof(mindustry_ui_dialogs_ColorPicker, F_s), "F", 0 },
	{ "v", &class_float, offsetof(mindustry_ui_dialogs_ColorPicker, F_v), "F", 0 },
	{ "a", &class_float, offsetof(mindustry_ui_dialogs_ColorPicker, F_a), "F", 0 },
	{ "hexField", &class_arc_scene_ui_TextField, offsetof(mindustry_ui_dialogs_ColorPicker, F_hexField), "Larc/scene/ui/TextField;", 0 },
	{ "hSlider", &class_arc_scene_ui_Slider, offsetof(mindustry_ui_dialogs_ColorPicker, F_hSlider), "Larc/scene/ui/Slider;", 0 },
	{ "sSlider", &class_arc_scene_ui_Slider, offsetof(mindustry_ui_dialogs_ColorPicker, F_sSlider), "Larc/scene/ui/Slider;", 0 },
	{ "vSlider", &class_arc_scene_ui_Slider, offsetof(mindustry_ui_dialogs_ColorPicker, F_vSlider), "Larc/scene/ui/Slider;", 0 },
	{ "aSlider", &class_arc_scene_ui_Slider, offsetof(mindustry_ui_dialogs_ColorPicker, F_aSlider), "Larc/scene/ui/Slider;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ColorPicker, 0, "()V", 1 },
	{ "show", (intptr_t) M_mindustry_ui_dialogs_ColorPicker_show_arc_graphics_Color_arc_func_Cons, VTABLE_mindustry_ui_dialogs_ColorPicker_show_arc_graphics_Color_arc_func_Cons, "(Larc/graphics/Color;Larc/func/Cons;)V", 1 },
	{ "show", (intptr_t) M_mindustry_ui_dialogs_ColorPicker_show_arc_graphics_Color_boolean_arc_func_Cons, VTABLE_mindustry_ui_dialogs_ColorPicker_show_arc_graphics_Color_boolean_arc_func_Cons, "(Larc/graphics/Color;ZLarc/func/Cons;)V", 1 },
	{ "updateColor", (intptr_t) M_mindustry_ui_dialogs_ColorPicker_updateColor, VTABLE_mindustry_ui_dialogs_ColorPicker_updateColor, "()V", 0 },
	{ "updateColor", (intptr_t) M_mindustry_ui_dialogs_ColorPicker_updateColor_boolean, VTABLE_mindustry_ui_dialogs_ColorPicker_updateColor_boolean, "(Z)V", 0 },
	{ "lambda$show$4", (intptr_t) M_mindustry_ui_dialogs_ColorPicker_lambda$show$4, VTABLE_mindustry_ui_dialogs_ColorPicker_lambda$show$4, "()V", 4098 },
	{ "lambda$show$0", (intptr_t) M_mindustry_ui_dialogs_ColorPicker_lambda$show$0_boolean_Array1_float_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ColorPicker_lambda$show$0_boolean_Array1_float_arc_scene_ui_layout_Table, "(Z[FLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$show$3", (intptr_t) SM_mindustry_ui_dialogs_ColorPicker_lambda$show$3_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 4106 },
	{ "lambda$show$2", (intptr_t) M_mindustry_ui_dialogs_ColorPicker_lambda$show$2_Array1_float_java_lang_String, VTABLE_mindustry_ui_dialogs_ColorPicker_lambda$show$2_Array1_float_java_lang_String, "([FLjava/lang/String;)V", 4098 },
	{ "lambda$show$1", (intptr_t) M_mindustry_ui_dialogs_ColorPicker_lambda$show$1_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ColorPicker_lambda$show$1_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_ui_dialogs_ColorPicker_lambda$new$0_arc_graphics_Color, 0, "(Larc/graphics/Color;)V", 4106 },
};

Class class_mindustry_ui_dialogs_ColorPicker{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ColorPicker",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_ui_dialogs_ColorPicker),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ColorPicker,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ColorPicker,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ColorPicker,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 305,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_ColorPicker = registerClass(&class_mindustry_ui_dialogs_ColorPicker);

}
