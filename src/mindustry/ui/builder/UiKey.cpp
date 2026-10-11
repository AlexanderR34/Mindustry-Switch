#include "mindustry/ui/builder/UiKey.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "mindustry/ui/builder/UiKey.h"

extern "C" {

jobject SF_mindustry_ui_builder_UiKey_table;
jobject SF_mindustry_ui_builder_UiKey_pane;
jobject SF_mindustry_ui_builder_UiKey_stack;
jobject SF_mindustry_ui_builder_UiKey_label;
jobject SF_mindustry_ui_builder_UiKey_image;
jobject SF_mindustry_ui_builder_UiKey_button;
jobject SF_mindustry_ui_builder_UiKey_imageButton;
jobject SF_mindustry_ui_builder_UiKey_field;
jobject SF_mindustry_ui_builder_UiKey_check;
jobject SF_mindustry_ui_builder_UiKey_slider;
jobject SF_mindustry_ui_builder_UiKey_space;
jobject SF_mindustry_ui_builder_UiKey_defaults;
jobject SF_mindustry_ui_builder_UiKey_buttonTable;
jobject SF_mindustry_ui_builder_UiKey_row;
jobject SF_mindustry_ui_builder_UiKey_text;
jobject SF_mindustry_ui_builder_UiKey_wrap;
jobject SF_mindustry_ui_builder_UiKey_region;
jobject SF_mindustry_ui_builder_UiKey_icon;
jobject SF_mindustry_ui_builder_UiKey_placeholder;
jobject SF_mindustry_ui_builder_UiKey_scaling;
jobject SF_mindustry_ui_builder_UiKey_background;
jobject SF_mindustry_ui_builder_UiKey_margin;
jobject SF_mindustry_ui_builder_UiKey_id;
jobject SF_mindustry_ui_builder_UiKey_hint;
jobject SF_mindustry_ui_builder_UiKey_maxLength;
jobject SF_mindustry_ui_builder_UiKey_checked;
jobject SF_mindustry_ui_builder_UiKey_min;
jobject SF_mindustry_ui_builder_UiKey_max;
jobject SF_mindustry_ui_builder_UiKey_step;
jobject SF_mindustry_ui_builder_UiKey_defaultValue;
jobject SF_mindustry_ui_builder_UiKey_clicked;
jobject SF_mindustry_ui_builder_UiKey_enter;
jobject SF_mindustry_ui_builder_UiKey_style;
jobject SF_mindustry_ui_builder_UiKey_group;
jobject SF_mindustry_ui_builder_UiKey_condition;
jobject SF_mindustry_ui_builder_UiKey_color;
jobject SF_mindustry_ui_builder_UiKey_disabled;
jobject SF_mindustry_ui_builder_UiKey_grow;
jobject SF_mindustry_ui_builder_UiKey_growX;
jobject SF_mindustry_ui_builder_UiKey_growY;
jobject SF_mindustry_ui_builder_UiKey_fill;
jobject SF_mindustry_ui_builder_UiKey_fillX;
jobject SF_mindustry_ui_builder_UiKey_fillY;
jobject SF_mindustry_ui_builder_UiKey_expand;
jobject SF_mindustry_ui_builder_UiKey_expandX;
jobject SF_mindustry_ui_builder_UiKey_expandY;
jobject SF_mindustry_ui_builder_UiKey_width;
jobject SF_mindustry_ui_builder_UiKey_height;
jobject SF_mindustry_ui_builder_UiKey_size;
jobject SF_mindustry_ui_builder_UiKey_minWidth;
jobject SF_mindustry_ui_builder_UiKey_maxWidth;
jobject SF_mindustry_ui_builder_UiKey_minHeight;
jobject SF_mindustry_ui_builder_UiKey_maxHeight;
jobject SF_mindustry_ui_builder_UiKey_pad;
jobject SF_mindustry_ui_builder_UiKey_padTop;
jobject SF_mindustry_ui_builder_UiKey_padLeft;
jobject SF_mindustry_ui_builder_UiKey_padBottom;
jobject SF_mindustry_ui_builder_UiKey_padRight;
jobject SF_mindustry_ui_builder_UiKey_align;
jobject SF_mindustry_ui_builder_UiKey_labelAlign;
jobject SF_mindustry_ui_builder_UiKey_colspan;
jobject SF_mindustry_ui_builder_UiKey_uniform;
jobject SF_mindustry_ui_builder_UiKey_uniformX;
jobject SF_mindustry_ui_builder_UiKey_uniformY;
jobject SF_mindustry_ui_builder_UiKey_all;
jobject SF_mindustry_ui_builder_UiKey_$VALUES;

void mark_mindustry_ui_builder_UiKey(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_builder_UiKey_table)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_table)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_table, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_pane)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_pane)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_pane, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_stack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_stack)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_stack, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_label)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_label)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_label, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_image)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_image)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_image, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_button)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_button)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_button, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_imageButton)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_imageButton)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_imageButton, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_field)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_field)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_field, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_check)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_check)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_check, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_slider)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_slider)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_slider, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_space)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_space)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_space, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_defaults)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_defaults)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_defaults, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_buttonTable)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_buttonTable)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_buttonTable, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_row)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_row)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_row, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_text)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_text)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_text, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_wrap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_wrap)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_wrap, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_region)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_region)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_region, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_icon)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_icon)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_icon, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_placeholder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_placeholder)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_placeholder, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_scaling)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_scaling)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_scaling, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_background)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_background)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_background, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_margin)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_margin)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_margin, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_id)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_id)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_id, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_hint)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_hint)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_hint, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_maxLength)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_maxLength)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_maxLength, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_checked)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_checked)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_checked, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_min)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_min)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_min, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_max)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_max)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_max, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_step)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_step)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_step, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_defaultValue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_defaultValue)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_defaultValue, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_clicked)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_clicked)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_clicked, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_enter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_enter)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_enter, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_style)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_style)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_style, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_group)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_group)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_group, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_condition)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_condition)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_condition, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_color)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_color)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_color, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_disabled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_disabled)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_disabled, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_grow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_grow)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_grow, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_growX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_growX)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_growX, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_growY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_growY)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_growY, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_fill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_fill)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_fill, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_fillX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_fillX)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_fillX, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_fillY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_fillY)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_fillY, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_expand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_expand)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_expand, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_expandX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_expandX)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_expandX, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_expandY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_expandY)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_expandY, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_width)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_width)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_width, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_height)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_height)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_height, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_size)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_size)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_size, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_minWidth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_minWidth)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_minWidth, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_maxWidth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_maxWidth)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_maxWidth, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_minHeight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_minHeight)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_minHeight, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_maxHeight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_maxHeight)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_maxHeight, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_pad)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_pad)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_pad, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_padTop)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_padTop)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_padTop, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_padLeft)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_padLeft)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_padLeft, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_padBottom)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_padBottom)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_padBottom, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_padRight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_padRight)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_padRight, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_align)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_align)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_align, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_labelAlign)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_labelAlign)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_labelAlign, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_colspan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_colspan)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_colspan, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_uniform)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_uniform)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_uniform, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_uniformX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_uniformX)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_uniformX, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_uniformY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_uniformY)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_uniformY, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_all)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_all, mark, depth + 1);
		if (SF_mindustry_ui_builder_UiKey_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiKey_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiKey_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_builder_UiKey *) object;
}

jobject SM_mindustry_ui_builder_UiKey_values_R_Array1_mindustry_ui_builder_UiKey(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiKey:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiKey(ctx);
	{
	LINE_NUMBER(4);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiKey_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_ui_builder_UiKey, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiKey_valueOf_java_lang_String_R_mindustry_ui_builder_UiKey(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiKey:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiKey(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(4);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_ui_builder_UiKey)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ui_builder_UiKey, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_builder_UiKey_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiKey:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiKey(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(4);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiKey_$values_R_Array1_mindustry_ui_builder_UiKey(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiKey:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiKey(ctx);
	{
	LINE_NUMBER(4);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ui_builder_UiKey, (64));
	jint temp0 = jint(0);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_table;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_pane;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_stack;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_label;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_image;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_button;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_imageButton;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_field;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_check;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_slider;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_space;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_defaults;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_buttonTable;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_row;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_text;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_wrap;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_region;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_icon;
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 18;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_placeholder;
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 19;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_scaling;
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 20;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_background;
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 21;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_margin;
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = 22;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_id;
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = 23;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_hint;
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = 24;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_maxLength;
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp25 = 25;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_checked;
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp26 = 26;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_min;
	ARRAY_ACCESS(jobject, sp[0].o, temp26) = sp[1].o;
	jint temp27 = 27;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_max;
	ARRAY_ACCESS(jobject, sp[0].o, temp27) = sp[1].o;
	jint temp28 = 28;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_step;
	ARRAY_ACCESS(jobject, sp[0].o, temp28) = sp[1].o;
	jint temp29 = 29;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_defaultValue;
	ARRAY_ACCESS(jobject, sp[0].o, temp29) = sp[1].o;
	jint temp30 = 30;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_clicked;
	ARRAY_ACCESS(jobject, sp[0].o, temp30) = sp[1].o;
	jint temp31 = 31;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_enter;
	ARRAY_ACCESS(jobject, sp[0].o, temp31) = sp[1].o;
	jint temp32 = 32;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_style;
	ARRAY_ACCESS(jobject, sp[0].o, temp32) = sp[1].o;
	jint temp33 = 33;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_group;
	ARRAY_ACCESS(jobject, sp[0].o, temp33) = sp[1].o;
	jint temp34 = 34;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_condition;
	ARRAY_ACCESS(jobject, sp[0].o, temp34) = sp[1].o;
	jint temp35 = 35;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_color;
	ARRAY_ACCESS(jobject, sp[0].o, temp35) = sp[1].o;
	jint temp36 = 36;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_disabled;
	ARRAY_ACCESS(jobject, sp[0].o, temp36) = sp[1].o;
	jint temp37 = 37;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_grow;
	ARRAY_ACCESS(jobject, sp[0].o, temp37) = sp[1].o;
	jint temp38 = 38;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_growX;
	ARRAY_ACCESS(jobject, sp[0].o, temp38) = sp[1].o;
	jint temp39 = 39;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_growY;
	ARRAY_ACCESS(jobject, sp[0].o, temp39) = sp[1].o;
	jint temp40 = 40;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_fill;
	ARRAY_ACCESS(jobject, sp[0].o, temp40) = sp[1].o;
	jint temp41 = 41;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_fillX;
	ARRAY_ACCESS(jobject, sp[0].o, temp41) = sp[1].o;
	jint temp42 = 42;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_fillY;
	ARRAY_ACCESS(jobject, sp[0].o, temp42) = sp[1].o;
	jint temp43 = 43;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_expand;
	ARRAY_ACCESS(jobject, sp[0].o, temp43) = sp[1].o;
	jint temp44 = 44;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_expandX;
	ARRAY_ACCESS(jobject, sp[0].o, temp44) = sp[1].o;
	jint temp45 = 45;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_expandY;
	ARRAY_ACCESS(jobject, sp[0].o, temp45) = sp[1].o;
	jint temp46 = 46;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_width;
	ARRAY_ACCESS(jobject, sp[0].o, temp46) = sp[1].o;
	jint temp47 = 47;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_height;
	ARRAY_ACCESS(jobject, sp[0].o, temp47) = sp[1].o;
	jint temp48 = 48;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_size;
	ARRAY_ACCESS(jobject, sp[0].o, temp48) = sp[1].o;
	jint temp49 = 49;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_minWidth;
	ARRAY_ACCESS(jobject, sp[0].o, temp49) = sp[1].o;
	jint temp50 = 50;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_maxWidth;
	ARRAY_ACCESS(jobject, sp[0].o, temp50) = sp[1].o;
	jint temp51 = 51;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_minHeight;
	ARRAY_ACCESS(jobject, sp[0].o, temp51) = sp[1].o;
	jint temp52 = 52;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_maxHeight;
	ARRAY_ACCESS(jobject, sp[0].o, temp52) = sp[1].o;
	jint temp53 = 53;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_pad;
	ARRAY_ACCESS(jobject, sp[0].o, temp53) = sp[1].o;
	jint temp54 = 54;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_padTop;
	ARRAY_ACCESS(jobject, sp[0].o, temp54) = sp[1].o;
	jint temp55 = 55;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_padLeft;
	ARRAY_ACCESS(jobject, sp[0].o, temp55) = sp[1].o;
	jint temp56 = 56;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_padBottom;
	ARRAY_ACCESS(jobject, sp[0].o, temp56) = sp[1].o;
	jint temp57 = 57;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_padRight;
	ARRAY_ACCESS(jobject, sp[0].o, temp57) = sp[1].o;
	jint temp58 = 58;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_align;
	ARRAY_ACCESS(jobject, sp[0].o, temp58) = sp[1].o;
	jint temp59 = 59;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_labelAlign;
	ARRAY_ACCESS(jobject, sp[0].o, temp59) = sp[1].o;
	jint temp60 = 60;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_colspan;
	ARRAY_ACCESS(jobject, sp[0].o, temp60) = sp[1].o;
	jint temp61 = 61;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_uniform;
	ARRAY_ACCESS(jobject, sp[0].o, temp61) = sp[1].o;
	jint temp62 = 62;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_uniformX;
	ARRAY_ACCESS(jobject, sp[0].o, temp62) = sp[1].o;
	jint temp63 = 63;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_uniformY;
	ARRAY_ACCESS(jobject, sp[0].o, temp63) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ui_builder_UiKey(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiKey:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiKey(ctx);
	{
	LINE_NUMBER(6);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"table"_j))), (jint(0)));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_table = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pane"_j))), (jint(1)));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_pane = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"stack"_j))), (jint(2)));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_stack = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"label"_j))), (jint(3)));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_label = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"image"_j))), (jint(4)));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_image = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button"_j))), (jint(5)));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_button = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"imageButton"_j))), (6));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_imageButton = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"field"_j))), (7));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_field = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"check"_j))), (8));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_check = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"slider"_j))), (9));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_slider = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"space"_j))), (10));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_space = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"defaults"_j))), (11));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_defaults = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buttonTable"_j))), (12));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_buttonTable = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"row"_j))), (13));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_row = sp[0].o;
	LINE_NUMBER(9);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"text"_j))), (14));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_text = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"wrap"_j))), (15));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_wrap = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"region"_j))), (16));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_region = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"icon"_j))), (17));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_icon = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"placeholder"_j))), (18));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_placeholder = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scaling"_j))), (19));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_scaling = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"background"_j))), (20));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_background = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"margin"_j))), (21));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_margin = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"id"_j))), (22));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_id = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hint"_j))), (23));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_hint = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maxLength"_j))), (24));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_maxLength = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"checked"_j))), (25));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_checked = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"min"_j))), (26));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_min = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"max"_j))), (27));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_max = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"step"_j))), (28));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_step = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"defaultValue"_j))), (29));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_defaultValue = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"clicked"_j))), (30));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_clicked = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"enter"_j))), (31));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_enter = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style"_j))), (32));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_style = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"group"_j))), (33));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_group = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"condition"_j))), (34));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_condition = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"color"_j))), (35));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_color = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"disabled"_j))), (36));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_disabled = sp[0].o;
	LINE_NUMBER(13);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"grow"_j))), (37));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_grow = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"growX"_j))), (38));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_growX = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"growY"_j))), (39));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_growY = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fill"_j))), (40));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_fill = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fillX"_j))), (41));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_fillX = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fillY"_j))), (42));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_fillY = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"expand"_j))), (43));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_expand = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"expandX"_j))), (44));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_expandX = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"expandY"_j))), (45));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_expandY = sp[0].o;
	LINE_NUMBER(14);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"width"_j))), (46));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_width = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"height"_j))), (47));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_height = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"size"_j))), (48));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_size = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"minWidth"_j))), (49));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_minWidth = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maxWidth"_j))), (50));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_maxWidth = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"minHeight"_j))), (51));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_minHeight = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maxHeight"_j))), (52));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_maxHeight = sp[0].o;
	LINE_NUMBER(15);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pad"_j))), (53));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_pad = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"padTop"_j))), (54));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_padTop = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"padLeft"_j))), (55));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_padLeft = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"padBottom"_j))), (56));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_padBottom = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"padRight"_j))), (57));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_padRight = sp[0].o;
	LINE_NUMBER(16);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"align"_j))), (58));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_align = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"labelAlign"_j))), (59));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_labelAlign = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"colspan"_j))), (60));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_colspan = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"uniform"_j))), (61));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_uniform = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"uniformX"_j))), (62));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_uniformX = sp[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiKey);
	init_mindustry_ui_builder_UiKey_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"uniformY"_j))), (63));
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_uniformY = sp[0].o;
	LINE_NUMBER(4);
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiKey_$values_R_Array1_mindustry_ui_builder_UiKey(ctx);
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_$VALUES = sp[0].o;
	LINE_NUMBER(18);
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiKey_values_R_Array1_mindustry_ui_builder_UiKey(ctx);
	clinit_mindustry_ui_builder_UiKey(ctx);
	SF_mindustry_ui_builder_UiKey_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_builder_UiKey[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "table", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_table, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "pane", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_pane, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "stack", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_stack, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "label", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_label, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "image", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_image, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "button", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_button, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "imageButton", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_imageButton, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "field", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_field, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "check", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_check, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "slider", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_slider, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "space", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_space, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "defaults", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_defaults, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "buttonTable", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_buttonTable, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "row", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_row, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "text", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_text, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "wrap", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_wrap, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "region", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_region, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "icon", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_icon, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "placeholder", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_placeholder, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "scaling", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_scaling, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "background", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_background, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "margin", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_margin, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "id", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_id, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "hint", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_hint, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "maxLength", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_maxLength, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "checked", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_checked, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "min", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_min, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "max", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_max, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "step", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_step, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "defaultValue", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_defaultValue, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "clicked", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_clicked, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "enter", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_enter, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "style", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_style, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "group", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_group, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "condition", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_condition, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "color", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_color, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "disabled", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_disabled, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "grow", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_grow, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "growX", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_growX, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "growY", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_growY, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "fill", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_fill, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "fillX", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_fillX, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "fillY", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_fillY, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "expand", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_expand, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "expandX", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_expandX, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "expandY", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_expandY, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "width", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_width, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "height", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_height, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "size", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_size, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "minWidth", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_minWidth, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "maxWidth", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_maxWidth, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "minHeight", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_minHeight, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "maxHeight", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_maxHeight, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "pad", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_pad, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "padTop", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_padTop, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "padLeft", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_padLeft, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "padBottom", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_padBottom, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "padRight", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_padRight, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "align", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_align, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "labelAlign", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_labelAlign, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "colspan", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_colspan, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "uniform", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_uniform, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "uniformX", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_uniformX, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "uniformY", &class_mindustry_ui_builder_UiKey, (intptr_t) &SF_mindustry_ui_builder_UiKey_uniformY, "Lmindustry/ui/builder/UiKey;", 16409 },
	{ "all", getArrayClass(&class_mindustry_ui_builder_UiKey, 1), (intptr_t) &SF_mindustry_ui_builder_UiKey_all, "[Lmindustry/ui/builder/UiKey;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_ui_builder_UiKey, 1), (intptr_t) &SF_mindustry_ui_builder_UiKey_$VALUES, "[Lmindustry/ui/builder/UiKey;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_ui_builder_UiKey_values_R_Array1_mindustry_ui_builder_UiKey, 0, "()[Lmindustry/ui/builder/UiKey;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_ui_builder_UiKey_valueOf_java_lang_String_R_mindustry_ui_builder_UiKey, 0, "(Ljava/lang/String;)Lmindustry/ui/builder/UiKey;", 9 },
	{ "<init>", (intptr_t) init_mindustry_ui_builder_UiKey_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_ui_builder_UiKey_$values_R_Array1_mindustry_ui_builder_UiKey, 0, "()[Lmindustry/ui/builder/UiKey;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_builder_UiKey, 0, "()V", 8 },
};

Class class_mindustry_ui_builder_UiKey{
		.nativeName = (intptr_t) "mindustry/ui/builder/UiKey",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_ui_builder_UiKey),
		.classVtable = (intptr_t) vtable_mindustry_ui_builder_UiKey,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_builder_UiKey,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_builder_UiKey,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 66,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_builder_UiKey = registerClass(&class_mindustry_ui_builder_UiKey);

}
