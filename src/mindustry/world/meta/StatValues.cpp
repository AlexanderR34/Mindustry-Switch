#include "mindustry/world/meta/StatValues.h"
#include "java/lang/Integer.h"
#include "arc/func/Boolp.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_50.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Boolf_11.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Boolf_12.h"
#include "mindustry/ai/BlockIndexer.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Boolf_10.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Boolf_15.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_51.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Boolf_13.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Boolf_14.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Floatf_2.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Floatf_3.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "java/lang/Object.h"
#include "mindustry/ui/dialogs/ContentInfoDialog.h"
#include "arc/struct/ObjectMap_Keys.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_49.h"
#include "arc/scene/ui/layout/Collapser.h"
#include "mindustry/entities/bullet/LaserBulletType.h"
#include "mindustry/world/meta/StatValues_invoke_java_lang_Runnable_15.h"
#include "mindustry/world/meta/StatValues_invoke_java_lang_Runnable_14.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/world/meta/StatValues_invoke_java_lang_Runnable_13.h"
#include "mindustry/world/meta/StatValues_invoke_java_lang_Runnable_12.h"
#include "mindustry/world/meta/StatValues_invoke_java_lang_Runnable_11.h"
#include "mindustry/world/meta/StatValues_invoke_java_lang_Runnable_10.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_34.h"
#include "arc/func/Cons.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_95.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_33.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_94.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_36.h"
#include "mindustry/content/StatusEffects.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_93.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_35.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_92.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_30.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_32.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_97.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_31.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_96.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/type/PayloadStack.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_38.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_37.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_39.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/scene/ui/layout/Stack.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Boolp_1.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/Attributes.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_45.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_44.h"
#include "mindustry/entities/bullet/EmpBulletType.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_47.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_46.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_41.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_40.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_43.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_42.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_49.h"
#include "mindustry/Vars.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_48.h"
#include "arc/scene/ui/Tooltip_Tooltips.h"
#include "arc/struct/ObjectFloatMap.h"
#include "mindustry/world/meta/Attribute.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_80.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_73.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_72.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_71.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_70.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_77.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_76.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_75.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_74.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_79.h"
#include "arc/scene/ui/ImageButton.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_78.h"
#include "mindustry/world/meta/StatValues_1.h"
#include "mindustry/maps/Map.h"
#include "arc/scene/ui/Tooltip.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_91.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_90.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_84.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_83.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_82.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_81.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_88.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_87.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_86.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_85.h"
#include "mindustry/world/meta/StatValues_invoke_java_lang_Runnable_8.h"
#include "mindustry/world/meta/StatValues_invoke_java_lang_Runnable_9.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_89.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_27.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_26.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_29.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_28.h"
#include "mindustry/world/Block.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/world/meta/StatValue.h"
#include "arc/scene/event/HandCursorListener.h"
#include "mindustry/type/LiquidStack.h"
#include "java/lang/Float.h"
#include "mindustry/world/blocks/defense/turrets/Turret.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_51.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_50.h"
#include "java/lang/String.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_55.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_54.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_53.h"
#include "mindustry/entities/abilities/Ability.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_52.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_59.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_58.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_57.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_56.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/gen/Icon.h"
#include "arc/util/Scaling.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/style/Style.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_62.h"
#include "arc/util/Strings.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_61.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_60.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_66.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_65.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Boolf_8.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_64.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Boolf_9.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_63.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_69.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_68.h"
#include "mindustry/world/meta/StatValues_invoke_arc_func_Cons_67.h"
#include "arc/struct/SnapshotSeq.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_world_meta_StatValues(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_meta_StatValues *) object;
}

void clinit_mindustry_world_meta_StatValues(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_meta_StatValues(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_string_java_lang_String_Array1_java_lang_Object_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:string", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(37);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_26(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_26 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_26);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_bool_boolean_R_mindustry_world_meta_StatValue(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:bool", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(41);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27);
		proxy->F_field0 = (frame[0].i);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_fixValue_float_R_java_lang_String(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:fixValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (frame[0].f), (jint(3)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_squared_float_mindustry_world_meta_StatUnit_R_mindustry_world_meta_StatValue(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:squared", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(49);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_28(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_28 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_28);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (frame[0].f);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_number_float_mindustry_world_meta_StatUnit_boolean_R_mindustry_world_meta_StatValue(jcontext ctx, jfloat param0, jobject param1, jbool param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:number", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(57);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_29(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_29 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_29);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (frame[0].f);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_number_float_mindustry_world_meta_StatUnit_R_mindustry_world_meta_StatValue(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:number", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_number_float_mindustry_world_meta_StatUnit_boolean_R_mindustry_world_meta_StatValue(ctx, (frame[0].f), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_multiplierModifier_float_mindustry_world_meta_StatUnit_boolean_R_mindustry_world_meta_StatValue(jcontext ctx, jfloat param0, jobject param1, jbool param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:multiplierModifier", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(74);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_30(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_30 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_30);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (frame[0].f);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_multiplierModifier_float_mindustry_world_meta_StatUnit_R_mindustry_world_meta_StatValue(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:multiplierModifier", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_multiplierModifier_float_mindustry_world_meta_StatUnit_boolean_R_mindustry_world_meta_StatValue(ctx, (frame[0].f), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_multiplierModifier_float_R_mindustry_world_meta_StatValue(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:multiplierModifier", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(91);
	jfloat temp0 = frame[0].f;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_StatUnit_multiplier;
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_multiplierModifier_float_mindustry_world_meta_StatUnit_R_mindustry_world_meta_StatValue(ctx, temp0, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_percentModifier_float_mindustry_world_meta_StatUnit_boolean_R_mindustry_world_meta_StatValue(jcontext ctx, jfloat param0, jobject param1, jbool param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:percentModifier", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(95);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_31(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_31 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_31);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (frame[0].f);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_percentModifier_float_mindustry_world_meta_StatUnit_R_mindustry_world_meta_StatValue(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:percentModifier", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_percentModifier_float_mindustry_world_meta_StatUnit_boolean_R_mindustry_world_meta_StatValue(ctx, (frame[0].f), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_percentModifier_float_R_mindustry_world_meta_StatValue(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:percentModifier", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(112);
	jfloat temp0 = frame[0].f;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_StatUnit_percent;
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_percentModifier_float_mindustry_world_meta_StatUnit_R_mindustry_world_meta_StatValue(ctx, temp0, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_liquid_mindustry_type_Liquid_float_boolean_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jfloat param1, jbool param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:liquid", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(116);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_32(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_32 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_32);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_liquids_arc_func_Boolf_float_boolean_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jfloat param1, jbool param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:liquids", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(120);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_33(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_33 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_33);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_liquids_float_Array1_mindustry_type_LiquidStack_R_mindustry_world_meta_StatValue(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:liquids", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_liquids_float_boolean_Array1_mindustry_type_LiquidStack_R_mindustry_world_meta_StatValue(ctx, (frame[0].f), (jint(1)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_liquids_float_boolean_Array1_mindustry_type_LiquidStack_R_mindustry_world_meta_StatValue(jcontext ctx, jfloat param0, jbool param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:liquids", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(138);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_34(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_34 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_34);
		proxy->F_field2 = (frame[1].i);
		proxy->F_field1 = (frame[0].f);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_items_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:items", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_items_boolean_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue(ctx, (jint(1)), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_items_boolean_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue(jcontext ctx, jbool param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:items", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(150);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_35(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_35 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_35);
		proxy->F_field1 = (frame[0].i);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_items_float_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:items", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(158);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_36(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_36 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_36);
		proxy->F_field1 = (frame[0].f);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_items_arc_func_Boolf_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:items", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_items_float_arc_func_Boolf_R_mindustry_world_meta_StatValue(ctx, (jfloat(-1.0f)), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_items_float_arc_func_Boolf_R_mindustry_world_meta_StatValue(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:items", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(170);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_37(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_37 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_37);
		proxy->F_field1 = (frame[0].f);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_displayLiquid_mindustry_type_Liquid_float_boolean_R_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jbool param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:displayLiquid", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(186);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(188);
	sp[0].o = frame[3].o;
	clinit_mindustry_world_meta_StatValues$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_meta_StatValues$1);
	init_mindustry_world_meta_StatValues$1_mindustry_type_Liquid_float(ctx, sp[1].o, (frame[0].o), (frame[1].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(32.0f);
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	jint temp1 = jint(3);
	sp[1].i = temp1;
	sp += 2;
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (frame[1].f), (jint(3)));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	jint temp1 = (temp0 - (jint(1))) * (10);
	sp[0].i = temp1;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat((sp[1].i + sp[2].i))));
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_49(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_49 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_49);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(198);
	if ((frame[2].i) == 0) goto label_6;
	}
	{
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = frame[3].o;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	sp[1].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(202);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_withTooltip_arc_scene_Element_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_Element(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:withTooltip", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(208);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(209);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_3;
	}
	{
	LINE_NUMBER(210);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_scene_ui_Tooltip$Tooltips_getInstance_R_arc_scene_ui_Tooltip$Tooltips(ctx);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_localizedName;
	sp[1].o = (jobject)((func_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_boolean_R_arc_scene_ui_Tooltip) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_boolean_R_arc_scene_ui_Tooltip])(ctx, sp[1].o, sp[2].o, (clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile));
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_HandCursorListener(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_event_HandCursorListener);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Boolp_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	init_arc_scene_event_HandCursorListener_arc_func_Boolp_boolean(ctx, sp[1].o, sp[2].o, (jint(1)));
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_java_lang_Runnable_8);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_withTooltip_arc_scene_Element_mindustry_ctype_UnlockableContent_R_arc_scene_Element(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:withTooltip", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_withTooltip_arc_scene_Element_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_Element(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_statusText_mindustry_type_StatusEffect_float_float_R_java_lang_String(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:statusText", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(230);
	if ((floatCompare((frame[2].f), (jfloat(1)), 1)) >= 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"stat.chance"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((frame[2].f) * (jfloat(100.0f))), (jint(4)));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_2:;
	{
	LINE_NUMBER(231);
	jint temp0 = (jint)((func_mindustry_type_StatusEffect_hasEmoji_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_StatusEffect_hasEmoji_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_type_StatusEffect_emoji_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_StatusEffect_emoji_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 "_j.string, 1, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_4:;
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	LINE_NUMBER(233);
	sp += 1;
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_reactive) == 0) goto label_6;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_7;
label_6:;
	{
	LINE_NUMBER(235);
	jfloat temp0 = (frame[1].f) / (jfloat(60.0f));
	jint temp1 = jint(1);
	LINE_NUMBER(234);
	sp[0].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, temp0, temp1);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"unit.seconds"_j));
	LINE_NUMBER(235);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray] ~ [stat]\u0001[lightgray] \u0001"_j.string, 2, sp[0].o, sp[1].o);
	sp += 1;
	}
label_7:;
	{
	sp -= 4;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001[stat]\u0001\u0001"_j.string, 4, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_stack_arc_graphics_g2d_TextureRegion_int_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_ui_layout_Stack(jcontext ctx, jobject param0, jint param1, jobject param2, jbool param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:stack", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_stack_arc_graphics_g2d_TextureRegion_float_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_ui_layout_Stack(ctx, (frame[0].o), (jfloat((frame[1].i))), (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_stack_arc_graphics_g2d_TextureRegion_float_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_ui_layout_Stack(jcontext ctx, jobject param0, jfloat param1, jobject param2, jbool param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:stack", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(245);
	clinit_arc_scene_ui_layout_Stack(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Stack);
	init_arc_scene_ui_layout_Stack(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(247);
	sp[0].o = frame[4].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_50(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_50 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_50);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Table_arc_func_Cons(ctx, sp[1].o, sp[2].o);
	((func_arc_scene_ui_layout_Stack_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Stack_add_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(252);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = frame[4].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_51(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_51 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_51);
		proxy->F_field0 = (frame[1].f);
		sp[2].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Table_arc_func_Cons(ctx, sp[1].o, sp[2].o);
	((func_arc_scene_ui_layout_Stack_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Stack_add_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_withTooltip_arc_scene_Element_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_Element(ctx, (frame[4].o), (frame[2].o), (frame[3].i));
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_stack_arc_graphics_g2d_TextureRegion_int_mindustry_ctype_UnlockableContent_R_arc_scene_ui_layout_Stack(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:stack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_stack_arc_graphics_g2d_TextureRegion_int_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_ui_layout_Stack(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_stack_mindustry_type_ItemStack_R_arc_scene_ui_layout_Stack(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:stack", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_amount;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item;
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_stack_arc_graphics_g2d_TextureRegion_int_mindustry_ctype_UnlockableContent_R_arc_scene_ui_layout_Stack(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_stack_mindustry_ctype_UnlockableContent_int_R_arc_scene_ui_layout_Stack(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:stack", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_stack_arc_graphics_g2d_TextureRegion_int_mindustry_ctype_UnlockableContent_R_arc_scene_ui_layout_Stack(ctx, sp[0].o, (frame[1].i), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_stack_mindustry_ctype_UnlockableContent_int_boolean_R_arc_scene_ui_layout_Stack(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:stack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_stack_arc_graphics_g2d_TextureRegion_int_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_ui_layout_Stack(ctx, sp[0].o, (frame[1].i), (frame[0].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_stack_mindustry_ctype_UnlockableContent_float_boolean_R_arc_scene_ui_layout_Stack(jcontext ctx, jobject param0, jfloat param1, jbool param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:stack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_stack_arc_graphics_g2d_TextureRegion_float_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_ui_layout_Stack(ctx, sp[0].o, (frame[1].f), (frame[0].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_stack_mindustry_type_Item_R_arc_scene_ui_layout_Stack(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:stack", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_stack_arc_graphics_g2d_TextureRegion_int_mindustry_ctype_UnlockableContent_R_arc_scene_ui_layout_Stack(ctx, sp[0].o, (jint(0)), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_stack_mindustry_type_PayloadStack_R_arc_scene_ui_layout_Stack(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:stack", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[0].o)))->F_item;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	jint temp0 = (jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[0].o)))->F_amount;
	sp[1].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[0].o)))->F_item;
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_stack_arc_graphics_g2d_TextureRegion_int_mindustry_ctype_UnlockableContent_R_arc_scene_ui_layout_Stack(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_R_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:displayItem", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_int_R_arc_scene_ui_layout_Table(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_int_boolean_R_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:displayItem", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(299);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(300);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[2].i = temp0;
	sp += 3;
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 4;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_stack_mindustry_ctype_UnlockableContent_int_boolean_R_arc_scene_ui_layout_Stack(ctx, sp[1].o, sp[2].i, sp[3].i);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(301);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	if (((jint(4)) + (frame[1].i)) <= (99)) goto label_6;
	}
	(sp++)->f = jfloat(4.0f);
	goto label_7;
label_6:;
	INST_FCONST(0);
label_7:;
	POP_N(2); // Pop method args
	sp->o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f);
	sp++;
	INST_POP();
label_5:;
	{
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_int_R_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:displayItem", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_int_boolean_R_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].i), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_int_float_boolean_R_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jint param1, jfloat param2, jbool param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:displayItem", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(311);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(312);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[2].i = temp0;
	sp += 3;
	if ((frame[3].i) != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 4;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_stack_mindustry_ctype_UnlockableContent_int_boolean_R_arc_scene_ui_layout_Stack(ctx, sp[1].o, sp[2].i, sp[3].i);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(313);
	sp[0].o = frame[4].o;
	sp += 1;
	if ((frame[3].i) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\n"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_6;
	}
label_5:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_6:;
	{
	sp -= 2;
	sp[2].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat((frame[1].i))) / ((frame[2].f) / (jfloat(60.0f)))), (jint(3)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[3].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	sp[3].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[3].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001[lightgray]\u0001\u0001"_j.string, 3, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_float_float_boolean_R_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jbool param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:displayItem", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(318);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(319);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	sp[2].f = temp0;
	sp += 3;
	if ((frame[3].i) != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 4;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_stack_mindustry_ctype_UnlockableContent_float_boolean_R_arc_scene_ui_layout_Stack(ctx, sp[1].o, sp[2].f, sp[3].i);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(320);
	sp[0].o = frame[4].o;
	sp += 1;
	if ((frame[3].i) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\n"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_6;
	}
label_5:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_6:;
	{
	sp -= 2;
	sp[2].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((frame[1].f) / ((frame[2].f) / (jfloat(60.0f)))), (jint(3)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[3].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	sp[3].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[3].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001[lightgray]\u0001\u0001"_j.string, 3, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_displayItemPercent_mindustry_type_Item_int_boolean_R_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:displayItemPercent", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(326);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(327);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	sp[2].i = temp0;
	sp += 3;
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 4;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_stack_mindustry_ctype_UnlockableContent_int_boolean_R_arc_scene_ui_layout_Stack(ctx, sp[1].o, sp[2].i, sp[3].i);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(328);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\n"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_6;
	}
label_5:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_6:;
	{
	sp -= 2;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001[lightgray]\u0001%"_j.string, 2, sp[1].o, boxInteger(ctx, (frame[1].i)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_content_mindustry_ctype_UnlockableContent_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:content", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(333);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_38(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_38 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_38);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_blockEfficiency_mindustry_world_Block_float_boolean_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jfloat param1, jbool param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:blockEfficiency", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(340);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_39(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_39 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_39);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_blocks_mindustry_world_meta_Attribute_boolean_float_boolean_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jbool param1, jfloat param2, jbool param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:blocks", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_blocks_mindustry_world_meta_Attribute_boolean_float_boolean_boolean_R_mindustry_world_meta_StatValue(ctx, (frame[0].o), (frame[1].i), (frame[2].f), (frame[3].i), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_blocks_mindustry_world_meta_Attribute_boolean_float_float_arc_struct_Seq_float_boolean_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jbool param1, jfloat param2, jfloat param3, jobject param4, jfloat param5, jbool param6) {
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:blocks", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_blocks_mindustry_world_meta_Attribute_boolean_float_float_arc_struct_Seq_float_boolean_boolean_R_mindustry_world_meta_StatValue(ctx, (frame[0].o), (frame[1].i), (frame[2].f), (frame[3].f), (frame[4].o), (frame[5].f), (frame[6].i), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_blocks_mindustry_world_meta_Attribute_boolean_float_boolean_boolean_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jbool param1, jfloat param2, jbool param3, jbool param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:blocks", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(355);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_40(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_40 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_40);
		proxy->F_field4 = (frame[3].i);
		proxy->F_field3 = (frame[2].f);
		proxy->F_field2 = (frame[1].i);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (frame[4].i);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_blocks_mindustry_world_meta_Attribute_boolean_float_float_arc_struct_Seq_float_boolean_boolean_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jbool param1, jfloat param2, jfloat param3, jobject param4, jfloat param5, jbool param6, jbool param7) {
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:blocks", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(400);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_41(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_41 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_41);
		proxy->F_field6 = (frame[5].f);
		proxy->F_field5 = (frame[3].f);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (frame[2].f);
		proxy->F_field2 = (frame[1].i);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (frame[7].i);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_content_arc_struct_Seq_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:content", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(467);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Boolf_8);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_content_arc_struct_Seq_arc_func_Boolf_R_mindustry_world_meta_StatValue(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_content_arc_struct_Seq_arc_func_Boolf_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:content", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_content_arc_struct_Seq_arc_func_Boolf_java_lang_String_R_mindustry_world_meta_StatValue(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@none.inmap"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_content_arc_struct_Seq_arc_func_Boolf_java_lang_String_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:content", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(475);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_42(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_42 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_42);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_blocks_arc_func_Boolf_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:blocks", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(499);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_content_arc_struct_Seq_arc_func_Boolf_R_mindustry_world_meta_StatValue(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_blocks_arc_struct_Seq_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:blocks", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(503);
	sp[0].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_content_arc_struct_Seq_R_mindustry_world_meta_StatValue(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_statusEffects_arc_struct_Seq_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:statusEffects", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, (frame[0].o));
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Boolf_9);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_content_arc_struct_Seq_arc_func_Boolf_java_lang_String_R_mindustry_world_meta_StatValue(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"@none"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_drillables_float_float_float_arc_struct_ObjectFloatMap_arc_func_Boolf_R_mindustry_world_meta_StatValue(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:drillables", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(511);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_43(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_43 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_43);
		proxy->F_field4 = (frame[2].f);
		proxy->F_field3 = (frame[1].f);
		proxy->F_field2 = (frame[0].f);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_boosters_float_float_float_boolean_arc_func_Boolf_R_mindustry_world_meta_StatValue(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jbool param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:boosters", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(537);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_44(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_44 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_44);
		proxy->F_field4 = (frame[0].f);
		proxy->F_field3 = (frame[2].f);
		proxy->F_field2 = (frame[3].i);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_itemEffMultiplier_arc_func_Floatf_float_arc_func_Boolf_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:itemEffMultiplier", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(566);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_itemEffMultiplier_arc_func_Floatf_float_arc_func_Boolf_arc_struct_ObjectFloatMap_R_mindustry_world_meta_StatValue(ctx, (frame[0].o), (frame[1].f), (frame[2].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_itemEffMultiplier_arc_func_Floatf_float_arc_func_Boolf_arc_struct_ObjectFloatMap_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:itemEffMultiplier", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(570);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_45(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_45 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_45);
		proxy->F_field3 = (jref) (frame[0].o);
		proxy->F_field2 = (frame[1].f);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_liquidEffMultiplier_arc_func_Floatf_float_arc_func_Boolf_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:liquidEffMultiplier", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(589);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_46(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_46 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_46);
		proxy->F_field2 = (jref) (frame[0].o);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_speedBoosters_java_lang_String_float_float_boolean_arc_func_Boolf_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jbool param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:speedBoosters", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(604);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_47(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_47 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_47);
		proxy->F_field4 = (frame[3].i);
		proxy->F_field3 = (jref) (frame[0].o);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_itemBoosters_java_lang_String_float_float_float_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:itemBoosters", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(629);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_48(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_48 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_48);
		proxy->F_field4 = (jref) (frame[0].o);
		proxy->F_field3 = (frame[2].f);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_weapons_mindustry_type_UnitType_arc_struct_Seq_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:weapons", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(656);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_49(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_49 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_49);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_abilities_arc_struct_Seq_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:abilities", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(683);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_50(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_50 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_50);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:ammo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(702);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_boolean_java_lang_String_R_mindustry_world_meta_StatValue(ctx, (frame[0].o), (jint(0)), (jint(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:ammo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(706);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_boolean_java_lang_String_R_mindustry_world_meta_StatValue(ctx, (frame[0].o), (jint(0)), (frame[1].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_java_lang_String_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:ammo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(710);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_boolean_java_lang_String_R_mindustry_world_meta_StatValue(ctx, (frame[0].o), (jint(0)), (jint(0)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_java_lang_String_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jbool param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:ammo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(714);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_boolean_java_lang_String_R_mindustry_world_meta_StatValue(ctx, (frame[0].o), (jint(0)), (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_boolean_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jbool param1, jbool param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:ammo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(718);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_boolean_java_lang_String_R_mindustry_world_meta_StatValue(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_boolean_java_lang_String_R_mindustry_world_meta_StatValue(jcontext ctx, jobject param0, jbool param1, jbool param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:ammo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(722);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_51(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_51 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_51);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (frame[1].i);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_tableInfo_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:tableInfo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(965);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	jint temp0 = (jint)((func_arc_util_I18NBundle_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(966);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_52(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_52 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_52);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_note_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:note", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(974);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(975);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_53(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_53 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_53);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:sep", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(983);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(984);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_ammoStat_float_R_java_lang_String(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:ammoStat", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(989);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[stat]+"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[negstat]"_j));
label_2:;
	{
	sp -= 1;
	sp[1].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (frame[0].f), (jint(1)));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_multStat_float_R_java_lang_String(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:multStat", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(993);
	if ((floatCompare((frame[0].f), (jfloat(1)), -1)) < 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[stat]"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[negstat]"_j));
label_2:;
	{
	sp -= 1;
	sp[1].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (frame[0].f), (jint(2)));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_StatValues_icon_mindustry_ctype_UnlockableContent_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(997);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$note$0_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$note$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(976);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_arrowNoteSmall;
	sp[1].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(15.0f)));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_stat;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	}
label_1:;
	{
	LINE_NUMBER(977);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(978);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$tableInfo$0_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$tableInfo$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(967);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_info;
	sp[1].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(20.0f)));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	}
label_1:;
	{
	LINE_NUMBER(968);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray]\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(969);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$ammo$0_arc_struct_ObjectMap_boolean_boolean_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jbool param1, jbool param2, jobject param3, jobject param4) {
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$ammo$0", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(724);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(726);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Keys_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Keys_toSeq_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(727);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, (frame[5].o));
	LINE_NUMBER(729);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o));
	LINE_NUMBER(730);
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_type_UnitType)) == 0) goto label_7;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_8;
label_7:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_9;
label_8:;
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(732);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[7].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o));
	LINE_NUMBER(734);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[9].o)))->F_spawnUnit;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[9].o)))->F_spawnUnit;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_weapons;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(735);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[7].o);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[9].o)))->F_spawnUnit;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_weapons;
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Weapon, sp[1].o))))->F_bullet;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(ctx, sp[0].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_boolean_java_lang_String_R_mindustry_world_meta_StatValue(ctx, sp[0].o, (frame[2].i), (jint(0)), (frame[3].o));
	((func_mindustry_world_meta_StatValue_display_arc_scene_ui_layout_Table) resolveInterfaceMethod(ctx, &class_mindustry_world_meta_StatValue, INDEX_mindustry_world_meta_StatValue_display_arc_scene_ui_layout_Table, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(736);
	goto label_4;
	}
label_13:;
	{
	LINE_NUMBER(739);
	sp[0].o = frame[4].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_54(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_54 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_54);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[9].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (frame[8].i);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(5.0f);
	LINE_NUMBER(957);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp += 1;
	if ((frame[8].i) == 0) goto label_17;
	}
	INST_FCONST(0);
	goto label_18;
label_17:;
	(sp++)->f = jfloat(5.0f);
label_18:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp += 1;
	if ((frame[8].i) == 0) goto label_19;
	}
	INST_FCONST(0);
	goto label_20;
label_19:;
	(sp++)->f = jfloat(10.0f);
label_20:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(958);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(959);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(960);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$ammo$1_boolean_mindustry_ctype_UnlockableContent_mindustry_entities_bullet_BulletType_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jbool param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$ammo$1", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(740);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(742);
	if ((frame[0].i) != 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_defense_turrets_Turret)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(743);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_55(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_55 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_55);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(752);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	}
label_2:;
	{
	LINE_NUMBER(755);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(756);
	sp[0].o = frame[4].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"block.\u0001.\u0001.info"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_tableInfo_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(757);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	}
label_5:;
	{
	LINE_NUMBER(760);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_damage), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_collides) != 0) goto label_9;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_splashDamage), (jfloat(0)), 1)) > 0) goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(761);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.damage"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_damage));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp1 = (jfloat)((func_mindustry_entities_bullet_BulletType_continuousDamage_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_continuousDamage_R_float])(ctx, (frame[2].o));
	sp += 2;
	if ((floatCompare(temp1, (jfloat(0)), -1)) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(762);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bullet.damage"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	jfloat temp1 = (jfloat)((func_mindustry_entities_bullet_BulletType_continuousDamage_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_continuousDamage_R_float])(ctx, (frame[2].o));
	sp[3].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	sp[1].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray] ~ [stat]\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	sp += 1;
	goto label_12;
	}
label_10:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_12:;
	{
	sp -= 3;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	LINE_NUMBER(761);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	{
	LINE_NUMBER(765);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_buildingDamageMultiplier), (jfloat(1)), -1)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(766);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.buildingdamage"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_mindustry_world_meta_StatValues_ammoStat_float_R_java_lang_String(ctx, (jfloat((jint(((((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_buildingDamageMultiplier) * (jfloat(100.0f))) - (jfloat(100.0f))))))));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	{
	LINE_NUMBER(769);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_rangeChange), (jfloat(0)), -1)) == 0) goto label_16;
	}
	INST_ILOAD(0);
	if ((--sp)->i != 0) goto label_16;
	{
	LINE_NUMBER(770);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.range"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_mindustry_world_meta_StatValues_ammoStat_float_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_rangeChange) / (jfloat(8.0f))));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	{
	LINE_NUMBER(773);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_shieldDamageMultiplier), (jfloat(1)), -1)) == 0) goto label_18;
	}
	{
	LINE_NUMBER(774);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.shielddamage"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_mindustry_world_meta_StatValues_ammoStat_float_R_java_lang_String(ctx, (jfloat((jint(((((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_shieldDamageMultiplier) * (jfloat(100.0f))) - (jfloat(100.0f))))))));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_18:;
	{
	LINE_NUMBER(777);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_splashDamage), (jfloat(0)), -1)) <= 0) goto label_20;
	}
	{
	LINE_NUMBER(778);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.splashdamage"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_splashDamage))));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	jint temp1 = jint(1);
	sp[4].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_splashDamageRadius) / (jfloat(8.0f))), (jint(1)));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_20:;
	{
	LINE_NUMBER(781);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_statLiquidConsumed), (jfloat(0)), 1)) > 0) goto label_22;
	}
	INST_ILOAD(0);
	if ((--sp)->i != 0) goto label_22;
	{
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_ammoMultiplier), (jfloat(1)));
	if (temp0 != 0) goto label_22;
	}
	{
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_displayAmmoMultiplier) == 0) goto label_22;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_defense_turrets_Turret)) == 0) goto label_23;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_Turret, (frame[1].o)));
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[5].o)))->F_displayAmmoMultiplier) == 0) goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(782);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.multiplier"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_ammoMultiplier))));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_22:;
	{
	LINE_NUMBER(785);
	if ((frame[0].i) != 0) goto label_25;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_reloadMultiplier), (jfloat(1)));
	if (temp0 != 0) goto label_25;
	}
	{
	LINE_NUMBER(786);
	frame[5].i = (jint(((((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_reloadMultiplier) * (jfloat(100.0f))) - (jfloat(100.0f)))));
	LINE_NUMBER(787);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.reload"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_mindustry_world_meta_StatValues_ammoStat_float_R_java_lang_String(ctx, (jfloat((frame[5].i))));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_25:;
	{
	LINE_NUMBER(790);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_knockback), (jfloat(0)), -1)) <= 0) goto label_28;
	}
	{
	LINE_NUMBER(791);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.knockback"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_knockback), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_28:;
	{
	LINE_NUMBER(794);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_healPercent), (jfloat(0)), -1)) <= 0) goto label_30;
	}
	{
	LINE_NUMBER(795);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.healpercent"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_healPercent), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_30:;
	{
	LINE_NUMBER(798);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_healAmount), (jfloat(0)), -1)) <= 0) goto label_32;
	}
	{
	LINE_NUMBER(799);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.healamount"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_healAmount), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_32:;
	{
	LINE_NUMBER(802);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_pierce) != 0) goto label_34;
	}
	{
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_pierceCap) == (jint(-1))) goto label_35;
	}
label_34:;
	{
	LINE_NUMBER(803);
	sp[0].o = frame[4].o;
	sp += 1;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_pierceCap) != (jint(-1))) goto label_36;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@bullet.infinitepierce"_j));
	goto label_37;
label_36:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bullet.pierce"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_pierceCap));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
label_37:;
	POP_N(2); // Pop method args
	sp->o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	sp++;
	INST_POP();
label_35:;
	{
	LINE_NUMBER(806);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_incendAmount) <= 0) goto label_38;
	}
	{
	LINE_NUMBER(807);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"@bullet.incendiary"_j))));
	}
label_38:;
	{
	LINE_NUMBER(810);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_homingPower), (jfloat(1,000000e-02f)), -1)) <= 0) goto label_40;
	}
	{
	LINE_NUMBER(811);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"@bullet.homing"_j))));
	}
label_40:;
	{
	LINE_NUMBER(815);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_lightning) <= 0) goto label_42;
	}
	{
	LINE_NUMBER(816);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.lightning"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	jint temp1 = (jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_lightning;
	LINE_NUMBER(818);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	jint temp2 = jint(1);
	LINE_NUMBER(819);
	sp[4].o = sp[3].o;
	sp[5].i = temp2;
	sp += 6;
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_lightningDamage), (jfloat(0)), 1)) >= 0) goto label_46;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_damage;
	sp[0].f = temp0;
	sp += 1;
	goto label_47;
	}
label_46:;
	INST_ALOAD(2);
	sp[-1].f = ((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[-1].o))->F_lightningDamage;
label_47:;
	{
	sp -= 7;
	sp[4].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, sp[6].f);
	ARRAY_ACCESS(jobject, sp[3].o, sp[5].i) = sp[4].o;
	LINE_NUMBER(816);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_42:;
	{
	LINE_NUMBER(823);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_entities_bullet_LaserBulletType)) == 0) goto label_49;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_entities_bullet_LaserBulletType, (frame[2].o)));
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[5].o)))->F_lightningSpacing), (jfloat(0)), -1)) <= 0) goto label_49;
	}
	{
	LINE_NUMBER(824);
	frame[6].i = (((jint((((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[5].o)))->F_length) / ((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[5].o)))->F_lightningSpacing)))) * (jint(2))) + (jint(2)));
	LINE_NUMBER(825);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[5].o)))->F_lightningDamage), (jfloat(0)), 1)) >= 0) goto label_53;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[5].o)))->F_damage;
	sp[0].f = temp0;
	sp += 1;
	goto label_54;
	}
label_53:;
	INST_ALOAD(5);
	sp[-1].f = ((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[-1].o))->F_lightningDamage;
label_54:;
	{
	sp -= 1;
	frame[7].f = sp[0].f;
	LINE_NUMBER(826);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.lightning"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[6].i));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	jint temp1 = jint(1);
	sp[4].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (frame[7].f));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(827);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[5].o)))->F_lightningLengthRand) <= 0) goto label_57;
	}
	{
	LINE_NUMBER(828);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"@[]-[stat]@"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (jfloat(((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[5].o)))->F_lightningLength))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (jfloat((((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[5].o)))->F_lightningLength) + ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[5].o)))->F_lightningLengthRand)))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[0].o = (jobject)SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_59;
	}
label_57:;
	{
	LINE_NUMBER(829);
	sp[0].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (jfloat(((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[5].o)))->F_lightningLength))), (jint(2)));
	sp += 1;
	}
label_59:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(830);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.lightninginterval"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[5].o)))->F_lightningSpacing) / (jfloat(8.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	ARRAY_ACCESS(jobject, sp[3].o, (jint(1))) = (frame[8].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_note_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_49:;
	{
	LINE_NUMBER(833);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_entities_bullet_EmpBulletType)) == 0) goto label_61;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_entities_bullet_EmpBulletType, (frame[2].o)));
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[5].o)))->F_radius), (jfloat(0)), -1)) <= 0) goto label_61;
	}
	{
	LINE_NUMBER(834);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.empradius"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[5].o)))->F_radius) / (jfloat(8.0f))), (jint(1)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(835);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[5].o)))->F_timeDuration), (jfloat(0)), -1)) <= 0) goto label_65;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[5].o)))->F_timeIncrease), (jfloat(1)), -1)) <= 0) goto label_65;
	}
	{
	LINE_NUMBER(836);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.empboost"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[5].o)))->F_timeIncrease) * (jfloat(100.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	jint temp1 = jint(1);
	jfloat temp2 = ((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[5].o)))->F_timeDuration) / (jfloat(60.0f));
	jint temp3 = jint(1);
	LINE_NUMBER(837);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, temp2, temp3);
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	LINE_NUMBER(836);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_seconds;
	LINE_NUMBER(837);
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 \u0001"_j.string, 2, sp[1].o, sp[2].o);
	LINE_NUMBER(836);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_65:;
	{
	LINE_NUMBER(839);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[5].o)))->F_timeDuration), (jfloat(0)), -1)) <= 0) goto label_71;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[5].o)))->F_powerSclDecrease), (jfloat(1)), 1)) >= 0) goto label_71;
	}
	{
	LINE_NUMBER(840);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.empslowdown"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	LINE_NUMBER(841);
	sp[4].o = sp[3].o;
	sp[5].i = temp0;
	sp += 6;
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[5].o)))->F_powerSclDecrease), (jfloat(1)), 1)) >= 0) goto label_74;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[negstat]"_j));
	goto label_75;
label_74:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_75:;
	{
	sp -= 7;
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[5].o)))->F_powerSclDecrease) - (jfloat(1))) * (jfloat(100.0f))), (jint(2)));
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[6].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, sp[5].i) = sp[4].o;
	jint temp0 = jint(1);
	jfloat temp1 = ((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[5].o)))->F_timeDuration) / (jfloat(60.0f));
	jint temp2 = jint(1);
	LINE_NUMBER(842);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, temp1, temp2);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	LINE_NUMBER(840);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_seconds;
	LINE_NUMBER(842);
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 \u0001"_j.string, 2, sp[1].o, sp[2].o);
	LINE_NUMBER(840);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_71:;
	{
	LINE_NUMBER(844);
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, ((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[5].o)))->F_powerDamageScl), (jfloat(1)));
	if (temp0 != 0) goto label_80;
	}
	{
	LINE_NUMBER(845);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.empdamage"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[5].o)))->F_powerDamageScl) * (jfloat(100.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_80:;
	{
	LINE_NUMBER(847);
	if (((jint)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[5].o)))->F_hitUnits) == 0) goto label_61;
	}
	{
	LINE_NUMBER(848);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.empunitdamage"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	LINE_NUMBER(849);
	sp[4].o = sp[3].o;
	sp[5].i = temp0;
	sp += 6;
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[5].o)))->F_unitDamageScl), (jfloat(1)), 1)) >= 0) goto label_84;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[negstat]"_j));
	goto label_85;
label_84:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_85:;
	{
	sp -= 7;
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[5].o)))->F_unitDamageScl) * (jfloat(100.0f))), (jint(2)));
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[6].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, sp[5].i) = sp[4].o;
	LINE_NUMBER(848);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_61:;
	{
	LINE_NUMBER(853);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_pierceArmor) == 0) goto label_87;
	}
	{
	LINE_NUMBER(854);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"@bullet.armorpierce"_j))));
	}
label_87:;
	{
	LINE_NUMBER(857);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_pierceArmor) != 0) goto label_89;
	}
	{
	LINE_NUMBER(858);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_armorMultiplier), (jfloat(1)), -1)) == 0) goto label_91;
	}
	{
	LINE_NUMBER(859);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_armorMultiplier), (jfloat(1)), -1)) <= 0) goto label_93;
	}
	{
	LINE_NUMBER(860);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.armorweakness"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_armorMultiplier));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	goto label_91;
	}
label_93:;
	{
	LINE_NUMBER(861);
	jint temp0 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_armorMultiplier));
	if (temp0 != (jint(1))) goto label_95;
	}
	{
	LINE_NUMBER(862);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.partialarmorpierce"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint((((jfloat(1)) - ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_armorMultiplier)) * (jfloat(100.0f))))));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	goto label_91;
	}
label_95:;
	{
	LINE_NUMBER(864);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.antiarmor"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (-((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_armorMultiplier)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_91:;
	{
	LINE_NUMBER(868);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_blockArmorMultiplier), (jfloat(1)), -1)) == 0) goto label_89;
	}
	{
	LINE_NUMBER(869);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_blockArmorMultiplier), (jfloat(1)), -1)) <= 0) goto label_98;
	}
	{
	LINE_NUMBER(870);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.blockarmorweakness"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_blockArmorMultiplier));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	goto label_89;
	}
label_98:;
	{
	LINE_NUMBER(871);
	jint temp0 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_blockArmorMultiplier));
	if (temp0 != (jint(1))) goto label_100;
	}
	{
	LINE_NUMBER(872);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.blockpartialarmorpierce"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint((((jfloat(1)) - ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_blockArmorMultiplier)) * (jfloat(100.0f))))));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	goto label_89;
	}
label_100:;
	{
	LINE_NUMBER(874);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.blockantiarmor"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (-((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_blockArmorMultiplier)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_89:;
	{
	LINE_NUMBER(879);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_maxDamageFraction), (jfloat(0)), -1)) <= 0) goto label_102;
	}
	{
	LINE_NUMBER(880);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.maxdamagefraction"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint((((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_maxDamageFraction) * (jfloat(100.0f))))));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_102:;
	{
	LINE_NUMBER(883);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_suppressionRange), (jfloat(0)), -1)) <= 0) goto label_104;
	}
	{
	LINE_NUMBER(884);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.suppression"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_suppressionDuration) / (jfloat(60.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	jint temp1 = jint(1);
	sp[4].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_suppressionRange) / (jfloat(8.0f))), (jint(1)));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	}
label_104:;
	{
	LINE_NUMBER(888);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_status;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	if (sp[0].o == sp[1].o) goto label_106;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_statusChance), (jfloat(0)), -1)) <= 0) goto label_106;
	}
	{
	LINE_NUMBER(889);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_status;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_statusText_mindustry_type_StatusEffect_float_float_R_java_lang_String(ctx, sp[1].o, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_statusDuration), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_statusChance));
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_56(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_56 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_56);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(890);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_106:;
	{
	LINE_NUMBER(893);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_targetMissiles) != 0) goto label_109;
	}
	{
	LINE_NUMBER(894);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"@bullet.notargetsmissiles"_j))));
	}
label_109:;
	{
	LINE_NUMBER(897);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_targetBlocks) != 0) goto label_111;
	}
	{
	LINE_NUMBER(898);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"@bullet.notargetsbuildings"_j))));
	}
label_111:;
	{
	LINE_NUMBER(901);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_intervalBullet;
	if (sp[0].o == nullptr) goto label_113;
	}
	{
	LINE_NUMBER(902);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(904);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(905);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_intervalBullet;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(ctx, sp[0].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_boolean_R_mindustry_world_meta_StatValue(ctx, sp[0].o, (jint(1)), (jint(0)));
	((func_mindustry_world_meta_StatValue_display_arc_scene_ui_layout_Table) resolveInterfaceMethod(ctx, &class_mindustry_world_meta_StatValue, INDEX_mindustry_world_meta_StatValue_display_arc_scene_ui_layout_Table, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(906);
	clinit_arc_scene_ui_layout_Collapser(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Collapser);
	init_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table_boolean(ctx, sp[0].o, (frame[5].o), (jint(1)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(907);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Collapser_setDuration_float_R_arc_scene_ui_layout_Collapser) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_setDuration_float_R_arc_scene_ui_layout_Collapser])(ctx, (frame[6].o), (jfloat(0.1f)));
	LINE_NUMBER(909);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_57(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_57 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_57);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(915);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(916);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o), (frame[6].o));
	}
label_113:;
	{
	LINE_NUMBER(919);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_fragBullet;
	if (sp[0].o == nullptr) goto label_122;
	}
	{
	LINE_NUMBER(920);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(922);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(923);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_fragBullet;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(ctx, sp[0].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_boolean_R_mindustry_world_meta_StatValue(ctx, sp[0].o, (jint(1)), (jint(0)));
	((func_mindustry_world_meta_StatValue_display_arc_scene_ui_layout_Table) resolveInterfaceMethod(ctx, &class_mindustry_world_meta_StatValue, INDEX_mindustry_world_meta_StatValue_display_arc_scene_ui_layout_Table, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(924);
	clinit_arc_scene_ui_layout_Collapser(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Collapser);
	init_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table_boolean(ctx, sp[0].o, (frame[5].o), (jint(1)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(925);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Collapser_setDuration_float_R_arc_scene_ui_layout_Collapser) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_setDuration_float_R_arc_scene_ui_layout_Collapser])(ctx, (frame[6].o), (jfloat(0.1f)));
	LINE_NUMBER(927);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_58(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_58 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_58);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(933);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(934);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o), (frame[6].o));
	}
label_122:;
	{
	LINE_NUMBER(937);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_spawnBullets;
	if (sp[0].o == nullptr) goto label_131;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_spawnBullets;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_131;
	}
	{
	LINE_NUMBER(938);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(940);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(941);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_spawnBullets;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_135:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_136;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o));
	LINE_NUMBER(942);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[7].o)))->F_showStats) == 0) goto label_138;
	}
	{
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[7].o);
	sp[0].o = (jobject)SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(ctx, sp[0].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_boolean_R_mindustry_world_meta_StatValue(ctx, sp[0].o, (jint(1)), (jint(0)));
	((func_mindustry_world_meta_StatValue_display_arc_scene_ui_layout_Table) resolveInterfaceMethod(ctx, &class_mindustry_world_meta_StatValue, INDEX_mindustry_world_meta_StatValue_display_arc_scene_ui_layout_Table, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	}
label_138:;
	LINE_NUMBER(943);
	goto label_135;
label_136:;
	{
	LINE_NUMBER(944);
	clinit_arc_scene_ui_layout_Collapser(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Collapser);
	init_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table_boolean(ctx, sp[0].o, (frame[5].o), (jint(1)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(945);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Collapser_setDuration_float_R_arc_scene_ui_layout_Collapser) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_setDuration_float_R_arc_scene_ui_layout_Collapser])(ctx, (frame[6].o), (jfloat(0.1f)));
	LINE_NUMBER(947);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_59(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_59 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_59);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(953);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(954);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o), (frame[6].o));
	}
label_131:;
	LINE_NUMBER(957);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$ammo$11_mindustry_entities_bullet_BulletType_arc_scene_ui_layout_Table_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$ammo$11", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(948);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(950);
	sp[0].o = frame[3].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.spawnBullets"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_spawnBullets;
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[4].o))->F_size));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(951);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[1].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_3;
	}
	{
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_java_lang_Runnable_9);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_60(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_60 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_60);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(16.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(952);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$ammo$13_arc_scene_ui_layout_Collapser_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$ammo$13", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(951);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_upOpen;
	goto label_2;
label_1:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_downOpen;
label_2:;
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$ammo$12_arc_scene_ui_layout_Collapser(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$ammo$12", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(951);
	((func_arc_scene_ui_layout_Collapser_toggle_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_toggle_boolean])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$ammo$8_mindustry_entities_bullet_BulletType_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$ammo$8", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(928);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(930);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.frags"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullets));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(931);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_java_lang_Runnable_10);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_61(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_61 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_61);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(16.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(932);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$ammo$10_arc_scene_ui_layout_Collapser_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$ammo$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(931);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_upOpen;
	goto label_2;
label_1:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_downOpen;
label_2:;
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$ammo$9_arc_scene_ui_layout_Collapser(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$ammo$9", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(931);
	((func_arc_scene_ui_layout_Collapser_toggle_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_toggle_boolean])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$ammo$5_mindustry_entities_bullet_BulletType_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$ammo$5", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(910);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(912);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.interval"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat(((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalBullets))) / ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_bulletInterval)) * (jfloat(60.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(913);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_java_lang_Runnable_11);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_62(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_62 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_62);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(16.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(914);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$ammo$7_arc_scene_ui_layout_Collapser_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$ammo$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(913);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_upOpen;
	goto label_2;
label_1:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_downOpen;
label_2:;
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$ammo$6_arc_scene_ui_layout_Collapser(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$ammo$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(913);
	((func_arc_scene_ui_layout_Collapser_toggle_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_toggle_boolean])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$ammo$4_mindustry_entities_bullet_BulletType_arc_scene_Element(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$ammo$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(890);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_status;
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_withTooltip_arc_scene_Element_mindustry_ctype_UnlockableContent_R_arc_scene_Element(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$ammo$2_mindustry_ctype_UnlockableContent_mindustry_entities_bullet_BulletType_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$ammo$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(744);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_icon_mindustry_ctype_UnlockableContent_R_arc_graphics_g2d_TextureRegion(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_63(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_63 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_63);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(746);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(748);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_displayAmmoMultiplier) == 0) goto label_3;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_statLiquidConsumed), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(749);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_fixValue_float_R_java_lang_String(ctx, ((((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_statLiquidConsumed) / ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_ammoMultiplier)) * (jfloat(60.0f))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[stat]\u0001 [lightgray]\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(751);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$ammo$3_mindustry_ctype_UnlockableContent_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$ammo$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(744);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_withTooltip_arc_scene_Element_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_Element(ctx, (frame[1].o), (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$abilities$0_arc_struct_Seq_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$abilities$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(684);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(685);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_64(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_64 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_64);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(698);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$abilities$1_arc_struct_Seq_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$abilities$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(686);
	frame[2].i = (jint(0));
	LINE_NUMBER(687);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_abilities_Ability, sp[0].o));
	LINE_NUMBER(688);
	if (((jint)((mindustry_entities_abilities_Ability *) NULL_CHECK((frame[4].o)))->F_display) == 0) goto label_5;
	}
	{
	LINE_NUMBER(689);
	((func_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table])(ctx, (frame[4].o), (frame[1].o));
	LINE_NUMBER(691);
	INST_IINC(2, 1);
	if ((frame[2].i) != (jint(2))) goto label_5;
	}
	{
	LINE_NUMBER(692);
	frame[2].i = (jint(0));
	LINE_NUMBER(693);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_5:;
	LINE_NUMBER(696);
	goto label_2;
label_3:;
	LINE_NUMBER(697);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$weapons$0_arc_struct_Seq_mindustry_type_UnitType_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$weapons$0", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(658);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(659);
	frame[4].i = (frame[3].i);
	LINE_NUMBER(660);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Weapon, sp[0].o));
	LINE_NUMBER(662);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_flipSprite) != 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Weapon_hasStats_mindustry_type_UnitType_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_type_Weapon_hasStats_mindustry_type_UnitType_R_boolean])(ctx, (frame[5].o), (frame[1].o));
	if (temp0 != 0) goto label_8;
	}
	LINE_NUMBER(664);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-preview"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_region;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ACONST_NULL();
label_11:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(669);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_65(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_65 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_65);
		proxy->F_field3 = (frame[4].i);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(676);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(677);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_7:;
	{
	LINE_NUMBER(658);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(679);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$weapons$1_arc_graphics_g2d_TextureRegion_mindustry_type_Weapon_mindustry_type_UnitType_int_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$weapons$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(670);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(671);
	if ((frame[0].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[1].o)))->F_showStatSprite) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o), (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(60.0f)));
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_bounded;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(672);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(673);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[2].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"unit.\u0001.weapon.\u0001.info"_j.string, 2, sp[1].o, boxInteger(ctx, (frame[3].i)));
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_tableInfo_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(675);
	((func_mindustry_type_Weapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Weapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (frame[2].o), (frame[4].o));
	LINE_NUMBER(676);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$itemBoosters$0_Array1_mindustry_type_ItemStack_float_float_float_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$itemBoosters$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(630);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	LINE_NUMBER(631);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_66(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_66 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_66);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(650);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_getColumns_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getColumns_R_int])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(651);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	LINE_NUMBER(652);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$itemBoosters$1_Array1_mindustry_type_ItemStack_float_float_float_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$itemBoosters$1", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(632);
	sp[0].o = frame[5].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_67(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_67 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_67);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(649);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(650);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$itemBoosters$2_Array1_mindustry_type_ItemStack_float_float_float_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$itemBoosters$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(633);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_68(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_68 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_68);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(642);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(644);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_69(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_69 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_69);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (frame[3].f);
		proxy->F_field0 = (frame[2].f);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(648);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(15.0f)));
	LINE_NUMBER(649);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$itemBoosters$4_float_float_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$itemBoosters$4", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(645);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(646);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((frame[0].f) / (jfloat(8.0f))), (jint(2)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_blocks;
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray]+[stat]\u0001[lightgray] \u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(647);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_3;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = frame[2].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"{0}"_j));
	sp[3].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (frame[1].f), (jint(2)));
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"[stat]\u0001[lightgray]"_j.string, 1, sp[3].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray]\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(648);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$itemBoosters$3_Array1_mindustry_type_ItemStack_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$itemBoosters$3", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(634);
	frame[3].o = (frame[0].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(635);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(636);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_item;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_int_boolean_R_arc_scene_ui_layout_Table(ctx, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_amount), (jint(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(15.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(638);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_item;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_int_float_boolean_R_arc_scene_ui_layout_Table(ctx, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_amount), (frame[1].f), (jint(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(15.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(634);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(642);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$speedBoosters$0_arc_func_Boolf_float_float_java_lang_String_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3, jbool param4, jobject param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$speedBoosters$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	LINE_NUMBER(606);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_70(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_70 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_70);
		proxy->F_field4 = (frame[4].i);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(623);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_getColumns_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getColumns_R_int])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(624);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	LINE_NUMBER(625);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$speedBoosters$1_arc_func_Boolf_float_float_java_lang_String_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3, jbool param4, jobject param5) {
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$speedBoosters$1", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(607);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o));
	LINE_NUMBER(608);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[7].o));
	if (temp0 != 0) goto label_4;
	}
	goto label_1;
label_4:;
	{
	LINE_NUMBER(610);
	sp[0].o = frame[5].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_71(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_71 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_71);
		proxy->F_field4 = (frame[4].i);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(621);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(622);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(623);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$speedBoosters$2_mindustry_type_Liquid_float_float_java_lang_String_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3, jbool param4, jobject param5) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$speedBoosters$2", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(611);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_72(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_72 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_72);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(612);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_73(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_73 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_73);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(617);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_74(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_74 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_74);
		proxy->F_field3 = (jref) (frame[0].o);
		proxy->F_field2 = (frame[4].i);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (frame[2].f);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(620);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(15.0f)));
	LINE_NUMBER(621);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$speedBoosters$5_float_java_lang_String_boolean_mindustry_type_Liquid_arc_scene_ui_layout_Table(jcontext ctx, jfloat param0, jobject param1, jbool param2, jobject param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$speedBoosters$5", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(619);
	if ((floatCompare((frame[0].f), (jfloat(3,402823e+38f)), -1)) == 0) goto label_2;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"{0}"_j));
	jfloat temp0 = frame[0].f;
	sp[3].f = temp0;
	sp += 4;
	if ((frame[2].i) == 0) goto label_3;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[3].o)))->F_heatCapacity;
	sp[0].f = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_FCONST(1);
label_4:;
	{
	sp -= 2;
	jfloat temp0 = sp[0].f * sp[1].f;
	sp[0].f = temp0;
	sp += 1;
	if ((frame[2].i) == 0) goto label_5;
	}
	INST_FCONST(1);
	goto label_6;
label_5:;
	INST_FCONST(0);
label_6:;
	{
	sp -= 5;
	sp[3].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (sp[3].f + sp[4].f), (jint(2)));
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"[stat]\u0001[lightgray]"_j.string, 1, sp[3].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	}
label_2:;
	LINE_NUMBER(620);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$speedBoosters$4_mindustry_type_Liquid_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$speedBoosters$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(613);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(614);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((frame[1].f) * (jfloat(60.0f))), (jint(2)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(615);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$speedBoosters$3_mindustry_type_Liquid_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$speedBoosters$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(611);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_withTooltip_arc_scene_Element_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_Element(ctx, (frame[1].o), (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$liquidEffMultiplier$0_arc_func_Boolf_float_arc_func_Floatf_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$liquidEffMultiplier$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq])(ctx, (frame[3].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o)));
	}
label_1:;
	{
	LINE_NUMBER(591);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(592);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_75(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_75 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_75);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(599);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_getColumns_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getColumns_R_int])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(600);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$liquidEffMultiplier$1_arc_func_Boolf_float_arc_func_Floatf_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$liquidEffMultiplier$1", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(593);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Boolf_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o));
	LINE_NUMBER(594);
	sp[0].o = frame[3].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_76(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_76 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_76);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(597);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(598);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(599);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$liquidEffMultiplier$3_mindustry_type_Liquid_float_arc_func_Floatf_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$liquidEffMultiplier$3", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(595);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_displayLiquid_mindustry_type_Liquid_float_boolean_R_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].f), (jint(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(596);
	sp[0].o = frame[3].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"stat.efficiency"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	jfloat temp1 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, (frame[2].o)))(ctx, (frame[2].o), (frame[0].o));
	sp[4].o = (jobject)SM_mindustry_world_meta_StatValues_fixValue_float_R_java_lang_String(ctx, (temp1 * (jfloat(100.0f))));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[stat]\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(15.0f)));
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_meta_StatValues_lambda$liquidEffMultiplier$2_arc_func_Boolf_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$liquidEffMultiplier$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(593);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Liquid_unlockedNow_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Liquid_unlockedNow_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Liquid_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Liquid_isHidden_R_boolean])(ctx, (frame[1].o));
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

void SM_mindustry_world_meta_StatValues_lambda$itemEffMultiplier$0_arc_func_Boolf_arc_struct_ObjectFloatMap_float_arc_func_Floatf_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jfloat param2, jobject param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$itemEffMultiplier$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(571);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq])(ctx, (frame[4].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o)));
	}
label_1:;
	{
	LINE_NUMBER(572);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(573);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_77(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_77 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_77);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(584);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_getColumns_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getColumns_R_int])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(585);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$itemEffMultiplier$1_arc_func_Boolf_arc_struct_ObjectFloatMap_float_arc_func_Floatf_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jfloat param2, jobject param3, jobject param4) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$itemEffMultiplier$1", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(574);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Boolf_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(575);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	INST_FCONST(1);
	goto label_5;
label_4:;
	{
	jfloat temp0 = (jfloat)((func_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float])(ctx, (frame[1].o), (frame[6].o), (jfloat(1)));
	sp[0].f = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[7].f = sp[0].f;
	LINE_NUMBER(576);
	frame[8].f = ((jfloat(1)) / (((frame[2].f) * (frame[7].f)) / (jfloat(60.0f))));
	LINE_NUMBER(578);
	sp[0].o = frame[4].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_78(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_78 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_78);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (frame[8].f);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(582);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(583);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(584);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$itemEffMultiplier$3_mindustry_type_Item_float_float_arc_func_Floatf_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$itemEffMultiplier$3", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(579);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(580);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp += 2;
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	jfloat temp0 = frame[2].f;
	sp[0].f = temp0;
	sp += 1;
	if ((floatCompare((frame[2].f), (jfloat(1,000000e-02f)), 1)) >= 0) goto label_3;
	}
	INST_ICONST(4);
	goto label_4;
label_3:;
	INST_ICONST(2);
label_4:;
	{
	sp -= 2;
	sp[0].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, sp[0].f, sp[1].i);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	sp[1].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\n[lightgray]\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	sp += 1;
	goto label_5;
	}
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_5:;
	{
	sp -= 3;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(581);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"stat.efficiency"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	jfloat temp1 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, (frame[3].o)))(ctx, (frame[3].o), (frame[0].o));
	sp[4].o = (jobject)SM_mindustry_world_meta_StatValues_fixValue_float_R_java_lang_String(ctx, (temp1 * (jfloat(100.0f))));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[stat]\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(15.0f)));
	LINE_NUMBER(582);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_meta_StatValues_lambda$itemEffMultiplier$2_arc_func_Boolf_mindustry_type_Item_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$itemEffMultiplier$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(574);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Item_unlockedNow_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Item_unlockedNow_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Item_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Item_isHidden_R_boolean])(ctx, (frame[1].o));
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

void SM_mindustry_world_meta_StatValues_lambda$boosters$0_arc_func_Boolf_float_boolean_float_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jbool param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$boosters$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	LINE_NUMBER(539);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_79(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_79 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_79);
		proxy->F_field4 = (frame[4].f);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(560);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_getColumns_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getColumns_R_int])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(561);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$boosters$1_arc_func_Boolf_float_boolean_float_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jbool param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$boosters$1", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(540);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o));
	LINE_NUMBER(541);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[7].o));
	if (temp0 != 0) goto label_4;
	}
	goto label_1;
label_4:;
	{
	LINE_NUMBER(543);
	sp[0].o = frame[5].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_80(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_80 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_80);
		proxy->F_field4 = (frame[4].f);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(558);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(559);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(560);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$boosters$2_mindustry_type_Liquid_float_boolean_float_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jbool param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$boosters$2", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(544);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_81(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_81 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_81);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(545);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_82(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_82 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_82);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(550);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_83(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_83 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_83);
		proxy->F_field4 = (frame[4].f);
		proxy->F_field3 = (jref) (frame[0].o);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (frame[2].i);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(557);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(15.0f)));
	LINE_NUMBER(558);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$boosters$5_boolean_float_float_mindustry_type_Liquid_float_arc_scene_ui_layout_Table(jcontext ctx, jbool param0, jfloat param1, jfloat param2, jobject param3, jfloat param4, jobject param5) {
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$boosters$5", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(551);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(553);
	if ((frame[0].i) == 0) goto label_2;
	}
	INST_FCONST(1);
	goto label_3;
label_2:;
	INST_FCONST(0);
label_3:;
	{
	sp -= 1;
	frame[6].f = (sp[0].f + (((frame[1].f) * (frame[2].f)) * ((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[3].o)))->F_heatCapacity)));
	LINE_NUMBER(554);
	if ((frame[0].i) == 0) goto label_5;
	}
	INST_FLOAD(4);
	goto label_6;
label_5:;
	{
	jfloat temp0 = (frame[4].f) / (((frame[1].f) * (frame[2].f)) * (jfloat(0.4f)));
	sp[0].f = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[7].f = sp[0].f;
	LINE_NUMBER(555);
	frame[8].f = ((frame[7].f) / ((frame[4].f) / (frame[6].f)));
	LINE_NUMBER(556);
	sp[0].o = frame[5].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.reload"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((frame[8].f) * (jfloat(100.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$boosters$4_mindustry_type_Liquid_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$boosters$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(546);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(547);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((frame[1].f) * (jfloat(60.0f))), (jint(2)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(548);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$boosters$3_mindustry_type_Liquid_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$boosters$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(544);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_withTooltip_arc_scene_Element_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_Element(ctx, (frame[1].o), (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$drillables$0_arc_func_Boolf_arc_struct_ObjectFloatMap_float_float_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$drillables$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(512);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	LINE_NUMBER(513);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_84(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_84 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_84);
		proxy->F_field4 = (frame[4].f);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(532);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_getColumns_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getColumns_R_int])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(533);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$drillables$1_arc_func_Boolf_arc_struct_ObjectFloatMap_float_float_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$drillables$1", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(514);
	frame[6].i = (jint(0));
	LINE_NUMBER(515);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(516);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[8].o));
	if (temp0 != 0) goto label_5;
	}
	goto label_2;
label_5:;
	{
	LINE_NUMBER(518);
	sp[0].o = frame[5].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_85(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_85 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_85);
		proxy->F_field4 = (frame[4].f);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(529);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(530);
	INST_IINC(6, 1);
	if (((frame[6].i) % (jint(2))) != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	}
label_8:;
	LINE_NUMBER(531);
	goto label_2;
label_3:;
	LINE_NUMBER(532);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$drillables$2_mindustry_world_Block_arc_struct_ObjectFloatMap_float_float_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$drillables$2", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(519);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(520);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_86(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_86 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_86);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(524);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(525);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(526);
	sp[0].o = frame[5].o;
	jfloat temp0 = jfloat(60.0f);
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemDrop;
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (temp1 + (temp2 * (jfloat(((jint)((mindustry_type_Item *) NULL_CHECK(sp[1].o))->F_hardness))))), (frame[2].f));
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemDrop;
	jfloat temp4 = (jfloat)((func_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float])(ctx, sp[1].o, sp[2].o, (jfloat(1)));
	sp[1].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((temp0 / (temp3 / temp4)) * (frame[4].f)), (jint(2)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(527);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(15.0f)));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(529);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$drillables$3_mindustry_world_Block_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$drillables$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(522);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(523);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemDrop;
	sp[1].o = (jobject)((func_mindustry_type_Item_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Item_emoji_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_87(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_87 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_87);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(524);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$drillables$4_mindustry_world_Block_arc_scene_ui_Label(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$drillables$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(523);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemDrop;
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_withTooltip_arc_scene_Element_mindustry_ctype_UnlockableContent_R_arc_scene_Element(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_meta_StatValues_lambda$statusEffects$0_mindustry_ctype_UnlockableContent_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$statusEffects$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(507);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$content$2_arc_struct_Seq_arc_func_Boolf_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$content$2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(475);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_88(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_88 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_88);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$content$3_arc_struct_Seq_arc_func_Boolf_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$content$3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(478);
	frame[4].i = (jint(0));
	LINE_NUMBER(479);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[5].i));
	frame[6].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o));
	LINE_NUMBER(482);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[6].o));
	if (temp0 != 0) goto label_7;
	}
	goto label_8;
label_7:;
	{
	LINE_NUMBER(483);
	frame[4].i = (jint(1));
	LINE_NUMBER(485);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[6].o)))->F_uiIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[6].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_89(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_89 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_89);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(486);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[6].o)))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[6].o)))->F_uiIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(2);
label_12:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(487);
	if (((frame[5].i) % (jint(5))) != (jint(4))) goto label_8;
	}
	{
	LINE_NUMBER(488);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	}
label_8:;
	{
	LINE_NUMBER(479);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(492);
	if ((frame[4].i) != 0) goto label_15;
	}
	{
	LINE_NUMBER(493);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[2].o));
	}
label_15:;
	LINE_NUMBER(495);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$content$4_mindustry_ctype_UnlockableContent_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$content$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_withTooltip_arc_scene_Element_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_Element(ctx, (frame[1].o), (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_meta_StatValues_lambda$content$1_mindustry_ctype_UnlockableContent_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$content$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$blocks$7_boolean_mindustry_world_meta_Attribute_boolean_float_arc_struct_Seq_float_float_arc_scene_ui_layout_Table(jcontext ctx, jbool param0, jobject param1, jbool param2, jfloat param3, jobject param4, jfloat param5, jfloat param6, jobject param7) {
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$7", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq])(ctx, (frame[7].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o)));
	}
label_1:;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[7].o));
	LINE_NUMBER(404);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_90(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_90 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_90);
		proxy->F_field6 = (frame[6].f);
		proxy->F_field5 = (frame[5].f);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (frame[0].i);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(462);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_getColumns_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getColumns_R_int])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(463);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$blocks$8_boolean_mindustry_world_meta_Attribute_boolean_float_arc_struct_Seq_float_float_arc_scene_ui_layout_Table(jcontext ctx, jbool param0, jobject param1, jbool param2, jfloat param3, jobject param4, jfloat param5, jfloat param6, jobject param7) {
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$8", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Runnable, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[8].o = sp[0].o;
	LINE_NUMBER(406);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_maps_Map, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[9].o = sp[0].o;
	LINE_NUMBER(408);
	sp[0].o = frame[8].o;
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_java_lang_Runnable_12);
		proxy->F_field7 = (frame[6].f);
		proxy->F_field6 = (frame[5].f);
		proxy->F_field5 = (jref) (frame[4].o);
		proxy->F_field4 = (frame[3].f);
		proxy->F_field3 = (frame[2].i);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (frame[0].i);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(451);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (jint(0)))));
	LINE_NUMBER(454);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_java_lang_Runnable_13);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(462);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$blocks$16_Array1_mindustry_maps_Map_Array1_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$16", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(455);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_map;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(457);
	if ((frame[2].o) == ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))))) goto label_4;
	}
	{
	LINE_NUMBER(458);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(459);
	ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))) = (frame[2].o);
	}
label_4:;
	LINE_NUMBER(461);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$blocks$9_arc_scene_ui_layout_Table_boolean_mindustry_world_meta_Attribute_boolean_float_arc_struct_Seq_float_float(jcontext ctx, jobject param0, jbool param1, jobject param2, jbool param3, jfloat param4, jobject param5, jfloat param6, jfloat param7) {
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$9", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(409);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[0].o));
	LINE_NUMBER(410);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(412);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(413);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Boolf_12(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Boolf_12 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Boolf_12);
		proxy->F_field2 = (frame[3].i);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (frame[1].i);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(414);
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_91(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_91 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_91);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(415);
	sp[0].o = (jobject)((func_arc_struct_Seq_with_arc_func_Cons_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_with_arc_func_Cons_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(417);
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(419);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_92(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_92 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_92);
		proxy->F_field5 = (frame[7].f);
		proxy->F_field4 = (frame[6].f);
		proxy->F_field3 = (jref) (frame[5].o);
		proxy->F_field2 = (frame[4].f);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[10].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(441);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(442);
	goto label_10;
	}
label_11:;
	goto label_15;
label_8:;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@none.inmap"_j))));
	}
label_15:;
	LINE_NUMBER(446);
	goto label_16;
label_3:;
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@stat.showinmap"_j))));
	}
label_16:;
	LINE_NUMBER(449);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$blocks$13_mindustry_world_Block_mindustry_world_meta_Attribute_float_arc_struct_Seq_float_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jfloat param2, jobject param3, jfloat param4, jfloat param5, jobject param6) {
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$13", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(420);
	jfloat temp0 = jfloat(1);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_attributes;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float])(ctx, sp[0].o, (frame[1].o));
	frame[7].f = (temp0 + (temp1 * (frame[2].f)));
	LINE_NUMBER(422);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(423);
	sp[0].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_93(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_93 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_93);
		proxy->F_field5 = (frame[7].f);
		proxy->F_field4 = (frame[5].f);
		proxy->F_field3 = (frame[4].f);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(438);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(439);
	sp[0].o = frame[6].o;
	sp += 1;
	if ((floatCompare((frame[7].f), (jfloat(1)), 1)) >= 0) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[negstat]"_j));
	goto label_6;
label_5:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[stat]"_j));
label_6:;
	{
	sp -= 2;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"stat.efficiency"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)SM_mindustry_world_meta_StatValues_fixValue_float_R_java_lang_String(ctx, ((frame[7].f) * (jfloat(100.0f))));
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(15.0f)));
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$blocks$14_arc_struct_Seq_mindustry_world_Block_mindustry_world_meta_Attribute_float_float_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$14", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[6].o));
	LINE_NUMBER(426);
	if ((frame[0].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_type_ItemStack, sp[0].o));
	LINE_NUMBER(428);
	jfloat temp0 = jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[8].o)))->F_amount));
	jfloat temp1 = jfloat(1);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_attributes;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float])(ctx, sp[0].o, (frame[2].o));
	frame[9].f = (temp0 * (temp1 + (temp2 * (frame[3].f))));
	LINE_NUMBER(430);
	sp[0].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_94(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_94 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_94);
		proxy->F_field3 = (frame[5].f);
		proxy->F_field2 = (frame[4].f);
		proxy->F_field1 = (frame[9].f);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp3 = jfloat(8.0f);
	LINE_NUMBER(433);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	LINE_NUMBER(434);
	goto label_4;
	}
label_5:;
	goto label_10;
label_2:;
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"@none"_j))));
	}
label_10:;
	LINE_NUMBER(438);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$blocks$15_mindustry_type_ItemStack_float_float_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$15", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(432);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_float_float_boolean_R_arc_scene_ui_layout_Table(ctx, sp[1].o, (frame[1].f), ((frame[2].f) / (frame[3].f)), (jint(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	LINE_NUMBER(433);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$blocks$11_mindustry_world_meta_Attribute_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$11", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(415);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Floatf_2(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Floatf_2 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Floatf_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_meta_StatValues_lambda$blocks$12_mindustry_world_meta_Attribute_mindustry_world_Block_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$12", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_attributes;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_meta_StatValues_lambda$blocks$10_boolean_mindustry_world_meta_Attribute_boolean_mindustry_world_Block_R_boolean(jcontext ctx, jbool param0, jobject param1, jbool param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$10", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(414);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_2;
	}
label_1:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	jint temp0 = (jint)((func_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_attributes;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float])(ctx, sp[0].o, (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) == 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_3;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[3].o)));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_2;
label_3:;
	INST_ICONST(1);
	goto label_5;
label_2:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$blocks$0_boolean_mindustry_world_meta_Attribute_boolean_float_boolean_arc_scene_ui_layout_Table(jcontext ctx, jbool param0, jobject param1, jbool param2, jfloat param3, jbool param4, jobject param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(355);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_95(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_95 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_95);
		proxy->F_field4 = (frame[4].i);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (frame[0].i);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$blocks$1_boolean_mindustry_world_meta_Attribute_boolean_float_boolean_arc_scene_ui_layout_Table(jcontext ctx, jbool param0, jobject param1, jbool param2, jfloat param3, jbool param4, jobject param5) {
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$1", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Runnable, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[6].o = sp[0].o;
	LINE_NUMBER(357);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_maps_Map, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[7].o = sp[0].o;
	LINE_NUMBER(359);
	sp[0].o = frame[6].o;
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_java_lang_Runnable_14);
		proxy->F_field5 = (frame[4].i);
		proxy->F_field4 = (frame[3].f);
		proxy->F_field3 = (frame[2].i);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (frame[0].i);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(385);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(0)))));
	LINE_NUMBER(388);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_java_lang_Runnable_15);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$blocks$6_Array1_mindustry_maps_Map_Array1_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$6", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(389);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_map;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(391);
	if ((frame[2].o) == ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))))) goto label_4;
	}
	{
	LINE_NUMBER(392);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(393);
	ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))) = (frame[2].o);
	}
label_4:;
	LINE_NUMBER(395);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$blocks$2_arc_scene_ui_layout_Table_boolean_mindustry_world_meta_Attribute_boolean_float_boolean(jcontext ctx, jobject param0, jbool param1, jobject param2, jbool param3, jfloat param4, jbool param5) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$2", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(360);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[0].o));
	LINE_NUMBER(361);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(363);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(364);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Boolf_13(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Boolf_13 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Boolf_13);
		proxy->F_field2 = (frame[3].i);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (frame[1].i);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(365);
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_96(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_96 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_96);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(366);
	sp[0].o = (jobject)((func_arc_struct_Seq_with_arc_func_Cons_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_with_arc_func_Cons_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(368);
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(369);
	frame[7].i = (jint(0));
	LINE_NUMBER(370);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[6].o));
	frame[8].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(372);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[9].o)))->F_attributes;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float])(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_blockEfficiency_mindustry_world_Block_float_boolean_R_mindustry_world_meta_StatValue(ctx, sp[0].o, (temp0 * (frame[4].f)), (frame[5].i));
	((func_mindustry_world_meta_StatValue_display_arc_scene_ui_layout_Table) resolveInterfaceMethod(ctx, &class_mindustry_world_meta_StatValue, INDEX_mindustry_world_meta_StatValue_display_arc_scene_ui_layout_Table, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(373);
	INST_IINC(7, 1);
	if (((frame[7].i) % (jint(5))) != 0) goto label_15;
	}
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	}
label_15:;
	LINE_NUMBER(376);
	goto label_11;
label_12:;
	LINE_NUMBER(377);
	goto label_17;
label_8:;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@none.inmap"_j))));
	}
label_17:;
	LINE_NUMBER(380);
	goto label_18;
label_3:;
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@stat.showinmap"_j))));
	}
label_18:;
	LINE_NUMBER(383);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$blocks$4_mindustry_world_meta_Attribute_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(366);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Floatf_3(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Floatf_3 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Floatf_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_meta_StatValues_lambda$blocks$5_mindustry_world_meta_Attribute_mindustry_world_Block_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_attributes;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_meta_StatValues_lambda$blocks$3_boolean_mindustry_world_meta_Attribute_boolean_mindustry_world_Block_R_boolean(jcontext ctx, jbool param0, jobject param1, jbool param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blocks$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(365);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_2;
	}
label_1:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	jint temp0 = (jint)((func_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_attributes;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float])(ctx, sp[0].o, (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) == 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_3;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[3].o)));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_2;
label_3:;
	INST_ICONST(1);
	goto label_5;
label_2:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$blockEfficiency$0_mindustry_world_Block_float_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jbool param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blockEfficiency$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(340);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	jint temp0 = jint(0);
	clinit_arc_scene_ui_Image(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[3].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[2].o, sp[3].o);
	clinit_arc_util_Scaling(ctx);
	sp[3].o = (jobject)SF_arc_util_Scaling_fit;
	LINE_NUMBER(341);
	sp[2].o = (jobject)((func_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Cons_97(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Cons_97 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Cons_97);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (frame[1].f);
		sp[3].o = (jobject) proxy;
	}
	init_arc_scene_ui_layout_Table_arc_func_Cons(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	LINE_NUMBER(340);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = jfloat(64.0f);
	LINE_NUMBER(343);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxSize_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxSize_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$blockEfficiency$1_float_boolean_arc_scene_ui_layout_Table(jcontext ctx, jfloat param0, jbool param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$blockEfficiency$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp += 1;
	if ((floatCompare((frame[0].f), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[scarlet]"_j));
	goto label_2;
label_1:;
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_3;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[accent]"_j));
	goto label_2;
label_3:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[accent]+"_j));
label_2:;
	{
	sp -= 2;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001%"_j.string, 2, sp[1].o, boxInteger(ctx, (jint(((frame[0].f) * (jfloat(100.0f)))))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$content$0_mindustry_ctype_UnlockableContent_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$content$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(334);
	sp[0].o = frame[1].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(335);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$stack$1_float_arc_scene_ui_layout_Table(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$stack$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(255);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((floatCompare((frame[0].f), (jfloat(1000.0f)), -1)) >= 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[0].f), (jfloat((jint((frame[0].f))))));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)SM_mindustry_core_UI_formatAmount_long_R_java_lang_String(ctx, (jlong((jint((frame[0].f))))));
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_FLOAD(0);
	POP_N(1); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxFloat(ctx, sp[0].f));
label_4:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"stack amount"_j))));
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(256);
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, (frame[1].o));
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$stack$0_arc_graphics_g2d_TextureRegion_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$stack$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(249);
	sp[0].o = frame[1].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$withTooltip$1_mindustry_ctype_UnlockableContent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$withTooltip$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(216);
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_isHidden_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(217);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_content;
	((func_mindustry_ui_dialogs_ContentInfoDialog_show_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ContentInfoDialog_show_mindustry_ctype_UnlockableContent])(ctx, sp[0].o, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(219);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_meta_StatValues_lambda$withTooltip$0_mindustry_ctype_UnlockableContent_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$withTooltip$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(213);
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_isHidden_R_boolean])(ctx, (frame[0].o));
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

void SM_mindustry_world_meta_StatValues_lambda$displayLiquid$0_mindustry_type_Liquid_mindustry_world_meta_StatValues$1(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$displayLiquid$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_withTooltip_arc_scene_Element_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_Element(ctx, (frame[1].o), (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$items$2_arc_func_Boolf_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$items$2", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(171);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Boolf_14(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Boolf_14 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Boolf_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(173);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(176);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) > 0) goto label_6;
	}
	{
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_R_arc_scene_ui_layout_Table(ctx, (frame[5].o));
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_int_float_boolean_R_arc_scene_ui_layout_Table(ctx, (frame[5].o), (jint(1)), (frame[1].f), (jint(1)));
	sp += 1;
	}
label_7:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(178);
	if ((frame[4].i) == (((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size) - (jint(1)))) goto label_9;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	}
label_9:;
	{
	LINE_NUMBER(173);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(182);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_meta_StatValues_lambda$items$3_arc_func_Boolf_mindustry_type_Item_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$items$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(171);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Item_unlockedNow_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Item_unlockedNow_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Item_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Item_isHidden_R_boolean])(ctx, (frame[1].o));
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

void SM_mindustry_world_meta_StatValues_lambda$items$1_Array1_mindustry_type_ItemStack_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$items$1", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(159);
	frame[3].o = (frame[0].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(160);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_item;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_int_float_boolean_R_arc_scene_ui_layout_Table(ctx, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_amount), (frame[1].f), (jint(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(159);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(162);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$items$0_Array1_mindustry_type_ItemStack_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jbool param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$items$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(151);
	frame[3].o = (frame[0].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(152);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_item;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_int_boolean_R_arc_scene_ui_layout_Table(ctx, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_amount), (frame[1].i));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(151);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(154);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$liquids$2_Array1_mindustry_type_LiquidStack_float_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jbool param2, jobject param3) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$liquids$2", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(139);
	frame[4].o = (frame[0].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_3:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_4;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(140);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[7].o)))->F_liquid;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_displayLiquid_mindustry_type_Liquid_float_boolean_R_arc_scene_ui_layout_Table(ctx, sp[1].o, (((jfloat)((mindustry_type_LiquidStack *) NULL_CHECK((frame[7].o)))->F_amount) * ((jfloat(60.0f)) / (frame[1].f))), (frame[2].i));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(139);
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(142);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$liquids$0_arc_func_Boolf_float_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jbool param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$liquids$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(121);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_StatValues_invoke_arc_func_Boolf_15(ctx);
		auto proxy = (mindustry_world_meta_StatValues_invoke_arc_func_Boolf_15 *) gcAlloc(ctx, &class_mindustry_world_meta_StatValues_invoke_arc_func_Boolf_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(123);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(124);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[4].o), (frame[5].i));
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_displayLiquid_mindustry_type_Liquid_float_boolean_R_arc_scene_ui_layout_Table(ctx, (checkCast(ctx, &class_mindustry_type_Liquid, sp[1].o)), (frame[1].f), (frame[2].i));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(126);
	if ((frame[5].i) == (((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size) - (jint(1)))) goto label_6;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	}
label_6:;
	{
	LINE_NUMBER(123);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(130);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_meta_StatValues_lambda$liquids$1_arc_func_Boolf_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$liquids$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(121);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Liquid_unlockedNow_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Liquid_unlockedNow_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Liquid_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Liquid_isHidden_R_boolean])(ctx, (frame[1].o));
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

void SM_mindustry_world_meta_StatValues_lambda$liquid$0_mindustry_type_Liquid_float_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jbool param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$liquid$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(116);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_displayLiquid_mindustry_type_Liquid_float_boolean_R_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].f), (frame[2].i));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$percentModifier$0_mindustry_world_meta_StatUnit_float_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jbool param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$percentModifier$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_world_meta_StatUnit *) NULL_CHECK((frame[0].o)))->F_icon;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_meta_StatUnit *) NULL_CHECK((frame[0].o)))->F_icon;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 "_j.string, 1, sp[0].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_ammoStat_float_R_java_lang_String(ctx, (((frame[1].f) - (jfloat(1))) * (jfloat(100.0f))));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	if (((jint)((mindustry_world_meta_StatUnit *) NULL_CHECK((frame[0].o)))->F_space) == 0) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8" "_j));
	goto label_5;
label_4:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_5:;
	{
	sp -= 1;
	sp[1].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(98);
	if ((frame[2].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, (frame[4].o), (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_9:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$multiplierModifier$0_mindustry_world_meta_StatUnit_float_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jbool param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$multiplierModifier$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_world_meta_StatUnit *) NULL_CHECK((frame[0].o)))->F_icon;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_meta_StatUnit *) NULL_CHECK((frame[0].o)))->F_icon;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 "_j.string, 1, sp[0].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_multStat_float_R_java_lang_String(ctx, (frame[1].f));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	if (((jint)((mindustry_world_meta_StatUnit *) NULL_CHECK((frame[0].o)))->F_space) == 0) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8" "_j));
	goto label_5;
label_4:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_5:;
	{
	sp -= 1;
	sp[1].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(77);
	if ((frame[2].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, (frame[4].o), (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_9:;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$number$0_mindustry_world_meta_StatUnit_float_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jfloat param1, jbool param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$number$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_world_meta_StatUnit *) NULL_CHECK((frame[0].o)))->F_icon;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_meta_StatUnit *) NULL_CHECK((frame[0].o)))->F_icon;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 "_j.string, 1, sp[0].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_fixValue_float_R_java_lang_String(ctx, (frame[1].f));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	if (((jint)((mindustry_world_meta_StatUnit *) NULL_CHECK((frame[0].o)))->F_space) == 0) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8" "_j));
	goto label_5;
label_4:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_5:;
	{
	sp -= 1;
	sp[1].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(60);
	if ((frame[2].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, (frame[4].o), (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_9:;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$squared$0_float_mindustry_world_meta_StatUnit_arc_scene_ui_layout_Table(jcontext ctx, jfloat param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$squared$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_fixValue_float_R_java_lang_String(ctx, (frame[0].f));
	frame[3].o = sp[0].o;
	LINE_NUMBER(51);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001x\u0001"_j.string, 2, (frame[3].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(52);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((mindustry_world_meta_StatUnit *) NULL_CHECK((frame[1].o)))->F_space) == 0) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8" "_j));
	goto label_4;
label_3:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_4:;
	{
	sp -= 2;
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$bool$0_boolean_arc_scene_ui_layout_Table(jcontext ctx, jbool param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$bool$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(41);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((frame[0].i) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@no"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@yes"_j));
label_2:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_meta_StatValues_lambda$string$0_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatValues:lambda$string$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatValues(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_meta_StatValues[] {
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_meta_StatValues, 0, "()V", 1 },
	{ "string", (intptr_t) SM_mindustry_world_meta_StatValues_string_java_lang_String_Array1_java_lang_Object_R_mindustry_world_meta_StatValue, 0, "(Ljava/lang/String;[Ljava/lang/Object;)Lmindustry/world/meta/StatValue;", 137 },
	{ "bool", (intptr_t) SM_mindustry_world_meta_StatValues_bool_boolean_R_mindustry_world_meta_StatValue, 0, "(Z)Lmindustry/world/meta/StatValue;", 9 },
	{ "fixValue", (intptr_t) SM_mindustry_world_meta_StatValues_fixValue_float_R_java_lang_String, 0, "(F)Ljava/lang/String;", 9 },
	{ "squared", (intptr_t) SM_mindustry_world_meta_StatValues_squared_float_mindustry_world_meta_StatUnit_R_mindustry_world_meta_StatValue, 0, "(FLmindustry/world/meta/StatUnit;)Lmindustry/world/meta/StatValue;", 9 },
	{ "number", (intptr_t) SM_mindustry_world_meta_StatValues_number_float_mindustry_world_meta_StatUnit_boolean_R_mindustry_world_meta_StatValue, 0, "(FLmindustry/world/meta/StatUnit;Z)Lmindustry/world/meta/StatValue;", 9 },
	{ "number", (intptr_t) SM_mindustry_world_meta_StatValues_number_float_mindustry_world_meta_StatUnit_R_mindustry_world_meta_StatValue, 0, "(FLmindustry/world/meta/StatUnit;)Lmindustry/world/meta/StatValue;", 9 },
	{ "multiplierModifier", (intptr_t) SM_mindustry_world_meta_StatValues_multiplierModifier_float_mindustry_world_meta_StatUnit_boolean_R_mindustry_world_meta_StatValue, 0, "(FLmindustry/world/meta/StatUnit;Z)Lmindustry/world/meta/StatValue;", 9 },
	{ "multiplierModifier", (intptr_t) SM_mindustry_world_meta_StatValues_multiplierModifier_float_mindustry_world_meta_StatUnit_R_mindustry_world_meta_StatValue, 0, "(FLmindustry/world/meta/StatUnit;)Lmindustry/world/meta/StatValue;", 9 },
	{ "multiplierModifier", (intptr_t) SM_mindustry_world_meta_StatValues_multiplierModifier_float_R_mindustry_world_meta_StatValue, 0, "(F)Lmindustry/world/meta/StatValue;", 9 },
	{ "percentModifier", (intptr_t) SM_mindustry_world_meta_StatValues_percentModifier_float_mindustry_world_meta_StatUnit_boolean_R_mindustry_world_meta_StatValue, 0, "(FLmindustry/world/meta/StatUnit;Z)Lmindustry/world/meta/StatValue;", 9 },
	{ "percentModifier", (intptr_t) SM_mindustry_world_meta_StatValues_percentModifier_float_mindustry_world_meta_StatUnit_R_mindustry_world_meta_StatValue, 0, "(FLmindustry/world/meta/StatUnit;)Lmindustry/world/meta/StatValue;", 9 },
	{ "percentModifier", (intptr_t) SM_mindustry_world_meta_StatValues_percentModifier_float_R_mindustry_world_meta_StatValue, 0, "(F)Lmindustry/world/meta/StatValue;", 9 },
	{ "liquid", (intptr_t) SM_mindustry_world_meta_StatValues_liquid_mindustry_type_Liquid_float_boolean_R_mindustry_world_meta_StatValue, 0, "(Lmindustry/type/Liquid;FZ)Lmindustry/world/meta/StatValue;", 9 },
	{ "liquids", (intptr_t) SM_mindustry_world_meta_StatValues_liquids_arc_func_Boolf_float_boolean_R_mindustry_world_meta_StatValue, 0, "(Larc/func/Boolf;FZ)Lmindustry/world/meta/StatValue;", 9 },
	{ "liquids", (intptr_t) SM_mindustry_world_meta_StatValues_liquids_float_Array1_mindustry_type_LiquidStack_R_mindustry_world_meta_StatValue, 0, "(F[Lmindustry/type/LiquidStack;)Lmindustry/world/meta/StatValue;", 137 },
	{ "liquids", (intptr_t) SM_mindustry_world_meta_StatValues_liquids_float_boolean_Array1_mindustry_type_LiquidStack_R_mindustry_world_meta_StatValue, 0, "(FZ[Lmindustry/type/LiquidStack;)Lmindustry/world/meta/StatValue;", 137 },
	{ "items", (intptr_t) SM_mindustry_world_meta_StatValues_items_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue, 0, "([Lmindustry/type/ItemStack;)Lmindustry/world/meta/StatValue;", 137 },
	{ "items", (intptr_t) SM_mindustry_world_meta_StatValues_items_boolean_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue, 0, "(Z[Lmindustry/type/ItemStack;)Lmindustry/world/meta/StatValue;", 137 },
	{ "items", (intptr_t) SM_mindustry_world_meta_StatValues_items_float_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue, 0, "(F[Lmindustry/type/ItemStack;)Lmindustry/world/meta/StatValue;", 137 },
	{ "items", (intptr_t) SM_mindustry_world_meta_StatValues_items_arc_func_Boolf_R_mindustry_world_meta_StatValue, 0, "(Larc/func/Boolf;)Lmindustry/world/meta/StatValue;", 9 },
	{ "items", (intptr_t) SM_mindustry_world_meta_StatValues_items_float_arc_func_Boolf_R_mindustry_world_meta_StatValue, 0, "(FLarc/func/Boolf;)Lmindustry/world/meta/StatValue;", 9 },
	{ "displayLiquid", (intptr_t) SM_mindustry_world_meta_StatValues_displayLiquid_mindustry_type_Liquid_float_boolean_R_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Liquid;FZ)Larc/scene/ui/layout/Table;", 9 },
	{ "withTooltip", (intptr_t) SM_mindustry_world_meta_StatValues_withTooltip_arc_scene_Element_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_Element, 0, "(Larc/scene/Element;Lmindustry/ctype/UnlockableContent;Z)Larc/scene/Element;", 9 },
	{ "withTooltip", (intptr_t) SM_mindustry_world_meta_StatValues_withTooltip_arc_scene_Element_mindustry_ctype_UnlockableContent_R_arc_scene_Element, 0, "(Larc/scene/Element;Lmindustry/ctype/UnlockableContent;)Larc/scene/Element;", 9 },
	{ "statusText", (intptr_t) SM_mindustry_world_meta_StatValues_statusText_mindustry_type_StatusEffect_float_float_R_java_lang_String, 0, "(Lmindustry/type/StatusEffect;FF)Ljava/lang/String;", 9 },
	{ "stack", (intptr_t) SM_mindustry_world_meta_StatValues_stack_arc_graphics_g2d_TextureRegion_int_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_ui_layout_Stack, 0, "(Larc/graphics/g2d/TextureRegion;ILmindustry/ctype/UnlockableContent;Z)Larc/scene/ui/layout/Stack;", 10 },
	{ "stack", (intptr_t) SM_mindustry_world_meta_StatValues_stack_arc_graphics_g2d_TextureRegion_float_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_ui_layout_Stack, 0, "(Larc/graphics/g2d/TextureRegion;FLmindustry/ctype/UnlockableContent;Z)Larc/scene/ui/layout/Stack;", 10 },
	{ "stack", (intptr_t) SM_mindustry_world_meta_StatValues_stack_arc_graphics_g2d_TextureRegion_int_mindustry_ctype_UnlockableContent_R_arc_scene_ui_layout_Stack, 0, "(Larc/graphics/g2d/TextureRegion;ILmindustry/ctype/UnlockableContent;)Larc/scene/ui/layout/Stack;", 10 },
	{ "stack", (intptr_t) SM_mindustry_world_meta_StatValues_stack_mindustry_type_ItemStack_R_arc_scene_ui_layout_Stack, 0, "(Lmindustry/type/ItemStack;)Larc/scene/ui/layout/Stack;", 9 },
	{ "stack", (intptr_t) SM_mindustry_world_meta_StatValues_stack_mindustry_ctype_UnlockableContent_int_R_arc_scene_ui_layout_Stack, 0, "(Lmindustry/ctype/UnlockableContent;I)Larc/scene/ui/layout/Stack;", 9 },
	{ "stack", (intptr_t) SM_mindustry_world_meta_StatValues_stack_mindustry_ctype_UnlockableContent_int_boolean_R_arc_scene_ui_layout_Stack, 0, "(Lmindustry/ctype/UnlockableContent;IZ)Larc/scene/ui/layout/Stack;", 9 },
	{ "stack", (intptr_t) SM_mindustry_world_meta_StatValues_stack_mindustry_ctype_UnlockableContent_float_boolean_R_arc_scene_ui_layout_Stack, 0, "(Lmindustry/ctype/UnlockableContent;FZ)Larc/scene/ui/layout/Stack;", 9 },
	{ "stack", (intptr_t) SM_mindustry_world_meta_StatValues_stack_mindustry_type_Item_R_arc_scene_ui_layout_Stack, 0, "(Lmindustry/type/Item;)Larc/scene/ui/layout/Stack;", 9 },
	{ "stack", (intptr_t) SM_mindustry_world_meta_StatValues_stack_mindustry_type_PayloadStack_R_arc_scene_ui_layout_Stack, 0, "(Lmindustry/type/PayloadStack;)Larc/scene/ui/layout/Stack;", 9 },
	{ "displayItem", (intptr_t) SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_R_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Item;)Larc/scene/ui/layout/Table;", 9 },
	{ "displayItem", (intptr_t) SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_int_boolean_R_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Item;IZ)Larc/scene/ui/layout/Table;", 9 },
	{ "displayItem", (intptr_t) SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_int_R_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Item;I)Larc/scene/ui/layout/Table;", 9 },
	{ "displayItem", (intptr_t) SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_int_float_boolean_R_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Item;IFZ)Larc/scene/ui/layout/Table;", 9 },
	{ "displayItem", (intptr_t) SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_float_float_boolean_R_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Item;FFZ)Larc/scene/ui/layout/Table;", 9 },
	{ "displayItemPercent", (intptr_t) SM_mindustry_world_meta_StatValues_displayItemPercent_mindustry_type_Item_int_boolean_R_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Item;IZ)Larc/scene/ui/layout/Table;", 9 },
	{ "content", (intptr_t) SM_mindustry_world_meta_StatValues_content_mindustry_ctype_UnlockableContent_R_mindustry_world_meta_StatValue, 0, "(Lmindustry/ctype/UnlockableContent;)Lmindustry/world/meta/StatValue;", 9 },
	{ "blockEfficiency", (intptr_t) SM_mindustry_world_meta_StatValues_blockEfficiency_mindustry_world_Block_float_boolean_R_mindustry_world_meta_StatValue, 0, "(Lmindustry/world/Block;FZ)Lmindustry/world/meta/StatValue;", 9 },
	{ "blocks", (intptr_t) SM_mindustry_world_meta_StatValues_blocks_mindustry_world_meta_Attribute_boolean_float_boolean_R_mindustry_world_meta_StatValue, 0, "(Lmindustry/world/meta/Attribute;ZFZ)Lmindustry/world/meta/StatValue;", 9 },
	{ "blocks", (intptr_t) SM_mindustry_world_meta_StatValues_blocks_mindustry_world_meta_Attribute_boolean_float_float_arc_struct_Seq_float_boolean_R_mindustry_world_meta_StatValue, 0, "(Lmindustry/world/meta/Attribute;ZFFLarc/struct/Seq;FZ)Lmindustry/world/meta/StatValue;", 9 },
	{ "blocks", (intptr_t) SM_mindustry_world_meta_StatValues_blocks_mindustry_world_meta_Attribute_boolean_float_boolean_boolean_R_mindustry_world_meta_StatValue, 0, "(Lmindustry/world/meta/Attribute;ZFZZ)Lmindustry/world/meta/StatValue;", 9 },
	{ "blocks", (intptr_t) SM_mindustry_world_meta_StatValues_blocks_mindustry_world_meta_Attribute_boolean_float_float_arc_struct_Seq_float_boolean_boolean_R_mindustry_world_meta_StatValue, 0, "(Lmindustry/world/meta/Attribute;ZFFLarc/struct/Seq;FZZ)Lmindustry/world/meta/StatValue;", 9 },
	{ "content", (intptr_t) SM_mindustry_world_meta_StatValues_content_arc_struct_Seq_R_mindustry_world_meta_StatValue, 0, "(Larc/struct/Seq;)Lmindustry/world/meta/StatValue;", 9 },
	{ "content", (intptr_t) SM_mindustry_world_meta_StatValues_content_arc_struct_Seq_arc_func_Boolf_R_mindustry_world_meta_StatValue, 0, "(Larc/struct/Seq;Larc/func/Boolf;)Lmindustry/world/meta/StatValue;", 9 },
	{ "content", (intptr_t) SM_mindustry_world_meta_StatValues_content_arc_struct_Seq_arc_func_Boolf_java_lang_String_R_mindustry_world_meta_StatValue, 0, "(Larc/struct/Seq;Larc/func/Boolf;Ljava/lang/String;)Lmindustry/world/meta/StatValue;", 9 },
	{ "blocks", (intptr_t) SM_mindustry_world_meta_StatValues_blocks_arc_func_Boolf_R_mindustry_world_meta_StatValue, 0, "(Larc/func/Boolf;)Lmindustry/world/meta/StatValue;", 9 },
	{ "blocks", (intptr_t) SM_mindustry_world_meta_StatValues_blocks_arc_struct_Seq_R_mindustry_world_meta_StatValue, 0, "(Larc/struct/Seq;)Lmindustry/world/meta/StatValue;", 9 },
	{ "statusEffects", (intptr_t) SM_mindustry_world_meta_StatValues_statusEffects_arc_struct_Seq_R_mindustry_world_meta_StatValue, 0, "(Larc/struct/Seq;)Lmindustry/world/meta/StatValue;", 9 },
	{ "drillables", (intptr_t) SM_mindustry_world_meta_StatValues_drillables_float_float_float_arc_struct_ObjectFloatMap_arc_func_Boolf_R_mindustry_world_meta_StatValue, 0, "(FFFLarc/struct/ObjectFloatMap;Larc/func/Boolf;)Lmindustry/world/meta/StatValue;", 9 },
	{ "boosters", (intptr_t) SM_mindustry_world_meta_StatValues_boosters_float_float_float_boolean_arc_func_Boolf_R_mindustry_world_meta_StatValue, 0, "(FFFZLarc/func/Boolf;)Lmindustry/world/meta/StatValue;", 9 },
	{ "itemEffMultiplier", (intptr_t) SM_mindustry_world_meta_StatValues_itemEffMultiplier_arc_func_Floatf_float_arc_func_Boolf_R_mindustry_world_meta_StatValue, 0, "(Larc/func/Floatf;FLarc/func/Boolf;)Lmindustry/world/meta/StatValue;", 9 },
	{ "itemEffMultiplier", (intptr_t) SM_mindustry_world_meta_StatValues_itemEffMultiplier_arc_func_Floatf_float_arc_func_Boolf_arc_struct_ObjectFloatMap_R_mindustry_world_meta_StatValue, 0, "(Larc/func/Floatf;FLarc/func/Boolf;Larc/struct/ObjectFloatMap;)Lmindustry/world/meta/StatValue;", 9 },
	{ "liquidEffMultiplier", (intptr_t) SM_mindustry_world_meta_StatValues_liquidEffMultiplier_arc_func_Floatf_float_arc_func_Boolf_R_mindustry_world_meta_StatValue, 0, "(Larc/func/Floatf;FLarc/func/Boolf;)Lmindustry/world/meta/StatValue;", 9 },
	{ "speedBoosters", (intptr_t) SM_mindustry_world_meta_StatValues_speedBoosters_java_lang_String_float_float_boolean_arc_func_Boolf_R_mindustry_world_meta_StatValue, 0, "(Ljava/lang/String;FFZLarc/func/Boolf;)Lmindustry/world/meta/StatValue;", 9 },
	{ "itemBoosters", (intptr_t) SM_mindustry_world_meta_StatValues_itemBoosters_java_lang_String_float_float_float_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue, 0, "(Ljava/lang/String;FFF[Lmindustry/type/ItemStack;)Lmindustry/world/meta/StatValue;", 9 },
	{ "weapons", (intptr_t) SM_mindustry_world_meta_StatValues_weapons_mindustry_type_UnitType_arc_struct_Seq_R_mindustry_world_meta_StatValue, 0, "(Lmindustry/type/UnitType;Larc/struct/Seq;)Lmindustry/world/meta/StatValue;", 9 },
	{ "abilities", (intptr_t) SM_mindustry_world_meta_StatValues_abilities_arc_struct_Seq_R_mindustry_world_meta_StatValue, 0, "(Larc/struct/Seq;)Lmindustry/world/meta/StatValue;", 9 },
	{ "ammo", (intptr_t) SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_R_mindustry_world_meta_StatValue, 0, "(Larc/struct/ObjectMap;)Lmindustry/world/meta/StatValue;", 9 },
	{ "ammo", (intptr_t) SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_R_mindustry_world_meta_StatValue, 0, "(Larc/struct/ObjectMap;Z)Lmindustry/world/meta/StatValue;", 9 },
	{ "ammo", (intptr_t) SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_java_lang_String_R_mindustry_world_meta_StatValue, 0, "(Larc/struct/ObjectMap;Ljava/lang/String;)Lmindustry/world/meta/StatValue;", 9 },
	{ "ammo", (intptr_t) SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_java_lang_String_R_mindustry_world_meta_StatValue, 0, "(Larc/struct/ObjectMap;ZLjava/lang/String;)Lmindustry/world/meta/StatValue;", 9 },
	{ "ammo", (intptr_t) SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_boolean_R_mindustry_world_meta_StatValue, 0, "(Larc/struct/ObjectMap;ZZ)Lmindustry/world/meta/StatValue;", 9 },
	{ "ammo", (intptr_t) SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_boolean_boolean_java_lang_String_R_mindustry_world_meta_StatValue, 0, "(Larc/struct/ObjectMap;ZZLjava/lang/String;)Lmindustry/world/meta/StatValue;", 9 },
	{ "tableInfo", (intptr_t) SM_mindustry_world_meta_StatValues_tableInfo_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/String;)Larc/scene/ui/layout/Cell;", 10 },
	{ "note", (intptr_t) SM_mindustry_world_meta_StatValues_note_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/String;)Larc/scene/ui/layout/Cell;", 10 },
	{ "sep", (intptr_t) SM_mindustry_world_meta_StatValues_sep_arc_scene_ui_layout_Table_java_lang_String_R_arc_scene_ui_layout_Cell, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/String;)Larc/scene/ui/layout/Cell;", 10 },
	{ "ammoStat", (intptr_t) SM_mindustry_world_meta_StatValues_ammoStat_float_R_java_lang_String, 0, "(F)Ljava/lang/String;", 10 },
	{ "multStat", (intptr_t) SM_mindustry_world_meta_StatValues_multStat_float_R_java_lang_String, 0, "(F)Ljava/lang/String;", 10 },
	{ "icon", (intptr_t) SM_mindustry_world_meta_StatValues_icon_mindustry_ctype_UnlockableContent_R_arc_graphics_g2d_TextureRegion, 0, "(Lmindustry/ctype/UnlockableContent;)Larc/graphics/g2d/TextureRegion;", 10 },
	{ "lambda$note$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$note$0_java_lang_String_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$tableInfo$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$tableInfo$0_java_lang_String_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$ammo$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$ammo$0_arc_struct_ObjectMap_boolean_boolean_java_lang_String_arc_scene_ui_layout_Table, 0, "(Larc/struct/ObjectMap;ZZLjava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$ammo$1", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$ammo$1_boolean_mindustry_ctype_UnlockableContent_mindustry_entities_bullet_BulletType_java_lang_String_arc_scene_ui_layout_Table, 0, "(ZLmindustry/ctype/UnlockableContent;Lmindustry/entities/bullet/BulletType;Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$ammo$11", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$ammo$11_mindustry_entities_bullet_BulletType_arc_scene_ui_layout_Table_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table, 0, "(Lmindustry/entities/bullet/BulletType;Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Collapser;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$ammo$13", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$ammo$13_arc_scene_ui_layout_Collapser_arc_scene_ui_ImageButton, 0, "(Larc/scene/ui/layout/Collapser;Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$ammo$12", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$ammo$12_arc_scene_ui_layout_Collapser, 0, "(Larc/scene/ui/layout/Collapser;)V", 4106 },
	{ "lambda$ammo$8", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$ammo$8_mindustry_entities_bullet_BulletType_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table, 0, "(Lmindustry/entities/bullet/BulletType;Larc/scene/ui/layout/Collapser;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$ammo$10", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$ammo$10_arc_scene_ui_layout_Collapser_arc_scene_ui_ImageButton, 0, "(Larc/scene/ui/layout/Collapser;Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$ammo$9", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$ammo$9_arc_scene_ui_layout_Collapser, 0, "(Larc/scene/ui/layout/Collapser;)V", 4106 },
	{ "lambda$ammo$5", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$ammo$5_mindustry_entities_bullet_BulletType_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table, 0, "(Lmindustry/entities/bullet/BulletType;Larc/scene/ui/layout/Collapser;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$ammo$7", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$ammo$7_arc_scene_ui_layout_Collapser_arc_scene_ui_ImageButton, 0, "(Larc/scene/ui/layout/Collapser;Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$ammo$6", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$ammo$6_arc_scene_ui_layout_Collapser, 0, "(Larc/scene/ui/layout/Collapser;)V", 4106 },
	{ "lambda$ammo$4", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$ammo$4_mindustry_entities_bullet_BulletType_arc_scene_Element, 0, "(Lmindustry/entities/bullet/BulletType;Larc/scene/Element;)V", 4106 },
	{ "lambda$ammo$2", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$ammo$2_mindustry_ctype_UnlockableContent_mindustry_entities_bullet_BulletType_arc_scene_ui_layout_Table, 0, "(Lmindustry/ctype/UnlockableContent;Lmindustry/entities/bullet/BulletType;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$ammo$3", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$ammo$3_mindustry_ctype_UnlockableContent_arc_scene_ui_Image, 0, "(Lmindustry/ctype/UnlockableContent;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$abilities$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$abilities$0_arc_struct_Seq_arc_scene_ui_layout_Table, 0, "(Larc/struct/Seq;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$abilities$1", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$abilities$1_arc_struct_Seq_arc_scene_ui_layout_Table, 0, "(Larc/struct/Seq;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$weapons$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$weapons$0_arc_struct_Seq_mindustry_type_UnitType_arc_scene_ui_layout_Table, 0, "(Larc/struct/Seq;Lmindustry/type/UnitType;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$weapons$1", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$weapons$1_arc_graphics_g2d_TextureRegion_mindustry_type_Weapon_mindustry_type_UnitType_int_arc_scene_ui_layout_Table, 0, "(Larc/graphics/g2d/TextureRegion;Lmindustry/type/Weapon;Lmindustry/type/UnitType;ILarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$itemBoosters$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$itemBoosters$0_Array1_mindustry_type_ItemStack_float_float_float_java_lang_String_arc_scene_ui_layout_Table, 0, "([Lmindustry/type/ItemStack;FFFLjava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$itemBoosters$1", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$itemBoosters$1_Array1_mindustry_type_ItemStack_float_float_float_java_lang_String_arc_scene_ui_layout_Table, 0, "([Lmindustry/type/ItemStack;FFFLjava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$itemBoosters$2", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$itemBoosters$2_Array1_mindustry_type_ItemStack_float_float_float_java_lang_String_arc_scene_ui_layout_Table, 0, "([Lmindustry/type/ItemStack;FFFLjava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$itemBoosters$4", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$itemBoosters$4_float_float_java_lang_String_arc_scene_ui_layout_Table, 0, "(FFLjava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$itemBoosters$3", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$itemBoosters$3_Array1_mindustry_type_ItemStack_float_arc_scene_ui_layout_Table, 0, "([Lmindustry/type/ItemStack;FLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$speedBoosters$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$speedBoosters$0_arc_func_Boolf_float_float_java_lang_String_boolean_arc_scene_ui_layout_Table, 0, "(Larc/func/Boolf;FFLjava/lang/String;ZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$speedBoosters$1", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$speedBoosters$1_arc_func_Boolf_float_float_java_lang_String_boolean_arc_scene_ui_layout_Table, 0, "(Larc/func/Boolf;FFLjava/lang/String;ZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$speedBoosters$2", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$speedBoosters$2_mindustry_type_Liquid_float_float_java_lang_String_boolean_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Liquid;FFLjava/lang/String;ZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$speedBoosters$5", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$speedBoosters$5_float_java_lang_String_boolean_mindustry_type_Liquid_arc_scene_ui_layout_Table, 0, "(FLjava/lang/String;ZLmindustry/type/Liquid;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$speedBoosters$4", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$speedBoosters$4_mindustry_type_Liquid_float_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Liquid;FLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$speedBoosters$3", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$speedBoosters$3_mindustry_type_Liquid_arc_scene_ui_Image, 0, "(Lmindustry/type/Liquid;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$liquidEffMultiplier$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$liquidEffMultiplier$0_arc_func_Boolf_float_arc_func_Floatf_arc_scene_ui_layout_Table, 0, "(Larc/func/Boolf;FLarc/func/Floatf;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$liquidEffMultiplier$1", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$liquidEffMultiplier$1_arc_func_Boolf_float_arc_func_Floatf_arc_scene_ui_layout_Table, 0, "(Larc/func/Boolf;FLarc/func/Floatf;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$liquidEffMultiplier$3", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$liquidEffMultiplier$3_mindustry_type_Liquid_float_arc_func_Floatf_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Liquid;FLarc/func/Floatf;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$liquidEffMultiplier$2", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$liquidEffMultiplier$2_arc_func_Boolf_mindustry_type_Liquid_R_boolean, 0, "(Larc/func/Boolf;Lmindustry/type/Liquid;)Z", 4106 },
	{ "lambda$itemEffMultiplier$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$itemEffMultiplier$0_arc_func_Boolf_arc_struct_ObjectFloatMap_float_arc_func_Floatf_arc_scene_ui_layout_Table, 0, "(Larc/func/Boolf;Larc/struct/ObjectFloatMap;FLarc/func/Floatf;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$itemEffMultiplier$1", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$itemEffMultiplier$1_arc_func_Boolf_arc_struct_ObjectFloatMap_float_arc_func_Floatf_arc_scene_ui_layout_Table, 0, "(Larc/func/Boolf;Larc/struct/ObjectFloatMap;FLarc/func/Floatf;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$itemEffMultiplier$3", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$itemEffMultiplier$3_mindustry_type_Item_float_float_arc_func_Floatf_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Item;FFLarc/func/Floatf;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$itemEffMultiplier$2", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$itemEffMultiplier$2_arc_func_Boolf_mindustry_type_Item_R_boolean, 0, "(Larc/func/Boolf;Lmindustry/type/Item;)Z", 4106 },
	{ "lambda$boosters$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$boosters$0_arc_func_Boolf_float_boolean_float_float_arc_scene_ui_layout_Table, 0, "(Larc/func/Boolf;FZFFLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$boosters$1", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$boosters$1_arc_func_Boolf_float_boolean_float_float_arc_scene_ui_layout_Table, 0, "(Larc/func/Boolf;FZFFLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$boosters$2", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$boosters$2_mindustry_type_Liquid_float_boolean_float_float_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Liquid;FZFFLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$boosters$5", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$boosters$5_boolean_float_float_mindustry_type_Liquid_float_arc_scene_ui_layout_Table, 0, "(ZFFLmindustry/type/Liquid;FLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$boosters$4", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$boosters$4_mindustry_type_Liquid_float_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Liquid;FLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$boosters$3", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$boosters$3_mindustry_type_Liquid_arc_scene_ui_Image, 0, "(Lmindustry/type/Liquid;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$drillables$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$drillables$0_arc_func_Boolf_arc_struct_ObjectFloatMap_float_float_float_arc_scene_ui_layout_Table, 0, "(Larc/func/Boolf;Larc/struct/ObjectFloatMap;FFFLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$drillables$1", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$drillables$1_arc_func_Boolf_arc_struct_ObjectFloatMap_float_float_float_arc_scene_ui_layout_Table, 0, "(Larc/func/Boolf;Larc/struct/ObjectFloatMap;FFFLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$drillables$2", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$drillables$2_mindustry_world_Block_arc_struct_ObjectFloatMap_float_float_float_arc_scene_ui_layout_Table, 0, "(Lmindustry/world/Block;Larc/struct/ObjectFloatMap;FFFLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$drillables$3", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$drillables$3_mindustry_world_Block_arc_scene_ui_layout_Table, 0, "(Lmindustry/world/Block;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$drillables$4", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$drillables$4_mindustry_world_Block_arc_scene_ui_Label, 0, "(Lmindustry/world/Block;Larc/scene/ui/Label;)V", 4106 },
	{ "lambda$statusEffects$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$statusEffects$0_mindustry_ctype_UnlockableContent_R_boolean, 0, "(Lmindustry/ctype/UnlockableContent;)Z", 4106 },
	{ "lambda$content$2", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$content$2_arc_struct_Seq_arc_func_Boolf_java_lang_String_arc_scene_ui_layout_Table, 0, "(Larc/struct/Seq;Larc/func/Boolf;Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$content$3", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$content$3_arc_struct_Seq_arc_func_Boolf_java_lang_String_arc_scene_ui_layout_Table, 0, "(Larc/struct/Seq;Larc/func/Boolf;Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$content$4", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$content$4_mindustry_ctype_UnlockableContent_arc_scene_ui_Image, 0, "(Lmindustry/ctype/UnlockableContent;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$content$1", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$content$1_mindustry_ctype_UnlockableContent_R_boolean, 0, "(Lmindustry/ctype/UnlockableContent;)Z", 4106 },
	{ "lambda$blocks$7", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$7_boolean_mindustry_world_meta_Attribute_boolean_float_arc_struct_Seq_float_float_arc_scene_ui_layout_Table, 0, "(ZLmindustry/world/meta/Attribute;ZFLarc/struct/Seq;FFLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$blocks$8", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$8_boolean_mindustry_world_meta_Attribute_boolean_float_arc_struct_Seq_float_float_arc_scene_ui_layout_Table, 0, "(ZLmindustry/world/meta/Attribute;ZFLarc/struct/Seq;FFLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$blocks$16", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$16_Array1_mindustry_maps_Map_Array1_java_lang_Runnable, 0, "([Lmindustry/maps/Map;[Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$blocks$9", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$9_arc_scene_ui_layout_Table_boolean_mindustry_world_meta_Attribute_boolean_float_arc_struct_Seq_float_float, 0, "(Larc/scene/ui/layout/Table;ZLmindustry/world/meta/Attribute;ZFLarc/struct/Seq;FF)V", 4106 },
	{ "lambda$blocks$13", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$13_mindustry_world_Block_mindustry_world_meta_Attribute_float_arc_struct_Seq_float_float_arc_scene_ui_layout_Table, 0, "(Lmindustry/world/Block;Lmindustry/world/meta/Attribute;FLarc/struct/Seq;FFLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$blocks$14", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$14_arc_struct_Seq_mindustry_world_Block_mindustry_world_meta_Attribute_float_float_float_arc_scene_ui_layout_Table, 0, "(Larc/struct/Seq;Lmindustry/world/Block;Lmindustry/world/meta/Attribute;FFFLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$blocks$15", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$15_mindustry_type_ItemStack_float_float_float_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/ItemStack;FFFLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$blocks$11", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$11_mindustry_world_meta_Attribute_arc_struct_Seq, 0, "(Lmindustry/world/meta/Attribute;Larc/struct/Seq;)V", 4106 },
	{ "lambda$blocks$12", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$12_mindustry_world_meta_Attribute_mindustry_world_Block_R_float, 0, "(Lmindustry/world/meta/Attribute;Lmindustry/world/Block;)F", 4106 },
	{ "lambda$blocks$10", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$10_boolean_mindustry_world_meta_Attribute_boolean_mindustry_world_Block_R_boolean, 0, "(ZLmindustry/world/meta/Attribute;ZLmindustry/world/Block;)Z", 4106 },
	{ "lambda$blocks$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$0_boolean_mindustry_world_meta_Attribute_boolean_float_boolean_arc_scene_ui_layout_Table, 0, "(ZLmindustry/world/meta/Attribute;ZFZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$blocks$1", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$1_boolean_mindustry_world_meta_Attribute_boolean_float_boolean_arc_scene_ui_layout_Table, 0, "(ZLmindustry/world/meta/Attribute;ZFZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$blocks$6", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$6_Array1_mindustry_maps_Map_Array1_java_lang_Runnable, 0, "([Lmindustry/maps/Map;[Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$blocks$2", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$2_arc_scene_ui_layout_Table_boolean_mindustry_world_meta_Attribute_boolean_float_boolean, 0, "(Larc/scene/ui/layout/Table;ZLmindustry/world/meta/Attribute;ZFZ)V", 4106 },
	{ "lambda$blocks$4", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$4_mindustry_world_meta_Attribute_arc_struct_Seq, 0, "(Lmindustry/world/meta/Attribute;Larc/struct/Seq;)V", 4106 },
	{ "lambda$blocks$5", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$5_mindustry_world_meta_Attribute_mindustry_world_Block_R_float, 0, "(Lmindustry/world/meta/Attribute;Lmindustry/world/Block;)F", 4106 },
	{ "lambda$blocks$3", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blocks$3_boolean_mindustry_world_meta_Attribute_boolean_mindustry_world_Block_R_boolean, 0, "(ZLmindustry/world/meta/Attribute;ZLmindustry/world/Block;)Z", 4106 },
	{ "lambda$blockEfficiency$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blockEfficiency$0_mindustry_world_Block_float_boolean_arc_scene_ui_layout_Table, 0, "(Lmindustry/world/Block;FZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$blockEfficiency$1", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$blockEfficiency$1_float_boolean_arc_scene_ui_layout_Table, 0, "(FZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$content$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$content$0_mindustry_ctype_UnlockableContent_arc_scene_ui_layout_Table, 0, "(Lmindustry/ctype/UnlockableContent;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$stack$1", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$stack$1_float_arc_scene_ui_layout_Table, 0, "(FLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$stack$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$stack$0_arc_graphics_g2d_TextureRegion_arc_scene_ui_layout_Table, 0, "(Larc/graphics/g2d/TextureRegion;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$withTooltip$1", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$withTooltip$1_mindustry_ctype_UnlockableContent, 0, "(Lmindustry/ctype/UnlockableContent;)V", 4106 },
	{ "lambda$withTooltip$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$withTooltip$0_mindustry_ctype_UnlockableContent_R_boolean, 0, "(Lmindustry/ctype/UnlockableContent;)Z", 4106 },
	{ "lambda$displayLiquid$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$displayLiquid$0_mindustry_type_Liquid_mindustry_world_meta_StatValues$1, 0, "(Lmindustry/type/Liquid;Lmindustry/world/meta/StatValues$1;)V", 4106 },
	{ "lambda$items$2", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$items$2_arc_func_Boolf_float_arc_scene_ui_layout_Table, 0, "(Larc/func/Boolf;FLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$items$3", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$items$3_arc_func_Boolf_mindustry_type_Item_R_boolean, 0, "(Larc/func/Boolf;Lmindustry/type/Item;)Z", 4106 },
	{ "lambda$items$1", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$items$1_Array1_mindustry_type_ItemStack_float_arc_scene_ui_layout_Table, 0, "([Lmindustry/type/ItemStack;FLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$items$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$items$0_Array1_mindustry_type_ItemStack_boolean_arc_scene_ui_layout_Table, 0, "([Lmindustry/type/ItemStack;ZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$liquids$2", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$liquids$2_Array1_mindustry_type_LiquidStack_float_boolean_arc_scene_ui_layout_Table, 0, "([Lmindustry/type/LiquidStack;FZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$liquids$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$liquids$0_arc_func_Boolf_float_boolean_arc_scene_ui_layout_Table, 0, "(Larc/func/Boolf;FZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$liquids$1", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$liquids$1_arc_func_Boolf_mindustry_type_Liquid_R_boolean, 0, "(Larc/func/Boolf;Lmindustry/type/Liquid;)Z", 4106 },
	{ "lambda$liquid$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$liquid$0_mindustry_type_Liquid_float_boolean_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/Liquid;FZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$percentModifier$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$percentModifier$0_mindustry_world_meta_StatUnit_float_boolean_arc_scene_ui_layout_Table, 0, "(Lmindustry/world/meta/StatUnit;FZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$multiplierModifier$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$multiplierModifier$0_mindustry_world_meta_StatUnit_float_boolean_arc_scene_ui_layout_Table, 0, "(Lmindustry/world/meta/StatUnit;FZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$number$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$number$0_mindustry_world_meta_StatUnit_float_boolean_arc_scene_ui_layout_Table, 0, "(Lmindustry/world/meta/StatUnit;FZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$squared$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$squared$0_float_mindustry_world_meta_StatUnit_arc_scene_ui_layout_Table, 0, "(FLmindustry/world/meta/StatUnit;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$bool$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$bool$0_boolean_arc_scene_ui_layout_Table, 0, "(ZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$string$0", (intptr_t) SM_mindustry_world_meta_StatValues_lambda$string$0_java_lang_String_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
};

Class class_mindustry_world_meta_StatValues{
		.nativeName = (intptr_t) "mindustry/world/meta/StatValues",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_meta_StatValues),
		.classVtable = (intptr_t) vtable_mindustry_world_meta_StatValues,
		.staticInitializer = (intptr_t) clinit_mindustry_world_meta_StatValues,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_meta_StatValues,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 168,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_meta_StatValues = registerClass(&class_mindustry_world_meta_StatValues);

}
