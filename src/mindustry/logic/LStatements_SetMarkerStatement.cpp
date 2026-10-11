#include "mindustry/logic/LStatements_SetMarkerStatement.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_arc_func_Cons_19.h"
#include "arc/func/Prov.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_arc_func_Cons_16.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_arc_func_Cons_15.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_arc_func_Cons_18.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_arc_func_Cons_17.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_arc_func_Cons_12.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_arc_func_Cons_11.h"
#include "mindustry/logic/LMarkerControl.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_arc_func_Cons_14.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_arc_func_Cons_13.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "mindustry/logic/LStatements.h"
#include "arc/scene/ui/Button.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_java_lang_Runnable_5.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_java_lang_Runnable_7.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_java_lang_Runnable_6.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_java_lang_Runnable_9.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_java_lang_Runnable_8.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LAssembler.h"
#include "arc/func/Cons2.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LCategory.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_arc_func_Prov_3.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_arc_func_Prov_2.h"
#include "mindustry/logic/LStatement.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "java/lang/Float.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/logic/LStatements_SetMarkerStatement.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_arc_func_Cons2_1.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_arc_func_Cons_21.h"
#include "java/lang/CharSequence.h"
#include "mindustry/graphics/Layer.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_arc_func_Cons_20.h"
#include "arc/util/Reflect.h"
#include "arc/scene/Element.h"
#include "java/lang/Class.h"
#include "mindustry/logic/LExecutor_SetMarkerI.h"

extern "C" {


void mark_mindustry_logic_LStatements$SetMarkerStatement(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (mindustry_logic_LStatements$SetMarkerStatement *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_id)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_id)->clazz)->markFunction)((jobject) self->F_id, mark, depth + 1);
	if (self->F_p1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p1)->clazz)->markFunction)((jobject) self->F_p1, mark, depth + 1);
	if (self->F_p2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p2)->clazz)->markFunction)((jobject) self->F_p2, mark, depth + 1);
	if (self->F_p3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p3)->clazz)->markFunction)((jobject) self->F_p3, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$SetMarkerStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatement(ctx);
}

void init_mindustry_logic_LStatements$SetMarkerStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$SetMarkerStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2450);
	init_mindustry_logic_LStatement(ctx, (frame[0].o));
	LINE_NUMBER(2451);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_pos;
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(2452);
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_id = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_p3 = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetMarkerStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2456);
	((func_mindustry_logic_LStatements$SetMarkerStatement_rebuild_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$SetMarkerStatement_rebuild_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(2457);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetMarkerStatement_rebuild_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:rebuild", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2460);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(2462);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"set"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	LINE_NUMBER(2464);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_11);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_5);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(190.0f);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(2470);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(2472);
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"id"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2473);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_id;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SetMarkerStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SetMarkerStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(2477);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_logic_LMarkerControl *) NULL_CHECK(sp[0].o))->F_params;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	LINE_NUMBER(2479);
	if ((frame[3].i) != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	if ((frame[3].i) != (jint(1))) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_p2;
	sp += 1;
	goto label_11;
	}
label_12:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK(sp[-1].o))->F_p3;
label_11:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2480);
	if ((frame[3].i) != 0) goto label_14;
	}
	{
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_15;
	}
label_14:;
	{
	if ((frame[3].i) != (jint(1))) goto label_16;
	}
	{
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_15;
	}
label_16:;
	INST_ALOAD(0);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) (--sp)->o;
		PUSH_OBJECT((jobject) proxy);
	}
label_15:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(2482);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_type;
	sp[2].o = (jobject)((mindustry_logic_LMarkerControl *) NULL_CHECK(sp[2].o))->F_params;
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SetMarkerStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SetMarkerStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (frame[4].o), (frame[5].o));
	LINE_NUMBER(2484);
	sp[0].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_color;
	if (sp[0].o == sp[1].o) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_colori;
	if (sp[0].o != sp[1].o) goto label_20;
	}
	{
	if ((frame[3].i) != (jint(1))) goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(2485);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_16);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SetMarkerStatement_col_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SetMarkerStatement_col_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(2489);
	sp[0].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_drawLayer;
	if (sp[0].o != sp[1].o) goto label_22;
	}
	{
	LINE_NUMBER(2490);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_17);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_6);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(40.0f);
	LINE_NUMBER(2506);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-11.0f)));
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(2507);
	sp[0].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_textAlign;
	if (sp[0].o == sp[1].o) goto label_25;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_lineAlign;
	if (sp[0].o != sp[1].o) goto label_21;
	}
label_25:;
	{
	LINE_NUMBER(2508);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Prov_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_18);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	jint temp0 = jint(1);
	sp[4].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[5].o = (jobject)SF_mindustry_logic_LMarkerControl_lineAlign;
	jobject temp1 = sp[4].o;
	sp[4].i = temp0;
	sp += 5;
	if (temp1 == sp[0].o) goto label_26;
	}
	INST_ICONST(1);
	goto label_27;
label_26:;
	INST_ICONST(0);
label_27:;
	POP_N(6); // Pop method args
	((func_mindustry_logic_LStatements$SetMarkerStatement_fieldAlignSelect_arc_scene_ui_layout_Table_arc_func_Prov_arc_func_Cons_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SetMarkerStatement_fieldAlignSelect_arc_scene_ui_layout_Table_arc_func_Prov_arc_func_Cons_boolean_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].i, sp[5].i);
label_21:;
	{
	LINE_NUMBER(2477);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(2514);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LStatements$SetMarkerStatement_privileged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:privileged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2518);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$SetMarkerStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:build", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2523);
	clinit_mindustry_logic_LExecutor$SetMarkerI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$SetMarkerI);
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_type;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_id;
	sp[2].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[2].o, sp[3].o);
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	sp[3].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[3].o, sp[4].o);
	sp[4].o = frame[1].o;
	sp[5].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_p2;
	sp[4].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[4].o, sp[5].o);
	sp[5].o = frame[1].o;
	sp[6].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_p3;
	sp[5].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[5].o, sp[6].o);
	init_mindustry_logic_LExecutor$SetMarkerI_mindustry_logic_LMarkerControl_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$SetMarkerStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2528);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_world;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$18_arc_scene_ui_layout_Table_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$18", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2509);
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[2].o);
	LINE_NUMBER(2510);
	((func_mindustry_logic_LStatements$SetMarkerStatement_rebuild_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$SetMarkerStatement_rebuild_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(2511);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$17_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$17", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2508);
	sp[0].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_p1;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$16(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$16", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$SetMarkerStatement(ctx);
	LINE_NUMBER(2506);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$11_arc_scene_ui_layout_Table_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$11", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2491);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencilSmall;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2492);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_7);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2506);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$12_arc_scene_ui_Button_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$12", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2492);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons2_1);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_logic_LStatement_showSelectTable_arc_scene_ui_Button_arc_func_Cons2(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$13_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$13", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2493);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(2494);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_19);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(240.0f);
	LINE_NUMBER(2504);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(2505);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$14_arc_scene_ui_layout_Table_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$14", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2495);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(2496);
	sp[0].o = (jobject)((func_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field) ((void **) nullCheck(ctx, (((jobject) &class_mindustry_graphics_Layer)))->vtable)[VTABLE_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field])(ctx, (((jobject) &class_mindustry_graphics_Layer)));
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_5;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(2497);
	sp[0].o = (jobject)SM_arc_util_Reflect_get_java_lang_reflect_Field_R_java_lang_Object(ctx, (frame[7].o));
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, sp[0].o)))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, sp[0].o)));
	frame[8].f = temp0;
	LINE_NUMBER(2498);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[7].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 = \u0001"_j.string, 2, sp[1].o, boxFloat(ctx, (frame[8].f)));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logicTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_8);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (frame[8].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp1 = jfloat(240.0f);
	jfloat temp2 = jfloat(40.0f);
	LINE_NUMBER(2502);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1, temp2);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(2496);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(2504);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$15_float_arc_scene_ui_layout_Table_java_lang_Runnable(jcontext ctx, jobject self, jfloat param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$15", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2499);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Float_toString_float_R_java_lang_String(ctx, (frame[1].f));
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK(sp[0].o))->F_p1 = (jref) sp[1].o;
	LINE_NUMBER(2500);
	((func_mindustry_logic_LStatements$SetMarkerStatement_rebuild_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$SetMarkerStatement_rebuild_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(2501);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(2502);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$10_arc_func_Cons_arc_scene_ui_layout_Table_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$10", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2486);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_graphics_Color_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Color_toString_R_java_lang_String])(ctx, (frame[3].o));
	jint temp0 = jint(0);
	sp[2].i = temp0;
	sp += 3;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[3].o)))->F_a), (jfloat(1)), -1)) < 0) goto label_1;
	}
	INST_BIPUSH(6);
	goto label_2;
label_1:;
	INST_BIPUSH(8);
label_2:;
	{
	sp -= 4;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, sp[2].i, sp[3].i);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"%\u0001"_j.string, 1, sp[1].o);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2487);
	((func_mindustry_logic_LStatements$SetMarkerStatement_build_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$SetMarkerStatement_build_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(2488);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$9_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2480);
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_p3 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$8_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2480);
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$7_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2480);
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$6_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2473);
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_id = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$5(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$5", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$SetMarkerStatement(ctx);
	LINE_NUMBER(2470);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$0_arc_scene_ui_layout_Table_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2465);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2466);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_9);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2470);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$2_arc_scene_ui_Button_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2466);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[2].o = (jobject)SF_mindustry_logic_LMarkerControl_all;
	sp[3].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_type;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_20);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	jint temp0 = jint(3);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement_invoke_arc_func_Cons_21);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_logic_LStatements$SetMarkerStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SetMarkerStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0, sp[5].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$4_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$SetMarkerStatement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2469);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (jfloat(140.0f)), (jfloat(50.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$3_arc_scene_ui_layout_Table_mindustry_logic_LMarkerControl(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2467);
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(2468);
	((func_mindustry_logic_LStatements$SetMarkerStatement_rebuild_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LStatements$SetMarkerStatement_rebuild_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(2469);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$1_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement:lambda$rebuild$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2465);
	sp[0].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_Enum_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$SetMarkerStatement[] {
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
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_category_R_mindustry_logic_LCategory,
	(void *) M_mindustry_logic_LStatement_copy_R_mindustry_logic_LStatement,
	(void *) M_mindustry_logic_LStatement_useWrapping_R_boolean,
	(void *) M_mindustry_logic_LStatement_hidden_R_boolean,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_privileged_R_boolean,
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
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_rebuild_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$18_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$17_R_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$11_arc_scene_ui_layout_Table_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$12_arc_scene_ui_Button_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$13_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table_java_lang_Runnable,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$14_arc_scene_ui_layout_Table_java_lang_Runnable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$15_float_arc_scene_ui_layout_Table_java_lang_Runnable,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$10_arc_func_Cons_arc_scene_ui_layout_Table_arc_graphics_Color,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$9_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$8_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$7_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$6_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$0_arc_scene_ui_layout_Table_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$2_arc_scene_ui_Button_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$3_arc_scene_ui_layout_Table_mindustry_logic_LMarkerControl,
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$1_R_java_lang_CharSequence,
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
	{ "rebuild", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$18", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "lambda$rebuild$17", "()Ljava/lang/String;" },
	{ "lambda$rebuild$11", "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V" },
	{ "lambda$rebuild$12", "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$13", "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V" },
	{ "lambda$rebuild$14", "(Larc/scene/ui/layout/Table;Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$15", "(FLarc/scene/ui/layout/Table;Ljava/lang/Runnable;)V" },
	{ "lambda$rebuild$10", "(Larc/func/Cons;Larc/scene/ui/layout/Table;Larc/graphics/Color;)V" },
	{ "lambda$rebuild$9", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$8", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$7", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$6", "(Ljava/lang/String;)V" },
	{ "lambda$rebuild$0", "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V" },
	{ "lambda$rebuild$2", "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$3", "(Larc/scene/ui/layout/Table;Lmindustry/logic/LMarkerControl;)V" },
	{ "lambda$rebuild$1", "()Ljava/lang/CharSequence;" },
};

static FieldMetadata fields[] {
	{ "type", &class_mindustry_logic_LMarkerControl, offsetof(mindustry_logic_LStatements$SetMarkerStatement, F_type), "Lmindustry/logic/LMarkerControl;", 1 },
	{ "id", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SetMarkerStatement, F_id), "Ljava/lang/String;", 1 },
	{ "p1", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SetMarkerStatement, F_p1), "Ljava/lang/String;", 1 },
	{ "p2", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SetMarkerStatement, F_p2), "Ljava/lang/String;", 1 },
	{ "p3", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SetMarkerStatement, F_p3), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$SetMarkerStatement, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_build_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "rebuild", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_rebuild_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_rebuild_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 0 },
	{ "privileged", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_privileged_R_boolean, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_privileged_R_boolean, "()Z", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "lambda$rebuild$18", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$18_arc_scene_ui_layout_Table_java_lang_String, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$18_arc_scene_ui_layout_Table_java_lang_String, "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$17", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$17_R_java_lang_String, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$17_R_java_lang_String, "()Ljava/lang/String;", 4098 },
	{ "lambda$rebuild$16", (intptr_t) SM_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$16, 0, "()V", 4106 },
	{ "lambda$rebuild$11", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$11_arc_scene_ui_layout_Table_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$11_arc_scene_ui_layout_Table_arc_scene_ui_Button, "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$rebuild$12", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$12_arc_scene_ui_Button_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$12_arc_scene_ui_Button_arc_scene_ui_layout_Table, "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$13", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$13_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table_java_lang_Runnable, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$13_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table_java_lang_Runnable, "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$rebuild$14", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$14_arc_scene_ui_layout_Table_java_lang_Runnable_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$14_arc_scene_ui_layout_Table_java_lang_Runnable_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$15", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$15_float_arc_scene_ui_layout_Table_java_lang_Runnable, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$15_float_arc_scene_ui_layout_Table_java_lang_Runnable, "(FLarc/scene/ui/layout/Table;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$rebuild$10", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$10_arc_func_Cons_arc_scene_ui_layout_Table_arc_graphics_Color, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$10_arc_func_Cons_arc_scene_ui_layout_Table_arc_graphics_Color, "(Larc/func/Cons;Larc/scene/ui/layout/Table;Larc/graphics/Color;)V", 4098 },
	{ "lambda$rebuild$9", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$9_java_lang_String, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$9_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$8", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$8_java_lang_String, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$8_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$7", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$7_java_lang_String, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$7_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$6", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$6_java_lang_String, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$6_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$rebuild$5", (intptr_t) SM_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$5, 0, "()V", 4106 },
	{ "lambda$rebuild$0", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$0_arc_scene_ui_layout_Table_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$0_arc_scene_ui_layout_Table_arc_scene_ui_Button, "(Larc/scene/ui/layout/Table;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$rebuild$2", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$2_arc_scene_ui_Button_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$2_arc_scene_ui_Button_arc_scene_ui_layout_Table, "(Larc/scene/ui/Button;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$4", (intptr_t) SM_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$4_arc_scene_ui_layout_Cell, 0, "(Larc/scene/ui/layout/Cell;)V", 4106 },
	{ "lambda$rebuild$3", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$3_arc_scene_ui_layout_Table_mindustry_logic_LMarkerControl, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$3_arc_scene_ui_layout_Table_mindustry_logic_LMarkerControl, "(Larc/scene/ui/layout/Table;Lmindustry/logic/LMarkerControl;)V", 4098 },
	{ "lambda$rebuild$1", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$1_R_java_lang_CharSequence, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$1_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
};

Class class_mindustry_logic_LStatements$SetMarkerStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$SetMarkerStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatement,
		.size = sizeof(mindustry_logic_LStatements$SetMarkerStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$SetMarkerStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$SetMarkerStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$SetMarkerStatement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LStatements,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 25,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 53,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$SetMarkerStatement = registerClass(&class_mindustry_logic_LStatements$SetMarkerStatement);

}

