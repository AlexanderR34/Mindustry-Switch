#include "mindustry/ui/fragments/ConsoleFragment.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/scene/ui/TextField.h"
#include "arc/Input.h"
#include "arc/Events.h"
#include "arc/func/Boolp.h"
#include "mindustry/ui/fragments/ConsoleFragment_invoke_arc_func_Boolf_2.h"
#include "mindustry/ui/fragments/ConsoleFragment_invoke_arc_func_Cons_3.h"
#include "mindustry/ui/fragments/ConsoleFragment_invoke_arc_func_Boolf_3.h"
#include "mindustry/ui/fragments/ConsoleFragment_invoke_arc_func_Cons_2.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/ui/fragments/ConsoleFragment_invoke_arc_func_Boolp_1.h"
#include "mindustry/mod/Mods.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/FileChooser.h"
#include "arc/scene/ui/ImageButton.h"
#include "arc/Settings.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "arc/util/Log.h"
#include "mindustry/input/Binding.h"
#include "arc/scene/ui/Label.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/ui/fragments/ConsoleFragment.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/files/Fi.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/ui/fragments/ConsoleFragment_invoke_java_lang_Runnable_6.h"
#include "mindustry/ui/fragments/ConsoleFragment_invoke_java_lang_Runnable_7.h"
#include "arc/scene/ui/TextField_TextFieldStyle.h"
#include "mindustry/ui/fragments/ConsoleFragment_invoke_java_lang_Runnable_8.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/ui/fragments/ConsoleFragment_invoke_java_lang_Runnable_9.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/fragments/ConsoleFragment_invoke_java_lang_Runnable_10.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/input/KeyBind.h"
#include "mindustry/ui/fragments/ConsoleFragment_invoke_java_lang_Runnable_11.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/fragments/ChatFragment.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/Input_TextInput.h"
#include "mindustry/ui/Fonts.h"
#include "arc/scene/Element.h"
#include "mindustry/game/EventType_Trigger.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "mindustry/mod/Scripts.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "arc/graphics/g2d/FontCache.h"

extern "C" {

jint SF_mindustry_ui_fragments_ConsoleFragment_messagesShown;

void mark_mindustry_ui_fragments_ConsoleFragment(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_layout_Table(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_fragments_ConsoleFragment *) object;
	if (self->F_messages)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_messages)->clazz)->markFunction)((jobject) self->F_messages, mark, depth + 1);
	if (self->F_chatfield)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chatfield)->clazz)->markFunction)((jobject) self->F_chatfield, mark, depth + 1);
	if (self->F_fieldlabel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fieldlabel)->clazz)->markFunction)((jobject) self->F_fieldlabel, mark, depth + 1);
	if (self->F_font)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_font)->clazz)->markFunction)((jobject) self->F_font, mark, depth + 1);
	if (self->F_layout)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_layout)->clazz)->markFunction)((jobject) self->F_layout, mark, depth + 1);
	if (self->F_shadowColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shadowColor)->clazz)->markFunction)((jobject) self->F_shadowColor, mark, depth + 1);
	if (self->F_history)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_history)->clazz)->markFunction)((jobject) self->F_history, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_ConsoleFragment(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_layout_Table(ctx);
	SF_mindustry_ui_fragments_ConsoleFragment_messagesShown = jint(30);
}

void init_mindustry_ui_fragments_ConsoleFragment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_ConsoleFragment(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	init_arc_scene_ui_layout_Table(ctx, (frame[0].o));
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_messages = (jref) sp[1].o;
	LINE_NUMBER(26);
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_open = (jint(0));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Label(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	init_arc_scene_ui_Label_java_lang_CharSequence(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8">"_j))));
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_fieldlabel = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_GlyphLayout(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_GlyphLayout);
	init_arc_graphics_g2d_GlyphLayout(ctx, sp[1].o);
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_layout = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_offsetx = temp0;
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_offsety = temp1;
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(2)));
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_fontoffsetx = temp2;
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(60.0f)));
	sp[0].f = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	(sp++)->f = jfloat(50.0f);
	POP_N(1); // Pop method args
	sp->f = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, sp[0].f);
	sp++;
label_7:;
	{
	sp -= 2;
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_chatspace = sp[1].f;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.7f)));
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_shadowColor = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(10.0f)));
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_textspacing = temp0;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_history = (jref) sp[1].o;
	LINE_NUMBER(35);
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_historyPos = (jint(0));
	LINE_NUMBER(36);
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos = (jint(0));
	LINE_NUMBER(39);
	((func_mindustry_ui_fragments_ConsoleFragment_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_setFillParent_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_Fonts(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Fonts_def;
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_font = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ConsoleFragment_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_ui_fragments_ConsoleFragment_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ConsoleFragment_invoke_arc_func_Boolp_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_fragments_ConsoleFragment_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_fragments_ConsoleFragment_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_history;
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, (jint(0)), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(84);
	((func_mindustry_ui_fragments_ConsoleFragment_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_setup])(ctx, (frame[0].o));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_clearMessages(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:clearMessages", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_messages;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_history;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_history;
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, (jint(0)), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:setup", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_fieldlabel;
	clinit_arc_scene_ui_Label$LabelStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Label$LabelStyle);
	sp[2].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_fieldlabel;
	sp[2].o = (jobject)((func_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle])(ctx, sp[2].o);
	init_arc_scene_ui_Label$LabelStyle_arc_scene_ui_Label$LabelStyle(ctx, sp[1].o, sp[2].o);
	((func_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_fieldlabel;
	sp[0].o = (jobject)((func_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_font;
	((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_font = (jref) sp[1].o;
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_fieldlabel;
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_fieldlabel;
	sp[1].o = (jobject)((func_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle])(ctx, sp[1].o);
	((func_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_TextField(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_TextField);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	clinit_arc_scene_ui_TextField$TextFieldStyle(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_scene_ui_TextField$TextFieldStyle);
	clinit_arc_Core(ctx);
	sp[4].o = (jobject)SF_arc_Core_scene;
	sp[4].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[4].o, (((jobject) &class_arc_scene_ui_TextField$TextFieldStyle)));
	init_arc_scene_ui_TextField$TextFieldStyle_arc_scene_ui_TextField$TextFieldStyle(ctx, sp[3].o, (checkCast(ctx, &class_arc_scene_ui_TextField$TextFieldStyle, sp[4].o)));
	init_arc_scene_ui_TextField_java_lang_String_arc_scene_ui_TextField$TextFieldStyle(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_chatfield = (jref) sp[1].o;
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle])(ctx, sp[0].o);
	((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background = (jref) (jobject(nullptr));
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_fontColor = (jref) sp[1].o;
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle])(ctx, sp[1].o);
	((func_arc_scene_ui_TextField_setStyle_arc_scene_ui_TextField$TextFieldStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setStyle_arc_scene_ui_TextField$TextFieldStyle])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_mindustry_ui_fragments_ConsoleFragment_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_bottom_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, ((jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_offsety));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (((jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_offsetx) * (jfloat(2))));
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_fieldlabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	LINE_NUMBER(109);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_9;
	}
	{
	LINE_NUMBER(110);
	frame[1].f = (jfloat(58.0f));
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_chat;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_cleari;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_fragments_ConsoleFragment_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((-((jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_offsetx)) * (jfloat(2))) - (jfloat(5.0f))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_upOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_cleari;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_fragments_ConsoleFragment_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ConsoleFragment_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_ui_fragments_ConsoleFragment_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ConsoleFragment_invoke_arc_func_Boolf_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_cleari;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_fragments_ConsoleFragment_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ConsoleFragment_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_ui_fragments_ConsoleFragment_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ConsoleFragment_invoke_arc_func_Boolf_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_fileText;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_cleari;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_10);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_fragments_ConsoleFragment_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = frame[1].f;
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_cancel;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_cleari;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ConsoleFragment_invoke_java_lang_Runnable_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_fragments_ConsoleFragment_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(136);
	goto label_19;
	}
label_9:;
	{
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_ConsoleFragment_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_offsety));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_offsetx));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_offsetx));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(28.0f)));
	}
label_19:;
	LINE_NUMBER(139);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_rect_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:rect", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(142);
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float(ctx, (((jobject) createStringLiteral(ctx, u8"whiteui"_j))), ((frame[1].f) + ((frame[3].f) / (jfloat(2)))), ((frame[2].f) + ((frame[4].f) / (jfloat(2)))), (frame[3].f), (frame[4].f));
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	frame[1].f = (jfloat(1));
	LINE_NUMBER(148);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	frame[2].f = ((jfloat(temp0)) - (((jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_offsetx) * (jfloat(2))));
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_shadowColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(152);
	if (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_open) == 0) goto label_4;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_offsetx;
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	jfloat temp1 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp2 = temp1 + ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginBottom);
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	jfloat temp3 = (jfloat)((func_arc_scene_ui_TextField_getWidth_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getWidth_R_float])(ctx, sp[1].o);
	jfloat temp4 = temp3 + (jfloat(15.0f));
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	jfloat temp5 = (jfloat)((func_arc_scene_ui_TextField_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getHeight_R_float])(ctx, sp[1].o);
	((func_mindustry_ui_fragments_ConsoleFragment_rect_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_rect_float_float_float_float])(ctx, sp[0].o, temp0, temp2, temp4, (temp5 - (jfloat(1))));
	}
label_4:;
	{
	LINE_NUMBER(156);
	M_arc_scene_ui_layout_Table_draw(ctx, (frame[0].o));
	LINE_NUMBER(158);
	frame[3].f = ((jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatspace);
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = ((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_open);
	LINE_NUMBER(161);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_fieldlabel;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = ((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_open);
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_shadowColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(164);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_shadowColor;
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) * (frame[1].f)));
	LINE_NUMBER(166);
	jfloat temp0 = ((jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_offsety) + (frame[3].f);
	jfloat temp1 = (jfloat)((func_mindustry_ui_fragments_ConsoleFragment_getMarginBottom_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_getMarginBottom_R_float])(ctx, (frame[0].o));
	jfloat temp2 = temp0 + temp1;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	frame[4].f = (temp2 + ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginBottom));
	LINE_NUMBER(167);
	frame[5].i = ((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos);
	}
label_13:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_messages;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_14;
	}
	{
	if ((frame[5].i) >= ((30) + ((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos))) goto label_14;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_layout;
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_font;
	sp[2].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_messages;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, (frame[5].i));
	sp[2].o = checkCast(ctx, &class_java_lang_CharSequence, sp[2].o);
	clinit_arc_graphics_Color(ctx);
	sp[3].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].f), (12), (jint(1)));
	LINE_NUMBER(170);
	jfloat temp0 = frame[4].f;
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_layout;
	frame[4].f = (temp0 + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_height) + ((jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_textspacing)));
	LINE_NUMBER(171);
	if (((frame[5].i) - ((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos)) != 0) goto label_18;
	}
	{
	frame[4].f = ((frame[4].f) - (((jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_textspacing) + (jfloat(1))));
	}
label_18:;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, sp[0].o);
	((func_arc_graphics_g2d_FontCache_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_clear])(ctx, sp[0].o);
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_FontCache_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(175);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_messages;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[5].i));
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_CharSequence, sp[1].o)), (((jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_fontoffsetx) + ((jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_offsetx)), (((jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_offsety) + (frame[4].f)), (frame[2].f), (12), (jint(1)));
	LINE_NUMBER(177);
	if (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_open) != 0) goto label_22;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, sp[0].o);
	((func_arc_graphics_g2d_FontCache_setAlphas_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_setAlphas_float])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(179);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = jfloat(0);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_shadowColor;
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, temp0, temp1, temp2, (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) * (frame[1].f)));
	goto label_25;
	}
label_22:;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, sp[0].o);
	((func_arc_graphics_g2d_FontCache_setAlphas_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_setAlphas_float])(ctx, sp[0].o, (frame[1].f));
	}
label_25:;
	{
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_offsetx;
	jfloat temp1 = frame[4].f;
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_layout;
	jfloat temp2 = (temp1 - ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[1].o))->F_height)) - (jfloat(2));
	jfloat temp3 = frame[2].f;
	jfloat temp4 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	jfloat temp5 = temp3 + temp4;
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_layout;
	((func_mindustry_ui_fragments_ConsoleFragment_rect_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_rect_float_float_float_float])(ctx, sp[0].o, temp0, temp2, temp5, (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[1].o))->F_height) + ((jfloat)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_textspacing)));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_shadowColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(186);
	jfloat temp6 = frame[1].f;
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_shadowColor;
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp6 * ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a)));
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, sp[0].o);
	((func_arc_graphics_g2d_FontCache_draw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_draw])(ctx, sp[0].o);
	LINE_NUMBER(167);
	INST_IINC(5, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(191);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_sendMessage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:sendMessage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(196);
	((func_mindustry_ui_fragments_ConsoleFragment_clearChatInput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_clearChatInput])(ctx, (frame[0].o));
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(201);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"clear"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(202);
	((func_mindustry_ui_fragments_ConsoleFragment_clearMessages) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_clearMessages])(ctx, (frame[0].o));
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_history;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) < (jint(2))) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_history;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint(1)));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (frame[1].o));
	if (temp0 != 0) goto label_8;
	}
label_7:;
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_history;
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, (jint(1)), (frame[1].o));
	}
label_8:;
	{
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"["_j))), (((jobject) createStringLiteral(ctx, u8"[["_j))));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray]> \u0001"_j.string, 1, sp[1].o);
	((func_mindustry_ui_fragments_ConsoleFragment_addMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_addMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_mods;
	sp[1].o = (jobject)((func_mindustry_mod_Mods_getScripts_R_mindustry_mod_Scripts) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_Mods_getScripts_R_mindustry_mod_Scripts])(ctx, sp[1].o);
	sp[2].o = (jobject)((func_mindustry_ui_fragments_ConsoleFragment_injectConsoleVariables_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_injectConsoleVariables_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_mod_Scripts_runConsole_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_Scripts_runConsole_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"["_j))), (((jobject) createStringLiteral(ctx, u8"[["_j))));
	((func_mindustry_ui_fragments_ConsoleFragment_addMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_addMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_ConsoleFragment_injectConsoleVariables_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:injectConsoleVariables", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"var unit = Vars.player.unit();var player = Vars.player;var team = Vars.player.team();var core = Vars.player.core();var items = Vars.player.team().items();var build = Vars.world.buildWorld(Core.input.mouseWorldX(), Core.input.mouseWorldY());var cursor = Vars.world.tileWorld(Core.input.mouseWorldX(), Core.input.mouseWorldY());var cursorUnit = Units.closestEnemy(null, Core.input.mouseWorldX(), Core.input.mouseWorldY(), 70, u => true);\n"_j)));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_toggleMobile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:toggleMobile", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_shown) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_shown = sp[1].i;
	LINE_NUMBER(227);
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_open = (jint(0));
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(231);
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_shown = (jint(0));
	LINE_NUMBER(232);
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_open = (jint(0));
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_toggle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:toggle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(237);
	if (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_open) != 0) goto label_1;
	}
	{
	LINE_NUMBER(238);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_openConsole;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(239);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_open) != 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_open = sp[1].i;
	LINE_NUMBER(241);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	((func_arc_scene_ui_TextField_fireClick) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_fireClick])(ctx, sp[0].o);
	goto label_8;
	}
label_1:;
	{
	LINE_NUMBER(243);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_open) != 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_open = sp[1].i;
	LINE_NUMBER(245);
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos = (jint(0));
	LINE_NUMBER(246);
	((func_mindustry_ui_fragments_ConsoleFragment_sendMessage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_sendMessage])(ctx, (frame[0].o));
	}
label_8:;
	LINE_NUMBER(248);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:hide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(251);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(252);
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_open = (jint(0));
	LINE_NUMBER(253);
	((func_mindustry_ui_fragments_ConsoleFragment_clearChatInput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_clearChatInput])(ctx, (frame[0].o));
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_updateChat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:updateChat", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_history;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, ((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_historyPos));
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(258);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((func_arc_scene_ui_TextField_setCursorPosition_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setCursorPosition_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_clearChatInput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:clearChatInput", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(262);
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_historyPos = (jint(0));
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_history;
	((func_arc_struct_Seq_set_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_int_java_lang_Object])(ctx, sp[0].o, (jint(0)), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(264);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_ConsoleFragment_open_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:open", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return ((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_open);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:shown", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return ((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_shown);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_addMessage_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:addMessage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_messages;
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, (jint(0)), (frame[1].o));
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$8(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:lambda$setup$8", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_shown = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_ConsoleFragment_lambda$setup$6(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:lambda$setup$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_ConsoleFragment(ctx);
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"js"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ConsoleFragment_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_ui_fragments_ConsoleFragment_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ConsoleFragment_invoke_arc_func_Cons_2);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_ConsoleFragment_lambda$setup$7_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:lambda$setup$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_ConsoleFragment(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(128);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_getScripts_R_mindustry_mod_Scripts) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_getScripts_R_mindustry_mod_Scripts])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_mod_Scripts_runConsole_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Scripts_runConsole_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(131);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(129);
	frame[1].o = sp[0].o;
	LINE_NUMBER(130);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	}
label_4:;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$5_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:lambda$setup$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	if (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos) > 0) goto label_1;
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

void M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:lambda$setup$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos) - (jint(1));
	jint temp1 = jint(0);
	jint temp2 = jint(0);
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_messages;
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp2, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	jint temp4 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, temp3);
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_scrollPos = temp4;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$3_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:lambda$setup$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(122);
	jint temp0 = (jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos;
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_messages;
	if (temp0 < ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
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

void M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:lambda$setup$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos) + (jint(1));
	jint temp1 = jint(0);
	jint temp2 = jint(0);
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_messages;
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp2, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	jint temp4 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, temp3);
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_scrollPos = temp4;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:lambda$setup$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	clinit_arc_Input$TextInput(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Input$TextInput);
	init_arc_Input$TextInput(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(113);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ConsoleFragment_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_ui_fragments_ConsoleFragment_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ConsoleFragment_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((arc_Input$TextInput *) NULL_CHECK(sp[0].o))->F_accepted = (jref) sp[1].o;
	LINE_NUMBER(119);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	((func_arc_Input_getTextInput_arc_Input$TextInput) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_getTextInput_arc_Input$TextInput])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:lambda$setup$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(115);
	((func_mindustry_ui_fragments_ConsoleFragment_sendMessage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_sendMessage])(ctx, (frame[0].o));
	LINE_NUMBER(116);
	((func_mindustry_ui_fragments_ConsoleFragment_clearChatInput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_clearChatInput])(ctx, (frame[0].o));
	LINE_NUMBER(117);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	((func_arc_Input_setOnscreenKeyboardVisible_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_setOnscreenKeyboardVisible_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ConsoleFragment_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:lambda$new$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_chat;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"console"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_TextField)) != 0) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(65);
	((func_mindustry_ui_fragments_ConsoleFragment_toggle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_toggle])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(68);
	if (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_open) == 0) goto label_3;
	}
	{
	LINE_NUMBER(69);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_chatHistoryPrev;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = (jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_historyPos;
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_history;
	if (temp0 >= (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)))) goto label_5;
	}
	{
	LINE_NUMBER(70);
	if (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_historyPos) != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_history;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_struct_Seq_set_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_int_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_historyPos = (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_historyPos) + (jint(1)));
	LINE_NUMBER(72);
	((func_mindustry_ui_fragments_ConsoleFragment_updateChat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_updateChat])(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(74);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_chatHistoryNext;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	if (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_historyPos) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_historyPos = (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_historyPos) - (jint(1)));
	LINE_NUMBER(76);
	((func_mindustry_ui_fragments_ConsoleFragment_updateChat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_updateChat])(ctx, (frame[0].o));
	}
label_3:;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_chatScroll;
	jfloat temp1 = (jfloat)((func_arc_Input_axis_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_axis_arc_input_KeyBind_R_float])(ctx, sp[1].o, sp[2].o);
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = jfloat(0);
	jint temp4 = jint(0);
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_messages;
	jint temp5 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp4, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp2, temp3, (jfloat(temp5)));
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_scrollPos = (jint(temp6));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_ConsoleFragment_lambda$new$0_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ConsoleFragment:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_console;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"console"_j))));
	if (temp0 != 0) goto label_2;
	}
	{
	if (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_shown) == 0) goto label_1;
	}
label_2:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_TextField)) != 0) goto label_1;
	}
label_3:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ChatFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_shown) != 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK(sp[0].o))->F_shown = sp[1].i;
	LINE_NUMBER(45);
	if (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_shown) == 0) goto label_8;
	}
	{
	if (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_open) != 0) goto label_8;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"console"_j))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(46);
	((func_mindustry_ui_fragments_ConsoleFragment_toggle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_toggle])(ctx, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(48);
	if (((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_shown) == 0) goto label_10;
	}
	{
	LINE_NUMBER(49);
	((func_mindustry_ui_fragments_ConsoleFragment_toFront) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_toFront])(ctx, (frame[0].o));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	((func_arc_scene_ui_TextField_requestKeyboard) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_requestKeyboard])(ctx, sp[0].o);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(51);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	LINE_NUMBER(52);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(53);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp1 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_13:;
	{
	LINE_NUMBER(55);
	((func_mindustry_ui_fragments_ConsoleFragment_clearChatInput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_clearChatInput])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(58);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_16;
	}
	{
	((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_open = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return ((jint)((mindustry_ui_fragments_ConsoleFragment *) NULL_CHECK((frame[0].o)))->F_shown);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_ConsoleFragment[] {
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
	(void *) M_mindustry_ui_fragments_ConsoleFragment_draw,
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
	(void *) M_mindustry_ui_fragments_ConsoleFragment_build_arc_scene_Group,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_clearMessages,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_setup,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_rect_float_float_float_float,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_sendMessage,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_injectConsoleVariables_R_java_lang_String,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_toggleMobile,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_close,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_toggle,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_hide,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_updateChat,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_clearChatInput,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_open_R_boolean,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_addMessage_java_lang_String,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$8,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$5_arc_scene_ui_ImageButton_R_boolean,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$4,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$3_arc_scene_ui_ImageButton_R_boolean,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$2,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$0,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$1_java_lang_String,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_lambda$new$1,
	(void *) M_mindustry_ui_fragments_ConsoleFragment_lambda$new$0_R_boolean,
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
	{ "build", "(Larc/scene/Group;)V" },
	{ "clearMessages", "()V" },
	{ "setup", "()V" },
	{ "rect", "(FFFF)V" },
	{ "sendMessage", "()V" },
	{ "injectConsoleVariables", "()Ljava/lang/String;" },
	{ "toggleMobile", "()V" },
	{ "close", "()V" },
	{ "toggle", "()V" },
	{ "hide", "()V" },
	{ "updateChat", "()V" },
	{ "clearChatInput", "()V" },
	{ "open", "()Z" },
	{ "shown", "()Z" },
	{ "addMessage", "(Ljava/lang/String;)V" },
	{ "lambda$setup$8", "()V" },
	{ "lambda$setup$5", "(Larc/scene/ui/ImageButton;)Z" },
	{ "lambda$setup$4", "()V" },
	{ "lambda$setup$3", "(Larc/scene/ui/ImageButton;)Z" },
	{ "lambda$setup$2", "()V" },
	{ "lambda$setup$0", "()V" },
	{ "lambda$setup$1", "(Ljava/lang/String;)V" },
	{ "lambda$new$1", "()V" },
	{ "lambda$new$0", "()Z" },
};

static FieldMetadata fields[] {
	{ "messagesShown", &class_int, (intptr_t) &SF_mindustry_ui_fragments_ConsoleFragment_messagesShown, "I", 26 },
	{ "messages", &class_arc_struct_Seq, offsetof(mindustry_ui_fragments_ConsoleFragment, F_messages), "Larc/struct/Seq;", 2 },
	{ "open", &class_boolean, offsetof(mindustry_ui_fragments_ConsoleFragment, F_open), "Z", 2 },
	{ "shown", &class_boolean, offsetof(mindustry_ui_fragments_ConsoleFragment, F_shown), "Z", 2 },
	{ "chatfield", &class_arc_scene_ui_TextField, offsetof(mindustry_ui_fragments_ConsoleFragment, F_chatfield), "Larc/scene/ui/TextField;", 2 },
	{ "fieldlabel", &class_arc_scene_ui_Label, offsetof(mindustry_ui_fragments_ConsoleFragment, F_fieldlabel), "Larc/scene/ui/Label;", 2 },
	{ "font", &class_arc_graphics_g2d_Font, offsetof(mindustry_ui_fragments_ConsoleFragment, F_font), "Larc/graphics/g2d/Font;", 2 },
	{ "layout", &class_arc_graphics_g2d_GlyphLayout, offsetof(mindustry_ui_fragments_ConsoleFragment, F_layout), "Larc/graphics/g2d/GlyphLayout;", 2 },
	{ "offsetx", &class_float, offsetof(mindustry_ui_fragments_ConsoleFragment, F_offsetx), "F", 2 },
	{ "offsety", &class_float, offsetof(mindustry_ui_fragments_ConsoleFragment, F_offsety), "F", 2 },
	{ "fontoffsetx", &class_float, offsetof(mindustry_ui_fragments_ConsoleFragment, F_fontoffsetx), "F", 2 },
	{ "chatspace", &class_float, offsetof(mindustry_ui_fragments_ConsoleFragment, F_chatspace), "F", 2 },
	{ "shadowColor", &class_arc_graphics_Color, offsetof(mindustry_ui_fragments_ConsoleFragment, F_shadowColor), "Larc/graphics/Color;", 2 },
	{ "textspacing", &class_float, offsetof(mindustry_ui_fragments_ConsoleFragment, F_textspacing), "F", 2 },
	{ "history", &class_arc_struct_Seq, offsetof(mindustry_ui_fragments_ConsoleFragment, F_history), "Larc/struct/Seq;", 2 },
	{ "historyPos", &class_int, offsetof(mindustry_ui_fragments_ConsoleFragment, F_historyPos), "I", 2 },
	{ "scrollPos", &class_int, offsetof(mindustry_ui_fragments_ConsoleFragment, F_scrollPos), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_ConsoleFragment, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_build_arc_scene_Group, VTABLE_mindustry_ui_fragments_ConsoleFragment_build_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
	{ "clearMessages", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_clearMessages, VTABLE_mindustry_ui_fragments_ConsoleFragment_clearMessages, "()V", 1 },
	{ "setup", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_setup, VTABLE_mindustry_ui_fragments_ConsoleFragment_setup, "()V", 2 },
	{ "rect", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_rect_float_float_float_float, VTABLE_mindustry_ui_fragments_ConsoleFragment_rect_float_float_float_float, "(FFFF)V", 4 },
	{ "draw", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_draw, VTABLE_mindustry_ui_fragments_ConsoleFragment_draw, "()V", 1 },
	{ "sendMessage", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_sendMessage, VTABLE_mindustry_ui_fragments_ConsoleFragment_sendMessage, "()V", 2 },
	{ "injectConsoleVariables", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_injectConsoleVariables_R_java_lang_String, VTABLE_mindustry_ui_fragments_ConsoleFragment_injectConsoleVariables_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toggleMobile", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_toggleMobile, VTABLE_mindustry_ui_fragments_ConsoleFragment_toggleMobile, "()V", 1 },
	{ "close", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_close, VTABLE_mindustry_ui_fragments_ConsoleFragment_close, "()V", 1 },
	{ "toggle", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_toggle, VTABLE_mindustry_ui_fragments_ConsoleFragment_toggle, "()V", 1 },
	{ "hide", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_hide, VTABLE_mindustry_ui_fragments_ConsoleFragment_hide, "()V", 1 },
	{ "updateChat", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_updateChat, VTABLE_mindustry_ui_fragments_ConsoleFragment_updateChat, "()V", 1 },
	{ "clearChatInput", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_clearChatInput, VTABLE_mindustry_ui_fragments_ConsoleFragment_clearChatInput, "()V", 1 },
	{ "open", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_open_R_boolean, VTABLE_mindustry_ui_fragments_ConsoleFragment_open_R_boolean, "()Z", 1 },
	{ "shown", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean, VTABLE_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean, "()Z", 1 },
	{ "addMessage", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_addMessage_java_lang_String, VTABLE_mindustry_ui_fragments_ConsoleFragment_addMessage_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "lambda$setup$8", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$8, VTABLE_mindustry_ui_fragments_ConsoleFragment_lambda$setup$8, "()V", 4098 },
	{ "lambda$setup$6", (intptr_t) SM_mindustry_ui_fragments_ConsoleFragment_lambda$setup$6, 0, "()V", 4106 },
	{ "lambda$setup$7", (intptr_t) SM_mindustry_ui_fragments_ConsoleFragment_lambda$setup$7_arc_files_Fi, 0, "(Larc/files/Fi;)V", 4106 },
	{ "lambda$setup$5", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$5_arc_scene_ui_ImageButton_R_boolean, VTABLE_mindustry_ui_fragments_ConsoleFragment_lambda$setup$5_arc_scene_ui_ImageButton_R_boolean, "(Larc/scene/ui/ImageButton;)Z", 4098 },
	{ "lambda$setup$4", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$4, VTABLE_mindustry_ui_fragments_ConsoleFragment_lambda$setup$4, "()V", 4098 },
	{ "lambda$setup$3", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$3_arc_scene_ui_ImageButton_R_boolean, VTABLE_mindustry_ui_fragments_ConsoleFragment_lambda$setup$3_arc_scene_ui_ImageButton_R_boolean, "(Larc/scene/ui/ImageButton;)Z", 4098 },
	{ "lambda$setup$2", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$2, VTABLE_mindustry_ui_fragments_ConsoleFragment_lambda$setup$2, "()V", 4098 },
	{ "lambda$setup$0", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$0, VTABLE_mindustry_ui_fragments_ConsoleFragment_lambda$setup$0, "()V", 4098 },
	{ "lambda$setup$1", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_lambda$setup$1_java_lang_String, VTABLE_mindustry_ui_fragments_ConsoleFragment_lambda$setup$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_lambda$new$1, VTABLE_mindustry_ui_fragments_ConsoleFragment_lambda$new$1, "()V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_fragments_ConsoleFragment_lambda$new$0_R_boolean, VTABLE_mindustry_ui_fragments_ConsoleFragment_lambda$new$0_R_boolean, "()Z", 4098 },
};

Class class_mindustry_ui_fragments_ConsoleFragment{
		.nativeName = (intptr_t) "mindustry/ui/fragments/ConsoleFragment",
		.parentClass = (intptr_t) &class_arc_scene_ui_layout_Table,
		.size = sizeof(mindustry_ui_fragments_ConsoleFragment),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_ConsoleFragment,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_ConsoleFragment,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_ConsoleFragment,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 279,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_ConsoleFragment = registerClass(&class_mindustry_ui_fragments_ConsoleFragment);

}
