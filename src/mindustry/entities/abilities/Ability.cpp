#include "mindustry/entities/abilities/Ability.h"
#include "arc/Core.h"
#include "mindustry/gen/Unit.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/Cloneable.h"
#include "mindustry/entities/abilities/Ability_invoke_arc_func_Cons_1.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/CloneNotSupportedException.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/CharSequence.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/entities/abilities/Ability.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {

jfloat SF_mindustry_entities_abilities_Ability_descriptionWidth;

void mark_mindustry_entities_abilities_Ability(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_abilities_Ability *) object;
}

void clinit_mindustry_entities_abilities_Ability(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_entities_abilities_Ability_descriptionWidth = jfloat(350.0f);
}

void init_mindustry_entities_abilities_Ability(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/Ability:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_Ability(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((mindustry_entities_abilities_Ability *) NULL_CHECK((frame[0].o)))->F_display = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_Ability_update_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/Ability:update", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(16);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_Ability_draw_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/Ability:draw", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/Ability:death", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(20);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/Ability:created", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/Ability:init", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/Ability:displayBars", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/Ability:display", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_Ability_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_entities_abilities_Ability_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_entities_abilities_Ability_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(5.0f);
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/Ability:addStats", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.description"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_util_I18NBundle_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.description"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(350.0f)));
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_abilities_Ability_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/Ability:abilityStat", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(45);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"ability.stat.\u0001"_j.string, 1, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/Ability:copy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_CloneNotSupportedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = checkCast(ctx, &class_mindustry_entities_abilities_Ability, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(51);
	frame[1].o = sp[0].o;
	LINE_NUMBER(53);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"java sucks"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_abilities_Ability_localized_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/Ability:localized", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/Ability:getBundle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(64);
	jint temp0 = (jint)((func_java_lang_Class_isAnonymousClass_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isAnonymousClass_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[1].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(1);
label_3:;
	{
	sp -= 1;
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Ability"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"ability.\u0001"_j.string, 1, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_Ability_lambda$display$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/Ability:lambda$display$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_Ability_localized_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_abilities_Ability_localized_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(31);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(33);
	((func_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_abilities_Ability[] {
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
	(void *) M_mindustry_entities_abilities_Ability_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_entities_abilities_Ability_localized_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_lambda$display$0_arc_scene_ui_layout_Table,
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
	{ "update", "(Lmindustry/gen/Unit;)V" },
	{ "draw", "(Lmindustry/gen/Unit;)V" },
	{ "death", "(Lmindustry/gen/Unit;)V" },
	{ "created", "(Lmindustry/gen/Unit;)V" },
	{ "init", "(Lmindustry/type/UnitType;)V" },
	{ "displayBars", "(Lmindustry/gen/Unit;Larc/scene/ui/layout/Table;)V" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "addStats", "(Larc/scene/ui/layout/Table;)V" },
	{ "abilityStat", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;" },
	{ "copy", "()Lmindustry/entities/abilities/Ability;" },
	{ "localized", "()Ljava/lang/String;" },
	{ "getBundle", "()Ljava/lang/String;" },
	{ "lambda$display$0", "(Larc/scene/ui/layout/Table;)V" },
};

static jclass interfaces[] { &class_java_lang_Cloneable, };

static FieldMetadata fields[] {
	{ "descriptionWidth", &class_float, (intptr_t) &SF_mindustry_entities_abilities_Ability_descriptionWidth, "F", 28 },
	{ "display", &class_boolean, offsetof(mindustry_entities_abilities_Ability, F_display), "Z", 1 },
	{ "data", &class_float, offsetof(mindustry_entities_abilities_Ability, F_data), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_Ability, 0, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_abilities_Ability_update_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_Ability_update_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_abilities_Ability_draw_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_Ability_draw_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "death", (intptr_t) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "created", (intptr_t) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "init", (intptr_t) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType, VTABLE_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)V", 1 },
	{ "displayBars", (intptr_t) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table, "(Lmindustry/gen/Unit;Larc/scene/ui/layout/Table;)V", 1 },
	{ "display", (intptr_t) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "addStats", (intptr_t) M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "abilityStat", (intptr_t) M_mindustry_entities_abilities_Ability_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String, VTABLE_mindustry_entities_abilities_Ability_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 129 },
	{ "copy", (intptr_t) M_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability, VTABLE_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability, "()Lmindustry/entities/abilities/Ability;", 1 },
	{ "localized", (intptr_t) M_mindustry_entities_abilities_Ability_localized_R_java_lang_String, VTABLE_mindustry_entities_abilities_Ability_localized_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getBundle", (intptr_t) M_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String, VTABLE_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lambda$display$0", (intptr_t) M_mindustry_entities_abilities_Ability_lambda$display$0_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_Ability_lambda$display$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
};

Class class_mindustry_entities_abilities_Ability{
		.nativeName = (intptr_t) "mindustry/entities/abilities/Ability",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_abilities_Ability),
		.classVtable = (intptr_t) vtable_mindustry_entities_abilities_Ability,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_abilities_Ability,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_abilities_Ability,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_abilities_Ability = registerClass(&class_mindustry_entities_abilities_Ability);

}
