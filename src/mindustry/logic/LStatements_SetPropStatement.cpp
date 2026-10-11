#include "mindustry/logic/LStatements_SetPropStatement.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_arc_func_Cons_17.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_arc_func_Cons_16.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_arc_func_Cons_19.h"
#include "java/lang/Runnable.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_arc_func_Cons_18.h"
#include "mindustry/logic/LStatements.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/logic/LAssembler.h"
#include "mindustry/type/Item.h"
#include "arc/func/Cons2.h"
#include "mindustry/logic/LStatements_SetPropStatement.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_arc_func_Cons_13.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_arc_func_Cons_12.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_arc_func_Cons_15.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_arc_func_Cons_14.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_arc_func_Cons_11.h"
#include "mindustry/logic/LCategory.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_arc_func_Cons_10.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_java_lang_Runnable_7.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_java_lang_Runnable_11.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_java_lang_Runnable_8.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_java_lang_Runnable_10.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_java_lang_Runnable_9.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_java_lang_Runnable_13.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_java_lang_Runnable_12.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/logic/LStatement.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/func/Cons.h"
#include "mindustry/content/StatusEffects.h"
#include "java/lang/String.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/scene/ui/layout/Stack.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/type/StatusEffect.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_arc_func_Cons2_1.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LCanvas.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/Element.h"
#include "mindustry/logic/LExecutor_SetPropI.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_logic_LStatements$SetPropStatement(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LStatements$SetPropStatement *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_of)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_of)->clazz)->markFunction)((jobject) self->F_of, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
	if (self->F_tfield)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfield)->clazz)->markFunction)((jobject) self->F_tfield, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$SetPropStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatement(ctx);
}

void init_mindustry_logic_LStatements$SetPropStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$SetPropStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2092);
	init_mindustry_logic_LStatement(ctx, (frame[0].o));
	LINE_NUMBER(2093);
	((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_type = (jref) (((jobject) createStringLiteral(ctx, u8"@copper"_j)));
	((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_of = (jref) (((jobject) createStringLiteral(ctx, u8"block1"_j)));
	((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_value = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	LINE_NUMBER(2095);
	((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_selected = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:build", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2100);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"set"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	LINE_NUMBER(2102);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_type;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_mindustry_logic_LStatements$SetPropStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LStatements$SetPropStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(0)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK(sp[0].o))->F_tfield = (jref) (checkCast(ctx, &class_arc_scene_ui_TextField, sp[1].o));
	LINE_NUMBER(2104);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_logict;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_7);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(40.0f);
	LINE_NUMBER(2179);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-1.0f)));
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2181);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"of"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2183);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_of;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SetPropStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SetPropStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jint temp1 = (jint)SM_mindustry_logic_LCanvas_isCompact_R_boolean(ctx);
	sp += 1;
	if (temp1 == 0) goto label_6;
	}
	(sp++)->f = jfloat(170.0f);
	goto label_7;
label_6:;
	(sp++)->f = jfloat(180.0f);
label_7:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(2185);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"to"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2187);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_value;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SetPropStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SetPropStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jint temp0 = (jint)SM_mindustry_logic_LCanvas_isCompact_R_boolean(ctx);
	sp += 1;
	if (temp0 == 0) goto label_10;
	}
	(sp++)->f = jfloat(170.0f);
	goto label_11;
label_10:;
	(sp++)->f = jfloat(180.0f);
label_11:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(2188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_stype_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:stype", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2191);
	sp[0].o = (jobject)((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_tfield;
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(2192);
	((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(2193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LStatements$SetPropStatement_privileged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:privileged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2197);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$SetPropStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:build", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2202);
	clinit_mindustry_logic_LExecutor$SetPropI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$SetPropI);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[1].o, sp[2].o);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_of;
	sp[2].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[2].o, sp[3].o);
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_value;
	sp[3].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[3].o, sp[4].o);
	init_mindustry_logic_LExecutor$SetPropI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$SetPropStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2207);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_world;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_lambda$build$16_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$16", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2187);
	((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_lambda$build$15_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$15", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2183);
	((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_of = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$SetPropStatement_lambda$build$14(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$14", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_logic_LStatements$SetPropStatement(ctx);
	LINE_NUMBER(2179);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_lambda$build$1_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2105);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencilSmall;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2107);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_8);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_lambda$build$2_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2107);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons2_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_logic_LStatement_showSelectTable_arc_scene_ui_Button_arc_func_Cons2(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_lambda$build$3_arc_scene_ui_layout_Table_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$3", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2108);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_ui_layout_Table, (jint(4)));
	jint temp0 = jint(0);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_15);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Table_arc_func_Cons(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_16);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Table_arc_func_Cons(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_17);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Table_arc_func_Cons(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_18);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Table_arc_func_Cons(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2159);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_style_Drawable, (jint(4)));
	jint temp4 = jint(0);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_box;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(1);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_liquid;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = jint(2);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_effect;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = jint(3);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_tree;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2160);
	clinit_arc_scene_ui_layout_Stack(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Stack);
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), ((jint)((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_selected)));
	init_arc_scene_ui_layout_Stack_Array1_arc_scene_Element(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(2161);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(2163);
	frame[7].i = (jint(0));
	}
label_5:;
	{
	if ((frame[7].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(2164);
	frame[8].i = (frame[7].i);
	LINE_NUMBER(2166);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[7].i));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_squareTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9);
		proxy->F_field4 = (jref) (frame[1].o);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[5].o);
		proxy->F_field1 = (frame[8].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(50.0f);
	LINE_NUMBER(2174);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp += 1;
	if (((jint)((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_selected) != (frame[8].i)) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(2163);
	INST_IINC(7, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(2176);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(2177);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(240.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(2178);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_lambda$build$13_int_arc_scene_ui_layout_Stack_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$13", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(2167);
	((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_selected = (frame[1].i);
	LINE_NUMBER(2169);
	((func_arc_scene_ui_layout_Stack_clearChildren) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_clearChildren])(ctx, (frame[2].o));
	LINE_NUMBER(2170);
	((func_arc_scene_ui_layout_Stack_addChild_arc_scene_Element) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_addChild_arc_scene_Element])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), ((jint)((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_selected))));
	LINE_NUMBER(2172);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[4].o)))->F_parent;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_parent;
	((func_arc_scene_Group_pack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_pack])(ctx, sp[0].o);
	LINE_NUMBER(2173);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[4].o)))->F_parent;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_parent;
	((func_arc_scene_Group_invalidateHierarchy) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_invalidateHierarchy])(ctx, sp[0].o);
	LINE_NUMBER(2174);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_lambda$build$10_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$10", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2150);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LAccess_settable;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(2151);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_LStatement_bundle_java_lang_Enum_R_java_lang_String(ctx, (frame[6].o));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatt;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_10);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(240.0f);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(2154);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_arc_func_Cons_19);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_self_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(2150);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(2156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LStatements$SetPropStatement_lambda$build$12_mindustry_logic_LAccess_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$12", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$SetPropStatement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2154);
	SM_mindustry_logic_LCanvas_tooltip_arc_scene_ui_layout_Cell_java_lang_Enum(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_lambda$build$11_mindustry_logic_LAccess_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$11", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2152);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_logic_LAccess_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_name_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001"_j.string, 1, sp[1].o);
	((func_mindustry_logic_LStatements$SetPropStatement_stype_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SetPropStatement_stype_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2153);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(2154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_lambda$build$8_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$8", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2139);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(2140);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_statusEffects_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_statusEffects_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, sp[0].o));
	LINE_NUMBER(2141);
	jint temp0 = (jint)((func_mindustry_type_StatusEffect_unlockedNow_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_StatusEffect_unlockedNow_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK((frame[4].o)))->F_show) == 0) goto label_2;
	}
	{
	sp[0].o = frame[4].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	goto label_2;
label_5:;
	{
	LINE_NUMBER(2142);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[4].o)))->F_localizedName;
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[4].o)))->F_uiIcon;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_atlas;
	sp[3].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"error"_j))));
	sp += 2;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[4].o)))->F_uiIcon;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_effect;
label_7:;
	{
	sp -= 3;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_flatt;
	jfloat temp0 = jfloat(24.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_11);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, sp[4].o);
	jfloat temp1 = jfloat(240.0f);
	jfloat temp2 = jfloat(40.0f);
	LINE_NUMBER(2145);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1, temp2);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(2146);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(2147);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_lambda$build$9_mindustry_type_StatusEffect_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$9", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2143);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@status-\u0001"_j.string, 1, sp[1].o);
	((func_mindustry_logic_LStatements$SetPropStatement_stype_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SetPropStatement_stype_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2144);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(2145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_lambda$build$6_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$6", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2125);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(2126);
	frame[3].i = (jint(0));
	LINE_NUMBER(2127);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o));
	LINE_NUMBER(2128);
	jint temp0 = (jint)((func_mindustry_type_Liquid_unlockedNow_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_type_Liquid_unlockedNow_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_3;
	}
	{
	if (((jint)((mindustry_type_Liquid *) NULL_CHECK((frame[5].o)))->F_hidden) == 0) goto label_6;
	}
	goto label_3;
label_6:;
	{
	LINE_NUMBER(2129);
	sp[0].o = frame[2].o;
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[5].o)))->F_uiIcon;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flati;
	jfloat temp0 = jfloat(24.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_12);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(2132);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(2134);
	INST_IINC(3, 1);
	if (((frame[3].i) % (6)) != 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_9:;
	LINE_NUMBER(2135);
	goto label_3;
label_4:;
	LINE_NUMBER(2136);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_lambda$build$7_mindustry_type_Liquid_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$7", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2130);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001"_j.string, 1, sp[1].o);
	((func_mindustry_logic_LStatements$SetPropStatement_stype_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SetPropStatement_stype_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2131);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(2132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_lambda$build$4_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$4", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2111);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(2112);
	frame[3].i = (jint(0));
	LINE_NUMBER(2113);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(2114);
	if (((jint)((mindustry_type_Item *) NULL_CHECK((frame[5].o)))->F_hidden) == 0) goto label_6;
	}
	goto label_3;
label_6:;
	{
	LINE_NUMBER(2115);
	sp[0].o = frame[2].o;
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[5].o)))->F_uiIcon;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flati;
	jfloat temp0 = jfloat(24.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_13);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(2118);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	LINE_NUMBER(2120);
	INST_IINC(3, 1);
	if (((frame[3].i) % (6)) != 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_9:;
	LINE_NUMBER(2121);
	goto label_3;
label_4:;
	LINE_NUMBER(2122);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_lambda$build$5_mindustry_type_Item_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2116);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001"_j.string, 1, sp[1].o);
	((func_mindustry_logic_LStatements$SetPropStatement_stype_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SetPropStatement_stype_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2117);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(2118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SetPropStatement_lambda$build$0_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement:lambda$build$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2102);
	((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$SetPropStatement[] {
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
	(void *) M_mindustry_logic_LStatements$SetPropStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_category_R_mindustry_logic_LCategory,
	(void *) M_mindustry_logic_LStatement_copy_R_mindustry_logic_LStatement,
	(void *) M_mindustry_logic_LStatement_useWrapping_R_boolean,
	(void *) M_mindustry_logic_LStatement_hidden_R_boolean,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_privileged_R_boolean,
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
	(void *) M_mindustry_logic_LStatements$SetPropStatement_stype_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$16_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$15_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$1_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$2_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$3_arc_scene_ui_layout_Table_java_lang_Runnable,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$13_int_arc_scene_ui_layout_Stack_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$10_java_lang_Runnable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$11_mindustry_logic_LAccess_java_lang_Runnable,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$8_java_lang_Runnable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$9_mindustry_type_StatusEffect_java_lang_Runnable,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$6_java_lang_Runnable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$7_mindustry_type_Liquid_java_lang_Runnable,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$4_java_lang_Runnable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$5_mindustry_type_Item_java_lang_Runnable,
	(void *) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$0_java_lang_String,
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
	{ "stype", "(Ljava/lang/String;)V" },
	{ "lambda$build$16", "(Ljava/lang/String;)V" },
	{ "lambda$build$15", "(Ljava/lang/String;)V" },
	{ "lambda$build$1", "(Larc/scene/ui/Button;)V" },
	{ "lambda$build$2", "(Larc/scene/ui/Button;)V" },
	{ "lambda$build$3", "(Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V" },
	{ "lambda$build$13", "(ILarc/scene/ui/layout/Stack;[Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$10", "(Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$11", "(Lmindustry/logic/LAccess;Ljava/lang/Runnable;)V" },
	{ "lambda$build$8", "(Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$9", "(Lmindustry/type/StatusEffect;Ljava/lang/Runnable;)V" },
	{ "lambda$build$6", "(Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$7", "(Lmindustry/type/Liquid;Ljava/lang/Runnable;)V" },
	{ "lambda$build$4", "(Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$5", "(Lmindustry/type/Item;Ljava/lang/Runnable;)V" },
	{ "lambda$build$0", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "type", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SetPropStatement, F_type), "Ljava/lang/String;", 1 },
	{ "of", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SetPropStatement, F_of), "Ljava/lang/String;", 1 },
	{ "value", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SetPropStatement, F_value), "Ljava/lang/String;", 1 },
	{ "selected", &class_int, offsetof(mindustry_logic_LStatements$SetPropStatement, F_selected), "I", 130 },
	{ "tfield", &class_arc_scene_ui_TextField, offsetof(mindustry_logic_LStatements$SetPropStatement, F_tfield), "Larc/scene/ui/TextField;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$SetPropStatement, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_build_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$SetPropStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "stype", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_stype_java_lang_String, VTABLE_mindustry_logic_LStatements$SetPropStatement_stype_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "privileged", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_privileged_R_boolean, VTABLE_mindustry_logic_LStatements$SetPropStatement_privileged_R_boolean, "()Z", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$SetPropStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$SetPropStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "lambda$build$16", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$16_java_lang_String, VTABLE_mindustry_logic_LStatements$SetPropStatement_lambda$build$16_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$15", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$15_java_lang_String, VTABLE_mindustry_logic_LStatements$SetPropStatement_lambda$build$15_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$14", (intptr_t) SM_mindustry_logic_LStatements$SetPropStatement_lambda$build$14, 0, "()V", 4106 },
	{ "lambda$build$1", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$1_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$SetPropStatement_lambda$build$1_arc_scene_ui_Button, "(Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$2_arc_scene_ui_Button, VTABLE_mindustry_logic_LStatements$SetPropStatement_lambda$build$2_arc_scene_ui_Button, "(Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$build$3", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$3_arc_scene_ui_layout_Table_java_lang_Runnable, VTABLE_mindustry_logic_LStatements$SetPropStatement_lambda$build$3_arc_scene_ui_layout_Table_java_lang_Runnable, "(Larc/scene/ui/layout/Table;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$build$13", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$13_int_arc_scene_ui_layout_Stack_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$SetPropStatement_lambda$build$13_int_arc_scene_ui_layout_Stack_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, "(ILarc/scene/ui/layout/Stack;[Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$10", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$10_java_lang_Runnable_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$SetPropStatement_lambda$build$10_java_lang_Runnable_arc_scene_ui_layout_Table, "(Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$12", (intptr_t) SM_mindustry_logic_LStatements$SetPropStatement_lambda$build$12_mindustry_logic_LAccess_arc_scene_ui_layout_Cell, 0, "(Lmindustry/logic/LAccess;Larc/scene/ui/layout/Cell;)V", 4106 },
	{ "lambda$build$11", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$11_mindustry_logic_LAccess_java_lang_Runnable, VTABLE_mindustry_logic_LStatements$SetPropStatement_lambda$build$11_mindustry_logic_LAccess_java_lang_Runnable, "(Lmindustry/logic/LAccess;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$build$8", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$8_java_lang_Runnable_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$SetPropStatement_lambda$build$8_java_lang_Runnable_arc_scene_ui_layout_Table, "(Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$9", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$9_mindustry_type_StatusEffect_java_lang_Runnable, VTABLE_mindustry_logic_LStatements$SetPropStatement_lambda$build$9_mindustry_type_StatusEffect_java_lang_Runnable, "(Lmindustry/type/StatusEffect;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$build$6", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$6_java_lang_Runnable_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$SetPropStatement_lambda$build$6_java_lang_Runnable_arc_scene_ui_layout_Table, "(Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$7", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$7_mindustry_type_Liquid_java_lang_Runnable, VTABLE_mindustry_logic_LStatements$SetPropStatement_lambda$build$7_mindustry_type_Liquid_java_lang_Runnable, "(Lmindustry/type/Liquid;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$build$4", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$4_java_lang_Runnable_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$SetPropStatement_lambda$build$4_java_lang_Runnable_arc_scene_ui_layout_Table, "(Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$5", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$5_mindustry_type_Item_java_lang_Runnable, VTABLE_mindustry_logic_LStatements$SetPropStatement_lambda$build$5_mindustry_type_Item_java_lang_Runnable, "(Lmindustry/type/Item;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_lambda$build$0_java_lang_String, VTABLE_mindustry_logic_LStatements$SetPropStatement_lambda$build$0_java_lang_String, "(Ljava/lang/String;)V", 4098 },
};

Class class_mindustry_logic_LStatements$SetPropStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$SetPropStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatement,
		.size = sizeof(mindustry_logic_LStatements$SetPropStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$SetPropStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$SetPropStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$SetPropStatement,
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
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 52,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$SetPropStatement = registerClass(&class_mindustry_logic_LStatements$SetPropStatement);

}

