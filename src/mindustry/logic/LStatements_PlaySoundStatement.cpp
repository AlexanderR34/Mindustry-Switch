#include "mindustry/logic/LStatements_PlaySoundStatement.h"
#include "arc/func/Prov.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Cons2_1.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Cons_25.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Cons_23.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Cons_24.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Cons_21.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Cons_22.h"
#include "arc/graphics/Color.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Cons_20.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/logic/LStatements.h"
#include "arc/scene/ui/Button.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/logic/LStatements_PlaySoundStatement.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/scene/ui/ImageButton.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Func_1.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Cons_18.h"
#include "arc/Core.h"
#include "arc/func/Func.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Cons_19.h"
#include "java/util/Iterator.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Cons_16.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Cons_17.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Cons_14.h"
#include "mindustry/logic/LAssembler.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Cons_15.h"
#include "mindustry/logic/LExecutor_PlaySoundI.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Cons_13.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Prov_3.h"
#include "arc/util/Nullable.h"
#include "arc/func/Cons2.h"
#include "arc/struct/ObjectMap_Values.h"
#include "arc/assets/AssetManager.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_arc_func_Prov_2.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "mindustry/logic/LCategory.h"
#include "arc/struct/ObjectMap_Keys.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/logic/LStatement.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "arc/audio/AudioBus.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/files/Fi.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_java_util_Comparator_1.h"
#include "java/util/Comparator.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/core/Control.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_java_lang_Runnable_8.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_java_lang_Runnable_11.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_java_lang_Runnable_10.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_java_lang_Runnable_13.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_java_lang_Runnable_12.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_java_lang_Runnable_15.h"
#include "arc/audio/AudioSource.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_java_lang_Runnable_14.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_SoundChoice.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "arc/audio/Sound.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_java_lang_Runnable_9.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/audio/SoundControl.h"

extern "C" {

jobject SF_mindustry_logic_LStatements$PlaySoundStatement_lastPreview;

void mark_mindustry_logic_LStatements$PlaySoundStatement(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_LStatements$PlaySoundStatement_lastPreview)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LStatements$PlaySoundStatement_lastPreview)->clazz)->markFunction)((jobject) SF_mindustry_logic_LStatements$PlaySoundStatement_lastPreview, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_logic_LStatement(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_logic_LStatements$PlaySoundStatement *) object;
	if (self->F_id)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_id)->clazz)->markFunction)((jobject) self->F_id, mark, depth + 1);
	if (self->F_volume)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_volume)->clazz)->markFunction)((jobject) self->F_volume, mark, depth + 1);
	if (self->F_pitch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pitch)->clazz)->markFunction)((jobject) self->F_pitch, mark, depth + 1);
	if (self->F_pan)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pan)->clazz)->markFunction)((jobject) self->F_pan, mark, depth + 1);
	if (self->F_x)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_x)->clazz)->markFunction)((jobject) self->F_x, mark, depth + 1);
	if (self->F_y)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_y)->clazz)->markFunction)((jobject) self->F_y, mark, depth + 1);
	if (self->F_limit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_limit)->clazz)->markFunction)((jobject) self->F_limit, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$PlaySoundStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatement(ctx);
}

void init_mindustry_logic_LStatements$PlaySoundStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2212);
	init_mindustry_logic_LStatement(ctx, (frame[0].o));
	LINE_NUMBER(2214);
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_id = (jref) (((jobject) createStringLiteral(ctx, u8"@sfx-shoot"_j)));
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_volume = (jref) (((jobject) createStringLiteral(ctx, u8"1"_j)));
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_pitch = (jref) (((jobject) createStringLiteral(ctx, u8"1"_j)));
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_pan = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (((jobject) createStringLiteral(ctx, u8"@thisx"_j)));
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (((jobject) createStringLiteral(ctx, u8"@thisy"_j)));
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_limit = (jref) (((jobject) createStringLiteral(ctx, u8"true"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:build", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2218);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(2220);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_positional) == 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"positional"_j));
	goto label_3;
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"global"_j));
label_3:;
	{
	sp -= 2;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_8);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(160.0f);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(2223);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2225);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_13);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2235);
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"volume"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2236);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_volume;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$PlaySoundStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$PlaySoundStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(2237);
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"pitch"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2238);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_pitch;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$PlaySoundStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$PlaySoundStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(2240);
	if (((jint)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_positional) == 0) goto label_11;
	}
	{
	LINE_NUMBER(2241);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"x"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_x;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_16);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$PlaySoundStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$PlaySoundStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(2243);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"y"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_17);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$PlaySoundStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$PlaySoundStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(2245);
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"pan"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2246);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_pan;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_18);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$PlaySoundStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$PlaySoundStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_14:;
	{
	LINE_NUMBER(2249);
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"limit"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2250);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_limit;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$PlaySoundStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$PlaySoundStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(2251);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LStatements$PlaySoundStatement_privileged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:privileged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2255);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$PlaySoundStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:build", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2260);
	clinit_mindustry_logic_LExecutor$PlaySoundI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$PlaySoundI);
	jint temp0 = (jint)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_positional;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_id;
	sp[1].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[1].o, sp[2].o);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_volume;
	sp[2].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[2].o, sp[3].o);
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_pitch;
	sp[3].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[3].o, sp[4].o);
	sp[4].o = frame[1].o;
	sp[5].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_pan;
	sp[4].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[4].o, sp[5].o);
	sp[5].o = frame[1].o;
	sp[6].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_x;
	sp[5].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[5].o, sp[6].o);
	sp[6].o = frame[1].o;
	sp[7].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_y;
	sp[6].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[6].o, sp[7].o);
	sp[7].o = frame[1].o;
	sp[8].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_limit;
	sp[7].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[7].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[7].o, sp[8].o);
	init_mindustry_logic_LExecutor$PlaySoundI_boolean_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$PlaySoundStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2265);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_world;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_showSoundSelect_arc_scene_ui_Button_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:showSoundSelect", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2283);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2284);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2286);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) &class_arc_audio_Sound);
	clinit_arc_struct_Seq(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getAllEntries_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getAllEntries_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(2287);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_value;
	frame[7].o = (checkCast(ctx, &class_arc_audio_Sound, sp[0].o));
	LINE_NUMBER(2288);
	sp[0].o = frame[7].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	INST_ALOAD(7);
	if ((--sp)->o == nullptr) goto label_3;
	{
	sp[0].o = (jobject)((arc_audio_Sound *) NULL_CHECK((frame[7].o)))->F_file;
	if (sp[0].o != nullptr) goto label_7;
	}
	goto label_3;
label_7:;
	{
	LINE_NUMBER(2290);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_key;
	sp[0].o = (jobject)SM_arc_util_Strings_getFileNameWithoutExtension_java_lang_String_R_java_lang_String(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2291);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_key;
	sp[0].o = (jobject)SM_mindustry_logic_LStatements$PlaySoundStatement_soundCategory_java_lang_String_R_java_lang_String(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(2293);
	clinit_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice);
	init_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_java_lang_String_java_lang_String_arc_audio_Sound(ctx, sp[0].o, (frame[9].o), (frame[8].o), (frame[7].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(2294);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[3].o), (frame[10].o));
	LINE_NUMBER(2295);
	sp[0].o = frame[4].o;
	sp[1].o = frame[9].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Prov_2);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[10].o));
	LINE_NUMBER(2296);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(2298);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_13;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(2300);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_util_Comparator_1(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_java_util_Comparator_1 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_util_Comparator_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2305);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Keys_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Keys_toSeq_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(2306);
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, (frame[5].o), (jint(0)), (((jobject) createStringLiteral(ctx, u8"all"_j))));
	LINE_NUMBER(2308);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(2309);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Func_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sortComparing_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sortComparing_arc_func_Func_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2310);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(2312);
	sp[0].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_id;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@sfx-"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_id;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (jint(5)));
	sp += 1;
	goto label_22;
	}
label_21:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK(sp[-1].o))->F_id;
label_22:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(2313);
	frame[7].o = (((jobject) createStringLiteral(ctx, u8"all"_j)));
	LINE_NUMBER(2314);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[3].o));
	frame[8].o = sp[0].o;
	}
label_25:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice, sp[0].o));
	LINE_NUMBER(2315);
	sp[0].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[9].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[6].o));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(2316);
	sp[0].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[9].o)))->F_category;
	frame[7].o = sp[0].o;
	LINE_NUMBER(2317);
	goto label_26;
	}
label_28:;
	LINE_NUMBER(2319);
	goto label_25;
label_26:;
	{
	LINE_NUMBER(2321);
	frame[8].o = (frame[7].o);
	LINE_NUMBER(2323);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons2_1);
		proxy->F_field6 = (jref) (frame[5].o);
		proxy->F_field5 = (jref) (frame[6].o);
		proxy->F_field4 = (jref) (frame[2].o);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[8].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_9);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_logic_LStatement_showSelectTable_arc_scene_ui_Button_arc_func_Cons2_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(2392);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LStatements$PlaySoundStatement_soundCategory_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:soundCategory", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2395);
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, (frame[0].o), (92), (47));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2396);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (47));
	frame[2].i = temp0;
	LINE_NUMBER(2397);
	if ((frame[2].i) >= 0) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"data patch"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(2399);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_int_R_int])(ctx, (frame[1].o), (47), ((frame[2].i) - (jint(1))));
	frame[3].i = temp0;
	LINE_NUMBER(2400);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$PlaySoundStatement_previewSound_arc_audio_Sound(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:previewSound", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2404);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(2406);
	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatements$PlaySoundStatement_lastPreview;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatements$PlaySoundStatement_lastPreview;
	jint temp0 = (jint)((func_arc_audio_Sound_countPlaying_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_countPlaying_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_3;
	}
	{
	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatements$PlaySoundStatement_lastPreview;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_uiButton;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(2407);
	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatements$PlaySoundStatement_lastPreview;
	((func_arc_audio_Sound_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_stop])(ctx, sp[0].o);
	LINE_NUMBER(2408);
	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatements$PlaySoundStatement_lastPreview;
	if (sp[0].o != (frame[0].o)) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(2411);
	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	SF_mindustry_logic_LStatements$PlaySoundStatement_lastPreview = (frame[0].o);
	LINE_NUMBER(2413);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_uiButton;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_uiButton;
	POP_N(1); // Pop method args
	((func_arc_audio_Sound_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_stop])(ctx, sp[0].o);
label_7:;
	{
	LINE_NUMBER(2416);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	jfloat temp1 = jfloat(1);
	jfloat temp2 = jfloat(0);
	jint temp3 = jint(0);
	jint temp4 = jint(1);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_control;
	sp[1].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[1].o))->F_sound;
	sp[1].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK(sp[1].o))->F_uiBus;
	jint temp5 = (jint)((func_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, sp[1].o);
	LINE_NUMBER(2417);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$11(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$showSoundSelect$11", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	{
	LINE_NUMBER(2388);
	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatements$PlaySoundStatement_lastPreview;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2389);
	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatements$PlaySoundStatement_lastPreview;
	((func_arc_audio_Sound_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_stop])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(2391);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$2_arc_struct_ObjectMap_java_lang_String_arc_struct_Seq_arc_scene_ui_layout_Table_java_lang_String_arc_struct_Seq_arc_scene_ui_layout_Table_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$showSoundSelect$2", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	{
	LINE_NUMBER(2324);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(2326);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[2].o));
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if (temp1 == 0) goto label_2;
	}
	INST_ALOAD(2);
	goto label_3;
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"all"_j));
label_3:;
	{
	sp -= 4;
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	frame[9].o = sp[0].o;
	LINE_NUMBER(2327);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(2328);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(2330);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10);
		proxy->F_field7 = (jref) (frame[5].o);
		proxy->F_field6 = (jref) (frame[8].o);
		proxy->F_field5 = (jref) (frame[4].o);
		proxy->F_field4 = (jref) (frame[1].o);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[9].o);
		proxy->F_field1 = (jref) (frame[10].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[12].o = sp[0].o;
	LINE_NUMBER(2368);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_20);
		proxy->F_field4 = (jref) (frame[11].o);
		proxy->F_field3 = (jref) (frame[7].o);
		proxy->F_field2 = (jref) (frame[12].o);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2382);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(160.0f)));
	LINE_NUMBER(2384);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[7].o), (frame[10].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((temp1 / temp2) * (jfloat(0.9f))), (jfloat(450.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	LINE_NUMBER(2386);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[12].o)))(ctx, (frame[12].o));
	LINE_NUMBER(2387);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$9_arc_struct_Seq_Array1_java_lang_String_java_lang_Runnable_arc_scene_ui_layout_Table_arc_scene_ui_ButtonGroup_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$showSoundSelect$9", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(2369);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(2370);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(140.0f)), (jfloat(34.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(2372);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(2373);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (frame[7].o));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logicTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_11);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	sp[2].o = frame[7].o;
	LINE_NUMBER(2380);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(2381);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(2382);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$10_Array1_java_lang_String_java_lang_String_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$showSoundSelect$10", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2374);
	ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))) = (frame[1].o);
	LINE_NUMBER(2375);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(2377);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[3].o)))->F_parent;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_parent;
	frame[4].o = (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o));
	LINE_NUMBER(2378);
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, (frame[4].o));
	LINE_NUMBER(2379);
	((func_arc_scene_ui_layout_Table_act_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_act_float])(ctx, (frame[4].o), (jfloat(0)));
	LINE_NUMBER(2380);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$3_arc_scene_ui_layout_Table_Array1_java_lang_String_arc_struct_Seq_arc_struct_ObjectMap_arc_scene_ui_layout_Table_java_lang_Runnable_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$showSoundSelect$3", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(2331);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(2332);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(2333);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(2335);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(2336);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"all"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"all"_j))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(2337);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, (frame[8].o), (frame[3].o));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(2339);
	sp[0].o = frame[8].o;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Prov_3);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, (checkCast(ctx, &class_arc_struct_Seq, sp[1].o)));
	}
label_7:;
	{
	LINE_NUMBER(2342);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(2343);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@none.found"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(2344);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(2347);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice, sp[0].o));
	LINE_NUMBER(2348);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_21);
		proxy->F_field5 = (jref) (frame[7].o);
		proxy->F_field4 = (jref) (frame[6].o);
		proxy->F_field3 = (jref) (frame[5].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[10].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2364);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(2365);
	goto label_11;
	}
label_12:;
	LINE_NUMBER(2366);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$4_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_Array1_java_lang_String_arc_scene_ui_layout_Table_java_lang_Runnable_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$showSoundSelect$4", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(2349);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(2350);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(2352);
	sp[0].o = frame[6].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_play;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_cleari;
	jfloat temp0 = jfloat(28.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_12);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_22(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_22 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_22);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(2353);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(2354);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	LINE_NUMBER(2356);
	jint temp2 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"all"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"all"_j))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	if (temp2 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[1].o)))->F_category;
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001/\u0001"_j.string, 2, sp[0].o, sp[1].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK(sp[-1].o))->F_name;
label_7:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(2357);
	sp[0].o = frame[6].o;
	sp[1].o = frame[7].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logicTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_13);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(2361);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[1].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[1].o, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_23);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = jfloat(4.0f);
	LINE_NUMBER(2363);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(2364);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$8_arc_scene_ui_TextButton(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$showSoundSelect$8", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2362);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getLabelCell_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (8));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(2363);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$7_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_arc_scene_ui_layout_Table_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$showSoundSelect$7", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2358);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@sfx-\u0001"_j.string, 1, sp[1].o);
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK(sp[0].o))->F_id = (jref) sp[1].o;
	LINE_NUMBER(2359);
	((func_mindustry_logic_LStatements$PlaySoundStatement_build_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$PlaySoundStatement_build_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(2360);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(2361);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$6_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$showSoundSelect$6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2353);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[0].o)))->F_sound;
	sp += 1;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[0].o)))->F_sound;
	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LStatements$PlaySoundStatement_lastPreview;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[0].o)))->F_sound;
	jint temp0 = (jint)((func_arc_audio_Sound_countPlaying_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_countPlaying_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_1;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_pause;
	goto label_2;
label_1:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_play;
label_2:;
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$5_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$showSoundSelect$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2352);
	sp[0].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[0].o)))->F_sound;
	SM_mindustry_logic_LStatements$PlaySoundStatement_previewSound_arc_audio_Sound(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$1_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$showSoundSelect$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2309);
	sp[0].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$0_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$showSoundSelect$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2301);
	sp[0].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[0].o)))->F_category;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[1].o)))->F_category;
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp0;
	LINE_NUMBER(2302);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[1].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ILOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$11_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$build$11", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2250);
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_limit = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$10_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$build$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2246);
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_pan = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$9_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$build$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2243);
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$8_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$build$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2241);
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$7_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$build$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2238);
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_pitch = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$6_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$build$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2236);
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_volume = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$build$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2226);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2227);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_id;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_24(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_24 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_24);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$PlaySoundStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$PlaySoundStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	LINE_NUMBER(2229);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_25(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_25 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_arc_func_Cons_25);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_14);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(40.0f);
	LINE_NUMBER(2232);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-1.0f)));
	LINE_NUMBER(2233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$5(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$build$5", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	LINE_NUMBER(2232);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$3_arc_scene_ui_layout_Table_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$build$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2230);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencilSmall;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2231);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_15);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2232);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$4_arc_scene_ui_Button_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$build$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2231);
	((func_mindustry_logic_LStatements$PlaySoundStatement_showSoundSelect_arc_scene_ui_Button_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$PlaySoundStatement_showSoundSelect_arc_scene_ui_Button_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$2_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$build$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2227);
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_id = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement:lambda$build$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2221);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[0].o)))->F_positional) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK(sp[0].o))->F_positional = sp[1].i;
	LINE_NUMBER(2222);
	((func_mindustry_logic_LStatements$PlaySoundStatement_build_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$PlaySoundStatement_build_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(2223);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_logic_LStatements$PlaySoundStatement;
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

	{ // Field lastPreview
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_logic_LStatements$PlaySoundStatement[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_category_R_mindustry_logic_LCategory,
	(void *) M_mindustry_logic_LStatement_copy_R_mindustry_logic_LStatement,
	(void *) M_mindustry_logic_LStatement_useWrapping_R_boolean,
	(void *) M_mindustry_logic_LStatement_hidden_R_boolean,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_privileged_R_boolean,
	(void *) M_mindustry_logic_LStatement_nonPrivileged_R_boolean,
	(void *) M_mindustry_logic_LStatement_param_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_boolean_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_col_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons,
	(void *) M_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons,
	(void *) M_mindustry_logic_LStatement_fieldAlignSelect_arc_scene_ui_layout_Table_arc_func_Prov_arc_func_Cons_boolean_boolean,
	(void *) M_mindustry_logic_LStatement_afterRead,
	(void *) M_mindustry_logic_LStatement_write_java_lang_StringBuilder,
	(void *) M_mindustry_logic_LStatement_setupUI,
	(void *) M_mindustry_logic_LStatement_saveUI,
	(void *) M_mindustry_logic_LStatement_typeName_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_statementKey_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_localizedName_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_name_R_java_lang_String,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_showSoundSelect_arc_scene_ui_Button_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$2_arc_struct_ObjectMap_java_lang_String_arc_struct_Seq_arc_scene_ui_layout_Table_java_lang_String_arc_struct_Seq_arc_scene_ui_layout_Table_java_lang_Runnable,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$3_arc_scene_ui_layout_Table_Array1_java_lang_String_arc_struct_Seq_arc_struct_ObjectMap_arc_scene_ui_layout_Table_java_lang_Runnable_java_lang_String,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$4_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_Array1_java_lang_String_arc_scene_ui_layout_Table_java_lang_Runnable_java_lang_String_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$7_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_arc_scene_ui_layout_Table_java_lang_Runnable,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$11_java_lang_String,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$10_java_lang_String,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$9_java_lang_String,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$8_java_lang_String,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$7_java_lang_String,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$6_java_lang_String,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$3_arc_scene_ui_layout_Table_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$4_arc_scene_ui_Button_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$2_java_lang_String,
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$0_arc_scene_ui_layout_Table,
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
	{ "build", "(Larc/scene/ui/layout/Table;)V" },
	{ "build", "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;" },
	{ "category", "()Lmindustry/logic/LCategory;" },
	{ "copy", "()Lmindustry/logic/LStatement;" },
	{ "useWrapping", "()Z" },
	{ "hidden", "()Z" },
	{ "privileged", "()Z" },
	{ "nonPrivileged", "()Z" },
	{ "param", "(Larc/scene/ui/layout/Cell;)V" },
	{ "field", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "fields", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "fields", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "fields", "(Larc/scene/ui/layout/Table;Ljava/lang/String;ZLjava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "col", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "showSelect", "(Larc/scene/ui/Button;[Ljava/lang/Object;Ljava/lang/Object;Larc/func/Cons;ILarc/func/Cons;)V" },
	{ "showSelect", "(Larc/scene/ui/Button;[Ljava/lang/Object;Ljava/lang/Object;Larc/func/Cons;)V" },
	{ "fieldAlignSelect", "(Larc/scene/ui/layout/Table;Larc/func/Prov;Larc/func/Cons;ZZ)V" },
	{ "afterRead", "()V" },
	{ "write", "(Ljava/lang/StringBuilder;)V" },
	{ "setupUI", "()V" },
	{ "saveUI", "()V" },
	{ "typeName", "()Ljava/lang/String;" },
	{ "statementKey", "()Ljava/lang/String;" },
	{ "localizedName", "()Ljava/lang/String;" },
	{ "name", "()Ljava/lang/String;" },
	{ "showSoundSelect", "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showSoundSelect$2", "(Larc/struct/ObjectMap;Ljava/lang/String;Larc/struct/Seq;Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/struct/Seq;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V" },
	{ "lambda$showSoundSelect$3", "(Larc/scene/ui/layout/Table;[Ljava/lang/String;Larc/struct/Seq;Larc/struct/ObjectMap;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;Ljava/lang/String;)V" },
	{ "lambda$showSoundSelect$4", "(Lmindustry/logic/LStatements$PlaySoundStatement$SoundChoice;[Ljava/lang/String;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;Ljava/lang/String;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$showSoundSelect$7", "(Lmindustry/logic/LStatements$PlaySoundStatement$SoundChoice;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V" },
	{ "lambda$build$11", "(Ljava/lang/String;)V" },
	{ "lambda$build$10", "(Ljava/lang/String;)V" },
	{ "lambda$build$9", "(Ljava/lang/String;)V" },
	{ "lambda$build$8", "(Ljava/lang/String;)V" },
	{ "lambda$build$7", "(Ljava/lang/String;)V" },
	{ "lambda$build$6", "(Ljava/lang/String;)V" },
	{ "lambda$build$1", "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$3", "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V" },
	{ "lambda$build$4", "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$2", "(Ljava/lang/String;)V" },
	{ "lambda$build$0", "(Larc/scene/ui/layout/Table;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice,
};

static FieldMetadata fields[] {
	{ "positional", &class_boolean, offsetof(mindustry_logic_LStatements$PlaySoundStatement, F_positional), "Z", 1 },
	{ "id", &class_java_lang_String, offsetof(mindustry_logic_LStatements$PlaySoundStatement, F_id), "Ljava/lang/String;", 1 },
	{ "volume", &class_java_lang_String, offsetof(mindustry_logic_LStatements$PlaySoundStatement, F_volume), "Ljava/lang/String;", 1 },
	{ "pitch", &class_java_lang_String, offsetof(mindustry_logic_LStatements$PlaySoundStatement, F_pitch), "Ljava/lang/String;", 1 },
	{ "pan", &class_java_lang_String, offsetof(mindustry_logic_LStatements$PlaySoundStatement, F_pan), "Ljava/lang/String;", 1 },
	{ "x", &class_java_lang_String, offsetof(mindustry_logic_LStatements$PlaySoundStatement, F_x), "Ljava/lang/String;", 1 },
	{ "y", &class_java_lang_String, offsetof(mindustry_logic_LStatements$PlaySoundStatement, F_y), "Ljava/lang/String;", 1 },
	{ "limit", &class_java_lang_String, offsetof(mindustry_logic_LStatements$PlaySoundStatement, F_limit), "Ljava/lang/String;", 1 },
	{ "lastPreview", &class_arc_audio_Sound, (intptr_t) &SF_mindustry_logic_LStatements$PlaySoundStatement_lastPreview, "Larc/audio/Sound;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$PlaySoundStatement, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_build_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "privileged", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_privileged_R_boolean, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_privileged_R_boolean, "()Z", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "showSoundSelect", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_showSoundSelect_arc_scene_ui_Button_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_showSoundSelect_arc_scene_ui_Button_arc_scene_ui_layout_Table, "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V", 4 },
	{ "soundCategory", (intptr_t) SM_mindustry_logic_LStatements$PlaySoundStatement_soundCategory_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 10 },
	{ "previewSound", (intptr_t) SM_mindustry_logic_LStatements$PlaySoundStatement_previewSound_arc_audio_Sound, 0, "(Larc/audio/Sound;)V", 10 },
	{ "lambda$showSoundSelect$11", (intptr_t) SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$11, 0, "()V", 4106 },
	{ "lambda$showSoundSelect$2", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$2_arc_struct_ObjectMap_java_lang_String_arc_struct_Seq_arc_scene_ui_layout_Table_java_lang_String_arc_struct_Seq_arc_scene_ui_layout_Table_java_lang_Runnable, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$2_arc_struct_ObjectMap_java_lang_String_arc_struct_Seq_arc_scene_ui_layout_Table_java_lang_String_arc_struct_Seq_arc_scene_ui_layout_Table_java_lang_Runnable, "(Larc/struct/ObjectMap;Ljava/lang/String;Larc/struct/Seq;Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/struct/Seq;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$showSoundSelect$9", (intptr_t) SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$9_arc_struct_Seq_Array1_java_lang_String_java_lang_Runnable_arc_scene_ui_layout_Table_arc_scene_ui_ButtonGroup_arc_scene_ui_layout_Table, 0, "(Larc/struct/Seq;[Ljava/lang/String;Ljava/lang/Runnable;Larc/scene/ui/layout/Table;Larc/scene/ui/ButtonGroup;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showSoundSelect$10", (intptr_t) SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$10_Array1_java_lang_String_java_lang_String_java_lang_Runnable_arc_scene_ui_layout_Table, 0, "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showSoundSelect$3", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$3_arc_scene_ui_layout_Table_Array1_java_lang_String_arc_struct_Seq_arc_struct_ObjectMap_arc_scene_ui_layout_Table_java_lang_Runnable_java_lang_String, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$3_arc_scene_ui_layout_Table_Array1_java_lang_String_arc_struct_Seq_arc_struct_ObjectMap_arc_scene_ui_layout_Table_java_lang_Runnable_java_lang_String, "(Larc/scene/ui/layout/Table;[Ljava/lang/String;Larc/struct/Seq;Larc/struct/ObjectMap;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;Ljava/lang/String;)V", 4098 },
	{ "lambda$showSoundSelect$4", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$4_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_Array1_java_lang_String_arc_scene_ui_layout_Table_java_lang_Runnable_java_lang_String_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$4_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_Array1_java_lang_String_arc_scene_ui_layout_Table_java_lang_Runnable_java_lang_String_arc_scene_ui_layout_Table, "(Lmindustry/logic/LStatements$PlaySoundStatement$SoundChoice;[Ljava/lang/String;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$showSoundSelect$8", (intptr_t) SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$8_arc_scene_ui_TextButton, 0, "(Larc/scene/ui/TextButton;)V", 4106 },
	{ "lambda$showSoundSelect$7", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$7_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_arc_scene_ui_layout_Table_java_lang_Runnable, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$7_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_arc_scene_ui_layout_Table_java_lang_Runnable, "(Lmindustry/logic/LStatements$PlaySoundStatement$SoundChoice;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$showSoundSelect$6", (intptr_t) SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$6_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_arc_scene_ui_ImageButton, 0, "(Lmindustry/logic/LStatements$PlaySoundStatement$SoundChoice;Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$showSoundSelect$5", (intptr_t) SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$5_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice, 0, "(Lmindustry/logic/LStatements$PlaySoundStatement$SoundChoice;)V", 4106 },
	{ "lambda$showSoundSelect$1", (intptr_t) SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$1_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_R_java_lang_String, 0, "(Lmindustry/logic/LStatements$PlaySoundStatement$SoundChoice;)Ljava/lang/String;", 4106 },
	{ "lambda$showSoundSelect$0", (intptr_t) SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$0_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_R_int, 0, "(Lmindustry/logic/LStatements$PlaySoundStatement$SoundChoice;Lmindustry/logic/LStatements$PlaySoundStatement$SoundChoice;)I", 4106 },
	{ "lambda$build$11", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$11_java_lang_String, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$11_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$10", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$10_java_lang_String, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$10_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$9", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$9_java_lang_String, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$9_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$8", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$8_java_lang_String, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$8_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$7", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$7_java_lang_String, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$7_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$6", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$6_java_lang_String, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$6_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$5", (intptr_t) SM_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$5, 0, "()V", 4106 },
	{ "lambda$build$3", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$3_arc_scene_ui_layout_Table_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$3_arc_scene_ui_layout_Table_arc_scene_ui_Button, "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$build$4", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$4_arc_scene_ui_Button_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$4_arc_scene_ui_Button_arc_scene_ui_layout_Table, "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$2_java_lang_String, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$2_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$0_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_lambda$build$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
};

Class class_mindustry_logic_LStatements$PlaySoundStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$PlaySoundStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatement,
		.size = sizeof(mindustry_logic_LStatements$PlaySoundStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$PlaySoundStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$PlaySoundStatement,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$PlaySoundStatement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LStatements,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 32,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 52,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$PlaySoundStatement = registerClass(&class_mindustry_logic_LStatements$PlaySoundStatement);

}

