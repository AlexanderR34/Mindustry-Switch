#include "arc/scene/ui/layout/Table.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/scene/ui/TextField.h"
#include "arc/func/Boolp.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "arc/scene/ui/ProgressBar.h"
#include "arc/scene/ui/layout/Table_invoke_java_lang_Runnable_2.h"
#include "arc/scene/ui/layout/Table_invoke_java_lang_Runnable_1.h"
#include "arc/scene/ui/layout/Table_invoke_java_lang_Runnable_0.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "arc/scene/ui/Image.h"
#include "arc/scene/ui/Button.h"
#include "arc/scene/event/Touchable.h"
#include "arc/util/pooling/Pools.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/scene/ui/layout/Spacer.h"
#include "arc/func/Floatp.h"
#include "arc/func/Boolc.h"
#include "arc/scene/ui/ImageButton.h"
#include "arc/scene/ui/CheckBox.h"
#include "arc/Core.h"
#include "arc/math/Mat.h"
#include "arc/func/Floatc.h"
#include "arc/scene/ui/layout/Table_invoke_arc_func_Prov_0.h"
#include "arc/scene/ui/Label.h"
#include "arc/scene/ui/layout/Table_1.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/layout/Table_invoke_arc_func_Floatp_0.h"
#include "arc/scene/ui/layout/Table_invoke_arc_func_Boolp_1.h"
#include "arc/util/pooling/Pool.h"
#include "arc/scene/ui/layout/Table_invoke_arc_func_Floatp_1.h"
#include "arc/scene/ui/layout/Table_invoke_arc_func_Boolp_0.h"
#include "arc/scene/ui/layout/Table_invoke_arc_func_Cons_0.h"
#include "arc/scene/ui/layout/Table_invoke_arc_func_Cons_1.h"
#include "arc/scene/ui/layout/Table_invoke_arc_func_Cons_2.h"
#include "arc/scene/ui/layout/Collapser.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/ui/TextField_TextFieldFilter.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/scene/ui/layout/WrapTable.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/scene/ui/TextField_TextFieldStyle.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/layout/Table_DrawRect.h"
#include "arc/scene/utils/Elem.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/TextArea.h"
#include "arc/scene/ui/layout/Scl.h"
#include "java/lang/Math.h"
#include "arc/scene/ui/Slider.h"
#include "arc/scene/ui/layout/Stack.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/scene/event/ClickListener.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/ScrollPane.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "java/lang/Class.h"
#include "arc/struct/SnapshotSeq.h"

extern "C" {

jobject SF_arc_scene_ui_layout_Table_columnWeightedWidth;
jobject SF_arc_scene_ui_layout_Table_rowWeightedHeight;
jobject SF_arc_scene_ui_layout_Table_cellPool;

void mark_arc_scene_ui_layout_Table(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_scene_ui_layout_Table_columnWeightedWidth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_layout_Table_columnWeightedWidth)->clazz)->markFunction)((jobject) SF_arc_scene_ui_layout_Table_columnWeightedWidth, mark, depth + 1);
		if (SF_arc_scene_ui_layout_Table_rowWeightedHeight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_layout_Table_rowWeightedHeight)->clazz)->markFunction)((jobject) SF_arc_scene_ui_layout_Table_rowWeightedHeight, mark, depth + 1);
		if (SF_arc_scene_ui_layout_Table_cellPool)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_layout_Table_cellPool)->clazz)->markFunction)((jobject) SF_arc_scene_ui_layout_Table_cellPool, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_layout_WidgetGroup(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_layout_Table *) object;
	if (self->F_cells)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cells)->clazz)->markFunction)((jobject) self->F_cells, mark, depth + 1);
	if (self->F_cellDefaults)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cellDefaults)->clazz)->markFunction)((jobject) self->F_cellDefaults, mark, depth + 1);
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
	if (self->F_rowDefaults)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rowDefaults)->clazz)->markFunction)((jobject) self->F_rowDefaults, mark, depth + 1);
	if (self->F_columnMinWidth)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_columnMinWidth)->clazz)->markFunction)((jobject) self->F_columnMinWidth, mark, depth + 1);
	if (self->F_rowMinHeight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rowMinHeight)->clazz)->markFunction)((jobject) self->F_rowMinHeight, mark, depth + 1);
	if (self->F_columnPrefWidth)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_columnPrefWidth)->clazz)->markFunction)((jobject) self->F_columnPrefWidth, mark, depth + 1);
	if (self->F_rowPrefHeight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rowPrefHeight)->clazz)->markFunction)((jobject) self->F_rowPrefHeight, mark, depth + 1);
	if (self->F_columnWidth)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_columnWidth)->clazz)->markFunction)((jobject) self->F_columnWidth, mark, depth + 1);
	if (self->F_rowHeight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rowHeight)->clazz)->markFunction)((jobject) self->F_rowHeight, mark, depth + 1);
	if (self->F_expandWidth)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_expandWidth)->clazz)->markFunction)((jobject) self->F_expandWidth, mark, depth + 1);
	if (self->F_expandHeight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_expandHeight)->clazz)->markFunction)((jobject) self->F_expandHeight, mark, depth + 1);
}

void init_arc_scene_ui_layout_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Table(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(55);
	init_arc_scene_ui_layout_WidgetGroup(ctx, (frame[0].o));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(4)));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_cells = (jref) sp[1].o;
	LINE_NUMBER(38);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_marginTop = (jfloat(-std::numeric_limits<float>::infinity()));
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_marginLeft = (jfloat(-std::numeric_limits<float>::infinity()));
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_marginBot = (jfloat(-std::numeric_limits<float>::infinity()));
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_marginRight = (jfloat(-std::numeric_limits<float>::infinity()));
	LINE_NUMBER(39);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_align = (jint(1));
	LINE_NUMBER(41);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_round = (jint(1));
	LINE_NUMBER(46);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_cellDefaults = (jref) sp[1].o;
	LINE_NUMBER(58);
	((func_arc_scene_ui_layout_Table_setTransform_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_setTransform_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_childrenOnly;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Table(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	init_arc_scene_ui_layout_Table(ctx, (frame[0].o));
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_layout_Table_arc_scene_style_Drawable_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Table(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(69);
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(70);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_layout_Table_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Table(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(74);
	init_arc_scene_ui_layout_Table(ctx, (frame[0].o));
	LINE_NUMBER(75);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:obtainCell", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Table_cellPool;
	sp[0].o = (jobject)((func_arc_util_pooling_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_pooling_Pool_obtain_R_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(80);
	((func_arc_scene_ui_layout_Cell_setLayout_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_setLayout_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_fill_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:fill", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(87);
	((func_arc_scene_ui_layout_Table_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_setFillParent_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Table_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:draw", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	((func_arc_scene_ui_layout_Table_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_validate])(ctx, (frame[0].o));
	LINE_NUMBER(95);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_isTransform_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_isTransform_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_computeTransform_R_arc_math_Mat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_computeTransform_R_arc_math_Mat])(ctx, (frame[0].o));
	((func_arc_scene_ui_layout_Table_applyTransform_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_applyTransform_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(97);
	((func_arc_scene_ui_layout_Table_drawBackground_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_drawBackground_float_float])(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(98);
	if (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_clip) == 0) goto label_6;
	}
	{
	LINE_NUMBER(99);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(100);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginLeft_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginLeft_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginBottom_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginBottom_R_float])(ctx, (frame[0].o));
	frame[2].f = temp1;
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	jfloat temp2 = frame[1].f;
	jfloat temp3 = frame[2].f;
	jfloat temp4 = (jfloat)((func_arc_scene_ui_layout_Table_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp5 = temp4 - (frame[1].f);
	jfloat temp6 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginRight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginRight_R_float])(ctx, (frame[0].o));
	jfloat temp7 = temp5 - temp6;
	sp[1].o = frame[0].o;
	LINE_NUMBER(102);
	jfloat temp8 = (jfloat)((func_arc_scene_ui_layout_Table_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getHeight_R_float])(ctx, sp[1].o);
	jfloat temp9 = temp8 - (frame[2].f);
	jfloat temp10 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginTop_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginTop_R_float])(ctx, (frame[0].o));
	jfloat temp11 = temp9 - temp10;
	LINE_NUMBER(101);
	jint temp12 = (jint)((func_arc_scene_ui_layout_Table_clipBegin_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clipBegin_float_float_float_float_R_boolean])(ctx, sp[0].o, temp2, temp3, temp7, temp11);
	if (temp12 == 0) goto label_13;
	}
	{
	LINE_NUMBER(103);
	((func_arc_scene_ui_layout_Table_drawChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_drawChildren])(ctx, (frame[0].o));
	LINE_NUMBER(104);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(105);
	((func_arc_scene_ui_layout_Table_clipEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clipEnd])(ctx, (frame[0].o));
	}
label_13:;
	LINE_NUMBER(107);
	goto label_17;
label_6:;
	{
	LINE_NUMBER(108);
	((func_arc_scene_ui_layout_Table_drawChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_drawChildren])(ctx, (frame[0].o));
	}
label_17:;
	{
	LINE_NUMBER(110);
	((func_arc_scene_ui_layout_Table_resetTransform) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_resetTransform])(ctx, (frame[0].o));
	goto label_18;
	}
label_2:;
	{
	LINE_NUMBER(112);
	((func_arc_scene_ui_layout_Table_drawBackground_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_drawBackground_float_float])(ctx, (frame[0].o), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(113);
	M_arc_scene_ui_layout_WidgetGroup_draw(ctx, (frame[0].o));
	}
label_18:;
	LINE_NUMBER(115);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Table_drawBackground_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:drawBackground", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	frame[3].o = sp[0].o;
	LINE_NUMBER(124);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[3].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[3].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[3].o)))->F_b), (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[3].o)))->F_a) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha)));
	LINE_NUMBER(125);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:background", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(130);
	((func_arc_scene_ui_layout_Table_setBackground_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_setBackground_arc_scene_style_Drawable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_getBackground_R_arc_scene_style_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getBackground", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Table_setBackground_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:setBackground", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(141);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginTop_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginTop_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginLeft_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginLeft_R_float])(ctx, (frame[0].o));
	frame[3].f = temp1;
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginBottom_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginBottom_R_float])(ctx, (frame[0].o));
	frame[4].f = temp2;
	jfloat temp3 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginRight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginRight_R_float])(ctx, (frame[0].o));
	frame[5].f = temp3;
	LINE_NUMBER(142);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background = (jref) (frame[1].o);
	LINE_NUMBER(143);
	jfloat temp4 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginTop_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginTop_R_float])(ctx, (frame[0].o));
	frame[6].f = temp4;
	jfloat temp5 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginLeft_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginLeft_R_float])(ctx, (frame[0].o));
	frame[7].f = temp5;
	jfloat temp6 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginBottom_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginBottom_R_float])(ctx, (frame[0].o));
	frame[8].f = temp6;
	jfloat temp7 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginRight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginRight_R_float])(ctx, (frame[0].o));
	frame[9].f = temp7;
	LINE_NUMBER(144);
	if ((floatCompare(((frame[2].f) + (frame[4].f)), ((frame[6].f) + (frame[8].f)), -1)) != 0) goto label_11;
	}
	{
	if ((floatCompare(((frame[3].f) + (frame[5].f)), ((frame[7].f) + (frame[9].f)), -1)) == 0) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(145);
	((func_arc_scene_ui_layout_Table_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_invalidateHierarchy])(ctx, (frame[0].o));
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(146);
	if ((floatCompare((frame[2].f), (frame[6].f), -1)) != 0) goto label_14;
	}
	{
	if ((floatCompare((frame[3].f), (frame[7].f), -1)) != 0) goto label_14;
	}
	{
	if ((floatCompare((frame[4].f), (frame[8].f), -1)) != 0) goto label_14;
	}
	{
	if ((floatCompare((frame[5].f), (frame[9].f), -1)) == 0) goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(147);
	((func_arc_scene_ui_layout_Table_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_invalidate])(ctx, (frame[0].o));
	}
label_13:;
	LINE_NUMBER(148);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_hit_float_float_boolean_R_arc_scene_Element(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:hit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(152);
	if (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_clip) == 0) goto label_1;
	}
	{
	LINE_NUMBER(153);
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_touchable;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(154);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) < 0) goto label_4;
	}
	{
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Table_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getWidth_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, -1)) >= 0) goto label_4;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) < 0) goto label_4;
	}
	{
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Table_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getHeight_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, -1)) < 0) goto label_1;
	}
label_4:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)M_arc_scene_Group_hit_float_float_boolean_R_arc_scene_Element(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_layout_Table_getClip_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getClip", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_clip);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Table_setClip_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:setClip", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(168);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_clip = (frame[1].i);
	LINE_NUMBER(169);
	((func_arc_scene_ui_layout_Table_setTransform_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_setTransform_boolean])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(170);
	((func_arc_scene_ui_layout_Table_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Table_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:invalidate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(176);
	M_arc_scene_ui_layout_WidgetGroup_invalidate(ctx, (frame[0].o));
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:add", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(182);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[2].o)))->F_element = (jref) (frame[1].o);
	LINE_NUMBER(185);
	if (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_implicitEndRow) == 0) goto label_3;
	}
	{
	LINE_NUMBER(186);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_implicitEndRow = (jint(0));
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_rows = (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_rows) - (jint(1)));
	LINE_NUMBER(188);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o))))->F_endRow = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[3].o = sp[0].o;
	LINE_NUMBER(192);
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size);
	LINE_NUMBER(193);
	if ((frame[4].i) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[3].o));
	frame[5].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(196);
	if (((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[5].o)))->F_endRow) != 0) goto label_12;
	}
	{
	LINE_NUMBER(197);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[2].o)))->F_column = (((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[5].o)))->F_column) + ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[5].o)))->F_colspan));
	LINE_NUMBER(198);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[2].o)))->F_row = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[5].o)))->F_row);
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(200);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[2].o)))->F_column = (jint(0));
	LINE_NUMBER(201);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[2].o)))->F_row = (((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[5].o)))->F_row) + (jint(1)));
	}
label_15:;
	{
	LINE_NUMBER(204);
	if (((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[2].o)))->F_row) <= 0) goto label_17;
	}
	{
	LINE_NUMBER(206);
	frame[6].i = ((frame[4].i) - (jint(1)));
	}
label_19:;
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_17;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[6].i));
	frame[7].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(208);
	frame[8].i = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[7].o)))->F_column);
	frame[9].i = ((frame[8].i) + ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[7].o)))->F_colspan));
	}
label_23:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_24;
	}
	{
	LINE_NUMBER(209);
	if ((frame[8].i) != ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[2].o)))->F_column)) goto label_26;
	}
	{
	LINE_NUMBER(210);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[2].o)))->F_cellAboveIndex = (frame[6].i);
	LINE_NUMBER(211);
	goto label_17;
	}
label_26:;
	{
	LINE_NUMBER(208);
	INST_IINC(8, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(206);
	INST_IINC(6, -1);
	goto label_19;
	}
label_17:;
	LINE_NUMBER(216);
	goto label_29;
label_9:;
	{
	LINE_NUMBER(217);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[2].o)))->F_column = (jint(0));
	LINE_NUMBER(218);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[2].o)))->F_row = (jint(0));
	}
label_29:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(222);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cellDefaults;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_set_arc_scene_ui_layout_Cell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_set_arc_scene_ui_layout_Cell_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(224);
	if ((frame[1].o) == nullptr) goto label_33;
	}
	{
	((func_arc_scene_ui_layout_Table_addChild_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_addChild_arc_scene_Element])(ctx, (frame[0].o), (frame[1].o));
	}
label_33:;
	{
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Table_add_Array1_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(230);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[5].o));
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(231);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:collapser", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:collapser", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:collapser", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(242);
	clinit_arc_scene_ui_layout_Collapser(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Collapser);
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	jobject temp1 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp1;
	sp += 3;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 4;
	init_arc_scene_ui_layout_Collapser_arc_func_Cons_boolean(ctx, sp[0].o, sp[2].o, sp[3].i);
	frame[4].o = sp[0].o;
	LINE_NUMBER(243);
	sp[0].o = frame[4].o;
	jint temp0 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_layout_Table_invoke_arc_func_Boolp_0(ctx);
		auto proxy = (arc_scene_ui_layout_Table_invoke_arc_func_Boolp_0 *) gcAlloc(ctx, &class_arc_scene_ui_layout_Table_invoke_arc_func_Boolp_0);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Collapser_setCollapsed_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Collapser) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Collapser_setCollapsed_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Collapser])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:collapser", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(248);
	clinit_arc_scene_ui_layout_Collapser(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Collapser);
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	jobject temp1 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp1;
	sp += 3;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 4;
	init_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table_boolean(ctx, sp[0].o, sp[2].o, sp[3].i);
	frame[4].o = sp[0].o;
	LINE_NUMBER(249);
	sp[0].o = frame[4].o;
	jint temp0 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_layout_Table_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (arc_scene_ui_layout_Table_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_arc_scene_ui_layout_Table_invoke_arc_func_Boolp_1);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Collapser_setCollapsed_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Collapser) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Collapser_setCollapsed_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Collapser])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(250);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:table", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_scene_style_Drawable, (jobject(nullptr)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:table", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(258);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:table", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(263);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(264);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(265);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:wrapTable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(269);
	clinit_arc_scene_ui_layout_WrapTable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_WrapTable);
	init_arc_scene_ui_layout_WrapTable(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(270);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(271);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:table", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[1].o), (jint(1)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:table", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(279);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(280);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o), (frame[2].i));
	LINE_NUMBER(281);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(282);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:label", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(286);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Label(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	init_arc_scene_ui_Label_arc_func_Prov(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:labelWrap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(290);
	clinit_arc_scene_ui_Label(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	init_arc_scene_ui_Label_arc_func_Prov(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(291);
	((func_arc_scene_ui_Label_setWrap_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Label_setWrap_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(292);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:labelWrap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(296);
	clinit_arc_scene_ui_Label(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	init_arc_scene_ui_Label_java_lang_CharSequence(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(297);
	((func_arc_scene_ui_Label_setWrap_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Label_setWrap_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(298);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:pane", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_arc_scene_ui_ScrollPane$ScrollPaneStyle)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_ui_ScrollPane$ScrollPaneStyle, sp[1].o)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:pane", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(306);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(307);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(308);
	clinit_arc_scene_ui_ScrollPane(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane);
	init_arc_scene_ui_ScrollPane_arc_scene_Element_arc_scene_ui_ScrollPane$ScrollPaneStyle(ctx, sp[0].o, (frame[3].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(309);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:pane", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(313);
	clinit_arc_scene_ui_ScrollPane(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane);
	init_arc_scene_ui_ScrollPane_arc_scene_Element_arc_scene_ui_ScrollPane$ScrollPaneStyle(ctx, sp[0].o, (frame[2].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(314);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:pane", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(318);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_arc_scene_ui_ScrollPane$ScrollPaneStyle)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_ui_ScrollPane$ScrollPaneStyle, sp[1].o)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(323);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Label(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	init_arc_scene_ui_Label_java_lang_CharSequence(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(328);
	clinit_arc_scene_ui_Label(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	init_arc_scene_ui_Label_java_lang_CharSequence(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(329);
	((func_arc_scene_ui_Label_setFontScale_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_Label_setFontScale_float])(ctx, (frame[3].o), (frame[2].f));
	LINE_NUMBER(330);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(335);
	clinit_arc_scene_ui_Label(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	init_arc_scene_ui_Label_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(336);
	((func_arc_scene_ui_Label_setFontScale_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Label_setFontScale_float])(ctx, (frame[4].o), (frame[3].f));
	LINE_NUMBER(337);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(341);
	clinit_arc_scene_ui_Label(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	init_arc_scene_ui_Label_java_lang_CharSequence(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(342);
	((func_arc_scene_ui_Label_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color])(ctx, (frame[4].o), (frame[2].o));
	LINE_NUMBER(343);
	((func_arc_scene_ui_Label_setFontScale_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Label_setFontScale_float])(ctx, (frame[4].o), (frame[3].f));
	LINE_NUMBER(344);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(349);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Label(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	init_arc_scene_ui_Label_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:add", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Label(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	sp[2].o = frame[1].o;
	clinit_arc_scene_ui_Label$LabelStyle(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_scene_ui_Label$LabelStyle);
	clinit_arc_Core(ctx);
	sp[4].o = (jobject)SF_arc_Core_scene;
	sp[4].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[4].o, (((jobject) &class_arc_scene_ui_Label$LabelStyle)));
	sp[4].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK((checkCast(ctx, &class_arc_scene_ui_Label$LabelStyle, sp[4].o))))->F_font;
	init_arc_scene_ui_Label$LabelStyle_arc_graphics_g2d_Font_arc_graphics_Color(ctx, sp[3].o, sp[4].o, (frame[2].o));
	init_arc_scene_ui_Label_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:add", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_scene_Element, (jobject(nullptr)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:stack", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(367);
	clinit_arc_scene_ui_layout_Stack(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Stack);
	init_arc_scene_ui_layout_Stack(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(368);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(369);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_2;
	}
	{
	LINE_NUMBER(370);
	((func_arc_scene_ui_layout_Stack_addChild_arc_scene_Element) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_addChild_arc_scene_Element])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(369);
	INST_IINC(3, 1);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:spacer", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(376);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Spacer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Spacer);
	init_arc_scene_ui_layout_Spacer_arc_func_Floatp_arc_func_Floatp(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:spacerX", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(380);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Spacer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Spacer);
	sp[2].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_layout_Table_invoke_arc_func_Floatp_0(ctx);
		auto proxy = (arc_scene_ui_layout_Table_invoke_arc_func_Floatp_0 *) gcAlloc(ctx, &class_arc_scene_ui_layout_Table_invoke_arc_func_Floatp_0);
		sp[3].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Spacer_arc_func_Floatp_arc_func_Floatp(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:spacerY", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(384);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Spacer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Spacer);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_layout_Table_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (arc_scene_ui_layout_Table_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_arc_scene_ui_layout_Table_invoke_arc_func_Floatp_1);
		sp[2].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Spacer_arc_func_Floatp_arc_func_Floatp(ctx, sp[1].o, sp[2].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_image_arc_func_Prov_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:image", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(388);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[2].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, (checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, sp[2].o)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_layout_Table_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_scene_ui_layout_Table_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_scene_ui_layout_Table_invoke_arc_func_Cons_0);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:imageDraw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(395);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[2].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[1].o, (checkCast(ctx, &class_arc_scene_style_Drawable, sp[2].o)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_layout_Table_invoke_arc_func_Cons_1(ctx);
		auto proxy = (arc_scene_ui_layout_Table_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_arc_scene_ui_layout_Table_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:image", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(402);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	init_arc_scene_ui_Image(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:image", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(406);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:image", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(410);
	clinit_arc_scene_ui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(411);
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:image", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(416);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:check", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)SM_arc_scene_utils_Elem_newCheck_java_lang_String_arc_func_Boolc_R_arc_scene_ui_CheckBox(ctx, (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(421);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:check", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)SM_arc_scene_utils_Elem_newCheck_java_lang_String_arc_func_Boolc_R_arc_scene_ui_CheckBox(ctx, (frame[1].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(426);
	((func_arc_scene_ui_CheckBox_setChecked_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_CheckBox_setChecked_boolean])(ctx, (frame[4].o), (frame[2].i));
	LINE_NUMBER(427);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:check", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)SM_arc_scene_utils_Elem_newCheck_java_lang_String_arc_func_Boolc_R_arc_scene_ui_CheckBox(ctx, (frame[1].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(432);
	sp[0].o = (jobject)((func_arc_scene_ui_CheckBox_getImageCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_CheckBox_getImageCell_R_arc_scene_ui_layout_Cell])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].f));
	LINE_NUMBER(433);
	((func_arc_scene_ui_CheckBox_setChecked_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_CheckBox_setChecked_boolean])(ctx, (frame[5].o), (frame[3].i));
	LINE_NUMBER(434);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:button", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(438);
	clinit_arc_scene_ui_Button(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Button);
	init_arc_scene_ui_Button(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(439);
	((func_arc_scene_ui_Button_clearChildren) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_Button_clearChildren])(ctx, (frame[3].o));
	LINE_NUMBER(440);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(441);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(442);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:button", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(446);
	clinit_arc_scene_ui_Button(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Button);
	init_arc_scene_ui_Button_arc_scene_ui_Button$ButtonStyle(ctx, sp[0].o, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(447);
	((func_arc_scene_ui_Button_clearChildren) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Button_clearChildren])(ctx, (frame[4].o));
	LINE_NUMBER(448);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(449);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[4].o));
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:button", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)SM_arc_scene_utils_Elem_newButton_java_lang_String_java_lang_Runnable_R_arc_scene_ui_TextButton(ctx, (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(455);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:button", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)SM_arc_scene_utils_Elem_newButton_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_TextButton(ctx, (frame[1].o), (frame[2].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(460);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:button", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)SM_arc_scene_utils_Elem_newImageButton_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_ImageButton(ctx, (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(465);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:button", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)SM_arc_scene_utils_Elem_newImageButton_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_ImageButton(ctx, (frame[1].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(470);
	((func_arc_scene_ui_ImageButton_resizeImage_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_resizeImage_float])(ctx, (frame[4].o), (frame[2].f));
	LINE_NUMBER(471);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:button", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(475);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	init_arc_scene_ui_ImageButton_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(476);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, (frame[5].o), (frame[4].o));
	LINE_NUMBER(477);
	((func_arc_scene_ui_ImageButton_resizeImage_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_resizeImage_float])(ctx, (frame[5].o), (frame[3].f));
	LINE_NUMBER(478);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:button", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(482);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	init_arc_scene_ui_ImageButton_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(483);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(484);
	sp[0].o = frame[4].o;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_imageSize_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_imageSize_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_arc_scene_ui_ImageButton_resizeImage_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_resizeImage_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(485);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:field", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)SM_arc_scene_utils_Elem_newField_java_lang_String_arc_func_Cons_R_arc_scene_ui_TextField(ctx, (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(490);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:area", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(494);
	clinit_arc_scene_ui_TextArea(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextArea);
	init_arc_scene_ui_TextArea_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(495);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_layout_Table_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_scene_ui_layout_Table_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_scene_ui_layout_Table_invoke_java_lang_Runnable_0);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextArea_changed_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextArea_changed_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(496);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:area", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(500);
	clinit_arc_scene_ui_TextArea(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextArea);
	init_arc_scene_ui_TextArea_java_lang_String_arc_scene_ui_TextField$TextFieldStyle(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(501);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_layout_Table_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (arc_scene_ui_layout_Table_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_arc_scene_ui_layout_Table_invoke_java_lang_Runnable_1);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextArea_changed_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextArea_changed_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(502);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:field", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)SM_arc_scene_utils_Elem_newField_java_lang_String_arc_func_Cons_R_arc_scene_ui_TextField(ctx, (frame[1].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(507);
	((func_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter])(ctx, (frame[4].o), (frame[2].o));
	LINE_NUMBER(508);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:field", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(512);
	sp[0].o = (jobject)SM_arc_scene_utils_Elem_newField_java_lang_String_arc_func_Cons_R_arc_scene_ui_TextField(ctx, (frame[1].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(513);
	((func_arc_scene_ui_TextField_setStyle_arc_scene_ui_TextField$TextFieldStyle) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TextField_setStyle_arc_scene_ui_TextField$TextFieldStyle])(ctx, (frame[4].o), (frame[2].o));
	LINE_NUMBER(514);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:rect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(518);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table$1);
	init_arc_scene_ui_layout_Table$1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table$DrawRect(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:buttonRow", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(527);
	clinit_arc_scene_ui_TextButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextButton);
	init_arc_scene_ui_TextButton_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(528);
	((func_arc_scene_ui_TextButton_clearChildren) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TextButton_clearChildren])(ctx, (frame[4].o));
	LINE_NUMBER(529);
	sp[0].o = frame[4].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_layout_Table_invoke_arc_func_Cons_2(ctx);
		auto proxy = (arc_scene_ui_layout_Table_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_arc_scene_ui_layout_Table_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(530);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TextButton_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(531);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabel_R_arc_scene_ui_Label])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(532);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(533);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:button", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(537);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_imageSize_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_imageSize_R_float, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:button", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(541);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_scene;
	sp[3].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[3].o, (((jobject) &class_arc_scene_ui_TextButton$TextButtonStyle)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, (checkCast(ctx, &class_arc_scene_ui_TextButton$TextButtonStyle, sp[3].o)), (frame[3].f), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:button", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(545);
	clinit_arc_scene_ui_TextButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextButton);
	init_arc_scene_ui_TextButton_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(546);
	sp[0].o = frame[6].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[4].f));
	LINE_NUMBER(547);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getCells_R_arc_struct_Seq])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_reverse_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_reverse_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, (frame[6].o), (frame[5].o));
	LINE_NUMBER(549);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:button", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(553);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_imageSize_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_imageSize_R_float, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:buttonCenter", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(557);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_scene;
	sp[3].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[3].o, (((jobject) &class_arc_scene_ui_TextButton$TextButtonStyle)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, (checkCast(ctx, &class_arc_scene_ui_TextButton$TextButtonStyle, sp[3].o)), (frame[3].f), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:buttonCenter", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(561);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_scene;
	sp[3].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[3].o, (((jobject) &class_arc_scene_ui_TextButton$TextButtonStyle)));
	sp[3].o = checkCast(ctx, &class_arc_scene_ui_TextButton$TextButtonStyle, sp[3].o);
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_imageSize_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_imageSize_R_float, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:buttonCenter", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(565);
	clinit_arc_scene_ui_TextButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextButton);
	init_arc_scene_ui_TextButton_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(566);
	sp[0].o = frame[6].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextButton_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[4].f));
	LINE_NUMBER(567);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getCells_R_arc_struct_Seq])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_reverse_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_reverse_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(568);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_TextButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, (frame[6].o), (frame[5].o));
	LINE_NUMBER(569);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (-(frame[4].f)));
	LINE_NUMBER(570);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:slider", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(574);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (jfloat(0)), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:slider", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(578);
	clinit_arc_scene_ui_Slider(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Slider);
	init_arc_scene_ui_Slider_float_float_float_boolean(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (jint(0)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(579);
	jint temp0 = (jint)((func_arc_scene_ui_Slider_setValue_float_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_Slider_setValue_float_R_boolean])(ctx, (frame[6].o), (frame[4].f));
	LINE_NUMBER(580);
	if ((frame[5].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(581);
	((func_arc_scene_ui_Slider_moved_arc_func_Floatc) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_Slider_moved_arc_func_Floatc])(ctx, (frame[6].o), (frame[5].o));
	}
label_3:;
	{
	LINE_NUMBER(582);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:slider", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(586);
	clinit_arc_scene_ui_Slider(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Slider);
	init_arc_scene_ui_Slider_float_float_float_boolean(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (jint(0)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(587);
	jint temp0 = (jint)((func_arc_scene_ui_Slider_setValue_float_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_Slider_setValue_float_R_boolean])(ctx, (frame[7].o), (frame[4].f));
	LINE_NUMBER(588);
	if ((frame[6].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(589);
	if ((frame[5].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(590);
	((func_arc_scene_ui_Slider_moved_arc_func_Floatc) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_Slider_moved_arc_func_Floatc])(ctx, (frame[7].o), (frame[6].o));
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(592);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_layout_Table_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (arc_scene_ui_layout_Table_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_arc_scene_ui_layout_Table_invoke_java_lang_Runnable_2);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Slider_released_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_released_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(596);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[7].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:removeChild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(601);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:removeChild", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(606);
	jint temp0 = (jint)M_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(607);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(608);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[3].o)))->F_element = (jref) (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(609);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Table_clearChildren(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:clearChildren", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[1].o = sp[0].o;
	LINE_NUMBER(616);
	frame[2].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(617);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(618);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[3].o)))->F_element;
	frame[4].o = sp[0].o;
	LINE_NUMBER(619);
	if ((frame[4].o) == nullptr) goto label_7;
	}
	{
	jint temp0 = (jint)((func_arc_scene_Element_remove_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_remove_R_boolean])(ctx, (frame[4].o));
	}
label_7:;
	{
	LINE_NUMBER(616);
	INST_IINC(2, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(621);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Table_cellPool;
	((func_arc_util_pooling_Pool_freeAll_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_pooling_Pool_freeAll_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(622);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[1].o));
	LINE_NUMBER(623);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rows = (jint(0));
	LINE_NUMBER(624);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columns = (jint(0));
	LINE_NUMBER(625);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowDefaults;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Table_cellPool;
	sp[1].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowDefaults;
	((func_arc_util_pooling_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_pooling_Pool_free_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(626);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowDefaults = (jref) (jobject(nullptr));
	LINE_NUMBER(627);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_implicitEndRow = (jint(0));
	LINE_NUMBER(629);
	M_arc_scene_Group_clearChildren(ctx, (frame[0].o));
	LINE_NUMBER(630);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Table_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(637);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[0].o));
	LINE_NUMBER(638);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_marginTop = (jfloat(-std::numeric_limits<float>::infinity()));
	LINE_NUMBER(639);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_marginLeft = (jfloat(-std::numeric_limits<float>::infinity()));
	LINE_NUMBER(640);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_marginBot = (jfloat(-std::numeric_limits<float>::infinity()));
	LINE_NUMBER(641);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_marginRight = (jfloat(-std::numeric_limits<float>::infinity()));
	LINE_NUMBER(642);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_align = (jint(1));
	LINE_NUMBER(643);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cellDefaults;
	((func_arc_scene_ui_layout_Cell_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_reset])(ctx, sp[0].o);
	LINE_NUMBER(644);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:row", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(648);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(649);
	if (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_implicitEndRow) != 0) goto label_3;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_arc_scene_ui_layout_Table_endRow(ctx, sp[0].o);
label_3:;
	{
	LINE_NUMBER(650);
	((func_arc_scene_ui_layout_Table_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_invalidate])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(652);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_implicitEndRow = (jint(0));
	LINE_NUMBER(653);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowDefaults;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_Table_cellPool;
	sp[1].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowDefaults;
	((func_arc_util_pooling_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_pooling_Pool_free_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(654);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_rowDefaults = (jref) sp[1].o;
	LINE_NUMBER(655);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowDefaults;
	((func_arc_scene_ui_layout_Cell_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_clear])(ctx, sp[0].o);
	LINE_NUMBER(656);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Table_endRow(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:endRow", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(660);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[1].o = sp[0].o;
	LINE_NUMBER(661);
	frame[2].i = (jint(0));
	LINE_NUMBER(662);
	frame[3].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size) - (jint(1)));
	}
label_3:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(664);
	if (((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[4].o)))->F_endRow) == 0) goto label_7;
	}
	goto label_4;
label_7:;
	{
	LINE_NUMBER(665);
	frame[2].i = ((frame[2].i) + ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[4].o)))->F_colspan));
	LINE_NUMBER(662);
	INST_IINC(3, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(667);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columns), (frame[2].i));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_columns = temp0;
	LINE_NUMBER(668);
	sp[0].o = frame[0].o;
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_rows = (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_rows) + (jint(1)));
	LINE_NUMBER(669);
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[1].o));
	((arc_scene_ui_layout_Cell *) NULL_CHECK((checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o))))->F_endRow = (jint(1));
	LINE_NUMBER(670);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getCell", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(674);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[2].o = sp[0].o;
	LINE_NUMBER(675);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(676);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(677);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[5].o)))->F_element;
	if (sp[0].o != (frame[1].o)) goto label_7;
	}
	INST_ALOAD(5);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(675);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(679);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getCells", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(684);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Table_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getPrefWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(689);
	if (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_scene_ui_layout_Table_computeSize) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_computeSize])(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(690);
	frame[1].f = ((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefWidth);
	LINE_NUMBER(691);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}
label_3:;
	{
	LINE_NUMBER(692);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Table_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getPrefHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(697);
	if (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_scene_ui_layout_Table_computeSize) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_computeSize])(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(698);
	frame[1].f = ((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefHeight);
	LINE_NUMBER(699);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}
label_3:;
	{
	LINE_NUMBER(700);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Table_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getMinWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(705);
	if (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_scene_ui_layout_Table_computeSize) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_computeSize])(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(706);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinWidth);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Table_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getMinHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(711);
	if (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_scene_ui_layout_Table_computeSize) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_computeSize])(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(712);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinHeight);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:defaults", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(717);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cellDefaults;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:margin", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(722);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].f), (frame[1].f), (frame[1].f), (frame[1].f));
	LINE_NUMBER(723);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:margin", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(727);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (frame[1].f));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_marginTop = temp0;
	LINE_NUMBER(728);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (frame[2].f));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_marginLeft = temp1;
	LINE_NUMBER(729);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (frame[3].f));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_marginBot = temp2;
	LINE_NUMBER(730);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (frame[4].f));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_marginRight = temp3;
	LINE_NUMBER(731);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(732);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:marginTop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(737);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (frame[1].f));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_marginTop = temp0;
	LINE_NUMBER(738);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(739);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:marginLeft", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(744);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (frame[1].f));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_marginLeft = temp0;
	LINE_NUMBER(745);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(746);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:marginBottom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(751);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (frame[1].f));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_marginBot = temp0;
	LINE_NUMBER(752);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(753);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:marginRight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(758);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (frame[1].f));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_marginRight = temp0;
	LINE_NUMBER(759);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(760);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:align", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(768);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_align = (frame[1].i);
	LINE_NUMBER(769);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:center", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(774);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_align = (jint(1));
	LINE_NUMBER(775);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:top", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(780);
	sp[0].o = frame[0].o;
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_align = (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_align) | (jint(2)));
	LINE_NUMBER(781);
	sp[0].o = frame[0].o;
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_align = (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_align) & (-5));
	LINE_NUMBER(782);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:left", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(787);
	sp[0].o = frame[0].o;
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_align = (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_align) | (8));
	LINE_NUMBER(788);
	sp[0].o = frame[0].o;
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_align = (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_align) & (-17));
	LINE_NUMBER(789);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:bottom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(794);
	sp[0].o = frame[0].o;
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_align = (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_align) | (jint(4)));
	LINE_NUMBER(795);
	sp[0].o = frame[0].o;
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_align = (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_align) & (-3));
	LINE_NUMBER(796);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:right", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(801);
	sp[0].o = frame[0].o;
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_align = (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_align) | (16));
	LINE_NUMBER(802);
	sp[0].o = frame[0].o;
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_align = (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_align) & (-9));
	LINE_NUMBER(803);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Table_getMarginTop_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getMarginTop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(807);
	if ((floatCompare(((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_marginTop), (jfloat(-std::numeric_limits<float>::infinity())), -1)) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_marginTop;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_FCONST(0);
	goto label_2;
label_3:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Table_getMarginLeft_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getMarginLeft", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(811);
	if ((floatCompare(((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_marginLeft), (jfloat(-std::numeric_limits<float>::infinity())), -1)) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_marginLeft;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_FCONST(0);
	goto label_2;
label_3:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Table_getMarginBottom_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getMarginBottom", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(815);
	if ((floatCompare(((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_marginBot), (jfloat(-std::numeric_limits<float>::infinity())), -1)) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_marginBot;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_FCONST(0);
	goto label_2;
label_3:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Table_getMarginRight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getMarginRight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(819);
	if ((floatCompare(((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_marginRight), (jfloat(-std::numeric_limits<float>::infinity())), -1)) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_marginRight;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_FCONST(0);
	goto label_2;
label_3:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_background;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getRightWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jint M_arc_scene_ui_layout_Table_getAlign_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getAlign", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(823);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_align);
	}

	popStackFrame(ctx);
}

jint M_arc_scene_ui_layout_Table_getRow_float_R_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getRow", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(831);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[2].o = sp[0].o;
	LINE_NUMBER(832);
	frame[3].i = (jint(0));
	LINE_NUMBER(833);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginTop_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginTop_R_float])(ctx, (frame[0].o));
	frame[1].f = (temp0 + temp1);
	LINE_NUMBER(834);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size);
	LINE_NUMBER(835);
	if ((frame[5].i) != 0) goto label_6;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(836);
	if ((frame[5].i) != (jint(1))) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(837);
	if ((frame[4].i) >= (frame[5].i)) goto label_8;
	}
	{
	LINE_NUMBER(838);
	sp[0].o = frame[2].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[6].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(839);
	if ((floatCompare((((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_elementY) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_computedPadTop)), (frame[1].f), 1)) >= 0) goto label_11;
	}
	goto label_8;
label_11:;
	{
	LINE_NUMBER(840);
	if (((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_endRow) == 0) goto label_12;
	}
	INST_IINC(3, 1);
label_12:;
	LINE_NUMBER(841);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(842);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Table_setRound_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:setRound", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(847);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_round = (frame[1].i);
	LINE_NUMBER(848);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_scene_ui_layout_Table_getRows_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getRows", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(851);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rows);
	}

	popStackFrame(ctx);
}

jint M_arc_scene_ui_layout_Table_getColumns_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getColumns", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(855);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columns);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Table_getRowHeight_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getRowHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(860);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowHeight;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Table_getColumnWidth_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:getColumnWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(865);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnWidth;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:ensureSize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(869);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) >= (frame[2].i)) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(870);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(871);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[3].i)) = (jfloat(0));
	LINE_NUMBER(870);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(872);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Table_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:layout", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(877);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Table_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getWidth_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(878);
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Table_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getHeight_R_float])(ctx, (frame[0].o));
	frame[2].f = temp1;
	LINE_NUMBER(880);
	((func_arc_scene_ui_layout_Table_layout_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_layout_float_float_float_float])(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)), (frame[1].f), (frame[2].f));
	LINE_NUMBER(882);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[3].o = sp[0].o;
	LINE_NUMBER(883);
	if (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_round) == 0) goto label_5;
	}
	{
	LINE_NUMBER(884);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size);
	}
label_8:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_9;
	}
	{
	LINE_NUMBER(885);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[4].i));
	frame[6].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(886);
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_elementWidth));
	frame[7].f = (jfloat(temp0));
	LINE_NUMBER(887);
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_elementHeight));
	frame[8].f = (jfloat(temp1));
	LINE_NUMBER(888);
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_elementX));
	frame[9].f = (jfloat(temp2));
	LINE_NUMBER(889);
	jfloat temp3 = frame[2].f;
	jint temp4 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_elementY));
	frame[10].f = ((temp3 - (jfloat(temp4))) - (frame[8].f));
	LINE_NUMBER(890);
	((func_arc_scene_ui_layout_Cell_setBounds_float_float_float_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_setBounds_float_float_float_float])(ctx, (frame[6].o), (frame[9].f), (frame[10].f), (frame[7].f), (frame[8].f));
	LINE_NUMBER(891);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_element;
	frame[11].o = sp[0].o;
	LINE_NUMBER(892);
	if ((frame[11].o) == nullptr) goto label_18;
	}
	{
	((func_arc_scene_Element_setBounds_float_float_float_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_scene_Element_setBounds_float_float_float_float])(ctx, (frame[11].o), (frame[9].f), (frame[10].f), (frame[7].f), (frame[8].f));
	}
label_18:;
	{
	LINE_NUMBER(884);
	INST_IINC(4, 1);
	goto label_8;
	}
label_9:;
	goto label_19;
label_5:;
	{
	LINE_NUMBER(895);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size);
	}
label_21:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_19;
	}
	{
	LINE_NUMBER(896);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[4].i));
	frame[6].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(897);
	frame[7].f = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_elementHeight);
	LINE_NUMBER(898);
	frame[8].f = (((frame[2].f) - ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_elementY)) - (frame[7].f));
	LINE_NUMBER(899);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_elementY = (frame[8].f);
	LINE_NUMBER(900);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_element;
	frame[9].o = sp[0].o;
	LINE_NUMBER(901);
	if ((frame[9].o) == nullptr) goto label_28;
	}
	{
	((func_arc_scene_Element_setBounds_float_float_float_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_Element_setBounds_float_float_float_float])(ctx, (frame[9].o), ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_elementX), (frame[8].f), ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_elementWidth), (frame[7].f));
	}
label_28:;
	{
	LINE_NUMBER(895);
	INST_IINC(4, 1);
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(905);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(906);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size);
	}
label_31:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_32;
	}
	{
	LINE_NUMBER(907);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[4].o), (frame[5].i));
	frame[7].o = (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	LINE_NUMBER(908);
	((func_arc_scene_Element_validate) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_Element_validate])(ctx, (frame[7].o));
	LINE_NUMBER(906);
	INST_IINC(5, 1);
	goto label_31;
	}
label_32:;
	LINE_NUMBER(910);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Table_computeSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[30];
	auto stack = &frame[25];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:computeSize", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(913);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(0));
	LINE_NUMBER(915);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[1].o = sp[0].o;
	LINE_NUMBER(916);
	frame[2].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(919);
	if ((frame[2].i) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[1].o));
	if (((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o))))->F_endRow) != 0) goto label_4;
	}
	{
	LINE_NUMBER(920);
	M_arc_scene_ui_layout_Table_endRow(ctx, (frame[0].o));
	LINE_NUMBER(921);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_implicitEndRow = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(924);
	frame[3].i = ((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columns);
	frame[4].i = ((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rows);
	LINE_NUMBER(925);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnMinWidth;
	sp[1].o = (jobject)M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[1].o, sp[2].o, (frame[3].i));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_columnMinWidth = (jref) sp[1].o;
	LINE_NUMBER(926);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowMinHeight;
	sp[1].o = (jobject)M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[1].o, sp[2].o, (frame[4].i));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_rowMinHeight = (jref) sp[1].o;
	LINE_NUMBER(927);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnPrefWidth;
	sp[1].o = (jobject)M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[1].o, sp[2].o, (frame[3].i));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_columnPrefWidth = (jref) sp[1].o;
	LINE_NUMBER(928);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowPrefHeight;
	sp[1].o = (jobject)M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[1].o, sp[2].o, (frame[4].i));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_rowPrefHeight = (jref) sp[1].o;
	LINE_NUMBER(929);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnWidth;
	sp[1].o = (jobject)M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[1].o, sp[2].o, (frame[3].i));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_columnWidth = (jref) sp[1].o;
	LINE_NUMBER(930);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowHeight;
	sp[1].o = (jobject)M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[1].o, sp[2].o, (frame[4].i));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_rowHeight = (jref) sp[1].o;
	LINE_NUMBER(931);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_expandWidth;
	sp[1].o = (jobject)M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[1].o, sp[2].o, (frame[3].i));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_expandWidth = (jref) sp[1].o;
	LINE_NUMBER(932);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_expandHeight;
	sp[1].o = (jobject)M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[1].o, sp[2].o, (frame[4].i));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_expandHeight = (jref) sp[1].o;
	LINE_NUMBER(934);
	frame[5].i = (jint(0));
	}
label_17:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_18;
	}
	{
	LINE_NUMBER(935);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[5].i));
	frame[6].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(936);
	frame[7].i = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_column);
	frame[8].i = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_row);
	frame[9].i = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_colspan);
	LINE_NUMBER(939);
	if (((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_expandY) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_expandHeight;
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[8].i))), (jfloat(0)), -1)) != 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_expandHeight;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[8].i)) = (jfloat(((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_expandY)));
	}
label_24:;
	{
	LINE_NUMBER(940);
	if ((frame[9].i) != (jint(1))) goto label_25;
	}
	{
	if (((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_expandX) == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_expandWidth;
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[7].i))), (jfloat(0)), -1)) != 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_expandWidth;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[7].i)) = (jfloat(((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_expandX)));
	}
label_25:;
	{
	LINE_NUMBER(943);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_computedPadLeft = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_padLeft);
	LINE_NUMBER(944);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_computedPadTop = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_padTop);
	LINE_NUMBER(945);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_computedPadRight = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_padRight);
	LINE_NUMBER(946);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_computedPadBottom = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_padBottom);
	LINE_NUMBER(949);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_prefWidth_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_prefWidth_R_float])(ctx, (frame[6].o));
	frame[10].f = temp0;
	LINE_NUMBER(950);
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Cell_prefHeight_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_prefHeight_R_float])(ctx, (frame[6].o));
	frame[11].f = temp1;
	LINE_NUMBER(951);
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Cell_minWidth_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_R_float])(ctx, (frame[6].o));
	frame[12].f = temp2;
	LINE_NUMBER(952);
	jfloat temp3 = (jfloat)((func_arc_scene_ui_layout_Cell_minHeight_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_minHeight_R_float])(ctx, (frame[6].o));
	frame[13].f = temp3;
	LINE_NUMBER(953);
	jfloat temp4 = (jfloat)((func_arc_scene_ui_layout_Cell_maxWidth_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxWidth_R_float])(ctx, (frame[6].o));
	frame[14].f = temp4;
	LINE_NUMBER(954);
	jfloat temp5 = (jfloat)((func_arc_scene_ui_layout_Cell_maxHeight_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxHeight_R_float])(ctx, (frame[6].o));
	frame[15].f = temp5;
	LINE_NUMBER(955);
	if ((floatCompare((frame[10].f), (frame[12].f), 1)) >= 0) goto label_36;
	}
	INST_FLOAD(12);
	INST_FSTORE(10);
label_36:;
	{
	LINE_NUMBER(956);
	if ((floatCompare((frame[11].f), (frame[13].f), 1)) >= 0) goto label_37;
	}
	INST_FLOAD(13);
	INST_FSTORE(11);
label_37:;
	{
	LINE_NUMBER(957);
	if ((floatCompare((frame[14].f), (jfloat(0)), -1)) <= 0) goto label_38;
	}
	{
	if ((floatCompare((frame[10].f), (frame[14].f), -1)) <= 0) goto label_38;
	}
	INST_FLOAD(14);
	INST_FSTORE(10);
label_38:;
	{
	LINE_NUMBER(958);
	if ((floatCompare((frame[15].f), (jfloat(0)), -1)) <= 0) goto label_39;
	}
	{
	if ((floatCompare((frame[11].f), (frame[15].f), -1)) <= 0) goto label_39;
	}
	INST_FLOAD(15);
	INST_FSTORE(11);
label_39:;
	{
	LINE_NUMBER(960);
	if ((frame[9].i) != (jint(1))) goto label_40;
	}
	{
	LINE_NUMBER(961);
	frame[16].f = (((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_computedPadLeft) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_computedPadRight));
	LINE_NUMBER(962);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnPrefWidth;
	jint temp0 = frame[7].i;
	sp[1].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnPrefWidth;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[7].i))), ((frame[10].f) + (frame[16].f)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(963);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnMinWidth;
	jint temp2 = frame[7].i;
	sp[1].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnMinWidth;
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[7].i))), ((frame[12].f) + (frame[16].f)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = temp3;
	}
label_40:;
	{
	LINE_NUMBER(965);
	frame[16].f = (((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_computedPadTop) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_computedPadBottom));
	LINE_NUMBER(966);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowPrefHeight;
	jint temp0 = frame[8].i;
	sp[1].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowPrefHeight;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[8].i))), ((frame[11].f) + (frame[16].f)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(967);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowMinHeight;
	jint temp2 = frame[8].i;
	sp[1].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowMinHeight;
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[8].i))), ((frame[13].f) + (frame[16].f)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = temp3;
	LINE_NUMBER(934);
	INST_IINC(5, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(970);
	frame[5].f = (jfloat(0));
	frame[6].f = (jfloat(0));
	LINE_NUMBER(971);
	frame[7].f = (jfloat(0));
	frame[8].f = (jfloat(0));
	LINE_NUMBER(972);
	frame[9].i = (jint(0));
	}
label_51:;
	{
	if ((frame[9].i) >= (frame[2].i)) goto label_52;
	}
	{
	LINE_NUMBER(973);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[9].i));
	frame[10].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(974);
	frame[11].i = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_column);
	LINE_NUMBER(977);
	frame[12].i = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_expandX);
	LINE_NUMBER(979);
	if ((frame[12].i) == 0) goto label_57;
	}
	{
	LINE_NUMBER(980);
	frame[13].i = ((frame[11].i) + ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_colspan));
	LINE_NUMBER(981);
	frame[14].i = (frame[11].i);
	}
label_60:;
	{
	if ((frame[14].i) >= (frame[13].i)) goto label_61;
	}
	{
	LINE_NUMBER(982);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_expandWidth;
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[14].i))), (jfloat(0)), -1)) == 0) goto label_63;
	}
	goto label_57;
label_63:;
	{
	LINE_NUMBER(981);
	INST_IINC(14, 1);
	goto label_60;
	}
label_61:;
	{
	LINE_NUMBER(983);
	frame[14].i = (frame[11].i);
	}
label_64:;
	{
	if ((frame[14].i) >= (frame[13].i)) goto label_57;
	}
	{
	LINE_NUMBER(984);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_expandWidth;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[14].i)) = (jfloat((frame[12].i)));
	LINE_NUMBER(983);
	INST_IINC(14, 1);
	goto label_64;
	}
label_57:;
	{
	LINE_NUMBER(988);
	if (((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_uniformX) == 0) goto label_67;
	}
	{
	if (((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_colspan) != (jint(1))) goto label_67;
	}
	{
	LINE_NUMBER(989);
	frame[13].f = (((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_computedPadLeft) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_computedPadRight));
	LINE_NUMBER(990);
	jfloat temp0 = frame[5].f;
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnMinWidth;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[11].i))) - (frame[13].f)));
	frame[5].f = temp1;
	LINE_NUMBER(991);
	jfloat temp2 = frame[7].f;
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnPrefWidth;
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp2, (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[11].i))) - (frame[13].f)));
	frame[7].f = temp3;
	}
label_67:;
	{
	LINE_NUMBER(993);
	if (((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_uniformY) == 0) goto label_71;
	}
	{
	LINE_NUMBER(994);
	frame[13].f = (((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_computedPadTop) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_computedPadBottom));
	LINE_NUMBER(995);
	jfloat temp0 = frame[6].f;
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowMinHeight;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_row))) - (frame[13].f)));
	frame[6].f = temp1;
	LINE_NUMBER(996);
	jfloat temp2 = frame[8].f;
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowPrefHeight;
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp2, (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_row))) - (frame[13].f)));
	frame[8].f = temp3;
	}
label_71:;
	{
	LINE_NUMBER(972);
	INST_IINC(9, 1);
	goto label_51;
	}
label_52:;
	{
	LINE_NUMBER(1001);
	if ((floatCompare((frame[7].f), (jfloat(0)), -1)) > 0) goto label_75;
	}
	{
	if ((floatCompare((frame[8].f), (jfloat(0)), -1)) <= 0) goto label_76;
	}
label_75:;
	{
	LINE_NUMBER(1002);
	frame[9].i = (jint(0));
	}
label_77:;
	{
	if ((frame[9].i) >= (frame[2].i)) goto label_76;
	}
	{
	LINE_NUMBER(1003);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[9].i));
	frame[10].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(1004);
	if ((floatCompare((frame[7].f), (jfloat(0)), -1)) <= 0) goto label_80;
	}
	{
	if (((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_uniformX) == 0) goto label_80;
	}
	{
	if (((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_colspan) != (jint(1))) goto label_80;
	}
	{
	LINE_NUMBER(1005);
	frame[11].f = (((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_computedPadLeft) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_computedPadRight));
	LINE_NUMBER(1006);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnMinWidth;
	ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_column)) = ((frame[5].f) + (frame[11].f));
	LINE_NUMBER(1007);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnPrefWidth;
	ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_column)) = ((frame[7].f) + (frame[11].f));
	}
label_80:;
	{
	LINE_NUMBER(1009);
	if ((floatCompare((frame[8].f), (jfloat(0)), -1)) <= 0) goto label_84;
	}
	{
	if (((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_uniformY) == 0) goto label_84;
	}
	{
	LINE_NUMBER(1010);
	frame[11].f = (((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_computedPadTop) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_computedPadBottom));
	LINE_NUMBER(1011);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowMinHeight;
	ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_row)) = ((frame[6].f) + (frame[11].f));
	LINE_NUMBER(1012);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowPrefHeight;
	ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_row)) = ((frame[8].f) + (frame[11].f));
	}
label_84:;
	{
	LINE_NUMBER(1002);
	INST_IINC(9, 1);
	goto label_77;
	}
label_76:;
	{
	LINE_NUMBER(1018);
	frame[9].i = (jint(0));
	}
label_88:;
	{
	if ((frame[9].i) >= (frame[2].i)) goto label_89;
	}
	{
	LINE_NUMBER(1019);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[9].i));
	frame[10].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(1020);
	frame[11].i = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_colspan);
	LINE_NUMBER(1021);
	if ((frame[11].i) != (jint(1))) goto label_93;
	}
	goto label_94;
label_93:;
	{
	LINE_NUMBER(1022);
	frame[12].i = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_column);
	LINE_NUMBER(1024);
	sp[0].o = (jobject)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_element;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1025);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_minWidth_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_R_float])(ctx, (frame[10].o));
	frame[14].f = temp0;
	LINE_NUMBER(1026);
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Cell_prefWidth_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_prefWidth_R_float])(ctx, (frame[10].o));
	frame[15].f = temp1;
	LINE_NUMBER(1027);
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Cell_maxWidth_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxWidth_R_float])(ctx, (frame[10].o));
	frame[16].f = temp2;
	LINE_NUMBER(1028);
	if ((floatCompare((frame[15].f), (frame[14].f), 1)) >= 0) goto label_100;
	}
	INST_FLOAD(14);
	INST_FSTORE(15);
label_100:;
	{
	LINE_NUMBER(1029);
	if ((floatCompare((frame[16].f), (jfloat(0)), -1)) <= 0) goto label_101;
	}
	{
	if ((floatCompare((frame[15].f), (frame[16].f), -1)) <= 0) goto label_101;
	}
	INST_FLOAD(16);
	INST_FSTORE(15);
label_101:;
	{
	LINE_NUMBER(1031);
	frame[17].f = (-(((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_computedPadLeft) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[10].o)))->F_computedPadRight)));
	frame[18].f = (frame[17].f);
	LINE_NUMBER(1032);
	frame[19].f = (jfloat(0));
	LINE_NUMBER(1033);
	frame[20].i = (frame[12].i);
	frame[21].i = ((frame[20].i) + (frame[11].i));
	}
label_106:;
	{
	if ((frame[20].i) >= (frame[21].i)) goto label_107;
	}
	{
	LINE_NUMBER(1034);
	jfloat temp0 = frame[17].f;
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnMinWidth;
	frame[17].f = (temp0 + ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[20].i))));
	LINE_NUMBER(1035);
	jfloat temp1 = frame[18].f;
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnPrefWidth;
	frame[18].f = (temp1 + ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[20].i))));
	LINE_NUMBER(1036);
	jfloat temp2 = frame[19].f;
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_expandWidth;
	frame[19].f = (temp2 + ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[20].i))));
	LINE_NUMBER(1033);
	INST_IINC(20, 1);
	goto label_106;
	}
label_107:;
	{
	LINE_NUMBER(1039);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((frame[14].f) - (frame[17].f)));
	frame[20].f = temp0;
	LINE_NUMBER(1040);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((frame[15].f) - (frame[18].f)));
	frame[21].f = temp1;
	LINE_NUMBER(1041);
	frame[22].i = (frame[12].i);
	frame[23].i = ((frame[22].i) + (frame[11].i));
	}
label_115:;
	{
	if ((frame[22].i) >= (frame[23].i)) goto label_94;
	}
	{
	LINE_NUMBER(1042);
	if ((floatCompare((frame[19].f), (jfloat(0)), -1)) != 0) goto label_117;
	}
	{
	jfloat temp0 = (jfloat(1)) / (jfloat((frame[11].i)));
	sp[0].f = temp0;
	sp += 1;
	goto label_118;
	}
label_117:;
	{
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_expandWidth;
	jfloat temp0 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[22].i))) / (frame[19].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_118:;
	{
	sp -= 1;
	frame[24].f = sp[0].f;
	LINE_NUMBER(1043);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnMinWidth;
	jint temp0 = frame[22].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + ((frame[20].f) * (frame[24].f)));
	LINE_NUMBER(1044);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnPrefWidth;
	jint temp3 = frame[22].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + ((frame[21].f) * (frame[24].f)));
	LINE_NUMBER(1041);
	INST_IINC(22, 1);
	goto label_115;
	}
label_94:;
	{
	LINE_NUMBER(1018);
	INST_IINC(9, 1);
	goto label_88;
	}
label_89:;
	{
	LINE_NUMBER(1049);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinWidth = (jfloat(0));
	LINE_NUMBER(1050);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinHeight = (jfloat(0));
	LINE_NUMBER(1051);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefWidth = (jfloat(0));
	LINE_NUMBER(1052);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefHeight = (jfloat(0));
	LINE_NUMBER(1053);
	frame[9].i = (jint(0));
	}
label_126:;
	{
	if ((frame[9].i) >= (frame[3].i)) goto label_127;
	}
	{
	LINE_NUMBER(1054);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_tableMinWidth;
	sp[1].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnMinWidth;
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_tableMinWidth = (temp0 + ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[9].i))));
	LINE_NUMBER(1055);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_tablePrefWidth;
	sp[1].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnPrefWidth;
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_tablePrefWidth = (temp1 + ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[9].i))));
	LINE_NUMBER(1053);
	INST_IINC(9, 1);
	goto label_126;
	}
label_127:;
	{
	LINE_NUMBER(1057);
	frame[9].i = (jint(0));
	}
label_131:;
	{
	if ((frame[9].i) >= (frame[4].i)) goto label_132;
	}
	{
	LINE_NUMBER(1058);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_tableMinHeight;
	sp[1].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowMinHeight;
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_tableMinHeight = (temp0 + ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[9].i))));
	LINE_NUMBER(1059);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_tablePrefHeight;
	sp[1].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowMinHeight;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowPrefHeight;
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp2, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[9].i))));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_tablePrefHeight = (temp1 + temp3);
	LINE_NUMBER(1057);
	INST_IINC(9, 1);
	goto label_131;
	}
label_132:;
	{
	LINE_NUMBER(1061);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginLeft_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginLeft_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginRight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginRight_R_float])(ctx, (frame[0].o));
	frame[9].f = (temp0 + temp1);
	LINE_NUMBER(1062);
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginTop_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginTop_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginBottom_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginBottom_R_float])(ctx, (frame[0].o));
	frame[10].f = (temp2 + temp3);
	LINE_NUMBER(1063);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinWidth = (((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinWidth) + (frame[9].f));
	LINE_NUMBER(1064);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinHeight = (((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinHeight) + (frame[10].f));
	LINE_NUMBER(1065);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefWidth) + (frame[9].f)), ((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinWidth));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_tablePrefWidth = temp4;
	LINE_NUMBER(1066);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefHeight) + (frame[10].f)), ((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinHeight));
	((arc_scene_ui_layout_Table *) NULL_CHECK(sp[0].o))->F_tablePrefHeight = temp5;
	LINE_NUMBER(1067);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Table_layout_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[41];
	auto stack = &frame[36];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:layout", 41 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(1074);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1075);
	frame[6].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[5].o)))->F_size);
	LINE_NUMBER(1077);
	if (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_3;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_scene_ui_layout_Table_computeSize) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_computeSize])(ctx, sp[0].o);
label_3:;
	{
	LINE_NUMBER(1079);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginLeft_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginLeft_R_float])(ctx, (frame[0].o));
	frame[7].f = temp0;
	LINE_NUMBER(1080);
	jfloat temp1 = frame[7].f;
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginRight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginRight_R_float])(ctx, (frame[0].o));
	frame[8].f = (temp1 + temp2);
	LINE_NUMBER(1081);
	jfloat temp3 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginTop_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginTop_R_float])(ctx, (frame[0].o));
	frame[9].f = temp3;
	LINE_NUMBER(1082);
	jfloat temp4 = frame[9].f;
	jfloat temp5 = (jfloat)((func_arc_scene_ui_layout_Table_getMarginBottom_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getMarginBottom_R_float])(ctx, (frame[0].o));
	frame[10].f = (temp4 + temp5);
	LINE_NUMBER(1084);
	frame[11].i = ((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columns);
	frame[12].i = ((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rows);
	LINE_NUMBER(1085);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_expandWidth;
	frame[13].o = sp[0].o;
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_expandHeight;
	frame[14].o = sp[0].o;
	LINE_NUMBER(1086);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnWidth;
	frame[15].o = sp[0].o;
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowHeight;
	frame[16].o = sp[0].o;
	LINE_NUMBER(1088);
	frame[17].f = (jfloat(0));
	frame[18].f = (jfloat(0));
	LINE_NUMBER(1089);
	frame[19].i = (jint(0));
	}
label_16:;
	{
	if ((frame[19].i) >= (frame[11].i)) goto label_17;
	}
	{
	LINE_NUMBER(1090);
	frame[17].f = ((frame[17].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[13].o), (frame[19].i))));
	LINE_NUMBER(1089);
	INST_IINC(19, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(1091);
	frame[19].i = (jint(0));
	}
label_20:;
	{
	if ((frame[19].i) >= (frame[12].i)) goto label_21;
	}
	{
	LINE_NUMBER(1092);
	frame[18].f = ((frame[18].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[14].o), (frame[19].i))));
	LINE_NUMBER(1091);
	INST_IINC(19, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(1096);
	frame[20].f = (((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefWidth) - ((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinWidth));
	LINE_NUMBER(1097);
	if ((floatCompare((frame[20].f), (jfloat(0)), -1)) != 0) goto label_25;
	}
	{
	LINE_NUMBER(1098);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnMinWidth;
	frame[19].o = sp[0].o;
	goto label_28;
	}
label_25:;
	{
	LINE_NUMBER(1100);
	jfloat temp0 = frame[20].f;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((frame[3].f) - ((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinWidth)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	frame[21].f = temp2;
	LINE_NUMBER(1101);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_layout_Table_columnWeightedWidth;
	sp[0].o = (jobject)M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[0].o, sp[1].o, (frame[11].i));
	clinit_arc_scene_ui_layout_Table(ctx);
	SF_arc_scene_ui_layout_Table_columnWeightedWidth = sp[0].o;
	frame[19].o = sp[0].o;
	LINE_NUMBER(1102);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnMinWidth;
	frame[22].o = sp[0].o;
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_columnPrefWidth;
	frame[23].o = sp[0].o;
	LINE_NUMBER(1103);
	frame[24].i = (jint(0));
	}
label_33:;
	{
	if ((frame[24].i) >= (frame[11].i)) goto label_28;
	}
	{
	LINE_NUMBER(1104);
	frame[25].f = (((jfloat)ARRAY_ACCESS(jfloat, (frame[23].o), (frame[24].i))) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[22].o), (frame[24].i))));
	LINE_NUMBER(1105);
	frame[26].f = ((frame[25].f) / (frame[20].f));
	LINE_NUMBER(1106);
	ARRAY_ACCESS(jfloat, (frame[19].o), (frame[24].i)) = (((jfloat)ARRAY_ACCESS(jfloat, (frame[22].o), (frame[24].i))) + ((frame[21].f) * (frame[26].f)));
	LINE_NUMBER(1103);
	INST_IINC(24, 1);
	goto label_33;
	}
label_28:;
	{
	LINE_NUMBER(1111);
	frame[22].f = (((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefHeight) - ((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinHeight));
	LINE_NUMBER(1112);
	if ((floatCompare((frame[22].f), (jfloat(0)), -1)) != 0) goto label_39;
	}
	{
	LINE_NUMBER(1113);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowMinHeight;
	frame[21].o = sp[0].o;
	goto label_42;
	}
label_39:;
	{
	LINE_NUMBER(1115);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_layout_Table_rowWeightedHeight;
	sp[0].o = (jobject)M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[0].o, sp[1].o, (frame[12].i));
	clinit_arc_scene_ui_layout_Table(ctx);
	SF_arc_scene_ui_layout_Table_rowWeightedHeight = sp[0].o;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1116);
	jfloat temp0 = frame[22].f;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((frame[4].f) - ((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinHeight)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	frame[23].f = temp2;
	LINE_NUMBER(1117);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowMinHeight;
	frame[24].o = sp[0].o;
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_rowPrefHeight;
	frame[25].o = sp[0].o;
	LINE_NUMBER(1118);
	frame[26].i = (jint(0));
	}
label_47:;
	{
	if ((frame[26].i) >= (frame[12].i)) goto label_42;
	}
	{
	LINE_NUMBER(1119);
	frame[27].f = (((jfloat)ARRAY_ACCESS(jfloat, (frame[25].o), (frame[26].i))) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[24].o), (frame[26].i))));
	LINE_NUMBER(1120);
	frame[28].f = ((frame[27].f) / (frame[22].f));
	LINE_NUMBER(1121);
	ARRAY_ACCESS(jfloat, (frame[21].o), (frame[26].i)) = (((jfloat)ARRAY_ACCESS(jfloat, (frame[24].o), (frame[26].i))) + ((frame[23].f) * (frame[28].f)));
	LINE_NUMBER(1118);
	INST_IINC(26, 1);
	goto label_47;
	}
label_42:;
	{
	LINE_NUMBER(1126);
	frame[23].i = (jint(0));
	}
label_52:;
	{
	if ((frame[23].i) >= (frame[6].i)) goto label_53;
	}
	{
	LINE_NUMBER(1127);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[5].o), (frame[23].i));
	frame[24].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(1128);
	frame[25].i = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_column);
	frame[26].i = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_row);
	LINE_NUMBER(1130);
	frame[27].f = (jfloat(0));
	LINE_NUMBER(1131);
	frame[28].i = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_colspan);
	LINE_NUMBER(1132);
	frame[29].i = (frame[25].i);
	frame[30].i = ((frame[29].i) + (frame[28].i));
	}
label_61:;
	{
	if ((frame[29].i) >= (frame[30].i)) goto label_62;
	}
	{
	LINE_NUMBER(1133);
	frame[27].f = ((frame[27].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[19].o), (frame[29].i))));
	LINE_NUMBER(1132);
	INST_IINC(29, 1);
	goto label_61;
	}
label_62:;
	{
	LINE_NUMBER(1134);
	frame[29].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[21].o), (frame[26].i)));
	LINE_NUMBER(1136);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_prefWidth_R_float) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_prefWidth_R_float])(ctx, (frame[24].o));
	frame[30].f = temp0;
	LINE_NUMBER(1137);
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Cell_prefHeight_R_float) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_prefHeight_R_float])(ctx, (frame[24].o));
	frame[31].f = temp1;
	LINE_NUMBER(1138);
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Cell_minWidth_R_float) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_R_float])(ctx, (frame[24].o));
	frame[32].f = temp2;
	LINE_NUMBER(1139);
	jfloat temp3 = (jfloat)((func_arc_scene_ui_layout_Cell_minHeight_R_float) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_minHeight_R_float])(ctx, (frame[24].o));
	frame[33].f = temp3;
	LINE_NUMBER(1140);
	jfloat temp4 = (jfloat)((func_arc_scene_ui_layout_Cell_maxWidth_R_float) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxWidth_R_float])(ctx, (frame[24].o));
	frame[34].f = temp4;
	LINE_NUMBER(1141);
	jfloat temp5 = (jfloat)((func_arc_scene_ui_layout_Cell_maxHeight_R_float) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxHeight_R_float])(ctx, (frame[24].o));
	frame[35].f = temp5;
	LINE_NUMBER(1142);
	if ((floatCompare((frame[30].f), (frame[32].f), 1)) >= 0) goto label_72;
	}
	INST_FLOAD(32);
	INST_FSTORE(30);
label_72:;
	{
	LINE_NUMBER(1143);
	if ((floatCompare((frame[31].f), (frame[33].f), 1)) >= 0) goto label_73;
	}
	INST_FLOAD(33);
	INST_FSTORE(31);
label_73:;
	{
	LINE_NUMBER(1144);
	if ((floatCompare((frame[34].f), (jfloat(0)), -1)) <= 0) goto label_74;
	}
	{
	if ((floatCompare((frame[30].f), (frame[34].f), -1)) <= 0) goto label_74;
	}
	INST_FLOAD(34);
	INST_FSTORE(30);
label_74:;
	{
	LINE_NUMBER(1145);
	if ((floatCompare((frame[35].f), (jfloat(0)), -1)) <= 0) goto label_75;
	}
	{
	if ((floatCompare((frame[31].f), (frame[35].f), -1)) <= 0) goto label_75;
	}
	INST_FLOAD(35);
	INST_FSTORE(31);
label_75:;
	{
	LINE_NUMBER(1147);
	sp[0].o = frame[24].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((frame[27].f) - ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_computedPadLeft)) - ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_computedPadRight)), (frame[30].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_elementWidth = temp0;
	LINE_NUMBER(1148);
	sp[0].o = frame[24].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((frame[29].f) - ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_computedPadTop)) - ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_computedPadBottom)), (frame[31].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_elementHeight = temp1;
	LINE_NUMBER(1150);
	if ((frame[28].i) != (jint(1))) goto label_78;
	}
	{
	sp[0].o = frame[15].o;
	jint temp0 = frame[25].i;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[15].o), (frame[25].i))), (frame[27].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	}
label_78:;
	{
	LINE_NUMBER(1151);
	sp[0].o = frame[16].o;
	jint temp0 = frame[26].i;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[16].o), (frame[26].i))), (frame[29].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(1126);
	INST_IINC(23, 1);
	goto label_52;
	}
label_53:;
	{
	LINE_NUMBER(1155);
	if ((floatCompare((frame[17].f), (jfloat(0)), -1)) <= 0) goto label_80;
	}
	{
	LINE_NUMBER(1156);
	frame[23].f = ((frame[3].f) - (frame[8].f));
	LINE_NUMBER(1157);
	frame[24].i = (jint(0));
	}
label_83:;
	{
	if ((frame[24].i) >= (frame[11].i)) goto label_84;
	}
	{
	LINE_NUMBER(1158);
	frame[23].f = ((frame[23].f) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[15].o), (frame[24].i))));
	LINE_NUMBER(1157);
	INST_IINC(24, 1);
	goto label_83;
	}
label_84:;
	{
	LINE_NUMBER(1159);
	frame[24].f = (jfloat(0));
	LINE_NUMBER(1160);
	frame[25].i = (jint(0));
	LINE_NUMBER(1161);
	frame[26].i = (jint(0));
	}
label_89:;
	{
	if ((frame[26].i) >= (frame[11].i)) goto label_90;
	}
	{
	LINE_NUMBER(1162);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[13].o), (frame[26].i))), (jfloat(0)), -1)) != 0) goto label_92;
	}
	goto label_93;
label_92:;
	{
	LINE_NUMBER(1163);
	frame[27].f = (((frame[23].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[13].o), (frame[26].i)))) / (frame[17].f));
	LINE_NUMBER(1164);
	sp[0].o = frame[15].o;
	jint temp0 = frame[26].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[27].f));
	LINE_NUMBER(1165);
	frame[24].f = ((frame[24].f) + (frame[27].f));
	LINE_NUMBER(1166);
	frame[25].i = (frame[26].i);
	}
label_93:;
	{
	LINE_NUMBER(1161);
	INST_IINC(26, 1);
	goto label_89;
	}
label_90:;
	{
	LINE_NUMBER(1168);
	sp[0].o = frame[15].o;
	jint temp0 = frame[25].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + ((frame[23].f) - (frame[24].f)));
	}
label_80:;
	{
	LINE_NUMBER(1170);
	if ((floatCompare((frame[18].f), (jfloat(0)), -1)) <= 0) goto label_97;
	}
	{
	LINE_NUMBER(1171);
	frame[23].f = ((frame[4].f) - (frame[10].f));
	LINE_NUMBER(1172);
	frame[24].i = (jint(0));
	}
label_100:;
	{
	if ((frame[24].i) >= (frame[12].i)) goto label_101;
	}
	{
	LINE_NUMBER(1173);
	frame[23].f = ((frame[23].f) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[16].o), (frame[24].i))));
	LINE_NUMBER(1172);
	INST_IINC(24, 1);
	goto label_100;
	}
label_101:;
	{
	LINE_NUMBER(1174);
	frame[24].f = (jfloat(0));
	LINE_NUMBER(1175);
	frame[25].i = (jint(0));
	LINE_NUMBER(1176);
	frame[26].i = (jint(0));
	}
label_106:;
	{
	if ((frame[26].i) >= (frame[12].i)) goto label_107;
	}
	{
	LINE_NUMBER(1177);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[14].o), (frame[26].i))), (jfloat(0)), -1)) != 0) goto label_109;
	}
	goto label_110;
label_109:;
	{
	LINE_NUMBER(1178);
	frame[27].f = (((frame[23].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[14].o), (frame[26].i)))) / (frame[18].f));
	LINE_NUMBER(1179);
	sp[0].o = frame[16].o;
	jint temp0 = frame[26].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[27].f));
	LINE_NUMBER(1180);
	frame[24].f = ((frame[24].f) + (frame[27].f));
	LINE_NUMBER(1181);
	frame[25].i = (frame[26].i);
	}
label_110:;
	{
	LINE_NUMBER(1176);
	INST_IINC(26, 1);
	goto label_106;
	}
label_107:;
	{
	LINE_NUMBER(1183);
	sp[0].o = frame[16].o;
	jint temp0 = frame[25].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + ((frame[23].f) - (frame[24].f)));
	}
label_97:;
	{
	LINE_NUMBER(1187);
	frame[23].i = (jint(0));
	}
label_114:;
	{
	if ((frame[23].i) >= (frame[6].i)) goto label_115;
	}
	{
	LINE_NUMBER(1188);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[5].o), (frame[23].i));
	frame[24].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(1189);
	frame[25].i = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_colspan);
	LINE_NUMBER(1190);
	if ((frame[25].i) != (jint(1))) goto label_119;
	}
	goto label_120;
label_119:;
	{
	LINE_NUMBER(1192);
	frame[26].f = (jfloat(0));
	LINE_NUMBER(1193);
	frame[27].i = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_column);
	frame[28].i = ((frame[27].i) + (frame[25].i));
	}
label_123:;
	{
	if ((frame[27].i) >= (frame[28].i)) goto label_124;
	}
	{
	LINE_NUMBER(1194);
	frame[26].f = ((frame[26].f) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[19].o), (frame[27].i))) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[15].o), (frame[27].i)))));
	LINE_NUMBER(1193);
	INST_IINC(27, 1);
	goto label_123;
	}
label_124:;
	{
	LINE_NUMBER(1195);
	jfloat temp0 = frame[26].f;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), (((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_computedPadLeft) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_computedPadRight)));
	frame[26].f = (temp0 - temp1);
	LINE_NUMBER(1197);
	frame[26].f = ((frame[26].f) / (jfloat((frame[25].i))));
	LINE_NUMBER(1198);
	if ((floatCompare((frame[26].f), (jfloat(0)), -1)) <= 0) goto label_120;
	}
	{
	LINE_NUMBER(1199);
	frame[27].i = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_column);
	frame[28].i = ((frame[27].i) + (frame[25].i));
	}
label_131:;
	{
	if ((frame[27].i) >= (frame[28].i)) goto label_120;
	}
	{
	LINE_NUMBER(1200);
	sp[0].o = frame[15].o;
	jint temp0 = frame[27].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[26].f));
	LINE_NUMBER(1199);
	INST_IINC(27, 1);
	goto label_131;
	}
label_120:;
	{
	LINE_NUMBER(1187);
	INST_IINC(23, 1);
	goto label_114;
	}
label_115:;
	{
	LINE_NUMBER(1205);
	frame[23].f = (frame[8].f);
	frame[24].f = (frame[10].f);
	LINE_NUMBER(1206);
	frame[25].i = (jint(0));
	}
label_136:;
	{
	if ((frame[25].i) >= (frame[11].i)) goto label_137;
	}
	{
	LINE_NUMBER(1207);
	frame[23].f = ((frame[23].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[15].o), (frame[25].i))));
	LINE_NUMBER(1206);
	INST_IINC(25, 1);
	goto label_136;
	}
label_137:;
	{
	LINE_NUMBER(1208);
	frame[25].i = (jint(0));
	}
label_140:;
	{
	if ((frame[25].i) >= (frame[12].i)) goto label_141;
	}
	{
	LINE_NUMBER(1209);
	frame[24].f = ((frame[24].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[16].o), (frame[25].i))));
	LINE_NUMBER(1208);
	INST_IINC(25, 1);
	goto label_140;
	}
label_141:;
	{
	LINE_NUMBER(1212);
	frame[25].i = ((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_align);
	LINE_NUMBER(1213);
	frame[26].f = ((frame[1].f) + (frame[7].f));
	LINE_NUMBER(1214);
	if (((frame[25].i) & (16)) == 0) goto label_146;
	}
	{
	LINE_NUMBER(1215);
	frame[26].f = ((frame[26].f) + ((frame[3].f) - (frame[23].f)));
	goto label_148;
	}
label_146:;
	{
	LINE_NUMBER(1216);
	if (((frame[25].i) & (8)) != 0) goto label_148;
	}
	{
	LINE_NUMBER(1217);
	frame[26].f = ((frame[26].f) + (((frame[3].f) - (frame[23].f)) / (jfloat(2))));
	}
label_148:;
	{
	LINE_NUMBER(1219);
	frame[27].f = ((frame[2].f) + (frame[9].f));
	LINE_NUMBER(1220);
	if (((frame[25].i) & (jint(4))) == 0) goto label_151;
	}
	{
	LINE_NUMBER(1221);
	frame[27].f = ((frame[27].f) + ((frame[4].f) - (frame[24].f)));
	goto label_153;
	}
label_151:;
	{
	LINE_NUMBER(1222);
	if (((frame[25].i) & (jint(2))) != 0) goto label_153;
	}
	{
	LINE_NUMBER(1223);
	frame[27].f = ((frame[27].f) + (((frame[4].f) - (frame[24].f)) / (jfloat(2))));
	}
label_153:;
	{
	LINE_NUMBER(1226);
	frame[28].f = (frame[26].f);
	frame[29].f = (frame[27].f);
	LINE_NUMBER(1227);
	frame[30].i = (jint(0));
	}
label_157:;
	{
	if ((frame[30].i) >= (frame[6].i)) goto label_158;
	}
	{
	LINE_NUMBER(1228);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[5].o), (frame[30].i));
	frame[31].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(1230);
	frame[32].f = (jfloat(0));
	LINE_NUMBER(1231);
	frame[33].i = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_column);
	frame[34].i = ((frame[33].i) + ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_colspan));
	}
label_163:;
	{
	if ((frame[33].i) >= (frame[34].i)) goto label_164;
	}
	{
	LINE_NUMBER(1232);
	frame[32].f = ((frame[32].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[15].o), (frame[33].i))));
	LINE_NUMBER(1231);
	INST_IINC(33, 1);
	goto label_163;
	}
label_164:;
	{
	LINE_NUMBER(1233);
	frame[32].f = ((frame[32].f) - (((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_computedPadLeft) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_computedPadRight)));
	LINE_NUMBER(1235);
	frame[28].f = ((frame[28].f) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_computedPadLeft));
	LINE_NUMBER(1237);
	frame[33].f = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_fillX);
	frame[34].f = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_fillY);
	LINE_NUMBER(1238);
	if ((floatCompare((frame[33].f), (jfloat(0)), -1)) <= 0) goto label_171;
	}
	{
	LINE_NUMBER(1239);
	sp[0].o = frame[31].o;
	jfloat temp0 = (frame[32].f) * (frame[33].f);
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Cell_minWidth_R_float) ((void **) nullCheck(ctx, (frame[31].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_R_float])(ctx, (frame[31].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_elementWidth = temp2;
	LINE_NUMBER(1240);
	frame[35].f = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_maxWidth);
	LINE_NUMBER(1241);
	if ((floatCompare((frame[35].f), (jfloat(0)), -1)) <= 0) goto label_171;
	}
	{
	sp[0].o = frame[31].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_elementWidth), (frame[35].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_elementWidth = temp0;
	}
label_171:;
	{
	LINE_NUMBER(1243);
	if ((floatCompare((frame[34].f), (jfloat(0)), -1)) <= 0) goto label_175;
	}
	{
	LINE_NUMBER(1244);
	sp[0].o = frame[31].o;
	jfloat temp0 = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[16].o), ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_row))) * (frame[34].f)) - ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_computedPadTop)) - ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_computedPadBottom);
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Cell_minHeight_R_float) ((void **) nullCheck(ctx, (frame[31].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_minHeight_R_float])(ctx, (frame[31].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_elementHeight = temp2;
	LINE_NUMBER(1245);
	jfloat temp3 = (jfloat)((func_arc_scene_ui_layout_Cell_maxHeight_R_float) ((void **) nullCheck(ctx, (frame[31].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxHeight_R_float])(ctx, (frame[31].o));
	frame[35].f = temp3;
	LINE_NUMBER(1246);
	if ((floatCompare((frame[35].f), (jfloat(0)), -1)) <= 0) goto label_175;
	}
	{
	sp[0].o = frame[31].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_elementHeight), (frame[35].f));
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_elementHeight = temp0;
	}
label_175:;
	{
	LINE_NUMBER(1249);
	frame[25].i = ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_align);
	LINE_NUMBER(1250);
	if (((frame[25].i) & (8)) == 0) goto label_180;
	}
	{
	LINE_NUMBER(1251);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_elementX = (frame[28].f);
	goto label_182;
	}
label_180:;
	{
	LINE_NUMBER(1252);
	if (((frame[25].i) & (16)) == 0) goto label_183;
	}
	{
	LINE_NUMBER(1253);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_elementX = (((frame[28].f) + (frame[32].f)) - ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_elementWidth));
	goto label_182;
	}
label_183:;
	{
	LINE_NUMBER(1255);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_elementX = ((frame[28].f) + (((frame[32].f) - ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_elementWidth)) / (jfloat(2))));
	}
label_182:;
	{
	LINE_NUMBER(1257);
	if (((frame[25].i) & (jint(2))) == 0) goto label_185;
	}
	{
	LINE_NUMBER(1258);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_elementY = ((frame[29].f) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_computedPadTop));
	goto label_187;
	}
label_185:;
	{
	LINE_NUMBER(1259);
	if (((frame[25].i) & (jint(4))) == 0) goto label_188;
	}
	{
	LINE_NUMBER(1260);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_elementY = ((((frame[29].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[16].o), ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_row)))) - ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_elementHeight)) - ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_computedPadBottom));
	goto label_187;
	}
label_188:;
	{
	LINE_NUMBER(1262);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_elementY = ((frame[29].f) + ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[16].o), ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_row))) - ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_elementHeight)) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_computedPadTop)) - ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_computedPadBottom)) / (jfloat(2))));
	}
label_187:;
	{
	LINE_NUMBER(1264);
	if (((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_endRow) == 0) goto label_190;
	}
	{
	LINE_NUMBER(1265);
	frame[28].f = (frame[26].f);
	LINE_NUMBER(1266);
	frame[29].f = ((frame[29].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[16].o), ((jint)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_row))));
	goto label_193;
	}
label_190:;
	{
	LINE_NUMBER(1268);
	frame[28].f = ((frame[28].f) + ((frame[32].f) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[31].o)))->F_computedPadRight)));
	}
label_193:;
	{
	LINE_NUMBER(1227);
	INST_IINC(30, 1);
	goto label_157;
	}
label_158:;
	LINE_NUMBER(1270);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_scene_ui_layout_Table_lambda$slider$0_arc_func_Floatc_arc_scene_ui_Slider(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:lambda$slider$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Table(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(592);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Slider_getValue_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Slider_getValue_R_float])(ctx, (frame[1].o));
	((func_arc_func_Floatc_get_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc, INDEX_arc_func_Floatc_get_float, sp[0].o))(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_ui_layout_Table_lambda$buttonRow$0_arc_scene_ui_TextButton_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:lambda$buttonRow$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Table(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(529);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_scene_ui_TextButton_isDisabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextButton_isDisabled_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_gray;
	goto label_2;
label_1:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_scene_ui_layout_Table_lambda$area$1_arc_func_Cons_arc_scene_ui_TextArea(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:lambda$area$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Table(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(501);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_scene_ui_TextArea_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextArea_getText_R_java_lang_String])(ctx, (frame[1].o));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_ui_layout_Table_lambda$area$0_arc_func_Cons_arc_scene_ui_TextArea(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:lambda$area$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Table(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(495);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_scene_ui_TextArea_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextArea_getText_R_java_lang_String])(ctx, (frame[1].o));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_ui_layout_Table_lambda$imageDraw$0_arc_func_Prov_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:lambda$imageDraw$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Table(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(396);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	((func_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable])(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_style_Drawable, sp[1].o)));
	LINE_NUMBER(397);
	((func_arc_scene_ui_Image_layout) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Image_layout])(ctx, (frame[1].o));
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_ui_layout_Table_lambda$image$0_arc_func_Prov_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:lambda$image$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Table(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((func_arc_scene_ui_Image_getDrawable_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Image_getDrawable_R_arc_scene_style_Drawable])(ctx, (frame[1].o));
	sp[0].o = checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o);
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	((func_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, (checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, sp[1].o)));
	LINE_NUMBER(390);
	((func_arc_scene_ui_Image_layout) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Image_layout])(ctx, (frame[1].o));
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_scene_ui_layout_Table_lambda$spacerY$0_R_float(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:lambda$spacerY$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Table(ctx);
	{
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_scene_ui_layout_Table_lambda$spacerX$0_R_float(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:lambda$spacerX$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Table(ctx);
	{
	LINE_NUMBER(380);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jbool SM_arc_scene_ui_layout_Table_lambda$collapser$1_arc_func_Boolp_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:lambda$collapser$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Table(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(249);
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
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

jbool SM_arc_scene_ui_layout_Table_lambda$collapser$0_arc_func_Boolp_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:lambda$collapser$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Table(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(243);
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
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

void clinit_arc_scene_ui_layout_Table(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_layout_WidgetGroup(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Table:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Table(ctx);
	{
	LINE_NUMBER(33);
	sp[0].o = ((jobject) &class_arc_scene_ui_layout_Cell);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_layout_Table_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_scene_ui_layout_Table_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_scene_ui_layout_Table_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_get_java_lang_Class_arc_func_Prov_R_arc_util_pooling_Pool(ctx, sp[0].o, sp[1].o);
	clinit_arc_scene_ui_layout_Table(ctx);
	SF_arc_scene_ui_layout_Table_cellPool = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_layout_Table[] {
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
	(void *) M_arc_scene_ui_layout_Table_draw,
	(void *) M_arc_scene_Group_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_hit_float_float_boolean_R_arc_scene_Element,
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
	(void *) M_arc_scene_Group_setScene_arc_scene_Scene,
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
};

static jclass innerClasses[] {
	&class_arc_scene_ui_layout_Table$DrawRect,
};

static FieldMetadata fields[] {
	{ "columnWeightedWidth", getArrayClass(&class_float, 1), (intptr_t) &SF_arc_scene_ui_layout_Table_columnWeightedWidth, "[F", 10 },
	{ "rowWeightedHeight", getArrayClass(&class_float, 1), (intptr_t) &SF_arc_scene_ui_layout_Table_rowWeightedHeight, "[F", 10 },
	{ "cellPool", &class_arc_util_pooling_Pool, (intptr_t) &SF_arc_scene_ui_layout_Table_cellPool, "Larc/util/pooling/Pool;", 10 },
	{ "cells", &class_arc_struct_Seq, offsetof(arc_scene_ui_layout_Table, F_cells), "Larc/struct/Seq;", 20 },
	{ "cellDefaults", &class_arc_scene_ui_layout_Cell, offsetof(arc_scene_ui_layout_Table, F_cellDefaults), "Larc/scene/ui/layout/Cell;", 20 },
	{ "marginTop", &class_float, offsetof(arc_scene_ui_layout_Table, F_marginTop), "F", 0 },
	{ "marginLeft", &class_float, offsetof(arc_scene_ui_layout_Table, F_marginLeft), "F", 0 },
	{ "marginBot", &class_float, offsetof(arc_scene_ui_layout_Table, F_marginBot), "F", 0 },
	{ "marginRight", &class_float, offsetof(arc_scene_ui_layout_Table, F_marginRight), "F", 0 },
	{ "align", &class_int, offsetof(arc_scene_ui_layout_Table, F_align), "I", 0 },
	{ "background", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_layout_Table, F_background), "Larc/scene/style/Drawable;", 0 },
	{ "round", &class_boolean, offsetof(arc_scene_ui_layout_Table, F_round), "Z", 0 },
	{ "columns", &class_int, offsetof(arc_scene_ui_layout_Table, F_columns), "I", 4 },
	{ "rows", &class_int, offsetof(arc_scene_ui_layout_Table, F_rows), "I", 4 },
	{ "implicitEndRow", &class_boolean, offsetof(arc_scene_ui_layout_Table, F_implicitEndRow), "Z", 4 },
	{ "rowDefaults", &class_arc_scene_ui_layout_Cell, offsetof(arc_scene_ui_layout_Table, F_rowDefaults), "Larc/scene/ui/layout/Cell;", 4 },
	{ "sizeInvalid", &class_boolean, offsetof(arc_scene_ui_layout_Table, F_sizeInvalid), "Z", 4 },
	{ "columnMinWidth", getArrayClass(&class_float, 1), offsetof(arc_scene_ui_layout_Table, F_columnMinWidth), "[F", 4 },
	{ "rowMinHeight", getArrayClass(&class_float, 1), offsetof(arc_scene_ui_layout_Table, F_rowMinHeight), "[F", 4 },
	{ "columnPrefWidth", getArrayClass(&class_float, 1), offsetof(arc_scene_ui_layout_Table, F_columnPrefWidth), "[F", 4 },
	{ "rowPrefHeight", getArrayClass(&class_float, 1), offsetof(arc_scene_ui_layout_Table, F_rowPrefHeight), "[F", 4 },
	{ "tableMinWidth", &class_float, offsetof(arc_scene_ui_layout_Table, F_tableMinWidth), "F", 4 },
	{ "tableMinHeight", &class_float, offsetof(arc_scene_ui_layout_Table, F_tableMinHeight), "F", 4 },
	{ "tablePrefWidth", &class_float, offsetof(arc_scene_ui_layout_Table, F_tablePrefWidth), "F", 4 },
	{ "tablePrefHeight", &class_float, offsetof(arc_scene_ui_layout_Table, F_tablePrefHeight), "F", 4 },
	{ "columnWidth", getArrayClass(&class_float, 1), offsetof(arc_scene_ui_layout_Table, F_columnWidth), "[F", 4 },
	{ "rowHeight", getArrayClass(&class_float, 1), offsetof(arc_scene_ui_layout_Table, F_rowHeight), "[F", 4 },
	{ "expandWidth", getArrayClass(&class_float, 1), offsetof(arc_scene_ui_layout_Table, F_expandWidth), "[F", 4 },
	{ "expandHeight", getArrayClass(&class_float, 1), offsetof(arc_scene_ui_layout_Table, F_expandHeight), "[F", 4 },
	{ "clip", &class_boolean, offsetof(arc_scene_ui_layout_Table, F_clip), "Z", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_layout_Table, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_layout_Table_arc_scene_style_Drawable, 0, "(Larc/scene/style/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_layout_Table_arc_scene_style_Drawable_arc_func_Cons, 0, "(Larc/scene/style/Drawable;Larc/func/Cons;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_layout_Table_arc_func_Cons, 0, "(Larc/func/Cons;)V", 1 },
	{ "obtainCell", (intptr_t) M_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 4 },
	{ "fill", (intptr_t) M_arc_scene_ui_layout_Table_fill_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Table_fill_R_arc_scene_ui_layout_Table, "()Larc/scene/ui/layout/Table;", 1 },
	{ "draw", (intptr_t) M_arc_scene_ui_layout_Table_draw, VTABLE_arc_scene_ui_layout_Table_draw, "()V", 1 },
	{ "drawBackground", (intptr_t) M_arc_scene_ui_layout_Table_drawBackground_float_float, VTABLE_arc_scene_ui_layout_Table_drawBackground_float_float, "(FF)V", 4 },
	{ "background", (intptr_t) M_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table, "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Table;", 1 },
	{ "getBackground", (intptr_t) M_arc_scene_ui_layout_Table_getBackground_R_arc_scene_style_Drawable, VTABLE_arc_scene_ui_layout_Table_getBackground_R_arc_scene_style_Drawable, "()Larc/scene/style/Drawable;", 1 },
	{ "setBackground", (intptr_t) M_arc_scene_ui_layout_Table_setBackground_arc_scene_style_Drawable, VTABLE_arc_scene_ui_layout_Table_setBackground_arc_scene_style_Drawable, "(Larc/scene/style/Drawable;)V", 1 },
	{ "hit", (intptr_t) M_arc_scene_ui_layout_Table_hit_float_float_boolean_R_arc_scene_Element, VTABLE_arc_scene_ui_layout_Table_hit_float_float_boolean_R_arc_scene_Element, "(FFZ)Larc/scene/Element;", 1 },
	{ "getClip", (intptr_t) M_arc_scene_ui_layout_Table_getClip_R_boolean, VTABLE_arc_scene_ui_layout_Table_getClip_R_boolean, "()Z", 1 },
	{ "setClip", (intptr_t) M_arc_scene_ui_layout_Table_setClip_boolean, VTABLE_arc_scene_ui_layout_Table_setClip_boolean, "(Z)V", 1 },
	{ "invalidate", (intptr_t) M_arc_scene_ui_layout_Table_invalidate, VTABLE_arc_scene_ui_layout_Table_invalidate, "()V", 1 },
	{ "add", (intptr_t) M_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell, "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;", 1 },
	{ "add", (intptr_t) M_arc_scene_ui_layout_Table_add_Array1_arc_scene_Element, VTABLE_arc_scene_ui_layout_Table_add_Array1_arc_scene_Element, "([Larc/scene/Element;)V", 129 },
	{ "collapser", (intptr_t) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell, "(Larc/func/Cons;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;", 1 },
	{ "collapser", (intptr_t) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell, "(Larc/scene/ui/layout/Table;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;", 1 },
	{ "collapser", (intptr_t) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell, "(Larc/func/Cons;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;", 1 },
	{ "collapser", (intptr_t) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell, "(Larc/scene/ui/layout/Table;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;", 1 },
	{ "table", (intptr_t) M_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "table", (intptr_t) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell, "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "table", (intptr_t) M_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 1 },
	{ "wrapTable", (intptr_t) M_arc_scene_ui_layout_Table_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 1 },
	{ "table", (intptr_t) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Larc/scene/style/Drawable;Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 1 },
	{ "table", (intptr_t) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Larc/scene/style/Drawable;ILarc/func/Cons;)Larc/scene/ui/layout/Cell;", 1 },
	{ "label", (intptr_t) M_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell, "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;", 1 },
	{ "labelWrap", (intptr_t) M_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell, "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;", 1 },
	{ "labelWrap", (intptr_t) M_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;)Larc/scene/ui/layout/Cell;", 1 },
	{ "pane", (intptr_t) M_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 1 },
	{ "pane", (intptr_t) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 1 },
	{ "pane", (intptr_t) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell, "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/scene/Element;)Larc/scene/ui/layout/Cell;", 1 },
	{ "pane", (intptr_t) M_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell, "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;", 1 },
	{ "add", (intptr_t) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell, "(Ljava/lang/CharSequence;)Larc/scene/ui/layout/Cell;", 1 },
	{ "add", (intptr_t) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell, "(Ljava/lang/CharSequence;F)Larc/scene/ui/layout/Cell;", 1 },
	{ "add", (intptr_t) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell, "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;F)Larc/scene/ui/layout/Cell;", 1 },
	{ "add", (intptr_t) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell, "(Ljava/lang/CharSequence;Larc/graphics/Color;F)Larc/scene/ui/layout/Cell;", 1 },
	{ "add", (intptr_t) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell, "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;)Larc/scene/ui/layout/Cell;", 1 },
	{ "add", (intptr_t) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell, "(Ljava/lang/CharSequence;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;", 1 },
	{ "add", (intptr_t) M_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "stack", (intptr_t) M_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell, "([Larc/scene/Element;)Larc/scene/ui/layout/Cell;", 129 },
	{ "spacer", (intptr_t) M_arc_scene_ui_layout_Table_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell, "(Larc/func/Floatp;Larc/func/Floatp;)Larc/scene/ui/layout/Cell;", 1 },
	{ "spacerX", (intptr_t) M_arc_scene_ui_layout_Table_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell, "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;", 1 },
	{ "spacerY", (intptr_t) M_arc_scene_ui_layout_Table_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell, "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;", 1 },
	{ "image", (intptr_t) M_arc_scene_ui_layout_Table_image_arc_func_Prov_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_image_arc_func_Prov_R_arc_scene_ui_layout_Cell, "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;", 1 },
	{ "imageDraw", (intptr_t) M_arc_scene_ui_layout_Table_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell, "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;", 1 },
	{ "image", (intptr_t) M_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "image", (intptr_t) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell, "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "image", (intptr_t) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell, "(Larc/scene/style/Drawable;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;", 1 },
	{ "image", (intptr_t) M_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell, "(Larc/graphics/g2d/TextureRegion;)Larc/scene/ui/layout/Cell;", 1 },
	{ "check", (intptr_t) M_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Larc/func/Boolc;)Larc/scene/ui/layout/Cell;", 1 },
	{ "check", (intptr_t) M_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;ZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;", 1 },
	{ "check", (intptr_t) M_arc_scene_ui_layout_Table_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;FZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;", 1 },
	{ "button", (intptr_t) M_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell, "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "button", (intptr_t) M_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell, "(Larc/func/Cons;Larc/scene/ui/Button$ButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "button", (intptr_t) M_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "button", (intptr_t) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "button", (intptr_t) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell, "(Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "button", (intptr_t) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell, "(Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "button", (intptr_t) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell, "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "button", (intptr_t) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell, "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "field", (intptr_t) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 1 },
	{ "area", (intptr_t) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 1 },
	{ "area", (intptr_t) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 1 },
	{ "field", (intptr_t) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldFilter;Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 1 },
	{ "field", (intptr_t) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;", 1 },
	{ "rect", (intptr_t) M_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell, "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/ui/layout/Cell;", 1 },
	{ "buttonRow", (intptr_t) M_arc_scene_ui_layout_Table_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "button", (intptr_t) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "button", (intptr_t) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "button", (intptr_t) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "button", (intptr_t) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "buttonCenter", (intptr_t) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "buttonCenter", (intptr_t) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "buttonCenter", (intptr_t) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell, "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;", 1 },
	{ "slider", (intptr_t) M_arc_scene_ui_layout_Table_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell, "(FFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;", 1 },
	{ "slider", (intptr_t) M_arc_scene_ui_layout_Table_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell, "(FFFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;", 1 },
	{ "slider", (intptr_t) M_arc_scene_ui_layout_Table_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell, "(FFFFZLarc/func/Floatc;)Larc/scene/ui/layout/Cell;", 1 },
	{ "removeChild", (intptr_t) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_R_boolean, VTABLE_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_R_boolean, "(Larc/scene/Element;)Z", 1 },
	{ "removeChild", (intptr_t) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_boolean_R_boolean, VTABLE_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_boolean_R_boolean, "(Larc/scene/Element;Z)Z", 1 },
	{ "clearChildren", (intptr_t) M_arc_scene_ui_layout_Table_clearChildren, VTABLE_arc_scene_ui_layout_Table_clearChildren, "()V", 1 },
	{ "reset", (intptr_t) M_arc_scene_ui_layout_Table_reset, VTABLE_arc_scene_ui_layout_Table_reset, "()V", 1 },
	{ "row", (intptr_t) M_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table, "()Larc/scene/ui/layout/Table;", 1 },
	{ "endRow", (intptr_t) M_arc_scene_ui_layout_Table_endRow, VTABLE_arc_scene_ui_layout_Table_endRow, "()V", 2 },
	{ "getCell", (intptr_t) M_arc_scene_ui_layout_Table_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell, "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;", 1 },
	{ "getCells", (intptr_t) M_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq, VTABLE_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getPrefWidth", (intptr_t) M_arc_scene_ui_layout_Table_getPrefWidth_R_float, VTABLE_arc_scene_ui_layout_Table_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_arc_scene_ui_layout_Table_getPrefHeight_R_float, VTABLE_arc_scene_ui_layout_Table_getPrefHeight_R_float, "()F", 1 },
	{ "getMinWidth", (intptr_t) M_arc_scene_ui_layout_Table_getMinWidth_R_float, VTABLE_arc_scene_ui_layout_Table_getMinWidth_R_float, "()F", 1 },
	{ "getMinHeight", (intptr_t) M_arc_scene_ui_layout_Table_getMinHeight_R_float, VTABLE_arc_scene_ui_layout_Table_getMinHeight_R_float, "()F", 1 },
	{ "defaults", (intptr_t) M_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "margin", (intptr_t) M_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table, "(F)Larc/scene/ui/layout/Table;", 1 },
	{ "margin", (intptr_t) M_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table, "(FFFF)Larc/scene/ui/layout/Table;", 1 },
	{ "marginTop", (intptr_t) M_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table, "(F)Larc/scene/ui/layout/Table;", 1 },
	{ "marginLeft", (intptr_t) M_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table, "(F)Larc/scene/ui/layout/Table;", 1 },
	{ "marginBottom", (intptr_t) M_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table, "(F)Larc/scene/ui/layout/Table;", 1 },
	{ "marginRight", (intptr_t) M_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table, "(F)Larc/scene/ui/layout/Table;", 1 },
	{ "align", (intptr_t) M_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table, "(I)Larc/scene/ui/layout/Table;", 1 },
	{ "center", (intptr_t) M_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table, "()Larc/scene/ui/layout/Table;", 1 },
	{ "top", (intptr_t) M_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table, "()Larc/scene/ui/layout/Table;", 1 },
	{ "left", (intptr_t) M_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table, "()Larc/scene/ui/layout/Table;", 1 },
	{ "bottom", (intptr_t) M_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table, "()Larc/scene/ui/layout/Table;", 1 },
	{ "right", (intptr_t) M_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table, "()Larc/scene/ui/layout/Table;", 1 },
	{ "getMarginTop", (intptr_t) M_arc_scene_ui_layout_Table_getMarginTop_R_float, VTABLE_arc_scene_ui_layout_Table_getMarginTop_R_float, "()F", 1 },
	{ "getMarginLeft", (intptr_t) M_arc_scene_ui_layout_Table_getMarginLeft_R_float, VTABLE_arc_scene_ui_layout_Table_getMarginLeft_R_float, "()F", 1 },
	{ "getMarginBottom", (intptr_t) M_arc_scene_ui_layout_Table_getMarginBottom_R_float, VTABLE_arc_scene_ui_layout_Table_getMarginBottom_R_float, "()F", 1 },
	{ "getMarginRight", (intptr_t) M_arc_scene_ui_layout_Table_getMarginRight_R_float, VTABLE_arc_scene_ui_layout_Table_getMarginRight_R_float, "()F", 1 },
	{ "getAlign", (intptr_t) M_arc_scene_ui_layout_Table_getAlign_R_int, VTABLE_arc_scene_ui_layout_Table_getAlign_R_int, "()I", 1 },
	{ "getRow", (intptr_t) M_arc_scene_ui_layout_Table_getRow_float_R_int, VTABLE_arc_scene_ui_layout_Table_getRow_float_R_int, "(F)I", 1 },
	{ "setRound", (intptr_t) M_arc_scene_ui_layout_Table_setRound_boolean, VTABLE_arc_scene_ui_layout_Table_setRound_boolean, "(Z)V", 1 },
	{ "getRows", (intptr_t) M_arc_scene_ui_layout_Table_getRows_R_int, VTABLE_arc_scene_ui_layout_Table_getRows_R_int, "()I", 1 },
	{ "getColumns", (intptr_t) M_arc_scene_ui_layout_Table_getColumns_R_int, VTABLE_arc_scene_ui_layout_Table_getColumns_R_int, "()I", 1 },
	{ "getRowHeight", (intptr_t) M_arc_scene_ui_layout_Table_getRowHeight_int_R_float, VTABLE_arc_scene_ui_layout_Table_getRowHeight_int_R_float, "(I)F", 1 },
	{ "getColumnWidth", (intptr_t) M_arc_scene_ui_layout_Table_getColumnWidth_int_R_float, VTABLE_arc_scene_ui_layout_Table_getColumnWidth_int_R_float, "(I)F", 1 },
	{ "ensureSize", (intptr_t) M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float, VTABLE_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float, "([FI)[F", 2 },
	{ "layout", (intptr_t) M_arc_scene_ui_layout_Table_layout, VTABLE_arc_scene_ui_layout_Table_layout, "()V", 1 },
	{ "computeSize", (intptr_t) M_arc_scene_ui_layout_Table_computeSize, VTABLE_arc_scene_ui_layout_Table_computeSize, "()V", 4 },
	{ "layout", (intptr_t) M_arc_scene_ui_layout_Table_layout_float_float_float_float, VTABLE_arc_scene_ui_layout_Table_layout_float_float_float_float, "(FFFF)V", 4 },
	{ "lambda$slider$0", (intptr_t) SM_arc_scene_ui_layout_Table_lambda$slider$0_arc_func_Floatc_arc_scene_ui_Slider, 0, "(Larc/func/Floatc;Larc/scene/ui/Slider;)V", 4106 },
	{ "lambda$buttonRow$0", (intptr_t) SM_arc_scene_ui_layout_Table_lambda$buttonRow$0_arc_scene_ui_TextButton_arc_scene_ui_Image, 0, "(Larc/scene/ui/TextButton;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$area$1", (intptr_t) SM_arc_scene_ui_layout_Table_lambda$area$1_arc_func_Cons_arc_scene_ui_TextArea, 0, "(Larc/func/Cons;Larc/scene/ui/TextArea;)V", 4106 },
	{ "lambda$area$0", (intptr_t) SM_arc_scene_ui_layout_Table_lambda$area$0_arc_func_Cons_arc_scene_ui_TextArea, 0, "(Larc/func/Cons;Larc/scene/ui/TextArea;)V", 4106 },
	{ "lambda$imageDraw$0", (intptr_t) SM_arc_scene_ui_layout_Table_lambda$imageDraw$0_arc_func_Prov_arc_scene_ui_Image, 0, "(Larc/func/Prov;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$image$0", (intptr_t) SM_arc_scene_ui_layout_Table_lambda$image$0_arc_func_Prov_arc_scene_ui_Image, 0, "(Larc/func/Prov;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$spacerY$0", (intptr_t) SM_arc_scene_ui_layout_Table_lambda$spacerY$0_R_float, 0, "()F", 4106 },
	{ "lambda$spacerX$0", (intptr_t) SM_arc_scene_ui_layout_Table_lambda$spacerX$0_R_float, 0, "()F", 4106 },
	{ "lambda$collapser$1", (intptr_t) SM_arc_scene_ui_layout_Table_lambda$collapser$1_arc_func_Boolp_R_boolean, 0, "(Larc/func/Boolp;)Z", 4106 },
	{ "lambda$collapser$0", (intptr_t) SM_arc_scene_ui_layout_Table_lambda$collapser$0_arc_func_Boolp_R_boolean, 0, "(Larc/func/Boolp;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_scene_ui_layout_Table, 0, "()V", 8 },
};

Class class_arc_scene_ui_layout_Table{
		.nativeName = (intptr_t) "arc/scene/ui/layout/Table",
		.parentClass = (intptr_t) &class_arc_scene_ui_layout_WidgetGroup,
		.size = sizeof(arc_scene_ui_layout_Table),
		.classVtable = (intptr_t) vtable_arc_scene_ui_layout_Table,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_layout_Table,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_layout_Table,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 30,
		.nativeFields = (intptr_t) fields,
		.methodCount = 130,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 255,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_layout_Table = registerClass(&class_arc_scene_ui_layout_Table);

}
