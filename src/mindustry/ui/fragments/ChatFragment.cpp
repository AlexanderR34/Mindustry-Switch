#include "mindustry/ui/fragments/ChatFragment.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/scene/ui/TextField.h"
#include "arc/Input.h"
#include "arc/Events.h"
#include "arc/func/Boolp.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/game/EventType_ClientChatEvent.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/fragments/HudFragment.h"
#include "mindustry/ui/fragments/ChatFragment_invoke_arc_func_Boolp_1.h"
#include "arc/Settings.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "mindustry/gen/Iconc.h"
#include "mindustry/input/Binding.h"
#include "arc/util/Time.h"
#include "arc/scene/ui/Label.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/ui/fragments/ChatFragment_invoke_arc_func_Cons_3.h"
#include "mindustry/net/Net.h"
#include "mindustry/ui/fragments/ChatFragment_invoke_arc_func_Cons_2.h"
#include "mindustry/ui/fragments/ConsoleFragment.h"
#include "arc/util/Timer_Task.h"
#include "mindustry/world/Tiles.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "arc/scene/ui/TextField_TextFieldStyle.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/input/KeyBind.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "mindustry/ui/fragments/ChatFragment_ChatMode.h"
#include "mindustry/ui/fragments/ChatFragment_invoke_java_lang_Runnable_3.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/fragments/ChatFragment.h"
#include "mindustry/ui/fragments/ChatFragment_invoke_java_lang_Runnable_4.h"
#include "mindustry/ui/fragments/ChatFragment_invoke_java_lang_Runnable_5.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/Input_TextInput.h"
#include "mindustry/ui/Fonts.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "mindustry/gen/Player.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "java/lang/Class.h"
#include "mindustry/ui/fragments/MinimapFragment.h"
#include "mindustry/Vars.h"
#include "arc/struct/ObjectIntMap.h"
#include "arc/graphics/g2d/FontCache.h"
#include "mindustry/core/World.h"
#include "mindustry/gen/Call.h"

extern "C" {

jint SF_mindustry_ui_fragments_ChatFragment_messagesShown;

void mark_mindustry_ui_fragments_ChatFragment(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_ChatFragment *) object;
	if (self->F_messages)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_messages)->clazz)->markFunction)((jobject) self->F_messages, mark, depth + 1);
	if (self->F_chatfield)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chatfield)->clazz)->markFunction)((jobject) self->F_chatfield, mark, depth + 1);
	if (self->F_fieldlabel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fieldlabel)->clazz)->markFunction)((jobject) self->F_fieldlabel, mark, depth + 1);
	if (self->F_mode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mode)->clazz)->markFunction)((jobject) self->F_mode, mark, depth + 1);
	if (self->F_font)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_font)->clazz)->markFunction)((jobject) self->F_font, mark, depth + 1);
	if (self->F_layout)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_layout)->clazz)->markFunction)((jobject) self->F_layout, mark, depth + 1);
	if (self->F_shadowColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shadowColor)->clazz)->markFunction)((jobject) self->F_shadowColor, mark, depth + 1);
	if (self->F_history)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_history)->clazz)->markFunction)((jobject) self->F_history, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_ChatFragment(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_layout_Table(ctx);
	SF_mindustry_ui_fragments_ChatFragment_messagesShown = jint(10);
}

void init_mindustry_ui_fragments_ChatFragment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_ChatFragment(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(45);
	init_arc_scene_ui_layout_Table(ctx, (frame[0].o));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_messages = (jref) sp[1].o;
	LINE_NUMBER(30);
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shown = (jint(0));
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Label(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	init_arc_scene_ui_Label_java_lang_CharSequence(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8">"_j))));
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_fieldlabel = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_ChatFragment$ChatMode_normal;
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_GlyphLayout(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_GlyphLayout);
	init_arc_graphics_g2d_GlyphLayout(ctx, sp[1].o);
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_layout = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_offsetx = temp0;
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_offsety = temp1;
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(2)));
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_fontoffsetx = temp2;
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(50.0f)));
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_chatspace = temp3;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.5f)));
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_shadowColor = (jref) sp[1].o;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(10.0f)));
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_textspacing = temp4;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_history = (jref) sp[1].o;
	LINE_NUMBER(40);
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_historyPos = (jint(0));
	LINE_NUMBER(41);
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos = (jint(0));
	LINE_NUMBER(47);
	((func_mindustry_ui_fragments_ChatFragment_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_setFillParent_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_Fonts(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Fonts_def;
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_font = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ChatFragment_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_ui_fragments_ChatFragment_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ChatFragment_invoke_arc_func_Boolp_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_fragments_ChatFragment_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ChatFragment_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_ui_fragments_ChatFragment_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ChatFragment_invoke_java_lang_Runnable_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_fragments_ChatFragment_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_history;
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, (jint(0)), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(89);
	((func_mindustry_ui_fragments_ChatFragment_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_setup])(ctx, (frame[0].o));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_clearMessages(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:clearMessages", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_messages;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_history;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_history;
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, (jint(0)), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:setup", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_fieldlabel;
	clinit_arc_scene_ui_Label$LabelStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Label$LabelStyle);
	sp[2].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_fieldlabel;
	sp[2].o = (jobject)((func_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle])(ctx, sp[2].o);
	init_arc_scene_ui_Label$LabelStyle_arc_scene_ui_Label$LabelStyle(ctx, sp[1].o, sp[2].o);
	((func_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_fieldlabel;
	sp[0].o = (jobject)((func_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_font;
	((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_font = (jref) sp[1].o;
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_fieldlabel;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_fieldlabel;
	sp[1].o = (jobject)((func_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle])(ctx, sp[1].o);
	((func_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(107);
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
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_chatfield = (jref) sp[1].o;
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	((func_arc_scene_ui_TextField_setMaxLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setMaxLength_int])(ctx, sp[0].o, (150));
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle])(ctx, sp[0].o);
	((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background = (jref) (jobject(nullptr));
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((arc_scene_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_fontColor = (jref) sp[1].o;
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle])(ctx, sp[1].o);
	((func_arc_scene_ui_TextField_setStyle_arc_scene_ui_TextField$TextFieldStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setStyle_arc_scene_ui_TextField$TextFieldStyle])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ChatFragment_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_ui_fragments_ChatFragment_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ChatFragment_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextField_typed_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_typed_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_mindustry_ui_fragments_ChatFragment_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_bottom_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, ((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_offsety));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_offsetx) * (jfloat(2))));
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_fieldlabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_ChatFragment_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_offsety));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_offsetx));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_offsetx));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(28.0f)));
	LINE_NUMBER(119);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_12;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_mindustry_ui_fragments_ChatFragment_marginBottom_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_marginBottom_float_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (jfloat(105.0f)));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_mindustry_ui_fragments_ChatFragment_marginRight_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_marginRight_float_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (jfloat(240.0f)));
	}
label_12:;
	LINE_NUMBER(123);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_handleType_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:handleType", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	jint temp0 = (jint)((func_arc_scene_ui_TextField_getCursorPosition_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getCursorPosition_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(128);
	if ((frame[1].i) != (58)) goto label_2;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_lastIndexOf_int_int_R_int])(ctx, sp[0].o, (58), ((frame[2].i) - (jint(2))));
	frame[3].i = temp0;
	LINE_NUMBER(130);
	if ((frame[3].i) < 0) goto label_2;
	}
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, ((frame[3].i) + (jint(1))), ((frame[2].i) - (jint(1))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(132);
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getUnicodeStr_java_lang_String_R_java_lang_String(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(133);
	if ((frame[5].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
label_8:;
	{
	clinit_mindustry_gen_Iconc(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Iconc_codes;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[4].o));
	if (temp0 == 0) goto label_9;
	}
	{
	clinit_mindustry_gen_Iconc(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Iconc_codes;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_R_int])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)SM_java_lang_Character_toString_char_R_java_lang_String(ctx, (jchar(temp0)));
	frame[5].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(134);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, (jint(0)), (frame[3].i));
	sp[2].o = frame[5].o;
	sp[3].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[3].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[3].o);
	sp[3].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[3].o, (frame[2].i));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001\u0001"_j.string, 3, sp[1].o, sp[2].o, sp[3].o);
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[5].o));
	((func_arc_scene_ui_TextField_setCursorPosition_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setCursorPosition_int])(ctx, sp[0].o, (temp0 + temp1));
	}
label_2:;
	LINE_NUMBER(140);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_rect_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:rect", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(144);
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float(ctx, (((jobject) createStringLiteral(ctx, u8"whiteui"_j))), ((frame[1].f) + ((frame[3].f) / (jfloat(2)))), ((frame[2].f) + ((frame[4].f) / (jfloat(2)))), (frame[3].f), (frame[4].f));
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:draw", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"chatopacity"_j))));
	frame[1].f = ((jfloat(temp0)) / (jfloat(100.0f)));
	LINE_NUMBER(150);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp2 = (jfloat(temp1)) / (jfloat(1.5f));
	jfloat temp3 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(700.0f)));
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp2, temp3);
	frame[2].f = temp4;
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shadowColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(154);
	if (((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shown) == 0) goto label_4;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_offsetx;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	jfloat temp1 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp2 = temp1 + ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginBottom);
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	jfloat temp3 = (jfloat)((func_arc_scene_ui_TextField_getWidth_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getWidth_R_float])(ctx, sp[1].o);
	jfloat temp4 = temp3 + (jfloat(15.0f));
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	jfloat temp5 = (jfloat)((func_arc_scene_ui_TextField_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getHeight_R_float])(ctx, sp[1].o);
	((func_mindustry_ui_fragments_ChatFragment_rect_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_rect_float_float_float_float])(ctx, sp[0].o, temp0, temp2, temp4, (temp5 - (jfloat(1))));
	}
label_4:;
	{
	LINE_NUMBER(158);
	M_arc_scene_ui_layout_Table_draw(ctx, (frame[0].o));
	LINE_NUMBER(160);
	frame[3].f = ((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatspace);
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = ((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shown);
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_fieldlabel;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = ((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shown);
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shadowColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shadowColor;
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) * (frame[1].f)));
	LINE_NUMBER(168);
	jfloat temp0 = ((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_offsety) + (frame[3].f);
	jfloat temp1 = (jfloat)((func_mindustry_ui_fragments_ChatFragment_getMarginBottom_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_getMarginBottom_R_float])(ctx, (frame[0].o));
	jfloat temp2 = temp0 + temp1;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	frame[4].f = (temp2 + ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginBottom));
	LINE_NUMBER(169);
	frame[5].i = ((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos);
	}
label_13:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_messages;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_14;
	}
	{
	if ((frame[5].i) >= ((10) + ((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos))) goto label_14;
	}
	{
	if ((floatCompare((jfloat((frame[5].i))), ((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_fadetime), 1)) < 0) goto label_15;
	}
	{
	if (((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shown) == 0) goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_messages;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(172);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_layout;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_font;
	sp[2].o = frame[6].o;
	clinit_arc_graphics_Color(ctx);
	sp[3].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].f), (12), (jint(1)));
	LINE_NUMBER(173);
	jfloat temp0 = frame[4].f;
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_layout;
	frame[4].f = (temp0 + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_height) + ((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_textspacing)));
	LINE_NUMBER(174);
	if (((frame[5].i) - ((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos)) != 0) goto label_19;
	}
	{
	frame[4].f = ((frame[4].f) - (((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_textspacing) + (jfloat(1))));
	}
label_19:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, sp[0].o);
	((func_arc_graphics_g2d_FontCache_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_clear])(ctx, sp[0].o);
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_FontCache_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, (frame[6].o), (((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_fontoffsetx) + ((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_offsetx)), (((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_offsety) + (frame[4].f)), (frame[2].f), (12), (jint(1)));
	LINE_NUMBER(180);
	if (((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shown) != 0) goto label_23;
	}
	{
	if ((floatCompare((((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_fadetime) - (jfloat((frame[5].i)))), (jfloat(1)), 1)) >= 0) goto label_23;
	}
	{
	if ((floatCompare((((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_fadetime) - (jfloat((frame[5].i)))), (jfloat(0)), -1)) < 0) goto label_23;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, sp[0].o);
	((func_arc_graphics_g2d_FontCache_setAlphas_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_setAlphas_float])(ctx, sp[0].o, ((((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_fadetime) - (jfloat((frame[5].i)))) * (frame[1].f)));
	LINE_NUMBER(182);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = jfloat(0);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shadowColor;
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, temp0, temp1, temp2, ((((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) * (((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_fadetime) - (jfloat((frame[5].i))))) * (frame[1].f)));
	goto label_26;
	}
label_23:;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, sp[0].o);
	((func_arc_graphics_g2d_FontCache_setAlphas_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_setAlphas_float])(ctx, sp[0].o, (frame[1].f));
	}
label_26:;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_offsetx;
	jfloat temp1 = frame[4].f;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_layout;
	jfloat temp2 = (temp1 - ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[1].o))->F_height)) - (jfloat(2));
	jfloat temp3 = frame[2].f;
	jfloat temp4 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	jfloat temp5 = temp3 + temp4;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_layout;
	((func_mindustry_ui_fragments_ChatFragment_rect_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_rect_float_float_float_float])(ctx, sp[0].o, temp0, temp2, temp5, (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[1].o))->F_height) + ((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_textspacing)));
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shadowColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(189);
	jfloat temp6 = frame[1].f;
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shadowColor;
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp6 * ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a)));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, sp[0].o);
	((func_arc_graphics_g2d_FontCache_draw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_draw])(ctx, sp[0].o);
	LINE_NUMBER(169);
	INST_IINC(5, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(194);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(196);
	if ((floatCompare(((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_fadetime), (jfloat(0)), -1)) <= 0) goto label_32;
	}
	{
	if (((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shown) != 0) goto label_32;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_fadetime = (((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_fadetime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(180.0f))));
	}
label_32:;
	LINE_NUMBER(199);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_checkPing_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:checkPing", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(203);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[1].o), (44));
	frame[2].i = temp0;
	LINE_NUMBER(204);
	if ((frame[2].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(205);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (32), ((frame[2].i) + (jint(1))));
	frame[3].i = temp0;
	LINE_NUMBER(207);
	frame[4].i = (jint(0));
	LINE_NUMBER(208);
	if ((frame[3].i) != ((frame[2].i) + (jint(1)))) goto label_6;
	}
	{
	LINE_NUMBER(209);
	frame[4].i = (jint(1));
	LINE_NUMBER(210);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (32), ((frame[2].i) + (jint(2))));
	frame[3].i = temp0;
	}
label_6:;
	{
	LINE_NUMBER(212);
	if ((frame[3].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(213);
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_int_int_int_R_int(ctx, (frame[1].o), (10), (jint(-1)), (jint(0)), (frame[2].i));
	frame[5].i = temp0;
	sp[0].o = frame[1].o;
	jint temp1 = 10;
	jint temp2 = jint(-1);
	jint temp3 = (frame[2].i) + (jint(1));
	sp[1].i = temp1;
	sp[2].i = temp2;
	sp[3].i = temp3;
	sp += 4;
	if ((frame[4].i) == 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 5;
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_int_int_int_R_int(ctx, sp[0].o, sp[1].i, sp[2].i, (sp[3].i + sp[4].i), (frame[3].i));
	frame[6].i = temp0;
	LINE_NUMBER(214);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	jint temp1 = (jint)((func_mindustry_world_Tiles_in_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_in_int_int_R_boolean])(ctx, sp[0].o, (frame[5].i), (frame[6].i));
	if (temp1 == 0) goto label_2;
	}
	{
	LINE_NUMBER(215);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp0 = jfloat(((frame[5].i) * (8)));
	jfloat temp1 = jfloat(((frame[6].i) * (8)));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	SM_mindustry_gen_Call_pingLocation_mindustry_gen_Player_float_float_java_lang_String(ctx, sp[0].o, temp0, temp1, sp[1].o);
	}
label_2:;
	LINE_NUMBER(219);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_sendMessage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:sendMessage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(223);
	((func_mindustry_ui_fragments_ChatFragment_clearChatInput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_clearChatInput])(ctx, (frame[0].o));
	LINE_NUMBER(226);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_mode;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment$ChatMode *) NULL_CHECK(sp[1].o))->F_prefix;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_mode;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment$ChatMode *) NULL_CHECK(sp[1].o))->F_prefix;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, temp0);
	jint temp1 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_4;
	}
label_3:;
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_history;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) < (jint(2))) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_history;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint(1)));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (frame[1].o));
	if (temp0 != 0) goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_history;
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, (jint(1)), (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)SM_mindustry_core_UI_formatIcons_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(232);
	((func_mindustry_ui_fragments_ChatFragment_checkPing_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_checkPing_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(234);
	clinit_mindustry_game_EventType$ClientChatEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$ClientChatEvent);
	init_mindustry_game_EventType$ClientChatEvent_java_lang_String(ctx, sp[0].o, (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(236);
	SM_mindustry_gen_Call_sendChatMessage_java_lang_String(ctx, (frame[1].o));
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_toggle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:toggle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(241);
	if (((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shown) != 0) goto label_1;
	}
	{
	LINE_NUMBER(242);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(243);
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shown = (jint(1));
	LINE_NUMBER(244);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_5;
	}
	{
	LINE_NUMBER(245);
	clinit_arc_Input$TextInput(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Input$TextInput);
	init_arc_Input$TextInput(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(246);
	((arc_Input$TextInput *) NULL_CHECK((frame[1].o)))->F_maxLength = (150);
	LINE_NUMBER(247);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ChatFragment_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_ui_fragments_ChatFragment_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ChatFragment_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((arc_Input$TextInput *) NULL_CHECK(sp[0].o))->F_accepted = (jref) sp[1].o;
	LINE_NUMBER(253);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ChatFragment_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_ui_fragments_ChatFragment_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ChatFragment_invoke_java_lang_Runnable_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((arc_Input$TextInput *) NULL_CHECK(sp[0].o))->F_canceled = (jref) sp[1].o;
	LINE_NUMBER(254);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	((func_arc_Input_getTextInput_arc_Input$TextInput) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_getTextInput_arc_Input$TextInput])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(255);
	goto label_12;
	}
label_5:;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	((func_arc_scene_ui_TextField_fireClick) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_fireClick])(ctx, sp[0].o);
	goto label_12;
	}
label_1:;
	{
	LINE_NUMBER(260);
	jfloat temp0 = jfloat(2);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ChatFragment_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_ui_fragments_ChatFragment_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ChatFragment_invoke_java_lang_Runnable_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[0].o);
	}
label_12:;
	LINE_NUMBER(267);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:hide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(271);
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shown = (jint(0));
	LINE_NUMBER(272);
	((func_mindustry_ui_fragments_ChatFragment_clearChatInput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_clearChatInput])(ctx, (frame[0].o));
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_updateChat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:updateChat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_mode;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_ChatFragment$ChatMode_normalizedPrefix_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment$ChatMode_normalizedPrefix_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_history;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, ((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_historyPos));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(277);
	((func_mindustry_ui_fragments_ChatFragment_updateCursor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_updateCursor])(ctx, (frame[0].o));
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_nextMode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:nextMode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_mode;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(284);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_mode;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_ChatFragment$ChatMode_next_R_mindustry_ui_fragments_ChatFragment$ChatMode) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment$ChatMode_next_R_mindustry_ui_fragments_ChatFragment$ChatMode])(ctx, sp[1].o);
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(285);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_mode;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ChatFragment$ChatMode_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment$ChatMode_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_mindustry_ui_fragments_ChatFragment$ChatMode_normalizedPrefix_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment$ChatMode_normalizedPrefix_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_mode;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_ChatFragment$ChatMode_normalizedPrefix_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment$ChatMode_normalizedPrefix_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[2].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[2].o);
	sp[3].o = (jobject)((func_mindustry_ui_fragments_ChatFragment$ChatMode_normalizedPrefix_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment$ChatMode_normalizedPrefix_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, temp0);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_mode;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_ChatFragment$ChatMode_normalizedPrefix_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment$ChatMode_normalizedPrefix_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(293);
	((func_mindustry_ui_fragments_ChatFragment_updateCursor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_updateCursor])(ctx, (frame[0].o));
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_clearChatInput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:clearChatInput", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(297);
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_historyPos = (jint(0));
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_history;
	((func_arc_struct_Seq_set_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_int_java_lang_Object])(ctx, sp[0].o, (jint(0)), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(299);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_mode;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_ChatFragment$ChatMode_normalizedPrefix_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment$ChatMode_normalizedPrefix_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(300);
	((func_mindustry_ui_fragments_ChatFragment_updateCursor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_updateCursor])(ctx, (frame[0].o));
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_updateCursor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:updateCursor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((func_arc_scene_ui_TextField_setCursorPosition_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setCursorPosition_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_ChatFragment_shown_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:shown", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return ((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shown);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_addMessage_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:addMessage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(312);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_messages;
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, (jint(0)), (frame[1].o));
	LINE_NUMBER(315);
	sp[0].o = frame[0].o;
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_fadetime = (((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_fadetime) + (jfloat(1)));
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_fadetime), (jfloat(10.0f)));
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_fadetime = (temp0 + (jfloat(1)));
	LINE_NUMBER(318);
	if (((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos) <= 0) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_scrollPos = (((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_scrollPos) + (jint(1)));
	}
label_5:;
	LINE_NUMBER(319);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_lambda$toggle$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:lambda$toggle$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(261);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(262);
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shown = (jint(0));
	LINE_NUMBER(263);
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos = (jint(0));
	LINE_NUMBER(264);
	((func_mindustry_ui_fragments_ChatFragment_sendMessage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_sendMessage])(ctx, (frame[0].o));
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_lambda$toggle$0_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:lambda$toggle$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(249);
	((func_mindustry_ui_fragments_ChatFragment_sendMessage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_sendMessage])(ctx, (frame[0].o));
	LINE_NUMBER(250);
	((func_mindustry_ui_fragments_ChatFragment_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_hide])(ctx, (frame[0].o));
	LINE_NUMBER(251);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	((func_arc_Input_setOnscreenKeyboardVisible_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_setOnscreenKeyboardVisible_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_ChatFragment_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:lambda$new$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	jint temp0 = (jint)((func_arc_scene_ui_TextField_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_hasKeyboard_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_minimapfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_MinimapFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MinimapFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_TextField)) == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(65);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_chat;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_5;
	{
	if (((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_lastFrameHadFocus) != 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(66);
	((func_mindustry_ui_fragments_ChatFragment_toggle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_toggle])(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(69);
	if (((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shown) == 0) goto label_7;
	}
	{
	LINE_NUMBER(70);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_chatHistoryPrev;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_historyPos;
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_history;
	if (temp0 >= (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)))) goto label_9;
	}
	{
	LINE_NUMBER(71);
	if (((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_historyPos) != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_history;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_chatfield;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_struct_Seq_set_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_int_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_historyPos = (((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_historyPos) + (jint(1)));
	LINE_NUMBER(73);
	((func_mindustry_ui_fragments_ChatFragment_updateChat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_updateChat])(ctx, (frame[0].o));
	}
label_9:;
	{
	LINE_NUMBER(75);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_chatHistoryNext;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_13;
	}
	{
	if (((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_historyPos) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_historyPos = (((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_historyPos) - (jint(1)));
	LINE_NUMBER(77);
	((func_mindustry_ui_fragments_ChatFragment_updateChat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_updateChat])(ctx, (frame[0].o));
	}
label_13:;
	{
	LINE_NUMBER(79);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_chatMode;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(80);
	((func_mindustry_ui_fragments_ChatFragment_nextMode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_nextMode])(ctx, (frame[0].o));
	}
label_16:;
	{
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_scrollPos));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_chatScroll;
	jfloat temp1 = (jfloat)((func_arc_Input_axis_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_axis_arc_input_KeyBind_R_float])(ctx, sp[1].o, sp[2].o);
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = jfloat(0);
	jint temp4 = jint(0);
	sp[1].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_messages;
	jint temp5 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp4, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (10)));
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp2, temp3, (jfloat(temp5)));
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK(sp[0].o))->F_scrollPos = (jint(temp6));
	}
label_7:;
	{
	LINE_NUMBER(85);
	((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_lastFrameHadFocus = (frame[1].i);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_ChatFragment_lambda$new$0_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_messages;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(52);
	((func_mindustry_ui_fragments_ChatFragment_clearMessages) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_clearMessages])(ctx, (frame[0].o));
	LINE_NUMBER(54);
	if (((jint)((mindustry_ui_fragments_ChatFragment *) NULL_CHECK((frame[0].o)))->F_shown) == 0) goto label_1;
	}
	{
	LINE_NUMBER(55);
	((func_mindustry_ui_fragments_ChatFragment_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_hide])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(59);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_ChatFragment[] {
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
	(void *) M_mindustry_ui_fragments_ChatFragment_draw,
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
	(void *) M_mindustry_ui_fragments_ChatFragment_build_arc_scene_Group,
	(void *) M_mindustry_ui_fragments_ChatFragment_clearMessages,
	(void *) M_mindustry_ui_fragments_ChatFragment_setup,
	(void *) M_mindustry_ui_fragments_ChatFragment_handleType_char,
	(void *) M_mindustry_ui_fragments_ChatFragment_rect_float_float_float_float,
	(void *) M_mindustry_ui_fragments_ChatFragment_checkPing_java_lang_String,
	(void *) M_mindustry_ui_fragments_ChatFragment_sendMessage,
	(void *) M_mindustry_ui_fragments_ChatFragment_toggle,
	(void *) M_mindustry_ui_fragments_ChatFragment_hide,
	(void *) M_mindustry_ui_fragments_ChatFragment_updateChat,
	(void *) M_mindustry_ui_fragments_ChatFragment_nextMode,
	(void *) M_mindustry_ui_fragments_ChatFragment_clearChatInput,
	(void *) M_mindustry_ui_fragments_ChatFragment_updateCursor,
	(void *) M_mindustry_ui_fragments_ChatFragment_shown_R_boolean,
	(void *) M_mindustry_ui_fragments_ChatFragment_addMessage_java_lang_String,
	(void *) M_mindustry_ui_fragments_ChatFragment_lambda$toggle$1,
	(void *) M_mindustry_ui_fragments_ChatFragment_lambda$toggle$0_java_lang_String,
	(void *) M_mindustry_ui_fragments_ChatFragment_lambda$new$1,
	(void *) M_mindustry_ui_fragments_ChatFragment_lambda$new$0_R_boolean,
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
	{ "handleType", "(C)V" },
	{ "rect", "(FFFF)V" },
	{ "checkPing", "(Ljava/lang/String;)V" },
	{ "sendMessage", "()V" },
	{ "toggle", "()V" },
	{ "hide", "()V" },
	{ "updateChat", "()V" },
	{ "nextMode", "()V" },
	{ "clearChatInput", "()V" },
	{ "updateCursor", "()V" },
	{ "shown", "()Z" },
	{ "addMessage", "(Ljava/lang/String;)V" },
	{ "lambda$toggle$1", "()V" },
	{ "lambda$toggle$0", "(Ljava/lang/String;)V" },
	{ "lambda$new$1", "()V" },
	{ "lambda$new$0", "()Z" },
};

static jclass innerClasses[] {
	&class_mindustry_ui_fragments_ChatFragment$ChatMode,
};

static FieldMetadata fields[] {
	{ "messagesShown", &class_int, (intptr_t) &SF_mindustry_ui_fragments_ChatFragment_messagesShown, "I", 26 },
	{ "messages", &class_arc_struct_Seq, offsetof(mindustry_ui_fragments_ChatFragment, F_messages), "Larc/struct/Seq;", 2 },
	{ "fadetime", &class_float, offsetof(mindustry_ui_fragments_ChatFragment, F_fadetime), "F", 2 },
	{ "shown", &class_boolean, offsetof(mindustry_ui_fragments_ChatFragment, F_shown), "Z", 2 },
	{ "chatfield", &class_arc_scene_ui_TextField, offsetof(mindustry_ui_fragments_ChatFragment, F_chatfield), "Larc/scene/ui/TextField;", 2 },
	{ "fieldlabel", &class_arc_scene_ui_Label, offsetof(mindustry_ui_fragments_ChatFragment, F_fieldlabel), "Larc/scene/ui/Label;", 2 },
	{ "mode", &class_mindustry_ui_fragments_ChatFragment$ChatMode, offsetof(mindustry_ui_fragments_ChatFragment, F_mode), "Lmindustry/ui/fragments/ChatFragment$ChatMode;", 2 },
	{ "font", &class_arc_graphics_g2d_Font, offsetof(mindustry_ui_fragments_ChatFragment, F_font), "Larc/graphics/g2d/Font;", 2 },
	{ "layout", &class_arc_graphics_g2d_GlyphLayout, offsetof(mindustry_ui_fragments_ChatFragment, F_layout), "Larc/graphics/g2d/GlyphLayout;", 2 },
	{ "offsetx", &class_float, offsetof(mindustry_ui_fragments_ChatFragment, F_offsetx), "F", 2 },
	{ "offsety", &class_float, offsetof(mindustry_ui_fragments_ChatFragment, F_offsety), "F", 2 },
	{ "fontoffsetx", &class_float, offsetof(mindustry_ui_fragments_ChatFragment, F_fontoffsetx), "F", 2 },
	{ "chatspace", &class_float, offsetof(mindustry_ui_fragments_ChatFragment, F_chatspace), "F", 2 },
	{ "shadowColor", &class_arc_graphics_Color, offsetof(mindustry_ui_fragments_ChatFragment, F_shadowColor), "Larc/graphics/Color;", 2 },
	{ "textspacing", &class_float, offsetof(mindustry_ui_fragments_ChatFragment, F_textspacing), "F", 2 },
	{ "history", &class_arc_struct_Seq, offsetof(mindustry_ui_fragments_ChatFragment, F_history), "Larc/struct/Seq;", 2 },
	{ "historyPos", &class_int, offsetof(mindustry_ui_fragments_ChatFragment, F_historyPos), "I", 2 },
	{ "scrollPos", &class_int, offsetof(mindustry_ui_fragments_ChatFragment, F_scrollPos), "I", 2 },
	{ "lastFrameHadFocus", &class_boolean, offsetof(mindustry_ui_fragments_ChatFragment, F_lastFrameHadFocus), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_ChatFragment, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_ui_fragments_ChatFragment_build_arc_scene_Group, VTABLE_mindustry_ui_fragments_ChatFragment_build_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
	{ "clearMessages", (intptr_t) M_mindustry_ui_fragments_ChatFragment_clearMessages, VTABLE_mindustry_ui_fragments_ChatFragment_clearMessages, "()V", 1 },
	{ "setup", (intptr_t) M_mindustry_ui_fragments_ChatFragment_setup, VTABLE_mindustry_ui_fragments_ChatFragment_setup, "()V", 2 },
	{ "handleType", (intptr_t) M_mindustry_ui_fragments_ChatFragment_handleType_char, VTABLE_mindustry_ui_fragments_ChatFragment_handleType_char, "(C)V", 2 },
	{ "rect", (intptr_t) M_mindustry_ui_fragments_ChatFragment_rect_float_float_float_float, VTABLE_mindustry_ui_fragments_ChatFragment_rect_float_float_float_float, "(FFFF)V", 4 },
	{ "draw", (intptr_t) M_mindustry_ui_fragments_ChatFragment_draw, VTABLE_mindustry_ui_fragments_ChatFragment_draw, "()V", 1 },
	{ "checkPing", (intptr_t) M_mindustry_ui_fragments_ChatFragment_checkPing_java_lang_String, VTABLE_mindustry_ui_fragments_ChatFragment_checkPing_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "sendMessage", (intptr_t) M_mindustry_ui_fragments_ChatFragment_sendMessage, VTABLE_mindustry_ui_fragments_ChatFragment_sendMessage, "()V", 2 },
	{ "toggle", (intptr_t) M_mindustry_ui_fragments_ChatFragment_toggle, VTABLE_mindustry_ui_fragments_ChatFragment_toggle, "()V", 1 },
	{ "hide", (intptr_t) M_mindustry_ui_fragments_ChatFragment_hide, VTABLE_mindustry_ui_fragments_ChatFragment_hide, "()V", 1 },
	{ "updateChat", (intptr_t) M_mindustry_ui_fragments_ChatFragment_updateChat, VTABLE_mindustry_ui_fragments_ChatFragment_updateChat, "()V", 1 },
	{ "nextMode", (intptr_t) M_mindustry_ui_fragments_ChatFragment_nextMode, VTABLE_mindustry_ui_fragments_ChatFragment_nextMode, "()V", 1 },
	{ "clearChatInput", (intptr_t) M_mindustry_ui_fragments_ChatFragment_clearChatInput, VTABLE_mindustry_ui_fragments_ChatFragment_clearChatInput, "()V", 1 },
	{ "updateCursor", (intptr_t) M_mindustry_ui_fragments_ChatFragment_updateCursor, VTABLE_mindustry_ui_fragments_ChatFragment_updateCursor, "()V", 1 },
	{ "shown", (intptr_t) M_mindustry_ui_fragments_ChatFragment_shown_R_boolean, VTABLE_mindustry_ui_fragments_ChatFragment_shown_R_boolean, "()Z", 1 },
	{ "addMessage", (intptr_t) M_mindustry_ui_fragments_ChatFragment_addMessage_java_lang_String, VTABLE_mindustry_ui_fragments_ChatFragment_addMessage_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "lambda$toggle$1", (intptr_t) M_mindustry_ui_fragments_ChatFragment_lambda$toggle$1, VTABLE_mindustry_ui_fragments_ChatFragment_lambda$toggle$1, "()V", 4098 },
	{ "lambda$toggle$0", (intptr_t) M_mindustry_ui_fragments_ChatFragment_lambda$toggle$0_java_lang_String, VTABLE_mindustry_ui_fragments_ChatFragment_lambda$toggle$0_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_ui_fragments_ChatFragment_lambda$new$1, VTABLE_mindustry_ui_fragments_ChatFragment_lambda$new$1, "()V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_fragments_ChatFragment_lambda$new$0_R_boolean, VTABLE_mindustry_ui_fragments_ChatFragment_lambda$new$0_R_boolean, "()Z", 4098 },
};

Class class_mindustry_ui_fragments_ChatFragment{
		.nativeName = (intptr_t) "mindustry/ui/fragments/ChatFragment",
		.parentClass = (intptr_t) &class_arc_scene_ui_layout_Table,
		.size = sizeof(mindustry_ui_fragments_ChatFragment),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_ChatFragment,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_ChatFragment,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_ChatFragment,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 274,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_ChatFragment = registerClass(&class_mindustry_ui_fragments_ChatFragment);

}
